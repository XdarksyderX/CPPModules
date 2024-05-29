/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migarci2 <migarci2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:51:25 by migarci2          #+#    #+#             */
/*   Updated: 2024/05/29 20:34:41 by migarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <vector>
# include <list>

void 				mergeSortVector(std::vector<int> &v);
void 				mergeSortList(std::list<int> &l);

std::vector<int>	mergeVector(std::vector<int> &left, std::vector<int> &right);
std::list<int>		mergeList(std::list<int> &left, std::list<int> &right);

#endif
