/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:39:25 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/15 18:05:48 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA();
		HumanA(std::string name, Weapon weapon );
		void	attack();
		
	private:
		std::string _name;
		Weapon _weapon;
};

#endif