#include <stdio.h>
main()
{
	int set;
    printf("Please Select Your Case ( 1 2 3 4 5 ) : ");
    scanf("%d",&set);
    switch (set)
    { 
                  case 1 : 	
                  			int num1,num2,num3;
				  			printf("Please Enter your Number1: ");
				  			scanf("%d",&num1);
				  			printf("Please Enter your Number2: ");
				  			scanf("%d",&num2);
				  			printf("Please Enter your Number3: ");
				  			scanf("%d",&num3);
							if(num1>num2){
								if (num2>num3){
								printf("Max = %d | Min = %d",num1,num3);
							}else{
								printf("Max = %d | Min = %d",num1,num2);
							}
							}else if(num2>num1){
							if (num1>num3){\
								printf("Max = %d | Min = %d",num2,num3);
							}else{
								printf("Max = %d | Min = %d",num2,num1);
							}	
							}else if(num3>num1){
							if (num1>num2){
								printf("Max = %d | Min = %d",num3,num2);
							}else{
								printf("Max = %d | Min = %d",num3,num1);
							}		
							}else if (num1>=num2){
							if(num1>num3){
								printf("Max = %d | Min = %d",num1,num3);
							}else{
								printf("Max = %d | Min = %d",num3,num1);
							}
							}else if (num2>=num3){
							if(num2>num1){
								printf("Max = %d | Min = %d",num2,num1);
							}else{
								printf("Max = %d | Min = %d",num1,num2);
							}
							}else if (num1>=num3){
							if(num1>num2){
								printf("Max = %d | Min = %d",num1,num2);
							}else{
								printf("Max = %d | Min = %d",num2,num1);
							}
							}break;
                  case 2 : 	int score_of_student;
	
							printf("Please Enter your score = ");
							scanf("%d",&score_of_student);
							if(score_of_student>=80 && score_of_student<=100){
								printf("Grade = A");
							}else if (score_of_student<80 && score_of_student>=75){
								printf("Grade = B+");
							}else if (score_of_student<75 && score_of_student>=70){
								printf("Grade = B");
							}else if (score_of_student<70 && score_of_student>=65){
								printf("Grade = C+");
							}else if (score_of_student<65 && score_of_student>=60){
								printf("Grade = C");
							}else if (score_of_student<60 && score_of_student>=55){
								printf("Grade = D+");
							}else if (score_of_student<55 && score_of_student>=50){
								printf("Grade = D");
							}else if (score_of_student<50 && score_of_student>=0){
								printf("Grade = F");
							}else if (score_of_student<0 || score_of_student>100){
								printf("Error Enter score 0-100 ");
							}break;
                  case 3 : 	int number1,number2,answer;
							printf("Please Enter your Number1 : ");
				  			scanf("%d",&number1);
				  			printf("Please Enter your Number2 : ");
				  			scanf("%d",&number2);
							answer=number1+number2;
							printf("Plus is %d",answer);	
							break;
		  case 4 :	int number_multiply,count,multiple;
				  			printf("Please Enter your Number : ");
				  			scanf("%d",&number_multiply);
							for (count=1; count<=12; count++){
								multiple=number_multiply*count;
				  			printf("%dx%d=%d\n",number_multiply,count,multiple);
							}break;
		  case 5 :	int Count;
				  			printf("Prime Numer is : ");
				  			for(Count=1; Count<=30; Count++){
				  				if((Count==1 || Count%2==0 ||Count%3==0 ||Count%5==0 ||Count%7==0) && ( Count!=2 && Count!=3 && Count!=5 && Count!=7)){
				  					continue;
								  }
								  printf("%d  ",Count);
							}break;
                  default : printf("\nError Please Enter your Number 1-5 ");
    }
    
    return 0;
}

