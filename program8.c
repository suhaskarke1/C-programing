////////////////////////////////////////////////
// Step to follow while programming
//////////////////// ///////////////////////////

//Step 1 Understand the problem statement
//Step 2 write  the algorithm
//Step 3 Decide the programming language
//Step 4 write the program 
//Step 5 test the program
/////////////////////////////////////////////////////////////////////////// 
//Problem Statement :Accept number from user and check whether it is divisiable by 5 or not
// Input :23 
// Output :23 is not divisiable by 5
// Input :-25
// output :-25 is divisiable by 5
// Input :-20
// output :-20 is divisiable by 5
/////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Alogrithm
/////////////////////////////////////////////////////////
/* 
     START
      Accept number from user as No
	  Divided that No by 5 and check the value of reminder
      If the value is 0
	       Then display as No is divisiable by 5
		   Otherwise 
		      Display as No is not divisiable by 5
			  END
			  */



# include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//  Function Name : DivisiableByFive
//  Description : To check whetehr input is divisiable 5 or not
//  Input :  Integer
//  Output :  Integer
//  Author :  Suhas Sanjay Karke (Sk10011)
//   Date  :  12/10/2022
//
////////////////////////////////////////////////////////////
int DivisiableByFive(int iNo)
{
	int iAns = 0;
	iAns = iNo % 5;
	
	if(iAns == 0)
	{
		return 1;
		
	}
	else
	{
		return 0;
	}
}



/////////////////////////////////////////////////
// Entery point of the Application
/////////////////////////////////////////////////
int main()
{
	int iValue =0;
	int iRet =0;
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	iRet = DivisiableByFive(iValue);
	if (iRet == 0)
	{
		printf("%d is not divisiable by 5\n",iValue);
		
	}
	else
	{
		printf("%d is divisiable by 5 \n,",iValue);
	}
	
	return 0;
	
}