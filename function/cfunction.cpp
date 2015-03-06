#include "cfunction.h"
#include "math.h"
#include "invalidfunction.h"


CFunction::CFunction(CFunc func,const std::string& name) : m_func(func), m_name(name)
{

}

CFunction::~CFunction()
{

}


void CFunction::display()
{
    std::cout << m_name << "(x)";
}
double CFunction::operator()(double x)
{
    return m_func(x);
}

