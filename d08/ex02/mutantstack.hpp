/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 15:55:46 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/13 15:55:55 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template<typename T>
class MutantStack {
public:
	MutantStack();
	~MutantStack();
	MutantStack(MutantStack const & src);
	MutantStack const & operator=(MutantStack const & rhs);
	void	push(T value);
	void	pop();
	int		size();
	iterator	begin();
	iterator	end();

private:
	std::stack<T>	_s;
	std::vector<T>	_v;

};

#endif