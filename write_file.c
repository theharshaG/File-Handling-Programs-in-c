#include<stdio.h>

int main()
{
    FILE *fp;

    fp=fopen("student.txt","w");

    fprintf(fp,"Name: Harsha\n");
    fprintf(fp,"Marks: 85\n");

    fclose(fp);

    printf("Data written successfully");

    return 0;
}
