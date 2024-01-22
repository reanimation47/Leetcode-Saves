#include <iostream>
#include <string>


int romanToInteger(std::string input)
{
    //Init mappings
    std::unordered_map<std::string,int> hashMap;
    hashMap["I"] = 1;
    hashMap["V"] = 5;
    hashMap["X"] = 10;
    hashMap["L"] = 50;
    hashMap["C"] = 100;
    hashMap["D"] = 500;
    hashMap["M"] = 1000;

    std::unordered_map<std::string,int> hashMap2;
    hashMap2["IV"] = 4;
    hashMap2["IX"] = 9;
    hashMap2["XL"] = 40;
    hashMap2["XC"] = 90;
    hashMap2["CD"] = 400;
    hashMap2["CM"] = 900;

    int output = 0;
    int i = 0;

    while (i < input.size()) 
    {
        if(hashMap2.count(input.substr(i,2)))
        {
            output += hashMap2[input.substr(i,2)];
            //std::cout << input.substr(i,2) << ": " << hashMap2[input.substr(i,2)] << std::endl;
            i += 2;
        }else if(hashMap.count(input.substr(i,1)))
        {
            output += hashMap[input.substr(i,1)];
            //std::cout << input.substr(i,1) << ": " << hashMap[input.substr(i,1)] << std::endl;
            i += 1;
        }
    }
    return output;

    return 0;
}

int main () 
{
    std::string input_string;
    std::cin >> input_string;
    std::cout << romanToInteger(input_string) << std::endl;
    return 0;
}   
