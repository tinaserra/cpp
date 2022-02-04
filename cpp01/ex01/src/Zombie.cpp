/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tinaserra <tinaserra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:15:44 by vserra            #+#    #+#             */
/*   Updated: 2022/01/31 15:32:55 by tinaserra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* -------------------------------------------------------------------------- */
/* CONSTRUCTORS                                                               */
/* -------------------------------------------------------------------------- */

Zombie::Zombie()
{
	giveName("No name");
	std::cout << "\033[1;32m" << _getName()
		<< "\033[0m" << ": is being constructed !" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* DESTRUCTORS                                                                */
/* -------------------------------------------------------------------------- */

Zombie::~Zombie()
{
	std::cout << this->_name << ": is being destructed !" << std::endl;
}

/* -------------------------------------------------------------------------- */
/* ACCESSORS                                                                  */
/* -------------------------------------------------------------------------- */

std::string	Zombie::_getName() const
{
	return (_name);
}

void Zombie::giveName(std::string name)
{
	Zombie::_name = name;
}

/* -------------------------------------------------------------------------- */
/* MEMBER FUNCTIONS                                                           */
/* -------------------------------------------------------------------------- */

void	Zombie::announce(void)
{
	std::cout << "\033[1;32m" << this->_name
		<< "\033[0m" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}