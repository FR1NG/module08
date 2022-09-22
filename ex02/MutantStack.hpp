/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:24:32 by hchakoub          #+#    #+#             */
/*   Updated: 2022/09/22 15:00:41 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T> class MutantStack : public std::stack<T> {

public:
  MutantStack(){};
  MutantStack(const MutantStack &ms) { this->c = ms.c; };
  MutantStack &operator=(const MutantStack &ms) {
    if (this == &ms)
      return (*this);
    this->c = ms.c;
    return (*this);
  };
  ~MutantStack(){};
  typedef typename std::stack<T>::container_type::iterator iterator;
  typedef typename std::stack<T>::container_type::reverse_iterator riterator;

  iterator begin() { return this->c.begin(); }
  riterator rbegin() { return this->c.rbegin(); }
  iterator end() { return this->c.end(); }
  riterator rend() { return this->c.rend(); }
};
#endif // !MUTANTSTACK_HPP
