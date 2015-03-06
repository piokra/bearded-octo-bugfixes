#ifndef REALFUNCTION_H
#define REALFUNCTION_H

#include <iostream>
class RealFunction
{
public:
    virtual ~RealFunction() {};
    virtual double operator()(double x) = 0;

    virtual void display() = 0;
    virtual RealFunction* derivative() = 0;
    virtual RealFunction* clone() = 0;
protected:
private:

};
#endif // REALFUNCTION_H

