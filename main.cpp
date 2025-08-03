#include <iostream>
using namespace std;


int main()
{
    cout << "Enter 6 numbers\n";
    int numbers[6];
    for (int h = 0; h < 6; h++)
    {
        cin >> numbers[h];
    }

    int bigerNumber = numbers[0];
    int smallestNumber = numbers[0];
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] > bigerNumber)
             bigerNumber = numbers[i];

        if (numbers[i] < smallestNumber)
            smallestNumber = numbers[i]; 
    }
     
    cout << "The Biggest Number is " << bigerNumber << "\n";
    cout << "The Smallest Number is " << smallestNumber << "\n";

}
	