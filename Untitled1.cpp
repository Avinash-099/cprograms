#include<stdio.h>
#define MAX_LEN 1024
int main()
{
char ch;
int char_count = 0;
int flag = 0;
char file_name[MAX_LEN];
FILE *fp;
printf("enter the file name:");
scanf("%s",file_name);
fp = fopen(file_name,"r");
if(fp==NULL)
{
printf("unable to open file.\n");
}
while((ch = fgetc(fp)) != EOF)
{
char_count++;
if(ch == '@')
{
flag++ ;
}
}
if(flag>0)
{
printf("Accepted.\n");
}
else
{
printf("Rejected.\n"); ;
}
}

