#include <iostream>
using namespace std;

class Dog{
    public:
        void bark();
};

void Dog::bark() {
    cout << "Woof!";
}

int main() {

    Dog BorderCollie;
    BorderCollie.bark();

    return 0;
}