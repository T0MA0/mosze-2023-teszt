#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];        // Change variable name to N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa\n";     //Add semicolon and change '' to ""
    for (int i = 0;i<N_ELEMENTS;i++)        //Correcting the loop 
    {
        b[i] = (i+1) * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)     //Correcting the loop
    {
        std::cout << "Ertek: "<<b[i]<<"\n";       //Add semicolon and the value we want to write out 
    }    
    std::cout << "\nAtlag szamitasa: " << std::endl;
    double atlag = 0;          //Change the type to double and initialized the value of the variable
    for (int i = 0; i < N_ELEMENTS; i++)  //Change simple comma to semicolon and correcting the loop
    {
        atlag += b[i];       //Add semicolon
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;       //free memory  
    return 0;
}
