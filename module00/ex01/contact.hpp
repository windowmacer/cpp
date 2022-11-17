/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:32:53 by kirill            #+#    #+#             */
/*   Updated: 2022/11/12 23:12:56 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
	private:
	std::string	name;
	std::string	lastName;
	std::string	nickName;
	std::string	phone;
	std::string	darkestSecret;

	public:
	void	getInfo();
	void 	Add();
	void 	Clean();
	void	printFormat(int i);
	bool	check();
	Contact();
};

bool	is_numb(const std:: string &str);

#endif