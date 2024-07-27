/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolain <svolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:17:32 by svolain           #+#    #+#             */
/*   Updated: 2024/07/27 19:59:09 by svolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
public:
    Array(void)
    {
        _size = 0;
        _arr = nullptr;
    }

    Array(unsigned int n)
    {
        _size = n;
        _arr = new T[_size];
        for (int i = 0; i < _size; i++)
            _arr[i] = 0;
    }
    
    Array( const AForm& src )
    {
        _size = src.size();
		_arr = new T[_size];
		for (int i = 0; i < _size; ++i)
			_head[i] = src[i];
    }
    
    ~Array()
    {
        if(_size)
            delete [] _Arr;
    }

    Array&              operator=( const Array& rhs )
    {
        if (_size)
            delete [] _arr;

        _size = rhs.size();
		_arr = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_arr[i] = rhs[i];
    }
    
    size()
    {
        return _size;
    }
    
private:
    unsigned int    _size;
    T*              _arr;
};

#endif