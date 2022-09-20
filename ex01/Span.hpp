/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:13:03 by hchakoub          #+#    #+#             */
/*   Updated: 2022/09/20 15:52:21 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {

private:
  unsigned int length;
  unsigned int size;

public:
  Span();
  Span(const Span &span);
  Span(const unsigned int N);
  Span &oprator = (const Span &span);
  void addNumber(int number);
};

#endif // !SPAN_HPP
