/*********************************************************************************************/
/*******        Author : Rezk Ahmed Rezk                                               *******/
/*******        Date   : 1 June 2023                                                   *******/
/*******        Circle of Area Program                                                 *******/
/*********************************************************************************************/

#include <iostream>

/* Entery point*/
int main()
{
    //welcome message 
    std::cout << "hello" << std::endl;

    //local variables for radius and area
    int Local_intRadius ;
    float  Local_intArea ;



    //Ask the user to enter the radius of the circle  
    std::cout << "Enter a the radius of circle: " << std::endl;
    std::cin >> Local_intRadius ;

    Local_intArea = 3.14*Local_intRadius*Local_intRadius;


    //Print the Area value"   
    std::cout << "Area = "<< Local_intArea << std::endl;

}
// END