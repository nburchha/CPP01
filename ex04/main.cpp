/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:32:54 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/09 12:05:59 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>

void replace_str(std::string& line, std::string s1, std::string s2)
{
	size_t pos = line.find(s1);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos = line.find(s1, pos + s2.length());
	}
}

void copy_file_replace(std::ifstream& r, std::ofstream& w, std::string s1, std::string s2)
{
	std::string line;

	while (getline(r, line))
	{
		replace_str(line, s1, s2);
		w << line << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream r(filename);

	if (!r.is_open())
		return 1;
	std::string new_filename = filename.append(".replace");
	std::ofstream w(new_filename);
	if (!w.is_open())
		return r.close(), 1;
	copy_file_replace(r, w, s1, s2);
	r.close();
	w.close();
	return 0;
}
