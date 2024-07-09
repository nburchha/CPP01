/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:09:04 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/09 12:32:19 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "Debug" << std::endl;
}

void Harl::info()
{
	std::cout << "Info" << std::endl;
}

void Harl::warning()
{
	std::cout << "Warning" << std::endl;
}

void Harl::error()
{
	std::cout << "Error" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*functions[0])();
			(this->*functions[1])();
			(this->*functions[2])();
			(this->*functions[3])();
			break;
		case 1:
			(this->*functions[1])();
			(this->*functions[2])();
			(this->*functions[3])();
			break;
		case 2:
			(this->*functions[2])();
			(this->*functions[3])();
			break;
		case 3:
			(this->*functions[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
