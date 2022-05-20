#pragma once
#include "IBaseCommand.h"
class DivideCommand :
    public IBaseCommand
{
    virtual float Execute(float num1, float num2);
};

