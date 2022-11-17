/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:42:19 by kirill            #+#    #+#             */
/*   Updated: 2022/10/30 14:42:20 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int i, j;

	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; i < ac; i++) 
		{
			std::string str = av[i];
			for (j = 0; av[i][j]; j++)
				std:: cout << (char)toupper(str[j]);
		}
		std:: cout << std:: endl;
	}
	return (0);
}
