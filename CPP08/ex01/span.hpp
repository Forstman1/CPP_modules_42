/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:45:25 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/09 11:47:06 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>

class Span {
	private:
		std::vector<int> span;
		unsigned int sizeSpan;
	public:
		Span(unsigned int i);
		Span();
		Span(const Span &other);
		Span& operator=(const Span &rhs);
    	void	addNumber(int number);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addNubElements(unsigned int n);
		void	printall(void);
		~Span();
};
