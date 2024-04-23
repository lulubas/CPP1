/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:19:51 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/23 02:48:00 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.h"

int	main( int argc, char **argv )
{
	std::string oldContent;
	std::string newContent;
	myFile		oldFile;
	myFile		newFile;

	if ( argc != 4 ) {
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

	std::string filepath( argv[1] );
	std::string oldString( argv[2] );
	std::string newString( argv[3] );
	std::string newFilepath = filepath + ".replace";
	
	oldFile.readFile( filepath );
	oldContent = oldFile.getContent();
	newContent = replaceString( oldContent, oldString, newString );
	newFile.setContent( newContent );
	newFile.writeFile( newFilepath );
	return (0);
}