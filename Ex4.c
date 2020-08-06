#include<stdio.h>
#include<stdlib.h>

int main(){
int i,num,h = 0,t = 0;
printf("Tossing\n");
for(i = 0;i < 3;i++){
num=rand();
if(num%2 == 0){
printf("R %d:　Head\n", i+1);
h++;
}
else{
printf("R %d:　Tails\n", i+1);
t++;
}
}
printf("H:%d T:%d",h,t);
if(h>t){
printf("You win");
}
else{
printf("You lose");
}
return 0;
}
