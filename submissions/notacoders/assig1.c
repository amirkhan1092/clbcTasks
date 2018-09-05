#include<stdio.h>

int decimaltobinary(int decimalNo)
{
	int binaryNo[1001];
	int i=0;
	while(decimalNo>0)
	{
		binaryNo[i]=decimalNo%2;
		decimalNo=decimalNo/2;
		i++;
	}
	printf("The Binary Number for %d Decimal Number is :- ",decimalNo);
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",binaryNo[j]);
	}
	printf("\n");
	return 0;
}

int binarytodecimal(int binaryNo)
{
	int decimalNo=0,unitplacevalue;
	int base=1,temp=binaryNo;
	while(temp>0)
	{
		unitplacevalue=temp%10;
		temp=temp/10;
		decimalNo=decimalNo+unitplacevalue*base;
		base=base*2;
	}
	printf("Decimal Number for %d binary number is: %d \n",binaryNo,decimalNo);
 
	return 0;

}

int main()
{
	int option,binaryNo,decimalNo;
	printf("-------------------------This program is to find decimal number system to binary number system and vice-versa.------------------------\n\n\n");
	printf("Enter the option\n");
	printf("1.Enter 1 for binary to decinal number system\n2.Enter 2 for decimal to binary number system.\n");
	scanf("%d",&option);
	if(option==1)
	{
		printf("Enter the number which you want to compute\n");
		scanf("%d",&binaryNo);
		binarytodecimal(binaryNo);
	}
	else if(option==2)
	{
		printf("Enter the number which you want to compute\n");
		scanf("%d",&decimalNo);
		decimaltobinary(decimalNo);
	}
	else
		printf("Wrong input\n");

	return 0;	
}
