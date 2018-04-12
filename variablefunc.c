#include<stdio.h>

int valid_variable(char * str);

int flag = 0;

int main()
{
    char var[31];

    gets(var);

    valid_variable(var);        //here Call the function

    if (flag == 0) {
        printf("This variable is Valid\n");
    }

    else {
        printf("This is not Valid variable\n");
    }

    return 0;
}

/* This is the variable check function */

int valid_variable(char * str)
{
    int i;

    char str2[11][15] = {"break", "char", "double", "int", "float", "do", "if", "while", "for", "switch"};

    for (i = 0; i < 10; i++) {
        if (strcmp(str, str2[i]) == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {

        if (isalpha(str[0]) != 0 || str[0] == '_') {

            for (i = 1; str[i] != '\0'; i++) {
                if(isalnum(str[i]) == 0 && str[i] != '_') {
                    flag = 1;
                    break;
                }
            }
        }
        else {
            return flag = 1;
        }

    }
}
