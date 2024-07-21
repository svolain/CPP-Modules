/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:55:27 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/21 13:06:15 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    public:
        Brain(void);
        Brain(Brain const &src);
        ~Brain(void);

        Brain & operator=(Brain const & rhs);

        void    putIdea(std::string idea);
        void    getIdeas(void);

    private:
        std::string ideas[100];
};

#endif