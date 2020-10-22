#include "Neuron.hpp"

class Network {
  private:
      unsigned int numberOfNeurons = 0;
      std::vector <std::vector<Neuron*>> layers;
  public:
      Network(unsigned int layers);
      void addNeuron(float layerId, Neuron* neuron);
      float getFinalProbability();
  private:
     void createLayer();
};
