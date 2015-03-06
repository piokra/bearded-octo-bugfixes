#include "../polynomial.h"
#include "../multiplication.h"
#include "log.h"
#include <math.h>
Log::Log() : CFunction(log,"ln")
{

}

Log::~Log()
{

}



RealFunction* Log::derivative()
{
    return new Polynomial(-1);
}

RealFunction* Log::clone()
{
    return new Log();
}
