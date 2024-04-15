/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:57:09 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/15 18:11:20 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB();
		HumanB( std::string name );
		void	setWeapon(Weapon weaon);
		void	attack();
		
	private:
		std::string _name;
		Weapon _weapon;
};