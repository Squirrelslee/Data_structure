#include <iostream>
#include <vector>
#include <cmath>

// Radial Basis Function (RBF) neuron
class RBFNeuron {
public:
    RBFNeuron(int inputSize) {
        weights.resize(inputSize);
        for (int i = 0; i < inputSize; i++) {
            weights[i] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
        }
        bias = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
    }

    float activate(const std::vector<float>& inputs) {
        float sum = 0.0;
        for (int i = 0; i < inputs.size(); i++) {
            sum += (inputs[i] - weights[i]) * (inputs[i] - weights[i]);
        }
        return exp(-sum / (2 * sigma * sigma)) + bias;
    }

    void setSigma(float sigma) {
        this->sigma = sigma;
    }

private:
    std::vector<float> weights;
    float sigma;
    float bias;
};

// RBF Neural Network for multi-input, multi-output system
class RBFNetwork {
public:
    RBFNetwork(int inputSize, int hiddenNeurons, int outputSize) {
        this->inputSize = inputSize;
        this->outputSize = outputSize;

        for (int i = 0; i < hiddenNeurons; i++) {
            RBFNeuron neuron(inputSize);
            hiddenLayer.push_back(neuron);
        }

        weights.resize(hiddenNeurons, std::vector<float>(outputSize));
        for (int i = 0; i < hiddenNeurons; i++) {
            for (int j = 0; j < outputSize; j++) {
                weights[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            }
        }
    }

    void train(const std::vector<std::vector<float>>& trainingData, const std::vector<std::vector<float>>& targetOutput) {
        // Implement the training algorithm (e.g., k-means clustering) to set RBF neuron parameters.
        // Adjust sigma, weights, and bias for each neuron in the hidden layer.
    }

    std::vector<float> predict(const std::vector<float>& inputs) {
        std::vector<float> output(outputSize, 0.0);

        for (int i = 0; i < hiddenLayer.size(); i++) {
            float activation = hiddenLayer[i].activate(inputs);
            for (int j = 0; j < outputSize; j++) {
                output[j] += activation * weights[i][j];
            }
        }

        return output;
    }

private:
    int inputSize;
    int outputSize;
    std::vector<RBFNeuron> hiddenLayer;
    std::vector<std::vector<float>> weights;
};

int main() {
    srand(time(0)); // Seed for random initialization

    // Create an RBF network with 2 input neurons, 3 hidden RBF neurons, and 2 output neurons
    RBFNetwork network(3, 3, 1);

    // Train the network using your training data

    // Test the network with input data
    std::vector<float> input = {0.899999999739735, -0.000110047515300428, -23.2658071404959};
    std::vector<float> output = network.predict(input);

    std::cout << "Network output: ";
    for (float val : output) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
