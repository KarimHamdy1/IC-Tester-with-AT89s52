/*
Each function tests an IC based on the its datasheet and truth table.
*/
#ifndef __IC_Tester_Functions_H_
#define __IC_Tester_Functions_H_



void Apply_supply_7_14();
void Apply_supply_10_5();
void Apply_supply_8_16();
void Disable_supply();
void SendChar(unsigned char ch);

void t_delay(int t);
void portInitialization14();


void portInitialization16();

void portInitialization10();

void Apply_supply_7_14();


void Apply_supply_8_16();



void Apply_supply_10_5();



void Disable_supply();


unsigned int test_74293();

unsigned int test_7427();

void SetupSerial();

void SendChar(unsigned char ch);


void PrintString(const char* s);

unsigned int test_4014();

unsigned int test_4018();

unsigned int test_7490();

unsigned int test_74157();


#endif 