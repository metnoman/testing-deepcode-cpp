#include <iostream>
#include <vector>

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

    std::vector<MyInt> myints;

    MyInt myint;
    return myint.value();
 }