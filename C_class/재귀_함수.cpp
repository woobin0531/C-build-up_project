#include <stdio.h>
int fn(int n){
    if(n<=1)
        return 1;
    else
        return n*fn(n-1);
}
int main(){
    print("%d", fn(3));
    retunr 0;
}
# 6