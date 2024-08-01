/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:08:53 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/01 14:23:21 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie*			zombie_horde;

	zombie_horde = zombieHorde(10, "Mark");
	for (int i = 0; i < 10; i++) {
		zombie_horde[i].announceZombie();
	}
	
	delete[] zombie_horde;
}