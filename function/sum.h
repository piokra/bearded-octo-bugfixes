#ifndef SUM_H
#define SUM_H

#include "realfunction.h"

class Sum : public RealFunction
{
public:
    Sum(RealFunction* l, RealFunction* r);
    virtual ~Sum();
    virtual double operator()(double x);
    virtual RealFunction* derivative();
    virtual void display();
    virtual RealFunction* clone();

protected:
private:
    RealFunction* m_r, *m_l;

};
#endif // SUM_H

