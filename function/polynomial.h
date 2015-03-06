#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "realfunction.h"
class Polynomial : public RealFunction
{
public:
    Polynomial();
    Polynomial(double pow);
    ~Polynomial();
    virtual RealFunction* clone();
    virtual double operator()(double x);
    virtual RealFunction* derivative();
    virtual void display();
protected:
private:
    double m_pow;
};


#endif // POLYNOMIAL_H

