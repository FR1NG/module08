/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:00:29 by hchakoub          #+#    #+#             */
/*   Updated: 2022/09/21 20:15:47 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cmath>

int main() {

  Span s(12000);
  try {
    std::cout << "\033[1;33mgenerating a span with a sequence from 0 to 12000 "
                 "number\033[0m"
              << std::endl;
    for (int i = 0; i < 12000; i++)
      s.addNumber(i);
    try {
      std::cout << "the destance is : " << s.longestSpan() << std::endl;
    } catch (std::exception &e) {
      std::cout << "there is no element or only one element in the span "
                << std::endl;
    }
    try {
      std::cout << "the shortest span is : " << s.shortestSpan() << std::endl;
    } catch (std::exception &e) {
      std::cout << "there is no element or only one element in the span "
                << std::endl;
    }
  } catch (std::exception &e) {
    std::cout << "Span is full" << std::endl;
  }

  Span sp(23);

  std::cout << "\033[1;33mgenerating a span with a values 4, 9, 100, 3 "
               "number\033[0m"
            << std::endl;
  try {
    sp.addNumber(4);
    sp.addNumber(9);
    sp.addNumber(100);
    sp.addNumber(3);
    std::cout << "the shortest span is : " << sp.shortestSpan() << std::endl;
    std::cout << "the longest span is : " << sp.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << "ERROR" << std::endl;
  }
  return 0;
}
