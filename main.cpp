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
    int *var = new int(12);
    delete[] var;
    return 0;
 }