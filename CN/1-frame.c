#include<stdio.h>  
#include<string.h>
char input[10][20];
int get_input();
void make_frames(int);
int count_chars(int);

void main() 
	{
		int no_of_words=get_input();
		make_frames(no_of_words);
	}
	int get_input()
	{
		int answer;
		int i=0;
	do
	{
		printf("\n enter the words:-");
	 	scanf("%s",input[i]);
		fflush(stdin); 
		printf("\n do you want to continue(y:1/n:0)?:");
		scanf("%d",&answer);
		i++;
	}while(answer!=0);
	return(i);
	}

void make_frames(int num_words)
{
	int i=0;
	printf("\n the transmitted data:-\n\t");
	for(i;i<num_words;i++)
	{
		printf("%d%s",(count_chars(i)+1),input[i]);
		printf("\n\n");
	}
}

int count_chars(int index)
{
	int i=0;
	while(input[index][i]!='\0')
	i++;
	return(i);
}






