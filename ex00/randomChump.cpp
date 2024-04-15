/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:07:43 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/15 11:48:29 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	randomChump( std::string name ) {
	Zombie newChump (name);
	newChump.announce();
}