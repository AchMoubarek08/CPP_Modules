/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 23:44:11 by amoubare          #+#    #+#             */
/*   Updated: 2023/01/13 23:55:49 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void   Zombie::set_name(std::string name)
{
    this->name = name;
}
Zombie*    newZombie(std::string name)
{
    Zombie *z;
    z = new Zombie;
    z->set_name(name);
    return (z);
}