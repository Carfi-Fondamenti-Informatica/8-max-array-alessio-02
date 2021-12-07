#include "lib.h"

void f1(float a[], int d1){
    for (int i = 0; i < d1; i++) {
        if (a[0]<a[i]){
            a[0]=a[i];
        }
    }
}
