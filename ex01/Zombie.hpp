/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:28:50 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/09 10:08:07 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie();
		void announce(void) const;
		void setName(std::string name);
	private:
		std::string _name;
		// Zombie(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif