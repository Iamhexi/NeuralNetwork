#include "DoubleInputNeuron.h"

DoubleInputNeuron::DoubleInputNeuron(float weight, float bias)
{
    this->set(weight, bias);
}

float DoubleInputNeuron::computeOutput(float inputs[], unsigned int inputsNumber)
{
    float nums[inputsNumber];
    for (int i=0; i<inputsNumber;i++)
        nums[i] = inputs[i];
    float sum = this->sumUp(nums, inputsNumber);
    return this->runThresholdFunction(sum);
}
