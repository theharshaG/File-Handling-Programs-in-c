#include<stdio.h>

int main()
{
    FILE *fp;

    fp=fopen("log.txt","a");

    fprintf(fp,"New log added\n");

    fclose(fp);

    return 0;
}
