/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:57:09 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/03 23:36:39 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon& weapon);
		void	attack();
		
	private:
		std::string _name;
		Weapon* _weapon;
};

#endif