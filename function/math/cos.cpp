#include "sin.h"
#include "../multiplication.h"
#include "../constant.h"
#include "cos.h"
#include <math.h>
Cos::Cos() : CFunction(cos,"cos")
{

}

Cos::~Cos()
{

}



RealFunction* Cos::derivative()
{
    return new Multiplication(new Constant(-1.),new Sin());
}

RealFunction* Cos::clone()
{
    return new Cos();
}
