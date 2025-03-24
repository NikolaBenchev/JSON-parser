#include<iostream>
#include<vector>
#include "./Object.h"

class ArrayObject : public Object {
    public:
        void print(int numberOfTabs = 0) {
            for(int i = 0; i < numberOfTabs; i++) {
                std::cout << '\t';
            }
            std::cout << '[' << std::endl;
            for(Object* currChild : children) {
                currChild->print(numberOfTabs + 1);
            }
            for(int i = 0; i < numberOfTabs; i++) {
                std::cout << '\t';
            }
            std::cout << ']' << std::endl;
        }
        bool addChild(Object* value) {
            children.push_back(value);
        }
        Object* operator[](int index) {
            if(index >= children.size()) {
                return nullptr;
            }
            return children[index];
        }
    private:
        std::vector<Object*> children;
};