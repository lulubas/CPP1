/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:32:42 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/24 03:25:54 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	_ftMap["DEBUG"] = &Harl::_debug;
	_ftMap["INFO"] = &Harl::_info;
	_ftMap["WARNING"] = &Harl::_warning;
	_ftMap["ERROR"] = &Harl::_error;
}
Harl::~Harl() {}

void Harl::complain( std::string level) {
	if (_ftMap.find( level ) != _ftMap.end()) {
		void (Harl::*ft)() = _ftMap[ level ];
		(this->*ft)();
	}
	else
		std::cout << "My guy complaining for unknown reasons again --' " << std::endl;
}

void Harl::_debug( void ) {
	std::cout << "Absolutely thrilled to see the triple nested loops perform their dance without stepping on each other's variables. It's like watching ballet in binary!" << std::endl;
}

void Harl::_info( void ) {
	std::cout << "Curiously perplexed that adding more recursion layers incurs extra memory. Had the stack been infinite, I’d be in recursive heaven" << std::endl;
}

void Harl::_warning( void ) {
	std::cout << "I reckon my function should compile with zero warnings. I've been coding in this language since it was just a pseudocode on a napkin." << std::endl;
}

void Harl::_error( void ) {
	std::cout << "This is catastrophic! There’s an off-by-one error that breached the matrix. Fetch the lead developer, stat!" << std::endl;
}
