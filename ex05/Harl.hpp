/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:33:31 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/12 17:33:52 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <fstream>
#include <iostream>
#include <string.h>

class Harl {
	private :
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
	 	void complain( std::string level);
};

#endif