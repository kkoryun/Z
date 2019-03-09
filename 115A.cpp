#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
class Printer
{
public:
    static std::string printerError(const std::string &s) {
        int b_c = 0;
        for (auto it = s.begin(); it != s.end(); ++it)
        {
            if (*it < 'a' || *it > 'm')
                b_c++;
        }
        return std::to_string(b_c) + "/" + std::to_string(s.length());

    }
};
#include <set>
int stray(std::vector<int> numbers) {
    int f = 0;
    if (numbers[0] == numbers[1])
    {
        f = 1;
    }

    for (auto it0 = numbers.begin(), it1 = numbers.begin() + 1, it2 = numbers.begin() + 2;
        it2 != numbers.end();++it1, ++it2, ++it0)
    {
        if (*it1 != *it2)
        {
            if (f)
                return *it2;
            if (!f)
            {
                return *it1;
            }
        }
        f = 1;
    }
};
std::string to_camel_case(std::string text) {
        for (int i = 0; i < text.size(); ++i)
        {
            if (text[i] == '-' || text[i] == '_')
            {
                text.erase(i, 1);
                text[i] = toupper(text[i]);
            }
        }
        return text;
    
}
using namespace std;
using uint = int;
void func() {
    int n;
    cin >> n;
    
    int size = n + 1;
    vector<int> graph(size);
    for (size_t i = 1; i < size; ++i)
    {
        cin >> graph[i];
    }
    vector<int> distance_to_root(size,0);
    
    for (size_t i = 1; i < size; ++i)
    {
        int ref = graph[i];
        int& dist = distance_to_root[i];
        while (ref != -1)
        {
            ref = graph[ref];
            dist++;
        }
    }
    set<int> unique(distance_to_root.begin() + 1, distance_to_root.end());
    cout << unique.size();

}
    
int main() {
    //func();
    to_camel_case("tetst-");
    //system("pause");
    return 0;
}

