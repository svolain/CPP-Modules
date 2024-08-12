/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:17:32 by svolain           #+#    #+#             */
/*   Updated: 2024/08/12 10:58:31 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
    public:
        Array(void);
        Array(unsigned int n):
        Array(const Array<T>& src);
        ~Array(void);
        
        Array<T>&  operator=(const Array<T>& rhs);
     
        T &operator[](int index);
        const T &operator[](int index) const;

        int    size();   
    private:
        int    _size;
        T*     _arr;
};

template <typename T>
Array<T>::Array(void): _size(0), _arr(nullptr) {}

template <typename T>
Array<T>::Array(unsigned int n):  _size(n), _arr(new T[n]) {}

template <typename T>
Array<T>::Array(const Array<T>& src): _size(src._size), _arr(new T[src._size]) {
    for (int i = 0; i < this->_size; ++i) {
        this->_arr[i] = src._arr[i];
    }
}

template <typename T>       
Array<T>::~Array()
{
    if(this->_size)
    delete [] this->_arr;
}

template <typename T>  
Array<T>& Array<T>::operator=( const Array& rhs )
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

template <typename T>       
T& Array<T>::operator[](int index) 
{
    if (index >= this->_size || index < 0)
    throw std::out_of_range("Index out of range");
    return this->_arr[index];
}

template <typename T>      
const T& Array<T>::operator[](int index) const 
{
    if (index >= this->_size || index < 0)
        throw std::out_of_range("Index out of range");
        return this->_arr[index];
}

template <typename T> 
int Array<T>::size(void)
{
    return this->_size;
}

#endif