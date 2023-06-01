/*********************************************************************************************/
/*******        Author : Rezk Ahmed Rezk                                               *******/
/*******        Date   : 1 June 2023                                                   *******/
/*******        Swap two numbers Program                                               *******/
/*********************************************************************************************/

#include <iostream>

/* Entery point*/
int main()
{
    //Two local varible to store two numbers
    int Local_intNum1 , Local_intNum2 , Local_intTemp; 

    //ask the user to enter two numbers
    std::cout << "Enter two numbers : "<<std::endl;

    //stor the numbers
    std::cin >> Local_intNum1 ; 
    std::cin >> Local_intNum2 ;


    //printing the numbers befor swapping 
    std::cout << "the BEFOR swapping: "<<std::endl;
    std::cout << "the first  number = "<< Local_intNum1 << std::endl;
    std::cout << "the second number = "<< Local_intNum2 << std::endl;


    //swap the numbers
    Local_intTemp = Local_intNum1;
    Local_intNum1 = Local_intNum2;
    Local_intNum2 = Local_intTemp;


    //print the number after swapping
    std::cout << "the AFTER swapping: "<<std::endl;
    std::cout << "the first  number = "<< Local_intNum1 << std::endl;
    std::cout << "the second number = "<< Local_intNum2 << std::endl;

}
// END