/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:52:23 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/15 16:41:30 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main( void ) {
	Zombie*	zombies;
	
	std::cout << "Generating a 5-zombies horde:" << std::endl;
	zombies = zombieHorde(5, "iAmZombie");
	delete[] zombies;
	return( 0 );
}