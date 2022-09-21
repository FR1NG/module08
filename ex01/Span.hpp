/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:13:03 by hchakoub          #+#    #+#             */
/*   Updated: 2022/09/21 17:39:04 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

class Span {

private:
  unsigned int _length;
  unsigned int _size;
  std::multiset<int> _container;

public:
  Span();
  Span(const unsigned int N);
  Span(const Span &span);
  Span &operator=(const Span &span);
  ~Span();

  void addNumber(const int number);
  int shortestSpan() const;
  int longestSpan() const;
  // for debug!
  void printSpan() const;
};

#endif // !SPAN_HPP
