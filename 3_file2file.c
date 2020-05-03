#include<stdio.h>
void main()
{
    char temp[255];
    FILE *fp;
    FILE *fp2;

    fp=fopen("text_from_arg.txt","r");
    fp2=fopen("text_from_file.txt","w");
    
    fgets(temp,255,fp);
    fputs(temp,fp2);

    fclose(fp);
    fclose(fp2);
}