/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:17:32 by svolain           #+#    #+#             */
/*   Updated: 2024/07/28 12:46:16 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
    public:
        Array(void)
        {
            this->_size = 0;
            this->_arr = nullptr;
        }

        Array(unsigned int n)
        {
            this->_size = n;
            this->_arr = new T[_size];
        }
        
        Array( const Array& src )
        {
            this->_size = src._size;
            this-> _arr = new T[_size];
            for (int i = 0; i < this->_size; ++i)
               this->_arr[i] = src._arr[i];
        }
        
        ~Array()
        {
            if(this->_size)
                delete [] this->_arr;
        }

        Array&  operator=( const Array& rhs )
        {
            if (this != &rhs)
	        {
                delete[] _arr;
                this->_arr = new T[rhs._size];
                this->_size = rhs._size;

                for (int i = 0; i < rhs._size; i++)
                    this->_arr[i] = rhs._arr[i];
            }
	        return *this;
        }
        
        T &operator[](int index) {
            if (index >= this->_size || index < 0)
            throw std::out_of_range("Index out of range");
            return this->_arr[index];
        }
        
        const T &operator[](int index) const {
            if (index >= this->_size || index < 0)
            throw std::out_of_range("Index out of range");
            return this->_arr[index];
        }

        int    size()
        {
            return this->_size;
        }
        
    private:
        int    _size;
        T*     _arr;
};

#endif