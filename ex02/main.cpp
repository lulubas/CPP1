/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:52:23 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/22 16:01:27 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {
	std::string 	string;
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	string = "HI THIS IS BRAIN";
	
	std::cout << "==============" << std::endl;
    std::cout << "MEMORY ADDRESS" << std::endl;
    std::cout << "==============" << std::endl;
	std::cout << "Memory address of string: " << &string << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "==============" << std::endl;
    std::cout << "STRING VALUE" << std::endl;
    std::cout << "==============" << std::endl;
	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
	std::cout << std::endl;
	return(0);
}