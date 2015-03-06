#include "sum.h"


Sum::Sum(RealFunction* l, RealFunction* r) : m_l(l),m_r(r)
{

}
Sum::~Sum()
{
    delete m_l;
    delete m_r;
}
RealFunction* Sum::derivative()
{
    RealFunction *rp, *rl;
    rp=m_l->derivative();
    rl=m_r->derivative();
    return new Sum(rl,rp);


}

void Sum::display()
{
    std::cout << "(";
    m_l->display();
    std::cout << "+";
    m_r->display();
    std::cout << ")";
}


RealFunction* Sum::clone()
{
    RealFunction *lc, *rc;
    lc=m_l->clone();
    rc=m_r->clone();
    return new Sum(lc,rc);
}
double Sum::operator()(double x)
{
    return (*m_l)(x)+(*m_r)(x);
}
