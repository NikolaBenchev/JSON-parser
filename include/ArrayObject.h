#include<vector>
#include "./Object.h"

class ArrayObject : public Object {
    public:
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