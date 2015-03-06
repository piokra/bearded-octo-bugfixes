#include "pow.h"
#include "sum.h"
#include "constant.h"
#include "math/log.h"
#include "multiplication.h"
#include "composition.h"
#include <math.h>
Power::Power(RealFunction* l, RealFunction* r) : m_l(l), m_r(r)
{

}

Power::~Power()
{
    delete m_l;
    delete m_r;
}

double Power::operator()(double x)
{
    return pow((*m_l)(x),(*m_r)(x));
}

RealFunction* Power::derivative()
{
    RealFunction *g,*gc,*f1,*df1,*p1;
    g=m_r->clone();
    gc=m_r->clone();
    f1=m_l->clone();
    df1=m_l->derivative();

    p1=new Multiplication(g,
                          new Multiplication(
                                             new Power(f1,new Sum(gc,new Constant(-1)))
                                             ,df1));

    RealFunction *f,*fc,*g1,*dg1,*p2;

    f=m_l->clone();
    fc=m_l->clone();
    g1=m_r->clone();
    dg1=m_r->derivative();

    p2=new Multiplication(new Power(f,g1),new Multiplication(new Composition(new Log, fc),dg1));
    return new Sum(p1,p2);
}

void Power::display()
{
    std::cout << "(";
    m_l->display();
    std::cout << "^";
    m_r->display();
    std::cout << ")";
}

RealFunction* Power::clone()
{
    return new Power(m_l->clone(), m_r->clone());
}
