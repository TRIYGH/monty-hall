//T. Robert Ward
//June 5, 2013

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "***** MONTY HALL PROGRAM *****\n" << endl;
    time_t seconds;
    seconds = time (NULL);
    srand(seconds);
    int doorNum;
    double doorSelection[3] = {0,0,0};
    char changeMind;

//ask if contestant is going to switch doors

    cout << "Is the contestant going to change his/her mind after first door is revealed? ";
    cin >> changeMind;

if ( changeMind == 'n' || changeMind == 'N')
    {
    for ( int x = 1; x < 10000; x++)
            {doorNum = (rand() % 3) + 1;
            doorSelection[doorNum-1] = doorSelection[doorNum-1] + 1;
            }
    cout << "The number of times the grand prise was behind Door #1 " << doorSelection[0] << " or " << doorSelection[0] / 10000 << endl;
    cout << "The number of times the grand prise was behind Door #2 " << doorSelection[1] << " or " << doorSelection[1] / 10000 << endl;
    cout << "The number of times the grand prise was behind Door #3 " << doorSelection[2] << " or " << doorSelection[2] / 10000 << endl;
    }
else
    {cout << "The game show host has revealed ( given ) one of the consolation prize doors....\nThus increasing your odds...\n";
for ( int x = 1; x < 10000; x++)
            {doorNum = (rand() % 2) + 1;
            doorSelection[doorNum-1] = doorSelection[doorNum-1] + 1;
            }

    cout << "The number of times the grand prise was behind your originally chosen door: " << doorSelection[0] << " or " << doorSelection[0] / 10000 << endl;
    cout << "The number of times the grand prise was behind your originally chosen door: " << doorSelection[1] << " or " << doorSelection[1] / 10000 << endl;
    }
    return 0;
}
