#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
<<<<<<< HEAD
    ifstream input("Your_file_path_input"); // Note: Đường dẫn chứa file input của bạn, lưu ý là đường dẫn phải có 2 dấu gạch // thì file mới nhận
=======
    ifstream input("Your_file_path_input"); // Note: Đường dẫn files phải được cách bởi hai dấu gạch // thì chương trình mới hoạt động
>>>>>>> 6eb53c928721ba3c6693f16b71443470627d48ab
    ofstream output("Your_file_path_output");
    string line;
    vector<string> sentences;
    cout << input.is_open() << "\n"; // Kiểm tra xem liệu file có được mở hay không?
    while (getline(input, line))
    {
        size_t pos = 0;
        while ((pos = line.find_first_of(".!?", pos)) != string::npos)
        {
            sentences.push_back(line.substr(0, pos + 1));
            line = line.substr(pos + 1);
            pos = 0;
        }
    }
    output << "Số lượng câu" << endl;
    output << sentences.size() << endl;
    unordered_map<string, int> word_count;
    for (const auto &sentence : sentences)
    {
        vector<string> words;
        size_t pos = 0;
        string temp = sentence;
        while ((pos = temp.find_first_of(' ', pos)) != string::npos)
        {
            words.push_back(temp.substr(0, pos));
            temp = temp.substr(pos + 1);
            pos = 0;
        }
        words.push_back(temp);

        for (const auto &word : words)
        {
            word_count[word]++;
        }
        sort(words.begin(), words.end());
        output << "Câu sau khi được sắp xếp";
        output << endl;
        for (const auto &word : words)
        {
            output << word << ' ';
        }
        output << endl;
        output << "Số từ trong câu" << endl;
        output << words.size() << endl;
    }
    output << "Các từ xuất hiện nhiều nhất";
    output << endl;
    int max_count = 0;
    for (const auto &[word, count] : word_count)
    {
        max_count = max(max_count, count);
    }
    for (const auto &[word, count] : word_count)
    {
        if (count == max_count)
        {
            string wordCopy = word;
            if (wordCopy.size() > 0)
            {
                wordCopy.erase(remove(wordCopy.begin(), wordCopy.end(), '.'), wordCopy.end());
                output << "'" << wordCopy << "'" << endl;
            }
        }
    }
    output << endl;
    input.close();
    output.close();
    return 0;
}
