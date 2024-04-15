/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:24:26 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/15 16:41:13 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie *zombies;
	int i;

	zombies = new Zombie[N];
	for (i = 0; i < N; i++) {
		zombies[i].setName(name);
		zombies[i].announce();
	}
	return( zombies );
}