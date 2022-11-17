/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:37:52 by kirill            #+#    #+#             */
/*   Updated: 2022/11/12 23:32:21 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std:: string ft_set_str()
{
	std:: string	str;
	
	while (str.empty())
	{
		std:: cout << "/>: ";
		std:: cin >> str;
	}
	return (str);
	
}

void Contact:: Clean()
{
	name = "";
	lastName = "";
	nickName = "";
	phone = "";
	darkestSecret = "";
}

void Contact:: Add()
{
	std:: cout << "Name: " << std:: endl;
	name = ft_set_str();
	std:: cout << "Last Name: " << std:: endl;
	lastName = ft_set_str();
	std:: cout << "Nickname: " << std:: endl;
	nickName = ft_set_str();
	std:: cout << "Phone: " << std:: endl;
	while(!is_numb(phone))
		phone = ft_set_str();
	std:: cout << "Your darkest secret: " << std:: endl;
	darkestSecret = ft_set_str();
}

void Contact:: getInfo()
{
	std:: cout << std:: setw(10) << "Name: " << name << std:: endl;
	std:: cout << std:: setw(10) << "Lastname: " << lastName << std:: endl;
	std:: cout << std:: setw(10) << "Nickname: " << nickName << std:: endl;
	std:: cout << std:: setw(10) << "Phone: " << phone << std:: endl;
	std:: cout << std:: setw(10) << "Secret: " << darkestSecret << std:: endl;
}

void Contact:: printFormat(int i)
{
	std:: string	str;
	
	std:: cout << std:: setw(10) << i + 1 << '|';
	std:: cout << std:: setw(10);
	if (name.size() > 9)
		std:: cout << (str = std:: string (name, 0, 9) += '.');
	else
		std:: cout << name;
	std:: cout << '|';
	std:: cout << std:: setw(10);
	if (lastName.size() > 9)
		std:: cout << (str = std:: string (lastName, 0, 9) += '.');
	else
		std:: cout << lastName;
	std:: cout << '|';
	std:: cout << std:: setw(10);
	if (nickName.size() > 9)
		std:: cout << (str = std:: string (nickName, 0, 9) += '.');
	else
		std:: cout << nickName;
	std:: cout << '|' << std:: endl;
}

bool Contact:: check()
{
	if (darkestSecret.empty() && phone.empty())
		return (false);
	return (true);
}

Contact:: Contact()
{
	name = "";
	lastName = "";
	nickName = "";
	phone = "";
	darkestSecret = "";
}
