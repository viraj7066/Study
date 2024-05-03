
#include<stdio.h>
#include<math.h>
int main()
{
	int p,q,n,phi,d,e,CT,PT,i,j;
	printf("\n enter two prime No.:");
	scanf("%d%d",&p,&q);
	n=p*q;
	phi=(p-1)*(q-1);
	printf("\n choose e such that it relativaly prime to %d",phi);
	scanf("%d",&e);
	for(d=1;d<phi;d++)
	{
		if((d*e)%phi==1)
		break;
	}
	printf("\n the private key is:{%d,%d}",d,n);
	printf("\n the public key is:{%d,%d}",e,n);
	printf("\n enter the plaintext(PT):");
	scanf("%d",&PT);
	CT=1;
	for(i=0;i<e;i++)
	CT=CT*PT%n;
	printf("\n after encryption ciphertext(CT):%d",CT);
	PT=1;
	for(i=0;i<d;i++)
	PT=PT*CT%n;
	printf("\n after decryption plaintext(PT):%d \n",PT);
	return(0);
}

