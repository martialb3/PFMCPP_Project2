#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 integer                        int
 boolean                        bool
 character                      char
 floating point                 float
 double floating point          double
 valueless                      void

 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */



//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'

int fingers = 5; 
int deathToll = 35;
int weaponType = 23;

bool alibi = true;
bool isThisADisease = false;
bool soundOn = true;

char country = 'M';
char rootNote = 'A';
char staffName = 'O';

float speed = 123.4f;
float zAngle = 34.007f;
float timeElapsed = 1.0f;

double percentage = 0.00078947;
double pi = 3.14159265359;
double randomNumber = 4534.094587354;

ignoreUnused(number, fingers, deathToll, weaponType, alibi, isThisADisease, soundOn, country, rootNote, staffName, speed, zAngle, timeElapsed, percentage, pi, randomNumber);

}
/*


 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
*/

int getInterval(int midiNote1, int midiNote2)
{
    ignoreUnused(midiNote1, midiNote2);
    return {};
}

/*
 2)
 */

bool getEvidence(bool alibi, bool motive, bool weapon) 
{
    ignoreUnused(alibi, motive, weapon); 
    return {};
}

/*
 3)
 */

void initSoundParameters(int volume, char wavetype, bool soundOn)
{
    ignoreUnused(volume, wavetype, soundOn); 
}

/*
 4)
 */

double conditionalPercentage (int deathToll, int totalPopulation, bool isThisADisease)
{
    ignoreUnused(deathToll, totalPopulation, isThisADisease); 
    return {};
}

/*
 5)
 */

void dialNumber(char countryName, int phoneNumber)
{
    ignoreUnused(countryName, phoneNumber);
}

/*
 6)
 */

int weaponStatus(int weaponType, bool weaponEngaged, int materialType, int intensitImpact, int iteration)
{
    ignoreUnused(weaponType, weaponEngaged, materialType, intensitImpact, iteration); 
    return {};
}

/*
 7)
 */

float getAltitude(int previousAltitude, float timeElapsed, double speed, double zAngle)
{
    ignoreUnused(previousAltitude, timeElapsed, speed, zAngle); 
    return {};
}

/*
 8)
 */

char getChordName(char rootName, int second, int third, int fourth, int fifth, int sixth, int seventh)
{
    ignoreUnused(rootName, second, third, fourth, fifth, sixth, seventh); 
    return {};
}

/*
 9)
 */

char evalTaste(int saltiness, int sweetness, int bitterness, int sourness, int savoury, int fat, int heatFactor, int astringent)
{
    ignoreUnused(saltiness, sweetness, bitterness, sourness, savoury, fat, heatFactor, astringent); 
    return {};
}

/*
 10)
 */

void explodeMusic(int measureStart, int measureStop, char staffName)
{
    ignoreUnused(measureStart, measureStop, staffName); 
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    int interval = getInterval(100, 87);
    //2)
    auto suspect = getEvidence(false, true, true);    
    //3)
    initSoundParameters(100, 'S', false);
    //4)
    double diseaseDeathRate = conditionalPercentage (103000, 357000000, true);
    //5)
    dialNumber('F', 142399057);
    //6)
    auto weaponSound = weaponStatus(3, true, 22, 99, 5);
    //7)
    auto currentAltitude = getAltitude(929, 1.5, 163.2, -15.02);
    //8)
    auto thatChordName = getChordName('D', 0, 2, 0, 1, 2, 0);
    //9)
    auto tastingExperience = evalTaste(3, 0, 7, 2, 0, 4, -3, 9);
    //10)
    explodeMusic(30, 38, 'P');

    ignoreUnused(carRented, interval, suspect, diseaseDeathRate, weaponSound, currentAltitude, thatChordName, tastingExperience);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
