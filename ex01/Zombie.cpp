/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:15:05 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/01 14:22:08 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::string no_name;
	
	no_name = "No Name";
	this->_name = no_name;
}

Zombie::Zombie(std::string name) {
	std::string no_name;

	no_name = "No Name";
	if (name.empty())
		this->_name = no_name;
	else
		this->_name = name;
}

Zombie::~Zombie(void) {
	std::cout	<< "Going through the destructor for -> " 
				<< this->_name << std::endl;
}

void Zombie::announceZombie(void) {
	std::cout	<< this->_name
				<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	if (!name.empty())
		this->_name = name;
}
