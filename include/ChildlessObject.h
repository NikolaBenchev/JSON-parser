#include<string>

template<typename T>
class ChildlessObject : public ObjectType {
    public:
        void print(int numberOfTabs = 0) {
            for(int i = 0; i < numberOfTabs; i++) {
                std::cout << '\t';
            }
            std::cout << value << std::endl;
        }
    private:
        T value;
};