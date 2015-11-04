/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 14:49:40 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/04 14:49:41 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef LOGGER_HPP
# define LOGGER_HPP

class Logger
{
public:
	Logger();
	~Logger();
	void	log(std::string const & dest, std::string const & message);

private:
	void		_logToConsole(std::string const & input);
	void		_logToFile(std::string const & input);
	std::string	_makeLogEntry(std::string const & input);
	std::string	_filename;

};

#endif