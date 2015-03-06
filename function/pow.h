#ifndef POWER_H
#define POWER_H

#include "realfunction.h"

class Power : public RealFunction
{
public:
    Power(RealFunction* l, RealFunction* r);
    virtual ~Power();

    virtual double operator()(double x);
    virtual RealFunction* derivative();
    virtual void display();
    virtual RealFunction* clone() ;
protected:
private:
    RealFunction* m_l;
    RealFunction* m_r;
};


#endif // POWER_H

