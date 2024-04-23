/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:31:56 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/23 02:21:26 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
#define SED_H

#include<iostream>
#include <string>
#include "myFile.hpp"

std::string replaceString(std::string text, std::string oldString, std::string newString);

#endif /* SED_H */
