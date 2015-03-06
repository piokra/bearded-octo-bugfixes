#include "sin.h"
#include "../multiplication.h"
#include "cos.h"
#include <math.h>
Sin::Sin() : CFunction(sin,"sin")
{

}

Sin::~Sin()
{

}



RealFunction* Sin::derivative()
{
    return new Cos();
}

RealFunction* Sin::clone()
{
    return new Sin();
}
