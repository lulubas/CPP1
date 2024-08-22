/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:24:26 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/03 19:51:09 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie *zombies;
	int i;

	std::cout << "->Generating " << N << " zombies<-" << std::endl; 
	zombies = new Zombie[N];
	for (i = 0; i < N; i++) {
		zombies[i].setName(name);
	}
	return(zombies);
}