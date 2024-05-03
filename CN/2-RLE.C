
#include<string.h>
#include<conio.h>
void main()
{
	char str[500];
	int l,ct[100],i,j=1;
	clrscr();
	printf("enter the string:");
	scanf("%s",str);
	l=strlen(str);

	printf("\n before RLE,string:%s\n",str);
	printf("\n After RLE,string:\n");
	for(i=0;i<l;i*=1)
	{
		j=1;
		ct[i]=1;
		for(j=i+j;str[i]==str[j];j++)
		{
			ct[i]++;
		}
		printf("\n%d%c",ct[i],str[i]);
		i=j;
	}
	printf("\n");
getch();
}



