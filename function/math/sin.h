
#ifndef SIN_H
#define SIN_H

#include "../cfunction.h"

class Sin : public CFunction
{
public:
    Sin();
    virtual ~Sin();
    virtual RealFunction* derivative();
    virtual RealFunction* clone();

protected:
private:

};
#endif // SIN_H
