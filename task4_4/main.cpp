/*********************************************************************************************/
/*******        Author : Rezk Ahmed Rezk                                               *******/
/*******        Date   : 25 may 2023                                                   *******/
/*******        Convert the temprature from fahrenheit to celsius program              *******/
/*********************************************************************************************/

/*

Take the temprature in fahrenheit from the user 
and print it in celsius

*/


#include <iostream>

/* Entery point*/
int main()
{

    /*
    Two local variable to store the temprature values
    Local_floatTempInFeh : store the temprature whech the user enter in fahrenheit
    Local_floatTempInFeh : store the temprature in celsius after convertion fron fahrenheit
    */
    float Local_floatTempInCel , Local_floatTempInFeh;

    /*Access the screen to print welcome message*/
    std::cout << "Welcome." << std::endl;

    /*Ask the user to temprature in fahrenheit*/
    std::cout << "Temprature in fahrenheit : " << std::endl;

    /*Store it in  Local_floatTempInFeh variable*/
    std::cin >> Local_floatTempInFeh ;


    /*Calculate the temprature in celsius using the following equation
    and store the result in Local_floatTempInCel variable*/
    Local_floatTempInCel = ((Local_floatTempInFeh - 32)*((float)5/9));


    /*print the result to the user*/
    std::cout << "emprature in celsius : "<< Local_floatTempInCel << std::endl;

}
// END
