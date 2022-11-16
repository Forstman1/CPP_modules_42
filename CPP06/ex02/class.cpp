/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:01:14 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/03 11:05:46 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

A::A()
{
	
}

B::B()
{
	
}


C::C()
{

}

A::~A()
{

}

B::~B()
{

}


C::~C()
{

}

Base::~Base() 
{
	
}

Base *generate(void)
{
    srand(time(NULL));
    int random = rand();
    if (random % 3 == 0)
    {
        Base *c = new A;
        return (c);
    }
    else if (random % 2 == 0)
    {
        Base *c = new B;
        return (c);
    }
    else
    {
        Base *c = new C;
        return (c);
    }
}

void identify(Base *p)
{
	A *first = dynamic_cast<A*>(p);
    if (first != NULL)
    {
        std::cout << "type A" << std::endl;
		return ;
    }
	B *second = dynamic_cast<B*>(p);
    if (second != NULL)
    {
        std::cout << "type B" << std::endl;
		return ;
    }
	C *third = dynamic_cast<C*>(p);
    if (third != NULL)
    {
		std::cout << "type C" << std::endl;
		return ;
    }
	std::cout << "none of them" << std::endl;
}

void identify(Base& p)
{
    try {
        A &first = dynamic_cast <A&>(p);
        std::cout << "type A" << std::endl;
        first = static_cast<A>(first);
    }
    catch (std::bad_cast) {
        try {
            B &first = dynamic_cast <B&>(p);
            std::cout << "type B" << std::endl; 
            first = static_cast<B>(first);   
        }
        catch (std::bad_cast) {
			try {
				C &first = dynamic_cast <C&>(p);
            	std::cout << "type C" << std::endl; 
                first = static_cast<C>(first);
			}
			catch  (std::bad_cast) {
				std::cout << "none of them" << std::endl;
			}
        }
    }
}
