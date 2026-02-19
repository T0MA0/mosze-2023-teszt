#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];        // Wrong variable name: NELEMENTS
    std::cout << '1-100 ertekek duplazasa'      //Missing semicolon and using "" insted of ''
    for (int i = 0;)        //Missing the end of the loop and the increment of i 
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)     //endless loop
    {
        std::cout << "Ertek:"       //Missing semicolon and the value we want to write out
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;          //Wrong variable type and garbage value
    for (int i = 0; i < N_ELEMENTS, i++)  //Using semicolon insted of simple comma
    {
        atlag += b[i]       //Missing semicolon
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
