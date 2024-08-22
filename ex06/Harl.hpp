/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:36:00 by lbastien          #+#    #+#             */
/*   Updated: 2024/08/22 17:21:12 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <map>

class Harl {
	public:
		Harl();
		~Harl();
		void	complain(std::string level);

	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);

		struct Complaint {
			std::string level;
			void (Harl::*fct)(void);
		};

		static const Complaint _complaints[];
};

#endif /* HARL_H */