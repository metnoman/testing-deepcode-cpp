#include <iostream>

class MyInt {
public:
    int value() {
        return m_int;
    }
private:
    int m_int;
};

int main (int argc, char *argv[]) { 
    if(int *var = new int(12); var) {
        delete var;
    }
    MyInt myint;

    return myint.value();
 }