/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:36:09 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/01 18:36:50 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t returned = reinterpret_cast <uintptr_t> (ptr);
    return (returned);
}

Data* deserialize(uintptr_t raw)
{
    Data *returned = reinterpret_cast <Data *> (raw);
    return (returned);
}
