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
		int		nb;
		char	first_name[512];
		char	last_name[512];
		char	nickname[512];
		char	login[512];
		char	postal_address[512];
		char	email_address[512];
		char	phone_number[512];
		char	birthday_date[512];
		char	favorite_meal[512];
		char	underwear_color[512];
		char	darkest_secret[512];

		contact(void);
		~contact(void);

		void	printContact(void) const;
		void	printFullContact(void) const;
		void	fillDetails(int pos);
};

#endif
