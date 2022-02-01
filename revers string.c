#include<stdio.h>
 int main(){
     int i,n=0,m=0;
     char str[100],c;
     char *p,*q;
 printf("enter sentence\n");
 gets(str);
 p=str;

 while(*(p+n)!='\0'){
 n++;
 }
 q=&str[n-1];
 for(i=0;i<n/2;i++){
    c=*p;
    *p=*q;
    *q=c;
    *p++;*q--;

 }
 printf("%s\n",str);
p=str;
q=str;

  for(i=0;i<n+1;i++){
        q=&str[i];
    if(*q==' '||*q=='\0'){
            int o;
            q=&str[i-1];
    for(o=1;o<=(i+1-m)/2;o++){
    c=*p;
    *p=*q;
    *q=c;
    p++;q--;
    }
    m=i+1;
   p=&str[m];
    q=&str[i];
    }
   }
 printf("%s\n",str);
 }
