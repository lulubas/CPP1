/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:52:23 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/04 02:39:37 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include <sstream>

std::string iToString(const int i) {
    std::ostringstream oss;
    oss << i;
    return oss.str();
}

int	main(void) {
	int i;
	
	std::cout << "==============" << std::endl;
    std::cout << "ON THE STACK" << std::endl;
    std::cout << "==============" << std::endl;
	for (i = 0; i < 3; i++) {
		std::string zombieName = "iAmZombie";
		zombieName.append(iToString(i));
		randomChump(zombieName);
		std::cout << std::endl;
	}
	
	std::cout << "==============" << std::endl;
    std::cout << "ON THE HEAP" << std::endl;
    std::cout << "==============" << std::endl;
	for (i = 0; i < 3; i++) {
		std::string zombieName = "iAmZombie";
		zombieName.append(iToString(i));
		Zombie *zombie = newZombie(zombieName);
		zombie->announce();
		zombie->announce();
		delete zombie;
		std::cout << std::endl;
	}
}