/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eastfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:16:03 by hchakoub          #+#    #+#             */
/*   Updated: 2022/09/19 20:18:36 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iterator>
template <typename T> typename T::iterator easyfind(T container, int x) {
  typename T::iterator it = std::find(container.begin(), container.end(), x);
  if (it == container.end()) {
    throw std::exception();
  }
  return it;
}

#endif
