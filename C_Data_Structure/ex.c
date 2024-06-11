//s-1:operand push into result
//s-2:if ( push into stack
//s-3:if ) check if stack is not empty and until ( pop all oprators for stack
//and push into the result
//s-4:if operator check with the priorites and push accordingly
//into either stack or result
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_size 50
//function operator
int operator1(char symbol)
{
	if(symbol=='^')
		return 3;
	else if((symbol=='*')||(symbol=='/'))
		return 2;
	else if((symbol=='+')||(symbol=='-'))
		return 1;
	else
		return -1;
}
//function to convert infix to postfix expression
int infixtopostfix(char input[])//input[]=a+b*c
{
	int i;
	int len=strlen(input);
	char result[20],stack[20];
	int j=0;//result index
	int sindex=-1;//stack index
	for(i=0;i<len;i++)
	{
		char symbol=input[i];
		if((symbol>='a'&& symbol<='z')||(symbol>='A'&& symbol<='Z'))
		{
			result[j++]=symbol;//result[0]=a,j=1
		}
		else if(symbol=='(')
		{
			stack[++sindex]=symbol;
		}
		else if(symbol==')')
		{
			while(sindex>=0 && stack[sindex]!='(')//'('!='('
			{
				result[j++]=stack[sindex--];
			}
			sindex--;//popping the'('
		}
		else
		{
			while(sindex>=0 && operator1(symbol)<=operator1(stack[sindex]))
			{
				result[j++]=stack[sindex--];
			}
			stack[++sindex]=symbol;
		}
	}
	while(stack[sindex]!=-1)
	{
		result[j++]=stack[sindex--];
	}
	result[j]='\0';
	printf("%s",result);
}
int main()
{
	char input[max_size];
	scanf("%s",input);
	infixtopostfix(input);
	return 0;
}