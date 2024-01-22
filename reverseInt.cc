#include <iostream>
#include <cmath>
#include <stack>

int reverseInt(int input)
{   
    int length = (input ==0) ? 1 : (int)std::log10(input) + 1;
    std::stack<int> new_stack;
  
    //push each number to stack
    for (int i = 0; i < length; i ++)
    {
        new_stack.push(input % 10);
        input = (int)input /10;
    }
  
    //build revered int from stack
    int _reversed = 0;
    for (int i = 0; i < length; i ++)
    {
        _reversed += std::pow(10,i) * new_stack.top();
        new_stack.pop();
    }
  
    return _reversed;
}


int main() 
{

    int int_to_reverse;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> int_to_reverse;
    std::cout << reverseInt(int_to_reverse) << std::endl;
    return 0;
}


