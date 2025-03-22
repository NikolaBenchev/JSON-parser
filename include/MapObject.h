#include<vector>
#include<string>
#include "./Object.h"

class Map : public Object {
    public:
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