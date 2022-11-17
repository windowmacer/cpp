/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:36:27 by kirill            #+#    #+#             */
/*   Updated: 2022/11/12 23:21:05 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"

int	PhoneBook:: checker()
{
	int i = 0;
	
	while(cont[i].check())
		i++;
	return (i);
}

void PhoneBook:: ft_add()
{
	if (index >= ALL)
		index = 0;
	cont[index].Clean();
	cont[index].Add();
	list = 1;
}

void PhoneBook:: ft_search()
{
	std:: string	str;
	int				len;
	int				g = 0;
	
	len = checker();
	str = "";
	std:: cout << std:: setw(10) << "index" << '|' << std:: setw(10);;
	std:: cout << std:: setw(10) << "firstname" << '|' << std:: setw(10);;
	std:: cout << std:: setw(10) << "lastname" << '|' << std:: setw(10);;
	std:: cout << std:: setw(10) << "nickname" << '|' << std:: endl;
	if (list)
	{
		for (int i = 0; i < len; i++)
			cont[i].printFormat(i);
		while(!is_numb(str))
		{
			std:: cout << "Enter index: ";
			std:: cin >> str;
			if (is_numb(str))
				g = std:: stoi(str);
			if (g <= len && g > 0)
				cont[g - 1].getInfo();
			else
				str = "";
		}
	}
}