/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:56:18 by kirill            #+#    #+#             */
/*   Updated: 2022/11/17 12:35:08 by kirill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	void	announce(void);
	
	Zombie(std::string _name);
	~Zombie();
};

void		randomChump(std::string name);
Zombie*		newZombie(std::string name);
