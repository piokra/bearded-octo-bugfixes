#include "polynomial.h"
#include "constant.h"
#include "multiplication.h"
#include <cmath>

Polynomial::Polynomial()
{
    m_pow=0;
}
Polynomial::Polynomial(double pow):m_pow(pow)
{

}

Polynomial::~Polynomial()
{

}

double Polynomial::operator()(double x)
{
    return pow(x,m_pow);
}
RealFunction* Polynomial::derivative()
{
    if(m_pow!=0)
        return new Multiplication(new Constant(m_pow),new Polynomial(m_pow-1));
    return new Constant(0);
}


void Polynomial::display()
{
    std::cout << "x^" << m_pow;
}
RealFunction* Polynomial::clone()
{
    return new Polynomial(static_cast<const Polynomial&>(*this));
}
