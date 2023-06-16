
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Person
{
protected:
    int type;
    int id;
    string name;

public:
    vector<Person *> subordinates;
    double balance;
    vector<pair<double, double>> interestRate;
    string getName()
    {
        return this->name;
    }
    Person()
    {
        this->balance = 0;
    }
    virtual ~Person()
    {
    }
    int getType()
    {
        return type;
    }

    int getId()
    {
        return id;
    }
    double getBalance()
    {
        return balance;
    }
    virtual void nhap(int id, int type)
    {
        this->id = id;
        this->type = type;
        cin >> this->name;
    }
    vector<Person *> getSubordinates()
    {
        return subordinates;
    }

    void addSubordinate(Person *p)
    {
        subordinates.push_back(p);
    }
    virtual int getAgentId()
    {
        return 0;
    };
    virtual void payInterest(Person *person) = 0;
    virtual void payCommission(Person *person) = 0;
    virtual void printInfo(){

    };
};
class Director : public Person
{
public:
    void payInterest(Person *person)
    {
        for (int i = 0; i < person->interestRate.size() - 1; i++)
        {

            person->balance += person->interestRate[i].first * person->interestRate[i].second;
            this->balance -= person->interestRate[i].first * person->interestRate[i].second;
        }
    };
    void payCommission(Person *person){};
    void printInfo()
    {
        Person::printInfo();
        cout << id << " " << balance << "\n";
    }
};

class Agent : public Person
{
private:
    int level;

public:
    Agent(){};
    Agent(int id)
    {
        this->id = id;
    }
    int getLevel()
    {
        return level;
    }
    void payInterest(Person *person){};
    void payCommission(Person *director)
    {
        double commissionRate = 0.05 + level * 0.03;
        double Total = 0;
        for (Person *p : subordinates)
        {
            Total += p->interestRate[p->interestRate.size() - 1].second;
        }
        balance += Total * commissionRate;
        director->balance -= Total * commissionRate;
    }

    void promote()
    {
        double contribution = balance;
        for (Person *p : subordinates)
        {
            contribution += p->getBalance();
        }
        if (contribution > 500 * level)
        {
            level++;
        };
    }
    void nhap(int id, int type)
    {
        Person::nhap(id, type);
        cin >> this->level;
    }

    void printInfo()
    {
        Person::printInfo();
        cout << id << " " << balance << "\n";
    }
};

class Investor : public Person
{
private:
    int agentId;

public:
    int getAgentId()
    {
        return agentId;
    }
    Agent *upgrade()
    {
        if (balance >= 1000 && subordinates.size() >= 2)
        {
            Agent *newAgent = new Agent(id);
            newAgent->balance = balance + 100;
            newAgent->subordinates = subordinates;

            return newAgent;
        }
        else
        {
            return nullptr;
        }
    }

    void nhap(int id, int type)
    {
        Person::nhap(id, type);
        cin >> this->agentId;
    };
    void payInterest(Person *person){};
    void payCommission(Person *person){};
    void printInfo()
    {
        Person::printInfo();
        cout << id << " " << balance << endl;
    }
};
class System
{
public:
    Director *director;
    int n, m;
    ~System() {}
    Director *getDirector()
    {
        return director;
    }
    void addPerson()
    {
        int TypeId, id;
        for (int i = 0; i < this->n; i++)
        {
            cin >> id >> TypeId;
            if (TypeId == 1)
            {
                director = new Director();
                director->nhap(id, TypeId);
            };
            if (TypeId == 2)
            {
                Agent *newAgent = new Agent();
                newAgent->nhap(id, TypeId);
                director->addSubordinate(newAgent);
                continue;
            }
            else if (TypeId == 3)
            {

                Investor *newInvestor = new Investor();
                newInvestor->nhap(id, TypeId);
                Person *parent = findPerson(newInvestor->getAgentId());
                parent->addSubordinate(newInvestor);
                continue;
            }
        }
    }
    double interestRate(double amount)
    {
        if (amount < 1)
            return 0;
        if (amount >= 1 && amount <= 100)
        {
            return 0.1;
        }
        else if (amount >= 101 && amount <= 200)
        {
            return 0.12;
        }
        else if (amount >= 201)
        {
            return 0.15;
        }
    }

    Person *findPerson(int id)
    {
        if (director->getId() == id)
        {
            return director;
        }
        vector<Person *> stack;
        stack.push_back(director);
        while (!stack.empty())
        {
            Person *current = stack.back();
            stack.pop_back();
            for (Person *p : current->getSubordinates())
            {
                if (p->getId() == id)
                {
                    return p;
                }
                stack.push_back(p);
            }
        }
        return nullptr;
    }
    void depositMoney(int id, double amount)
    {
        Person *p = findPerson(id);
        if (p == nullptr)
        {
            return;
        }
        p->interestRate.push_back(make_pair(interestRate(amount), amount));
        director->balance += amount;
    }
    void adddepostionMoney()
    {
        int j = 0;
        while (j < m)
        {
            for (int i = 0; i < (this->n - 1); i++)
            {
                int idParent;
                double amount;
                cin >> idParent >> amount;
                this->depositMoney(idParent, amount);
            }

            for (Person *sub : director->subordinates)
            {
                sub->payCommission(this->director);
            };
            if (j > 0)
            {
                this->payMonthly();
                this->promoteAndUpgrade();
            }
            j++;
        }
    }
    void payMonthly()
    {
        vector<Person *> queue;
        for (Person *p : director->getSubordinates())
        {
            queue.push_back(p);
        }
        while (!queue.empty())
        {
            Person *current = queue.front();
            queue.erase(queue.begin());
            director->payInterest(current);
            for (Person *p : current->getSubordinates())
            {
                queue.push_back(p);
            }
        }
    }
    void promoteAndUpgrade()
    {
        vector<Person *> queue;
        queue.push_back(director);
        while (!queue.empty())
        {
            Person *current = queue.front();
            queue.erase(queue.begin());
            if (current->getType() == 2)
            {
                Agent *agent = dynamic_cast<Agent *>(current);
                agent->promote();
            }
            else if (current->getType() == 3)
            {

                Investor *investor = dynamic_cast<Investor *>(current);
                Agent *newAgent = investor->upgrade();
                if (newAgent != nullptr)
                {
                    Person *parent = findPerson(investor->getAgentId());
                    vector<Person *> subordinates = parent->getSubordinates();
                    for (long long unsigned int i = 0; i < subordinates.size(); i++)
                    {
                        if (subordinates[i] == investor)
                        {
                            subordinates[i] = newAgent;
                            break;
                        }
                    }
                    delete investor;
                }
            }
            for (Person *p : current->getSubordinates())
            {
                queue.push_back(p);
            }
        }
    }
    void printAll()
    {
        vector<Person *> queue;
        queue.push_back(director);
        while (!queue.empty())
        {
            Person *current = queue.front();
            queue.erase(queue.begin());
            current->printInfo();
            for (Person *p : current->getSubordinates())
            {
                queue.push_back(p);
            }
        }
    };
    void doALL()
    {
        cin >> this->n >> this->m;
        this->addPerson();
        this->adddepostionMoney();
    }
};
void test()
{
    System s;
    s.doALL();
    s.printAll();
}
int main()
{
    test();
    return 0;
}
