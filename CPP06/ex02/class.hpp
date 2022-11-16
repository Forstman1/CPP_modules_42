/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:38:06 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/03 11:53:35 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Base {
    public:
    virtual ~Base();
};

class A : public Base {
    public:
    A();
    ~A();
};

class B : public Base {
    public:
    B();
    ~B();
};

class C : public Base {
    public:
    C();
    ~C();
};

void identify(Base& p);
void identify(Base *p);
Base *generate(void);
