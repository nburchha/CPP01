/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburchha <nburchha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:28:50 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/11 13:13:23 by nburchha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void announce() const;
		void setName(std::string name);
	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif