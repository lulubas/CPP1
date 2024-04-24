/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 03:18:26 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/24 03:22:11 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {
    Harl    louis;

    louis.complain("INFO");
    louis.complain("DEBUG");
    louis.complain("WARNING");
    louis.complain("ERROR");
}
