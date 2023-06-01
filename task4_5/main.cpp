/*********************************************************************************************/
/*******        Author : Rezk Ahmed Rezk                                               *******/
/*******        Date   : 1 June 2023                                                   *******/
/*******        program which accept principle, rate and time                          *******/
/*********************************************************************************************/

#include <iostream>

/* Entery point*/
int main()
{
    //welcome message 
    std::cout << "hello" << std::endl;

    //local variables for principle , rate , time and simple interest (result)
    int Local_intPrinciple , Local_intRate , Local_intTime ,Local_intResult;  

    //Ask the user to enter "Principle"   
    std::cout << "Principle : " << std::endl;
    std::cin >> Local_intPrinciple ;

    //Ask the user to enter "rate"   
    std::cout << "Rate : " << std::endl;
    std::cin >> Local_intRate ;

    //Ask the user to enter "Time"   
    std::cout << "Time : " << std::endl;
    std::cin >> Local_intTime ;

    //print the result after calculated usint the following eqn:
    Local_intResult = (Local_intPrinciple * Local_intRate * Local_intTime)/100;
    std::cout << "simple interest = " << Local_intResult << std::endl;
}
// END