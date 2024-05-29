/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:51:23 by migarci2          #+#    #+#             */
/*   Updated: 2024/05/29 20:52:06 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void mergeSortVector(std::vector<int> &v)
{
	if (v.size() <= 1)
		return;
	std::vector<int> left(v.begin(), v.begin() + v.size() / 2);
	std::vector<int> right(v.begin() + v.size() / 2, v.end());
	mergeSortVector(left);
	mergeSortVector(right);

	v = mergeVector(left, right);
}

std::vector<int> mergeVector(std::vector<int> &left, std::vector<int> &right)
{
	std::vector<int> result;
	std::size_t i = 0;
	std::size_t j = 0;
	while (i < left.size() && j < right.size())
	{
		if (left[i] < right[j])
			result.push_back(left[i++]);
		else
			result.push_back(right[j++]);
	}
	while (i < left.size())
		result.push_back(left[i++]);
	while (j < right.size())
		result.push_back(right[j++]);
	return result;
}

std::list<int>		mergeList(std::list<int> &left, std::list<int> &right)
{
    std::list<int> result;
    std::list<int>::const_iterator itLeft = left.begin();
    std::list<int>::const_iterator itRight = right.begin();

    while (itLeft != left.end() && itRight != right.end())
    {
        if (*itLeft < *itRight)
        {
            result.push_back(*itLeft);
            ++itLeft;
        }
        else
        {
            result.push_back(*itRight);
            ++itRight;
        }
    }

    while (itLeft != left.end())
    {
        result.push_back(*itLeft);
        ++itLeft;
    }

    while (itRight != right.end())
    {
        result.push_back(*itRight);
        ++itRight;
    }

    return result;
}

void mergeSortList(std::list<int> &l)
{
	if (l.size() <= 1)
		return;

	std::list<int>::iterator middle = l.begin();
    std::advance(middle, l.size() / 2);

    std::list<int> left;
    std::list<int> right;
    
    std::list<int>::iterator it = l.begin();
    for (; it != middle; ++it)
    {
        left.push_back(*it);
    }
    for (; it != l.end(); ++it)
    {
        right.push_back(*it);
    }

	mergeSortList(left);
	mergeSortList(right);

	l = mergeList(left, right);
}
