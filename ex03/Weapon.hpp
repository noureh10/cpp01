/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:15:21 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/01 16:27:26 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		void setType(std::string type);
		const std::string& getType(void) const;
};

#endif