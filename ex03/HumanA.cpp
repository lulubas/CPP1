/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:41:40 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/15 18:11:27 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() {}

HumanA::HumanA(std::string name, Weapon weapon ) : _name(name), _weapon(weapon) {}

void	HumanA::attack( void ) {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}ßßß
