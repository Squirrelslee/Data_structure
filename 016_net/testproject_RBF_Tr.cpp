#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>
// Radial Basis Function (RBF) neuron
class RBFNeuron {
public:
    RBFNeuron(int inputSize) {
        weights.resize(inputSize);
        for (int i = 0; i < inputSize; i++) {
            weights[i] = static_cast<double>(rand()) / static_cast<double>(RAND_MAX);
        }
        // 初始化σ值
        sigma = 1.0; // 你可以根据需要设置合适的初始值
    }

    double activate(const std::vector<double>& inputs) {
        double sum = 0.0;
        for (int i = 0; i < inputs.size(); i++) {
            sum += (inputs[i] - weights[i]) * (inputs[i] - weights[i]);
        }
        return exp(-sum / (2 * sigma * sigma));
    }

    void setSigma(double sigma) {
        this->sigma = sigma;
    }

private:
    std::vector<double> weights;
    double sigma;
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

        weights.resize(hiddenNeurons, std::vector<double>(outputSize));
        for (int i = 0; i < hiddenNeurons; i++) {
            for (int j = 0; j < outputSize; j++) {
                weights[i][j] = static_cast<double>(rand()) / static_cast<double>(RAND_MAX);
            }
        }
    }

    void train(const std::vector<std::vector<double>>& trainingData, const std::vector<std::vector<double>>& targetOutput) {
        // 实现 K-means 聚类来确定 RBF 神经元的中心
        // 计算 σ 值，根据聚类结果为每个神经元设置合适的中心点和 σ 值

        // 对于每个训练样本
        for (int i = 0; i < trainingData.size(); i++) {
            std::vector<double> input = trainingData[i];
            std::vector<double> output = targetOutput[i];

            // 计算隐藏神经元的激活值
            std::vector<double> activations(hiddenLayer.size());
            for (int j = 0; j < hiddenLayer.size(); j++) {
                activations[j] = hiddenLayer[j].activate(input);
            }

            // 更新输出层的权重
            for (int j = 0; j < hiddenLayer.size(); j++) {
                for (int k = 0; k < outputSize; k++) {
                    weights[j][k] += learningRate * (output[k] - weights[j][k]) * activations[j];
                    std::cout << weights[j][k] << ' ';
                }

            }
                std::cout << std::endl;
        }
    }

    std::vector<double> predict(const std::vector<double>& inputs) {
        std::vector<double> output(outputSize, 0.0);

        for (int i = 0; i < hiddenLayer.size(); i++) {
            double activation = hiddenLayer[i].activate(inputs);
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
    std::vector<std::vector<double>> weights;
    double learningRate = 0.001;
};

int main() {
    srand(time(0)); // 用于随机初始化

    // 创建一个 RBF 神经网络，包括 2 个输入神经元，3 个隐藏 RBF 神经元，和 2 个输出神经元
    RBFNetwork network(2, 3, 1);

    // 示例训练数据和目标输出
    std::vector<std::vector<double>> trainingData;
    std::vector<std::vector<double>> targetOutput;
    std::ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        std::cerr << "无法打开文件." << std::endl;
        return 1;
    }
    // 逐行读取文件
    std::string line;
    while (std::getline(inputFile, line)) {
        std::vector<double> row;
        std::istringstream iss(line);
        double value;

        // 从每行中逐个读取数字，以空格分隔
        while (iss >> value) {
            row.push_back(value);
        }

        // 将每行的数据添加到二维 vector 中
        trainingData.push_back(row);
    }
    // 关闭文件
    inputFile.close();

    std::ifstream inputFile_("output.txt");
    if (!inputFile_.is_open()) {
        std::cerr << "无法打开文件." << std::endl;
        return 1;
    }
    // 逐行读取文件
    std::string line_;
    while (std::getline(inputFile_, line_)) {
        std::vector<double> row_;
        std::istringstream iss(line_);
        double value_;

        // 从每行中逐个读取数字，以空格分隔
        while (iss >> value_) {
            row_.push_back(value_);
        }

        // 将每行的数据添加到二维 vector 中
        targetOutput.push_back(row_);
    }
    // 关闭文件
    inputFile_.close();

    // 使用训练数据来训练网络
    for (int epoch = 0; epoch < 30; epoch++) {
        network.train(trainingData, targetOutput);
    }

    // 使用输入数据进行测试
    std::vector<double> input = {{0.0999999989391510,-0.000167227961868832}};
    std::vector<double> output = network.predict(input);

    std::cout << "Network output: ";
    for (float val : output) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
