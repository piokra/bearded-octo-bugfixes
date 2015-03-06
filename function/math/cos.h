#ifndef COS_H
#define COS_H

#include "../cfunction.h"

class Cos : public CFunction
{
public:
    Cos();
    virtual ~Cos();
    virtual RealFunction* derivative() ;
    virtual RealFunction* clone() ;
protected:
private:
};


#endif // COS_H

