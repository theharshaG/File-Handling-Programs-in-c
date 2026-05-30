#include<stdio.h>

int main()
{
    int marks;
    int highest=0;

    FILE *fp;

    fp=fopen("marks.txt","w");

    printf("Enter marks:\n");

    for(int i=0;i<3;i++)
    {
        scanf("%d",&marks);

        fprintf(fp,"%d\n",marks);
    }

    fclose(fp);

    fp=fopen("marks.txt","r");

    while(fscanf(fp,"%d",&marks)!=EOF)
    {
        if(marks>highest)
        {
            highest=marks;
        }
    }

    printf("Highest=%d",highest);

    fclose(fp);

    return 0;
}
