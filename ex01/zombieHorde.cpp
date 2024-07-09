/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:04:08 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/09 10:20:32 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zom_arr = nullptr;
	try {
		zom_arr = new Zombie[N];
	}
	catch (std::bad_alloc& e) {
		std::cerr << "Memory allocation failed: " << e.what() << std::endl;
		return nullptr;
	}

	for (int i = 0; i < N; i++)
		zom_arr[i].setName(name);
	return zom_arr;
}