/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:15:52 by kirill            #+#    #+#             */
/*   Updated: 2022/11/12 00:42:43 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define ALL 2

#include "contact.hpp"

class PhoneBook
{
private:
	Contact cont[ALL];
public:
	int		list;
	int		index;
	void	ft_add();
	void	ft_search();
	int		checker();
};

#endif