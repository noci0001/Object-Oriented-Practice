#include <string.h>
#include <iostream>
#include <fstream>

std::string getname(std::string filename);
void substituteInstance(std::string filename, std::string s1, std::string s2);

std::string getname(std::string filename) {
    std::string ret = filename + ".replace";
    return (ret);
}

int main(int argc, char **argv) {
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        std::ifstream sourceFile(filename, std::ios::binary);
        if (!sourceFile.is_open())
            return (1);

        std::string destFileName = getname(filename);
        std::ofstream destFile(destFileName, std::ios::binary);
        if (!destFile.is_open())
            return (1);

        std::string line;
        while (std::getline(sourceFile, line)) {
            size_t index = 0;
            while ((index = line.find(s1, index)) != std::string::npos) {
                line = line.substr(0, index) + s2 + line.substr(index + s1.length());
                index += s2.length();
            }
            destFile << line << std::endl;
        }

        sourceFile.close();
        destFile.close();
    }
    return (0);
}