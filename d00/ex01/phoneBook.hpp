/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:47:39 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/02 19:47:19 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	phoneBook {
	public:
		int	contact;

		phoneBook(void);
		~phoneBook(void);

		int			checkInput(char *str) const;
		void		setContact(void);
};

class contact {
	public:
		int			nb;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;

		contact(void);
		~contact(void);

		void	printContact(void) const;
		void	printFullContact(void) const;
		void	fillDetails(int pos);
};

#endif
