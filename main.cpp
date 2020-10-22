#include "Network.hpp"

int main()
{
    Network net(2);
    Neuron n1, n2, n3;
    net.addNeuron(0, &n1);
    net.addNeuron(0, &n2);
    net.addNeuron(1, &n3);

    // I need to make network connect neurons in different layers automatically with each other

    std::cout << net.getFinalProbability();
    return 0;
}
