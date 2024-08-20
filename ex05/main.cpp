/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:51:11 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/15 01:15:45 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl HarlTheAlmighty = Harl();
	HarlTheAlmighty.complain("debug");
	HarlTheAlmighty.complain("info");
	HarlTheAlmighty.complain("warning");
	HarlTheAlmighty.complain("error");
	HarlTheAlmighty.complain("dilly dally");
}