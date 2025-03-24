#include<iostream>
#include<vector>
#include<string>
#include "./Object.h"

class Map : public Object {
    public:
        void print(int numberOfTabs = 0) {
            for(int i = 0; i < numberOfTabs; i++) {
                std::cout << '\t';
            }
            std::cout << '{' << std::endl;
            for(KVP& currChild : children) {
                currChild.value->print(numberOfTabs + 1);
            }
            for(int i = 0; i < numberOfTabs; i++) {
                std::cout << '\t';
            }
            std::cout << '}' << std::endl;
        }
        bool addChild(std::string key, Object* value) {
            this->children.push_back({ key, value });
        }
        Object* operator[](std::string key) {
            for(KVP curr : this->children) {
                if(key == curr.key)
                    return curr.value;
            }
            return nullptr;
        }
    private:
        struct KVP {
            std::string key;
            Object* value;
        };

        std::vector<KVP> children;
};