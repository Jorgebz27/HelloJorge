#include <iostream>
#include <windows.h>

int main(int argc, char** argv)
{
    //Informar cuantos argumentos se enviaron al programa
    /*std::cout << "N de argumentos: " << argc << std::endl;
    for (int i = 0; i < argc; i++)
    {
        std::cout << "argv[" << i << "] : " << argv[i] << std::endl;
    }
    Sleep(atoi (argv[1]));
    std::cout << "Hello Jorge!\n";*/
    ///

    byte karma = 128;

    std::cout << "Karma: " << karma << "\n";

    for (int i = 0; i < 20; i++)
    {
        karma += 10;
        std::cout << "incrementando karma en 10: " << (int)karma << " ";

        if (karma == 0 || karma < 35)
        {
            std::cout << "Muy malo\n";
        }
        else if (karma == 35 || karma < 95)
        {
            std::cout << "Malo normal\n";
        }
        else if (karma == 95 || karma < 115)
        {
            std::cout << "Neutro\n";
        }
        else if (karma == 115 || karma < 200)
        {
            std::cout << "Bueno\n";
        }
        else
        {
            std::cout << "Muy bueno\n";
        }
    }

    return 0;
}