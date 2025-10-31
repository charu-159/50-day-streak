//reverse a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter a string:");
    scanf("%s",str);

    int n=strlen(str);
    for(int i=0;i<n/2;i++){
        char temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
    printf("reversed string:%s\n",str);
        return 0;

}