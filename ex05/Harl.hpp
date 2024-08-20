/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:52:35 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/15 01:14:41 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);
};


#endif