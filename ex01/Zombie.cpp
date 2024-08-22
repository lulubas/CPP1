/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:45:01 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/03 23:36:39 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Zombie default constructor called" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie parameterized constructor called" << std::endl;

}

Zombie::~Zombie() {
	std::cout << _name << ": I choose death... (Destructor called)" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	_name = name;
	std::cout << "Name set to " << _name << std::endl;
}