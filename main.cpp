#include <iomanip>
#include "function/polynomial.h"
#include "function/sum.h"
#include "function/multiplication.h"
#include "function/composition.h"
#include "function/constant.h"
#include "function/cfunction.h"
#include "function/math/log.h"
#include "function/math/sin.h"
#include "function/math/cos.h"
#include "function/pow.h"
#include <math.h>
int main()
{
    RealFunction* stc = new Power(new Sin, new Cos);
    RealFunction* drv = stc->derivative();
    stc->display();
    std::cout << std::endl;
    drv->display();
    std::cout << std::endl;
}
