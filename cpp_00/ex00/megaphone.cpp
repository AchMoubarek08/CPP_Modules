#include <iostream>

int main(int ac, char **av)
{
    int j = 0;
    int i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    while(i < ac)
    {
        j = 0;
        while(av[i][j])
        {
            std::cout << (char)toupper(av[i][j]);
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    return (0);
}