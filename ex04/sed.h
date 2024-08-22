/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:31:56 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/03 23:49:27 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
#define SED_H

#include<iostream>
#include <string>
#include "myFile.hpp"

std::string replaceString(std::string text, std::string oldString, std::string newString);

#endif
