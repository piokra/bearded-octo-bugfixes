#include "multiplication.h"
#include "sum.h"
Multiplication::Multiplication(RealFunction* l, RealFunction* r) : m_l(l), m_r(r)
{

}

Multiplication::~Multiplication()
{
    delete m_l;
    delete m_r;
}

double Multiplication::operator()(double x)
{
    return (*m_l)(x)*(*m_r)(x);
}

RealFunction* Multiplication::derivative()
{
    RealFunction *f1, *f2, *d1, *d2;

    f1=m_l->clone();
    f2=m_r->clone();
    d1=m_l->derivative();
    d2=m_r->derivative();
    return new Sum(new Multiplication(f1,d2),new Multiplication(d1,f2));
}

void Multiplication::display()
{
    std::cout << "(";
    m_l->display();
    std::cout << "*";
    m_r->display();
    std::cout << ")";
}

RealFunction* Multiplication::clone()
{
    RealFunction *lc, *rc;
    lc=m_l->clone();
    rc=m_r->clone();
    return new Multiplication(lc,rc);
}
