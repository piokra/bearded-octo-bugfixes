#include "composition.h"
#include "multiplication.h"
Composition::Composition(RealFunction* l, RealFunction* r) : m_l(l), m_r(r)
{

}

Composition::~Composition()
{
    delete m_l;
    delete m_r;
}

double Composition::operator()(double x)
{
    return (*m_l)((*m_r)(x));

}

RealFunction* Composition::derivative()
{
    RealFunction* d2, *f2, *d1;
    d2=m_r->derivative();
    f2=m_r->clone();
    d1=m_l->derivative();
    return new Multiplication(d2,new Composition(d1,f2));
}

void Composition::display()
{
    std::cout << "(";
    m_l->display();
    std::cout << "[x=";
    m_r->display();
    std::cout << "]";
    std::cout << ")";
}

RealFunction* Composition::clone()
{
    RealFunction* l, *r;
    l=m_l->clone();
    r=m_r->clone();
    return new Composition(m_l,m_r);
}
