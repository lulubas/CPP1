/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:19:51 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/22 16:30:34 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.h"

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Wrong number of arguments" << std::endl;
		std::cout << "Try the following command: " << std::endl << std::endl;
		std::cout << "echo \"Hello\\nReplacing the world Hello\\nIn this Hello text\" > thefile && ./sed thefile Hello Goodbye && echo '==Content of thefile==' && cat thefile && echo '==Content of thefile.replace==' && cat thefile.replace" << std::endl << std::endl;
		return (1);
	}
	
	std::string oldContent;
	std::string newContent;
	myFile		oldFile;
	myFile		newFile;

	std::string filepath(argv[1]);
	std::string oldString(argv[2]);
	std::string newString(argv[3]);
	std::string newFilepath = filepath + ".replace";

	oldFile.readFile(filepath);
	oldContent = oldFile.getContent();
	newContent = replaceString(oldContent, oldString, newString);
	newFile.setContent(newContent);
	newFile.writeFile(newFilepath);
	return (0);
}