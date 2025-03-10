// Your code here...
#include <stdio.h>


int fibseries(int i){
    if (i==0 || i==1){
        return i;
    }
    else {
        return fibseries(i-1)+fibseries(i-2);
    }
    return 0;

}