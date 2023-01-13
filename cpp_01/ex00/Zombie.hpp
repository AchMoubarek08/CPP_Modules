#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <iomanip>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name, std::string type);
        ~Zombie();
        void announce();
        void set_name(std::string name);
        void set_type(std::string type);
};

#endif