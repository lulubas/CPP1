/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:52:23 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/03 23:36:39 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void) {
	Zombie*	zombies;
	int i = 5;
	int j;
	
	std::cout << "==============" << std::endl;
    std::cout << "GENERATING ZOMBIES" << std::endl;
    std::cout << "==============" << std::endl;
	zombies = zombieHorde(i, "iAmZombie");

	std::cout << "==============" << std::endl;
    std::cout << "ANNOUNCING ZOMBIES" << std::endl;
    std::cout << "==============" << std::endl;
	for (j=0; j < i; j++) {
		zombies[j].announce();
	}
	
	std::cout << "==============" << std::endl;
    std::cout << "DESTROYING ZOMBIES" << std::endl;
    std::cout << "==============" << std::endl;
	delete[] zombies;
	return 0;
}