#include <iostream>

//Check if the stack grows up or down 
bool UpOrDown()
{
    volatile int x, y = 0;
    if (&x > &y)
    {
        return true;
    }
    return false;

}

int main()
{
    std::cout << UpOrDown() << std::endl;
    return 0;
}
