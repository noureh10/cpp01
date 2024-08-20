/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:53:41 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/02 21:27:21 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB(void) { return ; }

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack(void) {
	if (!this->_weapon)
		std::cout << this->_name << " doesn't have a weapon" << std::endl;
	else
		std::cout << this->_name << " attack with their " << (*this->_weapon).getType() << std::endl;
}
