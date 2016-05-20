
#include <stdio.h>
#include <wiringPi.h>
#include <time.h>
#define LED     0

int main (void)
{
  wiringPiSetup () ;
  FILE *fp;
   FILE *fp1;
  pinMode (LED, OUTPUT);
  int input_from_app=0;
  printf("Hello \n");
while(1)
	 {
	  fp = fopen("input.txt", "r");
	  input_from_app=fgetc(fp);
	  input_from_app=input_from_app-48;
	  printf("%d\n",input_from_app);
	  if (input_from_app==0)
	  {
	  	 printf("%d\n",input_from_app);
		 digitalWrite(LED,0);
		 fp1 = fopen("data.txt", "w");
	     fprintf(fp1, "False");
	     fclose(fp1);
	  }

	  else if(input_from_app==1)
	  {
		  
	     printf("%d\n",input_from_app);
		 digitalWrite(LED,1);	
		 fp1 = fopen("data.txt", "w");
	     fprintf(fp1, "True");
	     fclose(fp1); 
	  }

		 fclose(fp); 
	}
     return 0 ;
}
   //cout<<a<<endl;;
  /*FILE *fp;
  //fp = fopen("data.txt", "a");

     digitalRead (LED) ;
   	
 int count = 0;
for (count = 0; count <= 100; count=count +1)
{ 
	  fp = fopen("data.txt", "w");
   	//LED on block
	   digitalWrite (LED, 1) ;
   	   fprintf(fp, "True");
	   printf("{'isLightOn'"":" "'True'}""\n");
	   delay (500) ;   

	// LED off block
	   fp = fopen("data.txt", "w");
	   digitalWrite (LED, 0) ; 
	   fprintf(fp, "False");
	   printf("{'isLightOn'"":" "'False'}""\n");
	   delay (500) ;
	 }

   	   fclose(fp);

  */
   
 
//	   fprintf(fp, "{'isLightOn'"":" "'True'}""\n");
//  fprintf(fp, "{'isLightOn'"":" "'False'}""\n");
