#include "lib.h"
#include <iostream>

float f(float a[], int d1){
    float temp[1]{0}, temp1[1], temp2[1];
    if (a[0]>=a[d1-1]){
        temp1[0]=a[0];
    }else{
        temp1[0]=a[d1-1];
    }
    for (int i = 0; i < d1-1; i++) {
        if (temp[0]>=a[i] and a[i+1]){
            temp2[0]=temp[0];
        }
        if (a[i]>a[i+1]){
            temp[0]=a[i];
        } else{
            temp[0]=a[i+1];
        }
    }
    if (temp[0]<temp1[0]){
        temp[0]=temp1[0];
    }
    if (temp[0]<temp2[0]) {
        temp[0] = temp2[0];
    }
    return temp[0];
}
