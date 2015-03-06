#ifndef LOG_H
#define LOG_H

#include "../cfunction.h"

class Log : public CFunction
{
public:
    Log();
    virtual ~Log();
    virtual RealFunction* derivative();
    virtual RealFunction* clone();
protected:
private:
};


#endif // LOG_H

