/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:13:29 by hchakoub          #+#    #+#             */
/*   Updated: 2022/09/22 13:23:54 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iterator>

Span::Span() : _length(0), _size(0) {}

Span::Span(const unsigned int N) : _length(0), _size(N) {}

Span::Span(const Span &span)
    : _length(span._length), _size(span._size), _container(span._container) {}

Span &Span::operator=(const Span &span)
{
  if (this == &span)
    return *this;
  this->_container = span._container;
  this->_length = span._length;
  this->_size = span._size;
  return *this;
}

Span::~Span() {}

void Span::addNumber(const int number)
{
  if (this->_size == this->_length)
  {
    throw std::exception();
  }
  this->_container.insert(number);
  this->_length += 1;
}

int Span::shortestSpan() const
{

  if (this->_size < 2)
    throw std::exception();

  int shortest = *(this->_container.rbegin()) - *(this->_container.begin());
  int currentval = 0;
  int nextval = 0;
  for (std::multiset<int>::iterator it = this->_container.begin();
       it != this->_container.end(); it++)
  {
    currentval = *it;
    if (next_iterator(it) == this->_container.end())
      break;
    nextval = *(next_iterator(it));
    if (nextval - currentval < shortest)
      shortest = nextval - currentval;
  }
  return shortest;
}

int Span::longestSpan() const
{
  if (this->_size < 2)
    throw std::exception();
  return *(this->_container.rbegin()) - *(this->_container.begin());
}

std::multiset<int>::iterator Span::begin() { return this->_container.begin(); }

std::multiset<int>::iterator Span::end() { return this->_container.end(); }

std::multiset<int>::iterator Span::insertRange(int start, int end)
{
  if (start > end)
    throw std::exception();
  for (int i = start; i < end; i++)
  {
    if (_length >= _size)
      break;
    this->_container.insert(i);
  }
  return this->begin();
}

std::multiset<int>::iterator Span::insertRange(int *start, int *end)
{
  if (end - start > this->_size - this->_length)
    throw std::exception();
  this->_container.insert(start, end);
  return this->begin();
}
// for debug!
void Span::printSpan() const
{

  for (std::set<int>::iterator it = this->_container.begin();
       it != this->_container.end(); it++)
    std::cout << "==> " << *it << std::endl;
}
