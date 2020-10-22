#include "Network.hpp"

Network::Network(unsigned int layers)
{
    for (unsigned int i = 0; i < layers; i++)
        this->createLayer();
}

void Network::createLayer(){
    std::vector <Neuron*> newLayer;
    this->layers.push_back(newLayer);
}

void Network::addNeuron(float layerId, Neuron* neuron)
{
    this->layers.at(layerId).push_back(neuron);
    this->numberOfNeurons++;
}

float Network::getFinalProbability()
{
    unsigned int numberOfLayers = this->layers.size();
    if (this->layers.at(numberOfLayers-1).size() == 1){
        Neuron** lastNeuron = &this->layers.at(numberOfLayers-1).at(0);
        return (**lastNeuron).computeOutput();
    }

    else {
        std::cout << "There must be exactly one neuron in the last layer of network!";
        return -1;
    }
}
