#include "Neuron.hpp"

class DoubleInputNeuron : public Neuron
{
    public:
        float computeOutput(float inputs[], unsigned int inputsNumber);
        DoubleInputNeuron(float weight = 0.2, float bias = 0);
};
