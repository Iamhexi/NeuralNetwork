#include "Neuron.hpp"

Neuron::Neuron()
{
    this->bias = 1;
    this->weights.clear();
}

void Neuron::attachInput(float value, float weight)
{
    this->weights.push_back(weight);
    this->inputs.push_back(value);
}

bool Neuron::runThresholdFunction(int sumOfInputs)
{
    return std::max(0, sumOfInputs);
}

float Neuron::sumUp()
{
    float sum = 0;
    unsigned int index = 0;
    for (float inputValue: this->inputs){
        sum += inputValue * this->weights.at(index);
        index++;
    }
    sum += bias;
    return sum;
}

void Neuron::setBias(float bias)
{
    this->bias = bias;
}

void Neuron::setWeight(unsigned int weightId, float value)
{
    if (value >= -1 && value <= 1)
        this->weights.at(weightId) = value;
    else
        std::cout << "Incorrect value of weight was attempted to be set!\n";
}

void Neuron::setWeights(std::vector <float> weights)
{
    this->weights = weights;
}

float Neuron::computeOutput()
{
    float sum = this->sumUp();
    return this->runThresholdFunction(sum);
}
