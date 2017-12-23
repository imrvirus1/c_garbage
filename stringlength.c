#include<stdio.h>


int main()

{
    char str[20];

    int length,i;

    gets(str);                      //gets(); funtion for input the string


    for(i=0,length=0;str[i]!='\0';i++){         //loop run before get the null '\0' character

        length =length+1;

    }


    printf("Length of %s is %d\n",str,length);

    return 0;

}
