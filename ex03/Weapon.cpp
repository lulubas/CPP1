/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:33:04 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/16 13:10:21 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::Weapon( std::string type ) : _type(type) {}
Weapon::~Weapon() {}

std::string Weapon::getType( void ) {
	return( _type );
}

void Weapon::setType( std::string newType ) {
	_type = newType;
}

