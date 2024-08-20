/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:36:58 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/01 17:19:11 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string	_name;
        Weapon*		_weapon;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void setWeapon(Weapon& weapon);
        void attack(void);
};

#endif