
# include<stdio.h>
# include<stdbool.h> // boolen data type true or false for use this line


bool DivisiableByThreeAndFive(int iNo)
{
	if(iNo %3 == 0)
	{
		if(iNo % 5 ==0)
		{
			return true;
		 }
		
		
	
	else
	{
		printf("inside else \n");
		return false;
	}
	}
	else 
	{
		printf("inside else");
		return false;
		
	}
    
}  

int main()
{
	
	int iValue =0;
	bool bRet =false;
	
	printf("Enter nunmber : \n");
	scanf("%d",&iValue);

	
	bRet = DivisiableByThreeAndFive(iValue);
	if(bRet == true)
	{
		printf("Number is divisible by 3 and 5\n");
	}
    else
		{
         	printf("Number is not divisible by 3 or 5\n");
			
		}
	
	return 0;
	
}