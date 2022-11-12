#include <bits/stdc++.h>
using namespace std;
void dayOfProgrammer(int year);

int main(){
	int year;
	scanf("%d",&year);
	dayOfProgrammer(year);
	return(0);
}

void dayOfProgrammer(int year)
{
	if(year < 1918)
	{
		if(year%4 == 0)
		{
			printf("12.09.%d",year);
		}
		else {
			printf("13.09.%d",year);
		}
	}
	else if( year > 1918 )
	{
		if((year%400==0)||(year%4==0)&&(year%100!=0))
		{
			printf("12.09.%d",year);
		}
		else {
			
			printf("13.09.%d",year);
		}
	}
	else 
	{

			printf("26.09.%d",year);
	}
}
