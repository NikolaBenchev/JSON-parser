#include "../include/JsonParser.h"
#include <string.h>
#include<vector>

JsonParser::JsonParser() {

}

JsonParser::~JsonParser() {

}

void JsonParser::run() {
    while (true) {
        std::string input;
        std::cout << "JsonParser$ ";
        getline(std::cin, input);
        this->processInput(input);
    }
}
void JsonParser::processInput(std::string inputLine) {
    std::vector<std::string> params;

    size_t pos = inputLine.find(" "),
           startPos = 0;

    std::string currWord = inputLine.substr(startPos, pos - startPos);
    while (pos != std::string::npos) {
        startPos = pos + 1;
        pos = inputLine.find(" ", startPos);
        currWord = inputLine.substr(startPos, pos - startPos);
        params.push_back(currWord);
    }
    std::cout << currWord << std::endl;
}

void JsonParser::validate(std::string fileName) {
    std::string currLine;

    std::ifstream file(fileName);

    while (getline(file, currLine)) {
        std::cout << currLine << std::endl;
    }
}
