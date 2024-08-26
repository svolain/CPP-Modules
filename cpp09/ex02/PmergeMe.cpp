/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:54:51 by vsavolai          #+#    #+#             */
/*   Updated: 2024/08/26 11:16:46 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
}

PmergeMe::~PmergeMe(void)
{}

PmergeMe&	PmergeMe::operator=(const PmergeMe &rhs)
{
    (void)rhs;
    return *this;
}

bool PmergeMe::parseNumbers(char **numbers, int numbers_len)
{
    try {
        for (int i = 1; i < numbers_len; i += 1)
        {
            if (std::string(numbers[i]).find_first_not_of("0123456789 ") != std::string::npos)
            {
			    throw PmergeMe::InvalidInputException();
                return false;
            }
        }

        std::unordered_set<unsigned int> repetition_check;
        for (int i = 1; i < numbers_len; i += 1) {
            unsigned int num = std::stoul(numbers[i]);
            auto result = repetition_check.insert(num); 
            if (!result.second) 
            {
                throw PmergeMe::InvalidInputException();
                return false;
            }
        }
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Error: number out of range: " << e.what() << std::endl;
        return false;
    }
    catch (const PmergeMe::InvalidInputException& e) {
        std::cerr << e.what() << std::endl;
        return false;
    }
    catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
        return false;
    }
    return true;
}


template <typename Container>
static void printContainer(const Container& container)
{
    for (const auto& number : container)
        std::cout << number << " ";
    std::cout << std::endl;
}

static std::vector<unsigned int> mergeVectors(std::vector<unsigned int>& left, std::vector<unsigned int>& right)
{
    std::vector<unsigned int> toMerge;

    while (!left.empty() && !right.empty())
	{
        if (left.front() <= right.front())
		{
            toMerge.push_back(left.front());
            left.erase(left.begin());
        }
		else
		{
            toMerge.push_back(right.front());
            right.erase(right.begin());
        }
    }

    while (!left.empty())
	{
        toMerge.push_back(left.front());
        left.erase(left.begin());
    }

    while (!right.empty())
	{
        toMerge.push_back(right.front());
        right.erase(right.begin());
    }
    return toMerge;
}

static std::vector<unsigned int> mergeInsertVector(std::vector<unsigned int>& vec) {
    if (vec.size() <= 1) {
        return vec;
    }

    int mid = vec.size() / 2;
    std::vector<unsigned int> left(vec.begin(), vec.begin() + mid);
    std::vector<unsigned int> right(vec.begin() + mid, vec.end());

    left = mergeInsertVector(left);
    right = mergeInsertVector(right);

    return mergeVectors(left, right);
}

static std::list<unsigned int> mergeLists(std::list<unsigned int>& left, std::list<unsigned int>& right)
{
    std::list<unsigned int> toMerge;

    while (!left.empty() && !right.empty())
	{
        if (left.front() <= right.front())
		{
            toMerge.push_back(left.front());
            left.erase(left.begin());
        }
		else
		{
            toMerge.push_back(right.front());
            right.erase(right.begin());
        }
    }
    while (!left.empty())
	{
        toMerge.push_back(left.front());
        left.erase(left.begin());
    }
    while (!right.empty())
	{
        toMerge.push_back(right.front());
        right.erase(right.begin());
    }
    return toMerge;
}

static std::list<unsigned int> mergeInsertList(std::list<unsigned int>& lst) {
    if (lst.size() <= 1) {
        return lst;
    }

    int half_lst = lst.size() / 2;
	std::list<unsigned int> left;
	std::list<unsigned int> right;

    for (int i = 0; i < half_lst; i++) {
        left.push_back(lst.front());
        lst.pop_front();
    }
    right = lst;

    left = mergeInsertList(left);
    right = mergeInsertList(right);

    return mergeLists(left, right);
}

void PmergeMe::sortNumbers(char **numbers, int numbers_len)
{
    std::vector<unsigned int> vec_storage;
    std::list<unsigned int> lst_storage;
    
    for (int i = 1; i < numbers_len; i += 1)
    {
		vec_storage.push_back(std::stoul(numbers[i]));
        lst_storage.push_back(std::stoul(numbers[i]));
    }

	std::cout << "Vector Before: ";
	printContainer(vec_storage);
    std::cout << "List Before: ";
    printContainer(lst_storage);

    std::clock_t lst_start = std::clock();
    lst_storage = mergeInsertList(lst_storage);
    double lst_time = static_cast<double>(std::clock() - lst_start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;
    
    std::clock_t vec_start = std::clock();
    vec_storage = mergeInsertVector(vec_storage);
    double vec_time = static_cast<double>(std::clock() - vec_start) / static_cast<double>(CLOCKS_PER_SEC) * 100000;

    std::cout << "Vector Affter: ";
	printContainer(vec_storage);
    std::cout << "List After: ";
    printContainer(lst_storage);

    std::cout << "Time to process a range of " << numbers_len - 1
		 << " elements " << "with std::vector<unsigned int> : " 
		 << vec_time << " µs" << std::endl;

    std::cout << "Time to process a range of " << numbers_len - 1
		 << " elements " << "with std::list<unsigned int> : " 
		 << lst_time << " µs" << std::endl;
}

const char*	PmergeMe::InvalidInputException::what() const throw() {
	return "Error: invalid input";
}

