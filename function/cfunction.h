#ifndef OTHERFUNCTION_H
#define OTHERFUNCTION_H

#include "realfunction.h"
#include <string>
class CFunction : public RealFunction
{
typedef double(*CFunc)(double);
public:
    CFunction(CFunc func, const std::string& name);
    virtual ~CFunction();
    virtual double operator()(double x);
    virtual RealFunction* derivative()=0;
    virtual void display();
    virtual RealFunction* clone()=0;

protected:

private:
    CFunc m_func;
    std::string m_name;


};

#endif // OTHERFUNCTION_H

