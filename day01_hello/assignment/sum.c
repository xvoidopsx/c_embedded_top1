#include "sum.h"

int SumEven(int n) {
    int sum = 0;
    int i;
    
    for (i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}