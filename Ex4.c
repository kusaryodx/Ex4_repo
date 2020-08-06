#include<stdio.h>
#include<stdlib.h>

int main(){
int i,num,h = 0,t = 0;
char str[8];
printf("Who are you?\n");
scanf("%s,str");
printf("Hello %s\n",str);
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
return 0;
}
