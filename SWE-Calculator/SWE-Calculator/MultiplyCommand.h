#pragma once
#include "IBaseCommand.h"
class MultiplyCommand :
    public IBaseCommand
{
    virtual float Execute(float num1, float num2);
};

