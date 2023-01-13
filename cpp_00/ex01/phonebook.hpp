#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <iomanip>
class Contact
{
    private:
        std::string fn;
        std::string ln;
        std::string nn;
        std::string pn;
        std::string ds;
    public:
        int add();
        int display();
        int show(int index);
};
class Phonebook
{
    private:
        Contact contacts[8];
    public:
        int add_contact(int i);
        int search_contact(int index);
};


#endif