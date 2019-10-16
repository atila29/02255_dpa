#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define N 600
#define t 55
#define j 256

void main()
{
    FILE *fp = fopen("T4.dat", "r");

    FILE *fp_input = fopen("input4.dat", "r");

    const char delim[2] = ",";
    char *token;

    float T[N][t];

    unsigned char H[N][j];


    // Step 1
    int line_number = 0;
    if(fp != NULL)
    {
        char buffer[1000];
        while(fgets(buffer, sizeof buffer, fp) != NULL)
        {
            token = strtok(buffer, delim);
            for(int i = 0;i < t; i++)
            {


                T[line_number][i] = atof(token);


                if(i != t - 1) // delimited value
                {
                    printf("%s\t",token);
                    token = strtok(NULL, delim);
                } else {
                    printf("%s\n\n",token);
                }
            }
            line_number++;
        }
        fclose(fp);
    } else {
        perror("T4.dat");
    }

    printf("\nStep 2\n");

    // Step 2
    if(fp_input != NULL)
    {
        char buffer[5000];
        while(fgets(buffer, sizeof buffer, fp_input) != NULL)
        {
            token = strtok(buffer, delim);
            for(int i = 0; i < N; i++)
            {
                printf("%s\t",token);

                if(i != N - 1) // delimited value
                {

                    token = strtok(NULL, delim);
                } else {
                    printf("%s\n\n",token);
                }


//                T[line_number][i] = atof(token);
//
//
//                if(i == t - 1) // last buffer
//                {
//                    printf("%s\t",token);
//                    token = strtok(NULL, delim);
//                } else {
//                    printf("%s\n\n",token);
//                }
            }
        }
        fclose(fp_input);
    } else {
        perror("inputs4.dat");
    }



}