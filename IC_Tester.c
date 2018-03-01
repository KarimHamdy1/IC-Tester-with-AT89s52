/*
IC tester project.

This projects tests the following ICs :4014,4018,74293,7490,7427,74157
According to this schematic:https://drive.google.com/open?id=1QnX5n_62oQvxG1JWWyvfrtxSuvOdS-hc
Micro-controller : At89s52
Written by Karim Ahmed Hamdy as a project for the Micro-processors project
Email:karimhamdymo@gmail.com

*/
#include "header.h" 
#include "IC_Tester_Functions.h"


void main(void)
{	
		unsigned int icCheck = 0;	//Variable to hold the check the Id of the IC
		SetupSerial();						//setting up the UART communication registers
		PrintString(" IC TESTER\n"); 
		testBegin:
		Test_switch = 1;					//defining the test switch as input
		t_delay(20000);						//Delay
		icCheck = 0;
   while(1)
   {
		 if(Test_switch == 0) 		//If the test switch button is pressed
       { 			
							portInitialization14();		//Initializing the input ports in 14 pin configuration
							Disable_supply();					
							Apply_supply_7_14();			//Applying the supply for the 14-pin ICs
							icCheck = test_74293();		//All of the test functions return 1 if they identify the IC correctly,0 otherwise
							Disable_supply();
							if(icCheck == 1)
							{
								 PrintString("74293\n");  
								 goto testBegin;				//Exiting the Test switch if scope
							}
							
							portInitialization16();		//Initializing the input ports in 14 pin configuration
							Disable_supply();
							Apply_supply_8_16();			//Applying the supply for the 16-pin ICs
							icCheck = test_4018();
							Disable_supply();
							if(icCheck == 1)
							{
								 PrintString("4018\n");
								 goto testBegin;			
							}
							
							portInitialization10();
							Disable_supply();
							Apply_supply_10_5();
							icCheck = test_7490();
							Disable_supply();
							if(icCheck == 1)
							{
								 PrintString("7490\n");  
								 goto testBegin;
							}
							
							portInitialization16();
							Disable_supply();
							Apply_supply_7_14();
							icCheck = test_7427();
							Disable_supply();
							if(icCheck == 1)
							{
								 PrintString("7427\n");  
								 goto testBegin;
							}
							
							portInitialization16();
							Disable_supply();
							Apply_supply_8_16();
							icCheck = test_4014();
							Disable_supply();
							if(icCheck == 1)
							{
								 PrintString("4014\n");  
								 goto testBegin;
							}
							
							portInitialization16(); 
							Disable_supply();
							Apply_supply_8_16();
							icCheck = test_74157();
							Disable_supply();
							if(icCheck == 1)
							{
								 PrintString("74157\n");  
								 goto testBegin;
							}  
							if(icCheck == 0)
							{
									PrintString("Undefined\n"); 
									goto testBegin;
							}
       }
	  }
}

