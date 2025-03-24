#include<iostream>
#include<string>
#include<fstream>
#include "./Object.h"

class JsonParser {
    public:
        JsonParser();
        ~JsonParser();
        void run(); 
    private:
        void processInput(std::string inputLine);
        void validate(std::string fileName);
        Object* parseFile(std::string fileName);
};