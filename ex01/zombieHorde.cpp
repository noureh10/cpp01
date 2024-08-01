/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:04:50 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/01 14:22:59 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie* zombie_horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombie_horde[i].setName(name);
	}
	return (zombie_horde);
}
