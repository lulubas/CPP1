/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 03:18:26 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/22 17:41:34 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl    louis;

    std::cout << "==============" << std::endl;
    std::cout << "TESTING DEBUG" << std::endl;
    std::cout << "==============" << std::endl;
    
    louis.complain("DEBUG");

    std::cout << "==============" << std::endl;
    std::cout << "TESTING INFO" << std::endl;
    std::cout << "==============" << std::endl;
    
    louis.complain("INFO");
    
	std::cout << "==============" << std::endl;
    std::cout << "TESTING WARNING" << std::endl;
    std::cout << "==============" << std::endl;

    louis.complain("WARNING");

	std::cout << "==============" << std::endl;
    std::cout << "TESTING ERROR" << std::endl;
    std::cout << "==============" << std::endl;
    
    louis.complain("ERROR");
    
	std::cout << "==============" << std::endl;
    std::cout << "TESTING RANDOM" << std::endl;
    std::cout << "==============" << std::endl;
    
    louis.complain("RANDOM");

    return 0;   
}