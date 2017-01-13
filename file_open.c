                                                                   
                                             
#include<stdio.h>
char file_name[20];
FILE *fp;
//enter name of file to open

void main()
{int ch;
printf("enter file name to open\n");
scanf("%s",file_name);
fp=fopen(file_name,"r+");

if(fp==NULL)
	{
	printf("invalid file:exiting the program\n");
	exit(0);
	}
else
	printf("opening your file %s\n",file_name);

//show content of file

ch=fgetc(fp);

while(ch!=EOF)
	{
	putchar(ch);
	ch=fgetc(fp);
	}

//check if file reading is scucess or not
if (feof(fp))
printf("file reading done\n");
else
printf("something went wrong");

}
