/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 14:49:31 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/04 14:49:32 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Logger.hpp"

typedef  void (Logger::*Fn)(std::string const & message);

Logger::Logger() : _filename("file.log") {
	return ;
}

Logger::~Logger() {
	return ;
}

void		Logger::_logToConsole(std::string const & input) {
	std::cout << this->_makeLogEntry(input) << std::endl;
}

void		Logger::_logToFile(std::string const & input) {
	std::ofstream	ofs(this->_filename.c_str(), std::fstream::app | std::fstream::out);
	ofs << this->_makeLogEntry(input) << "\n";
	ofs.close();
}

std::string	Logger::_makeLogEntry(std::string const & input) {
	std::string buf = __TIMESTAMP__;
	buf += " : ";
	buf += input;
	return (buf);
}

void		Logger::log(std::string const & dest, std::string const & message) {
	Fn	actions[2] = {
		&Logger::_logToConsole, 
		&Logger::_logToFile
	};
	std::string		list[2] = {
		"logToConsole", 
		"logToFile"
	};
	for (int i = 0; i < 2; i++)
	{
		if (list[i].compare(dest) == 0)
			return (this->*(actions[i]))(message);
	}	
}