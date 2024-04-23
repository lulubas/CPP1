/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myFile.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:38:26 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/22 23:59:17 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYFILE_HPP
#define MYFILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class myFile {
	public:
		myFile();
		~myFile();

		std::string	getContent( void );
		void 		setContent( std::string content );
		void 		readFile( std::string path );
		void 		writeFile( std::string path );

	private:
		std::string _filepath;
		std::string _content;
		void _parseContent( std::string path );
};

#endif /* MYFILE_HPP */
