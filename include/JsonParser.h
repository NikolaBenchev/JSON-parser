#include<iostream>
#include<string>
#include<fstream>

class JsonParser {
    public:
        JsonParser();
        ~JsonParser();
        void run(); 
    private:
        void processInput(std::string inputLine);
        void validate(std::string fileName);
};