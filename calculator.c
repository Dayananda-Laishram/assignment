#include<stdio.h>
int main()
{
 char oper;
 int no1,no2,result;
 printf("Enter the value of no1 \n");
 scanf("%d",no1);
 printf("enter the value of no2 \n");
 scanf("%d",no2);
 printf("what operation would you like to operate ?");
 printf("1. for addition type a\n 2. for substraction type b");
 scanf("%c",oper);
 switch(oper)
{
	case a;
	result=no1+no2;
	break;
	case b;
	result=no1-no2;
	break;

}
return 0;
}

