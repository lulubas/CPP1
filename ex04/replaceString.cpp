/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceString.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 00:56:14 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/23 02:33:00 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.h"

std::string replaceString(std::string text, std::string oldString, std::string newString)
{
	if (oldString.empty())
		return (text);

	size_t			currentPos = 0;
	size_t			foundPos = 0;

	while (1)
	{
		foundPos = text.find(oldString, currentPos);
		if (foundPos == std::string::npos)
			break;
		text.erase(foundPos, oldString.size());
		text.insert(foundPos, newString);
		currentPos = foundPos + newString.size();
	}
	return (text);
}