#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::cout << "Input Integers, type in 'end' to end the input process:\n";
    std::string temp;
    std::vector<int> data;
    while (1)
    {
        std::cin >> temp;
        if (temp == "end")
        {
            break;
        }
        data.push_back(std::stoi(temp));
    }
    std::cout <<"Removing Odd Numbers...\n\n";
    std::vector<int>::iterator i = data.begin();
    while (1)
    {
        if ((*i) % 2 == 0)
            i++;
        else
            data.erase(i);
        if (i == data.end())
            break;
    }

    for (std::vector<int>::iterator i = data.begin(); i < data.end(); i++)
    {
        std::cout << *i << std::endl;
    }
}