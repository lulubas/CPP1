/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:52:23 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/15 12:09:29 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main( void ) {
	int i;
	
	std::cout << "Generating zombies on the stack:" << std::endl;
	for (i = 0; i < 3; i++) {
		std::string zombieName = "iAmZombie";
		zombieName.append(std::to_string(i));
		randomChump( zombieName );
	}

	std::cout << "Generating zombies on the heap:" << std::endl;
	for (i = 0; i < 3; i++) {
		std::string zombieName = "iAmZombie";
		zombieName.append(std::to_string(i));
		Zombie *zombie = newZombie( zombieName );
		zombie->announce();
		delete zombie;
	}
}