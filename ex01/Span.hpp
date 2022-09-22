/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:13:03 by hchakoub          #+#    #+#             */
/*   Updated: 2022/09/22 13:38:36 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iterator>
#include <set>
#include <vector>

template <typename T> T next_iterator(T it) {
  std::advance(it, 1);
  return it;
}

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

  typedef std::multiset<int>::iterator iterator;
  void addNumber(const int number);
  int shortestSpan() const;
  int longestSpan() const;
  std::multiset<int>::iterator begin();
  std::multiset<int>::iterator end();
  std::multiset<int>::iterator insertRange(int start, int end);
  std::multiset<int>::iterator insertRange(int *start, int *end);
  template <typename T>
  std::multiset<int>::iterator insertRange(typename T::iterator begin, typename T::iterator end) {
    if (std::distance(begin, end) > this->_size - this->_length)
      throw std::exception();
      this->_container.insert(begin, end);
      return this->_container.begin();
  };
  // for debug!
  void printSpan() const;
};

#endif // !SPAN_HPP
