/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 23:45:46 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/13 23:56:33 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::~Zombie()
{
    std::cout << this->name << " is dead" << std::endl;
    this->name = "";
}
Zombie::Zombie()
{
    std::cout << "default constructor called" << std::endl;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "constructor called" << std::endl;
}
void    Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}