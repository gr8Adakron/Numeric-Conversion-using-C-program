#include<stdio.h>
#include<string.h>
main(){
  int n, temp, a[50],a1[50], i=0, j,answer;
  int select,rem;
  void hexa( int select);
  void bin( int select);
  void hexatodec(int select);
  void bintodec(int select);
  do{
      printf("\n\n SELECT YOUR CONVERSION BY PRESSING THE NUMBER GIVEN TO EACH CONVERSION ::::\n\n\t 1.Convert DECIMAL to HEXADECIMAL :\n\t 2.Convert DECIMAL to BINARY :\n\t 3.Convert HEXADECIMAL to DECIMAL :\n\t 4.Convert BINARY to DECIMAL :\n\t");
      printf("\n\n\tENTER THE NUMBER OF YOUR CONVERSION:::===== ");
      scanf("%d", &select);
      switch (select){
	case 1:
  	  hexa(select);					 			
	break;
	case 2:
	  bin(select);								 			
	break;
        case 3:
	  hexatodec(select);
 	break;
 	case 4:
	  bintodec(select);
	break;
  	default:
 	 printf("Enter the correct choice::Please::");
  	break;
       }
   printf("\n\n\tDO YOU WISH TO PERFORM ANY MORE CONVERSIONS::\n\tTHAN PRESS '1' ELSE PRESS ANY KEY:: ");
   scanf("%d",&answer);
    }while(answer==1);
}



void hexa( int select)
{
 int  a[50],a1[50], i=0, j, rem,temp,n;
 printf("\n\tYou have selected:::::::::::::::::::::\n\n\t \n%d.CONVERT DECIMAL TO HEXADECIMAL NUMBERS:::::\n", select);
 printf("\n\tEnter the Decimal number to be converted into Hexadecimal:::::::::  ");
 scanf("%d", &n);
 temp=n;
 while (temp!= 0){
  a[i]=temp%16;
  i++;
  temp=temp/16;
 }
  printf("\n\tThe Number of time hexadecimal division has been performed::::\n\t\t%d", i);
  printf("\nHexadecimal Form of the %d::::=======\t", n);

  for(j=0; j<=i-1; j++){
 	 a1[i-j-1]=a[j];
 }
  for(j=0; j<=i-1; j++){
	switch (a1[j]){
 		 case 10:
 		 printf("\tA");
 		 break;
 		 case 11:
 		 printf("\tB");
 		 break;
 		 case 12:
 		 printf("\tC");
 		 break;
 		 case 13:
 		 printf("\tD");
 		 break;
 		 case 14:
 		 printf("\tE");
 		 break;
 		 case 15:
 		 printf("\tF");
 		 break;
 		 default:
 		 printf("\t %d",a1[j]);
 		 break;
	}
   }
}
void bin( int select){
 int  a[50],a1[50], i=0, j, rem,temp,n;
 printf("\n\tYou have selected:::::::::::::::::::::\n\n\t %d.CONVERT DECIMAL TO BINARY NUMBERS:::::\n", select);
printf("\n\tEnter the Decimal number to be converted into Binary:::::::::  ");
scanf("%d", &n);
temp=n;
while(temp!=0){
  a[i]=temp%2;
  i++;
  temp=temp/2;
 }
printf("The Number of time Binary division has been performed::::\n\t\t%d", i);
printf("\nBinary Form of the Decimal number %d::= ", n);
for(j=0; j<=i-1; j++){			
  a1[i-j-1]=a[j];
 }
 for(j=0; j<=i-1; j++){			
  printf(" \t%d", a1[j]);
  }
}
 
void hexatodec(int select){
  int i,n=0,x=16,sum=0,num,count=0;
  char hexa1[50],hexa2[50];
  printf("\n\tYou have selected:::::::::::::::::::::\n\n\t%d.CONVERT HEXADECIMAL TO DECIMAL NUMBERS:::::\n", select);
  printf("\n\tEnter the Hexadecimal sequence to be converted to decimal::::::  ");
  scanf("%s",hexa1);
  n=strlen(hexa1);
  printf("\t\tlenght=====%d\n",n);
 for(i=0;i<=n-1;i++){
   hexa2[n-i-1]=hexa1[i];
 }
for(i=0;i<=n-1;i++){
  switch(hexa2[i]){
	case 'A':
	num=10;
	sum=sum+ (pow(x,i)*num);
	count++;
	break;
	case 'B':
	num=11;
	sum=sum+ (pow(x,i)*num);
	count++;
	break;
	case 'C':
	num=12;
	sum=sum+ (pow(x,i)*num);
	count++;
	break;
	case 'D':
	num=13;
	sum=sum+ (pow(x,i)*num);
	count++;
        break;
	case 'E':
	num=14;
	sum=sum+ (pow(x,i)*num);
	count++;
	break;
	case 'F':
	num=15;
	sum=sum+ (pow(x,i)*num);
	count++;
	break;
	default:
	num=hexa2[i]-48;
	sum=sum+ (pow(x,i)*num);
	count++;
	break;
	}
     }
  printf("\n\n\tThe Hexadecimal number you entered is ::::::::  \n\t\t");
 for(i=0;i<=n-1;i++){
  printf("%c\t",hexa1[i]); 
 }	
 printf("\n\n\tThe Number of times hexadecimal multiplication has been performed===\n\t\t*** %d ***",count);
 printf("\n\n\tThe DECIMAL FORM OF THE ENTERED HEXADECIMAL NUMBER IS ===== %d ",sum);
}							

void bintodec(int select){
int a[50],i,n,x=2,b[50],sum=0,count=0;
printf("\n\tYou have selected:::::::::::::::::::::\n\n\t%d.CONVERT BINARY TO DECIMAL NUMBERS:::\n", select);
printf("\n\tEnter the number of element in the binary sequence::::   ");
scanf("%d",&n);
printf("ENter the binary sequence (0's and 1's) to be converted to decimal:::::: \nEnter element 1st  ====  ");
for(i=0;i<=n-1;i++){
  scanf("%d",&a[i]);
  if (i<=n-2){
     if(a[i]==0 || a[i]==1){
 	printf("\nEnter element %d  ==== ",i+2);
      }
     else{
 	printf("\nEnter number is invalid not a Binary number \n Enter only (0's and 1's)::\n");
 	return;
	}
   }
}
printf("\nThe binary element you entered::: \n\t\t");
 for(i=0;i<=n-1;i++){
    printf("%d\t",a[i]);
  }
 printf("\n\t\t");
 for(i=0;i<=n-1;i++){
    b[n-i-1]=a[i];
  }
 for(i=0;i<=n-1;i++){
	if(b[i]==1){
	sum=sum+pow(x,i);
	}
	else {
	 sum=sum+0;
 	}
 }
  printf("\n\tThe DECIMAL FORM OF ENTERED BINARY NUMBER IS ====  %d\n", sum);
}
