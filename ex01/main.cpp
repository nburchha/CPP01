/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:11:38 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/09 10:22:52 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 0;
	Zombie* zom_arr = zombieHorde(N, "zom");

	if (!zom_arr)
		return std::cerr << "Failed to create zombie Horde!" << std::endl, 1;
	for (int i = 0; i < N; i++)
		zom_arr[i].announce();
	delete[] zom_arr;
	return 0;
}