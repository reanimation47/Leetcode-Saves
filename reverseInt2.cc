#include <iostream>
#include <cmath>
#include <stack>

int reverseInt(int input)
{   
    //Only for positive integers
    int _reversed = 0;
    while (input != 0)
    {
        _reversed = _reversed * 10 + (input%10) ;
        input /= 10;
        //std::cout << "-------" << std::endl;
        //std::cout << _reversed << std::endl;
        //std::cout << input << std::endl;
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


