#ifndef GUARD_H
#define GUARD_H
#include "realfunction.h"

class Constant : public RealFunction
{
public:
    Constant();
    Constant(double x);
    ~Constant();
    virtual double operator()(double x);
    virtual void display();
    virtual RealFunction* clone();
    virtual RealFunction* derivative();
protected:
private:
    double m_val;
};


#endif // GUARD_H

