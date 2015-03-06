#include "constant.h"

Constant::Constant() : m_val(0)
{

}

Constant::Constant(double x) : m_val(x)
{

}

Constant::~Constant()
{

}

double Constant::operator()(double x)
{
    return m_val;
}
void Constant::display()
{
    std::cout << m_val;
}
RealFunction* Constant::clone()
{
    return new Constant(m_val);
}

RealFunction* Constant::derivative()
{
    return new Constant(0);
}
