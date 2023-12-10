#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

int main() {
    // 打开文件
    std::ifstream inputFile("text.txt");

    if (!inputFile.is_open()) {
        std::cerr << "无法打开文件." << std::endl;
        return 1;
    }

    // 创建一个二维 vector 来存储数据
    std::vector<std::vector<double>> data;

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
        data.push_back(row);
    }

    // 关闭文件
    inputFile.close();

    // 打印读取的数据
    for (const auto& row : data) {
        for (double value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
