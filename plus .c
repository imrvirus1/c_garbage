#include<stdio.h>

int main()
{
    int arr[10000], i, n, c_pos = 0, c_neg = 0, c_zero = 0;

    double positive, negative, zero;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            c_pos++;

        else if (arr[i] < 0)
            c_neg++;

        else
            c_zero++;
    }

    positive = c_pos / (double) n;
    negative = c_neg / (double) n;
    zero = c_zero / (double) n;

    printf("%.6lf\n%.6lf\n%.6lf\n", positive, negative, zero);


    return 0;
}
