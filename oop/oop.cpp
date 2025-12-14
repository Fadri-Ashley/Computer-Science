#include <iostream>
using namespace std;

// Object Oriented Programming


class MyClass {
    public:
        int num;
        string texto;
};

int main() {

    MyClass myObj;

    myObj.num = 37;
    myObj.texto = "Coffee please";

    cout << myObj.num << endl;
    cout << myObj.texto << endl;


    return 0;
}