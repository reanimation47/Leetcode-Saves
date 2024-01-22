#include <iostream>
int main () 
{
    int currentVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currentVal)
    {
        int count = 1;
        while(std::cin >> val)
        {
            if (val == currentVal)
            {
                ++count;
            }else 
            {
                std::cout << currentVal << " occurs " << count << " times" << std::endl;
                currentVal = val;
                count = 1;
            }
        }
        std::cout << "gg" << std::endl;
        std::cout << currentVal << " occurs " << count << " times" << std::endl;
    }
    
    return 0;
}
