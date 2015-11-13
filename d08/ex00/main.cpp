/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 10:22:36 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/13 10:22:38 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// find example
#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector
#include <stack>
#include <stdexcept>
#include "easyfind.hpp"

int main () {
  // using std::find with array and pointer:
  int 							ints[] = { 10, 20, 30, 40 };
  std::vector<int>				myvector(ints, ints+4);
  std::vector<int>::iterator	ret;

  try {
  	ret = easyfind< std::vector<int> >(myvector, 30);
  	std::cout << "value " << *ret << " found in vector" << std::endl;
  }
  catch (ValueNotFound & e) {
  	std::cout << e.what() << std::endl;
  }

  try {
  	ret = easyfind< std::vector<int> >(myvector, 3);
  	std::cout << "value " << *ret << " found in vector" << std::endl;
  }
  catch (ValueNotFound & e) {
  	std::cout << e.what() << std::endl;
  }

  return 0;
}	