#include<stdio.h>
int main(){
int t,z, total;
while(scanf("%d%d", &t, &z) == 2){
    total = t;
    while(t >= z){
        int renew = t / z;
        total = total + renew;
        t = renew + (t%z);
    }
    printf("%d\n", total);
}
return 0;
}
