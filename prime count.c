#include<stdio.h>

//prime function

int prime(int n){

    int i;

    if(n<2){
        return 0;
    }

    if(n==2){
        return 1;
    }


    for(i=2;i<n;i++){

        n%i;

        if(n%i==0){
            return 0;
        }
    }

    return 1;

}

//main function

int main()

{
    int test,i,start,end,count;

    int j,h;            //this is for run loop

    printf("How many time you want to run this program: ");

    scanf("%d",&h);

    for(j=1;j<=h;j++){              //this loop is run program loop

        printf("%d.\nStart number:",j);
        scanf("%d",&start);

        printf("End number:");
        scanf("%d",&end);

        if(start>end){
            printf("Your input start is bigger then end it's not possible\n\n");
        }

        else{
            for(i=start,count=0;i<=end;i++){          //this loop is for test all prime number

                test=prime(i);

                if(test==1){

                    count=count+1;          //count +1 for count prime number between
                }

            }

            printf("\nTotal prime number between %d to %d : %d\n\n",start,end,count);
        }
    }


    return 0;
}
