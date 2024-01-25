#include <iostream>
#include <string>
#include <stack>

bool isValid(std::string input)
{
    if (input.size() % 2 != 0) {return false;}
    std::unordered_map<std::string, std::string> hashMap;
    hashMap["("] = ")";
    hashMap["["] = "]";
    hashMap["{"] = "}";

    std::stack<std::string> new_stack;

    for (int i = 0; i < input.size(); i++)
    {
        std::string target = input.substr(i,1);
        if(hashMap.count(target)) // is an opener
        {
            new_stack.push(target);
        }else // is a closing bracket
        {
            if (new_stack.size() == 0) {return false;}
            if (hashMap[new_stack.top()] == target) //closing bracket is the same type as last inserted opening bracket to stack 
            {
                new_stack.pop();
            }else
            {
                return false;
            }
        }
    }
    return new_stack.size() == 0;
    

    return false;

}

int main()
{
    std::string input_string;
    std::cin >> input_string;
    std::cout << isValid(input_string) << std::endl;
    return 0;
}
