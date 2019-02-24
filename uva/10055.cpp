#include<stdio.h>
int main(){
 long long int tan, zih;
 while(scanf("%lld%lld", &tan, &zih) != EOF){
 if(tan > zih)
    printf("%lld\n", tan - zih);
 else
    printf("%lld\n", zih - tan);
 }
 return 0;
}
