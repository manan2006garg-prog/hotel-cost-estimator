#include <stdio.h>
int main(void){int nights;double rate;printf("Nights and nightly rate: ");if(scanf("%d %lf",&nights,&rate)!=2||nights<1||rate<0)return 1;double room=nights*rate,fee=room*.08;printf("Room: %.2f\nService fee: %.2f\nTotal: %.2f\n",room,fee,room+fee);return 0;}
