#include <iostream>

class Singleton
{
    private:
        static Singleton* instance;
        Singleton();
    public:
        static Singleton* getInstance();
};

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }

    return instance;
}

Singleton::Singleton(){}

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();
    Singleton* s3 = Singleton::getInstance();


    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
}