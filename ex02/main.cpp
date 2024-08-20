/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:35:22 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/01 15:34:39 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Address of bryan string : " << &brain << std::endl;
	std::cout << "Address of string pointer : " << stringPTR << std::endl;
	std::cout << "Address of string reference : " << &stringREF << std::endl;
	std::cout << "\nContent of bryan string : " << brain << std::endl;
	std::cout << "Content pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Content pointed by stringREF : " << stringREF << std::endl;
}