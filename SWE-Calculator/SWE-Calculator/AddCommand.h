#pragma once
#include "IBaseCommand.h"
class AddCommand :
    public IBaseCommand
{
    virtual float Execute(float num1, float num2);
};

