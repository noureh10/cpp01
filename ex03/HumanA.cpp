/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:43:41 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/01 17:19:06 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void) { return ; }

void HumanA::attack(void) {
	std::string weapon_type = this->_weapon.getType();
	if (weapon_type.empty())
		std::cout << this->_name << " doesn't have a weapon" << std::endl;
	else
		std::cout << this->_name << " attack with their " << weapon_type << std::endl;
}