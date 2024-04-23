/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myFile.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 00:55:20 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/23 02:47:17 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myFile.hpp"

myFile::myFile() {}

myFile::~myFile() {
};

void myFile::readFile( std::string path ) {
	_parseContent( path );
}

void myFile::_parseContent( std::string path ) {
	std::string		buffer;
	std::ifstream	inputFile( path );

	if ( !inputFile.is_open() ) {
		std::cerr << "Error while opening" << path << std::endl;
		exit ( 1 );
	}

	while (inputFile.good()) {
		getline(inputFile, buffer);
		_content.append( buffer );
		if (inputFile.peek() != EOF)
			_content.append( "\n" );
	}
}

void myFile::writeFile( std::string path ) {
	std::ofstream outputFile( path );
	outputFile << _content;
}

std::string myFile::getContent ( void ) {
	return (_content);
}

void myFile::setContent ( std::string content) {
	_content = content;
}