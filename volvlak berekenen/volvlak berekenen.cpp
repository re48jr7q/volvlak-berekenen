#include <iostream>
#include <limits>

void ignoreLine() 
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
int aantalDrukVel()
{
    while (true)
    {
        
            std::cout << " Voer het aantal drukvel in: ";
            int drukvel{ };
            std::cin >> drukvel;
            if (!std::cin)
            {
                std::cin.clear();
                ignoreLine();
                std::cout << " er gaat iets niet goed, probeer het opnieuw.\n";
            }
            else
            {
                ignoreLine();
                return drukvel;
            }
            
        
    }
}
void printInktHoeveelheid(double gram)
{
    std::cout << " U heeft " << gram << " gram inkt nodig, dat is " << gram/1000 << " kilo.\n";
}
int main()
{
    constexpr double inkt{ 0.4 };
    double inktHoeveelheid{ inkt * aantalDrukVel()};
    printInktHoeveelheid(inktHoeveelheid);

    return 0;
}


