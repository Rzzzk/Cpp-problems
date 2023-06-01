
/***********************************************************/
/*******        Author : Rezk Ahmed Rezk             *******/
/*******        Date   : 25 may 2023                 *******/
/*******        Sum two numbers program              *******/
/***********************************************************/

#include <iostream>

/* Entery point*/
int main()
{

    int Local_intNum1,Local_intNum2;

    /*Access the screen to print welcome message*/
    std::cout << "Welcome." << std::endl;

    /*Ask the user to enter two numbers*/
    std::cout << "enter two numbers" << std::endl;

    std::cin >> Local_intNum1 >> Local_intNum2 ;

    std::cout << Local_intNum1 << " + " << Local_intNum2 << " = " <<  (Local_intNum1+Local_intNum2) << std::endl;
}
// END
