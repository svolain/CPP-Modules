/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:08:45 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/10 11:35:34 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "Contact.hpp"
# include <iostream>
# include <iomanip>  

# define max_contacts 8
# define max_column 10

class PhoneBook {
    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact();
        void search_contact();
    private:
        Contact contacts[max_contacts];
        int     index;
};

#endif