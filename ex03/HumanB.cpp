/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:56:41 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/15 18:06:26 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB( std::string name ) : _name(name) {}

void	HumanB::attack( void ) {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void HumanB::setWeapon( Weapon weapon) {
	_weapon = weapon;
}

#endif