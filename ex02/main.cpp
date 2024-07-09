/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:27:20 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/09 10:34:37 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRIAN";
	std::string* strPTR = &str;
	std::string& strREF = str;

	std::cout << "str mem_address: " << &str << std::endl;
	std::cout << "ptr mem_address: " << strPTR << std::endl;
	std::cout << "ref mem_address: " << &strREF << std::endl;
	std::cout << "str value: " << str << std::endl;
	std::cout << "ptr value: " << *strPTR << std::endl;
	std::cout << "ref value: " << strREF << std::endl;
}
