/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:33:04 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/03 23:36:39 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "Weapon default constructor called" << std::endl;

}
Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Weapon parameterized constructor called" << std::endl;
}
Weapon::~Weapon() {
	std::cout << "Weapon destructor called" << std::endl;
}

std::string Weapon::getType(void) {
	return(_type);
}

void Weapon::setType(std::string newType) {
	_type = newType;
}

