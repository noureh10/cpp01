/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:21:14 by nechaara          #+#    #+#             */
/*   Updated: 2024/07/23 13:57:56 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name;

	name = "Karl Lagarfeld";
	Zombie karl(name);
	karl.announceZombie();
	
	name = "Yves Saint Laurant";
	Zombie *yves = newZombie(name);
	yves->announceZombie();

	randomChump("Calvin Klein");
	
	delete yves;
	return (0);
}