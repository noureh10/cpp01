/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:51:11 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/15 12:30:26 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void	errorHandler(std::string message) {
	std::cerr << message << std::endl;
}

void	simpleOutput(std::string message) {
	std::cout << message << std::endl;
}

int getIndexOfLevel(std::string level) {
	std::string level_list[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++) {
		if (level == level_list[i])
			return (i);
	}
	return (42);
}




int main(int ac, char **av) {
	if (ac == 2) {
		Harl harl = Harl();
		int log_level = getIndexOfLevel(av[1]);
		for (int i = 0; i <= log_level; i++) {
			if (log_level >= 4) {
				simpleOutput("[ Probably complaining about insignificant problems ]");
				break;
			}
			switch (i) {
				case 0:
					simpleOutput("[ DEBUG ]");
					harl.complain("debug");
					break;
				case 1:
					simpleOutput("[ INFO ]");
					harl.complain("info");
					break;
				case 2:
					simpleOutput("[ WARNING ]");
					harl.complain("warning");
					break;
				case 3:
					simpleOutput("[ ERROR ]");
					harl.complain("error");
					break;
			}
		}	
	} else {
		errorHandler("[ Even Harl can compute how stupid you are ]");
		return (1);
	}
	
}