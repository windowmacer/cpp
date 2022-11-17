/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:55:47 by kirill            #+#    #+#             */
/*   Updated: 2022/11/17 14:36:39 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::cout << "Creating the first Zombie, check function announce()" << std::endl;
	{
		Zombie	zombie00("zombie00");
		zombie00.announce();
	}
	std::cout << "Creating the second Zombie, using function newZombie()"<< std::endl;
	{
		Zombie	*zombie01 = newZombie("zombie01");
		zombie01->announce();
		delete zombie01;
	}
	{
		std::cout << "Creating the third Zombie, using function randomChump()"<< std::endl;
		randomChump("zombie02");
	}
	return (0);
}

