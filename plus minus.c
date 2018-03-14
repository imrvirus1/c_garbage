#include<stdio.h>



int main() {

    int n, *arr, m;         //here i declare a pointer *arr for array

    int i, count_pos, count_neg, count_zero;

    double positive, negative, zero;

    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int) * n);  //here use malloo() function for memory allocate

    for(i = 0; i < n; i++){

       scanf("%d", &arr[i]);            //here i input n number
    }

    count_pos = 0, count_neg = 0, count_zero = 0;

    for (i = 0 ; i < n; i++) {

        if(arr[i] > 0) {
            count_pos++;                //here i count all positive number
        }
        else if (arr[i] < 0) {

            count_neg++;                //here i count all negative number
        }

        else
            count_zero++;               //here i count all zero

    }

    positive = count_pos / (double)n;       //here calculate the total positive / n
    negative = count_neg / (double)n;       //here calculate the total negative / n
    zero = count_zero / (double)n;          //here calculate the total zero / n


    printf("%.6lf\n%.6lf\n%.6lf\n", positive, negative, zero);      //here print the output

    return 0;
}
