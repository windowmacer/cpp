/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:27:02 by kirill            #+#    #+#             */
/*   Updated: 2022/11/12 00:35:52 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool	is_numb(const std:: string &str)
{
	if (str.empty())
		return (false);
	for (long unsigned int i = 0; i < str.size(); i++)
	{
		if (!std:: isdigit(str[i]))
			return (false);
	}
	return (true);
}

int main()
{
	std:: string	command;
	PhoneBook		phbook;

	std:: cout << "Welcome to the 80's and their unbelievable technology!" << std:: endl;
	std:: cout << "It is a crappy awesome your Phonebook software!" << std:: endl;
	phbook.list = 0;
	phbook.index = 0;
	do
	{
		std:: cout << "Enter command ADD, SEARCH, EXIT: ";
		std:: cin >> command;
		if (command == "ADD")
		{
			phbook.ft_add();
			phbook.index++;
		}
		else if (command == "SEARCH")
			phbook.ft_search();
		else if (command == "EXIT")
			continue ;
		else
			std:: cout << "Using a wrong input!" << std:: endl;
	} while (command != "EXIT");
	
	return (0);
}