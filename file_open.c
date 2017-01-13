                                                                   
#include<string.h>                                             
#include<stdio.h>
char file_name[20];
FILE *fp;

//enter name of file to open

void main()
{
char ch;
int num_lines=0;
int num_key_words=0;
char keyword[5];

printf("enter file name to open\n");
scanf("%s",file_name);
fp=fopen(file_name,"r+");

if(fp==NULL)
	{
	printf("invalid file:exiting the program\n");
	exit(0);
	}
else
	printf("opening your file: %s\n",file_name);
	
	//enter keyword
	
	printf("enter keyword you want to open:\n");
	scanf("%s",keyword);

//show content of file

ch=fgetc(fp);

while(ch!=EOF)
	{
	
	putchar(ch);

	//count number of lines

	if(ch=='\n')
	num_lines=num_lines+1;
	
	ch=fgetc(fp);
	}

//check if file reading is scucess or not

if (feof(fp))
printf("file reading done\n");
else
printf("something went wrong");



printf("number of lines are %d\n",num_lines);
printf("number of keywords are %d\n",num_key_words);

}
