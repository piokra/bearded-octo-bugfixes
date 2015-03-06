#ifndef COMPOSITION_H
#define COMPOSITION_H
#include "realfunction.h"

class Composition : public RealFunction
{
public:
    Composition(RealFunction* m_l, RealFunction* m_r);
    ~Composition();

    virtual double operator()(double x);
    virtual RealFunction* derivative();
    virtual void display();
    virtual RealFunction* clone();

protected:
private:
    RealFunction* m_l;
    RealFunction* m_r;
};


#endif // COMPOSITION_H

