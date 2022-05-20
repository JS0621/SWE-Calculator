#pragma once
#include "IBaseCommand.h"
class SubtractCommand :
    public IBaseCommand
{
    virtual float Execute(float num1, float num2);
};

