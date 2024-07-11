/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburchha <nburchha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:28:50 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/11 13:08:28 by nburchha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void) const;
	private:
		std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif