#include <iostream>
#include <vector>
#include <queue>

std::string longestCommonPrefix(std::vector<std::string>& strings) 
{        
    std::queue<std::string> letters_queue;
    for (unsigned i = 0; i < strings[0].size(); i++)
    {
        std::string c = strings[0].substr(i,1);
        bool goodMatch = true;
        for (unsigned j = 1; j < strings.size(); j++)
        {
            if( c != strings[j].substr(i,1))
            {
                goodMatch = false;
                break;
            }
        }

        if (goodMatch)
        {
            letters_queue.push(c);
            std::cout << c << std::endl;
        }else 
        {
            break;    
        }
    }
    std::string new_string;
    while (letters_queue.size() > 0)
    {
        new_string += letters_queue.front();
        letters_queue.pop();
    }
    return new_string;
}

int main()
{
    std::vector<std::string> strings_vector;
    strings_vector.push_back("OkayBr");
    strings_vector.push_back("OkayBre");
    strings_vector.push_back("OkayBro");
    std::cout << longestCommonPrefix(strings_vector) << std::endl;
}
