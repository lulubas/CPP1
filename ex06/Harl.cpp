/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:32:42 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/22 17:34:50 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const Harl::Complaint Harl::_complaints[4] = {
    {"DEBUG", &Harl::_debug},
    {"INFO", &Harl::_info},
    {"WARNING", &Harl::_warning},
    {"ERROR", &Harl::_error}
};

Harl::Harl() {
	std::cout << "Constructor called" << std::endl;
}

Harl::~Harl() {
	std::cout << "Destructor called" << std::endl;
}

void Harl::complain(std::string level) {
	int i;
	
	for (i = 0; i < 4; i++) {
		if (level == _complaints[i].level)
			break;
	}
	
	switch(i) {
		case 0:
			(this->*_complaints[0].fct)();
		case 1:
			(this->*_complaints[1].fct)();
		case 2:
			(this->*_complaints[2].fct)();
		case 3:
			(this->*_complaints[3].fct)();
			break;
		default:
			std::cout << "My guy complaining for unknown reasons again --' " << std::endl;
	}
}

void Harl::_debug( void ) {
	std::cout << "[DEBUG]Absolutely thrilled to see the triple nested loops perform their dance without stepping on each other's variables. It's like watching ballet in binary!" << std::endl;
}

void Harl::_info( void ) {
	std::cout << "[INFO]Curiously perplexed that adding more recursion layers incurs extra memory. Had the stack been infinite, I’d be in recursive heaven" << std::endl;
}

void Harl::_warning( void ) {
	std::cout << "[WARNING]I reckon my function should compile with zero warnings. I've been coding in this language since it was just a pseudocode on a napkin." << std::endl;
}

void Harl::_error( void ) {
	std::cout << "[ERROR]This is catastrophic! There’s an off-by-one error that breached the matrix. Fetch the lead developer, stat!" << std::endl;
}
