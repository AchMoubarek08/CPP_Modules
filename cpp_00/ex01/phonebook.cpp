#include "phonebook.hpp"
#include <stdio.h>
int Contact::display()
{
    if(fn.empty() && ln.empty() && nn.empty() && pn.empty() && ds.empty())
    {
        std::cout << "empty fields." << std::endl;
        return 1;
    }
	std::cout << "First name :"<< fn<<std::endl;
	std::cout << "Last name :"<< ln<<std::endl;
	std::cout << "Nickname :"<< nn<<std::endl;
	std::cout << "Phone number :"<< pn<<std::endl;
	std::cout << "Darkest secret :"<< ds<<std::endl;
    return 0;
}
int Contact::add()
{
    std::string fn;
    std::string ln;
    std::string nn;
    std::string pn;
    std::string ds;
    std::cout << "Please enter first name: ";
    getline(std::cin, fn);
    if(!std::cin)
        exit(0);
    std::cout << "Please enter last name: ";
    getline(std::cin, ln);
    if(!std::cin)
        exit(0);
    std::cout << "Please enter nickname: ";
    getline(std::cin, nn);
    if(!std::cin)
        exit(0);
    std::cout << "Please enter phone number: ";
    getline(std::cin, pn);
    if(!std::cin)
        exit(0);
    std::cout << "Please enter darkest secret: ";
    getline(std::cin, ds);
    if(!std::cin)
        exit(0);
    if(fn.empty() && ln.empty() && nn.empty() && pn.empty() && ds.empty())
    {
        std::cout << "empty fields." << std::endl;
        return 1;
    }
    this->fn = fn;
    this->ln = ln;
    this->nn = nn;
    this->pn = pn;
    this->ds = ds;
    return 0;
}

int Phonebook::add_contact(int i)
{
    contacts[i].add();
    return 0;
}
int Contact::show(int index)
{
    std::string fn1 = fn;
    std::string ln1 = ln;
    std::string nn1 = nn;
    std::string pn1 = pn;
    if(fn.length() > 10)
        fn1.resize(9);
    if(ln.length() > 10)
        ln1.resize(9);
    if(nn.length() > 10)
        nn1.resize(9);
    std::cout << std::setw(10) << index;
    std::cout << std::setw(10) << fn1;
    std::cout << std::setw(10) << ln1;
    std::cout << std::setw(10) << nn1 << std::endl;
    return 0;
}
int Phonebook::search_contact(int index)
{
    int i = 0;
    std::string input;
    std::cout << std::setw(10) << "index";
    std::cout << std::setw(10) << "|first name";
    std::cout << std::setw(10) << "|last name";
    std::cout << std::setw(10) << "|nickname" << std::endl;
    while(i < index)
    {
        contacts[i].show(i);
        i++;
    }
    std::cout << "Please enter index: ";
    std::getline(std::cin, input);
    if(!std::cin)
        exit(0);
    if(input[0] < '0' || input[0] > '7' || input.length() > 1)
    {
        std::cout << "Invalid index" << std::endl;
        return 1;
    }
    contacts[input[0] - '0'].display();
    return 0;
}
int main()
{
    Phonebook pb;
    std::string input;
    int i = 0;
    while(1)
    {
        std::cout << "please enter ADD | SEARCH | EXIT "<< std::endl;
        getline(std::cin, input);
        if (input == "EXIT" || !std::cin)
            exit(0);
        else if(input == "ADD")
        {
            if(i == 8)
            {
                pb.add_contact(0);
                continue;
            }
            if(pb.add_contact(i) == 1)
                i++;
        }
        else if(input == "SEARCH")
        {
            pb.search_contact(i);
        }
        else
            std::cout << "Invalid command" << std::endl;
    }
}