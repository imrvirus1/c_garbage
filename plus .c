#include<stdio.h>

int main()
{
    int arr[10000], i, n, c_pos = 0, c_neg = 0, c_zero = 0;

    double positive, negative, zero;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);           //input n number with arr[i]

        if (arr[i] > 0)
            c_pos++;                //here count all positive number

        else if (arr[i] < 0)
            c_neg++;                //here count all negative number

        else
            c_zero++;               //here count all zero
    }

    positive = c_pos / (double) n;      // calculate all positive / n
    negative = c_neg / (double) n;      //calculate all negative / n
    zero = c_zero / (double) n;         // calculate all zero / n

    printf("%.6lf\n%.6lf\n%.6lf\n", positive, negative, zero);          //print the output here for all


    return 0;
}
