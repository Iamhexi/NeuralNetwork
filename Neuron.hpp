#include <iostream>
#include <vector>
#include <algorithm>

class Neuron {
  private:
    std::vector <float> weights; //range <-1,1>
    std::vector <float> inputs; // defines number of input neurons
    float bias; // any rational number, added not weighted to weighted sum of inputs
  public:
    Neuron();
    void attachInput(float value, float weight = 1);
    float computeOutput();

    void setBias(float bias);
    void setWeight(unsigned int weightId, float value);
    void setWeights(std::vector <float> weights);

  private:
    bool runThresholdFunction(int sumOfInputs);
    float sumUp();
};
