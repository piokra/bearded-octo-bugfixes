#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H
#include "realfunction.h"

class Multiplication : public RealFunction
{
public:
    Multiplication(RealFunction* l, RealFunction* r);
    ~Multiplication();
    virtual double operator()(double x);
    virtual RealFunction* derivative();
    virtual void display();
    virtual RealFunction* clone();
protected:
private:
    RealFunction* m_l;
    RealFunction* m_r;
};


#endif // MULTIPLICATION_H

