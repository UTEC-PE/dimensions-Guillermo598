#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {      
    int operator()(int* coordinates, int* sizes, int dimensions) {
        int n = 0;
        for (int i = dimensions - 1; i >= 0; i--) {
            n *= sizes[i];
            n += coordinates[i];
        }
        return n;
    }
};

struct Integer {
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[]) {
    int DimSize[3] = {2, 2, 2};
    Vector<Integer> test(3, DimSize);
    system("pause");
    return EXIT_SUCCESS;
}