/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:25:44 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/09 11:52:12 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
    public:
        Contact();
        ~Contact();
        
        void set_first_name(std::string);
        void set_last_name(std::string);
        void set_nickname(std::string);
        void set_secret(std::string);
        void set_phone_number(std::string);

        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        std::string get_secret(void);
        std::string get_phone_number(void);

        bool        is_empty(void);

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string secret;
        std::string phone_number;
    };

#endif