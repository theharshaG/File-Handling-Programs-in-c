#include<stdio.h>

int main()
{
    FILE *fp;

    char name[20];
    int marks;

    fp=fopen("student.txt","r");

    fscanf(fp,"%s%d",name,&marks);

    printf("Name=%s\n",name);

    printf("Marks=%d\n",marks);

    fclose(fp);

    return 0;
}
