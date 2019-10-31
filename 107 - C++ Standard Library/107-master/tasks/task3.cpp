#include <iostream>
#include <string>
#include <fstream>
#include <map>
int main()
{
    std::ifstream input;
    input.open("MOCK_DATA.csv");
    if (!input.is_open())
    {
        std::cerr << "Input CSV file not found!\n";
        exit(1);
    }
    std::map<std::string, int> data;
    std::string temp, name;
    int score;
    std::size_t pos;
    while (getline(input, temp))
    {
        pos = temp.find(',');
        if (pos != std::string::npos)
        {
            name = temp.substr(0, pos);
            score = std::stoi(temp.substr(pos + 1));
            //std::cout << "Name: " << name << " Score = " << score << std::endl;
        }
        data[name] = score;
    }
    std::cout << "File successfully loaded.\n";
    std::cout << "Type in 'quit' to end the process.\n";
    while (1)
    {
        std::cout << "Search Score by Name: ";
        std::cin >> temp;
        if (temp=="quit") break;
        std::cout << temp <<" : "<< data[temp] << std::endl;
    }
}