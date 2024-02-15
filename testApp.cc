#include <iostream>
#include <vector>

int main()
{
    //Just testing stuff
    std::vector<std::string> strings;
    strings.push_back("zaD");
    strings.push_back("zaaad");
    strings.push_back("zaaaax");
    strings.push_back("zam");
    strings.push_back("vczq");
    strings.push_back("oopp");
    strings.push_back("sadasd");

    std::sort(strings.begin(), strings.end());

    for (unsigned i = 0; i < strings.size(); i ++)
    {
         std::cout << strings[i] << std::endl;
    }
    return 0;
}
