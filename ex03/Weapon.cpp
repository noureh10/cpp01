/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:23:30 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/01 15:34:47 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	this->_type = "default weapon";
}

Weapon::Weapon(std::string name) {
	if (!name.empty())
		this->_type = name;
	else
		this->_type = "default weapon";
}

Weapon::~Weapon(void) {}

const std::string& Weapon::getType(void) const {
	return (this->_type);
}

void Weapon::setType(std::string name) {
	if (!name.empty())
		this->_type = name;
}
