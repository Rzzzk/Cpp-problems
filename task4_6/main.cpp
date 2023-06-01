/*********************************************************************************************/
/*******        Author : Rezk Ahmed Rezk                                               *******/
/*******        Date   : 1 June 2023                                                   *******/
/*******        Program to Acept a character and print it's ASCII                      *******/
/*********************************************************************************************/

#include <iostream>

/* Entery point*/
int main()
{
    //welcome message 
    std::cout << "hello" << std::endl;

    //local variables for principle , rate , time and simple interest (result)
    int Local_intAsciiVal;
    char Local_charCharacter;


    //Ask the user to enter "Character"   
    std::cout << "Enter a Character : " << std::endl;
    std::cin >> Local_charCharacter ;


    //save the ascii value in "Local_intAsciiVal" variable
    Local_intAsciiVal = (int)Local_charCharacter;


    //Print the ascii value"   
    std::cout << "ASCII of "<< Local_charCharacter << " = "  << Local_intAsciiVal << std::endl;

}
// END