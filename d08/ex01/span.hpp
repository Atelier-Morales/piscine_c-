/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 13:30:10 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/13 13:30:12 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <list>

class span {
public:
	span(unsigned int ints);
	span(span const & src);
	~span();
	span const &	operator=(span const & rhs);

	void			addNumber(int nb);
	unsigned int 	shortestSpan();
	unsigned int 	longestSpan();
	
	class LimitReached : public std::exception {
	public:
		virtual const char *	what() const throw() {
			return ("Limit reached, cannot store more numbers");
		}
		LimitReached() {
			return ;
		}
		LimitReached(LimitReached const & src) {
			*this = src;
		}
		LimitReached const & operator=(LimitReached const & rhs) {
			(void)rhs;
			return (*this);
		}
		virtual ~LimitReached() throw() {
			return ;
		}
	};

	class NoSpanFound : public std::exception {
	public:
		virtual const char *	what() const throw() {
			return ("No span found");
		}
		NoSpanFound() {
			return ;
		}
		NoSpanFound(NoSpanFound const & src) {
			*this = src;
			return ;
		}
		NoSpanFound const & operator=(NoSpanFound const & rhs) {
			(void)rhs;
			return *this;
		}
		virtual ~NoSpanFound() throw() {
			return ;
		}
	};
	std::list<int>	_cont;

private:
	span();
	unsigned int	_nb;
};

#endif