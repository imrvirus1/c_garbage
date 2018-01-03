#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp_in, *fp_out;

    char *input_file = "pic.jpg";
    char *output_file = "piccopy.jpg";

    int ch;

    fp_in = fopen(input_file, "rb");

    if(fp_in == NULL){

        perror("can't open this file\n");
        return EXIT_FAILURE;
    }

    fp_out = fopen(output_file, "wb");

    while(1){
        ch = fgetc(fp_in);
        if(ch == EOF){
            break;
        }
        putc(ch, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
