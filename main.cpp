#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Get data from user
    int number;
    cout << "Enter a number [2-10000]: ";
    cin >> number;

    // Find prime numbers
    int numbers = 1;
    for (int i = 2; i <= number; i++)
    {
        // Formatting output
        int counter = 1;
        for (int iUsed = i; iUsed > 0; iUsed /= 10)
        {
            int digit = i % 10;
            counter++;
        }
        cout << setw(counter + 1);

        // Exclude 2 from the process
        if (i == 2)
        {
            cout << i;
            continue;
        }

        // Determine whether the number is prime or not
        int prime = true;
        for (int j = 2; j < i; j++) // Loop to check unexceptable numbers
        {
            if (i % j == 0) // IF statement will be executed if a factor was found
            {
                prime = false;
                break;
            }
            else prime = true;
        }

        if (prime)
        {
            cout << i; // Display number, if found to be prime
            numbers++;
        }

        // Make sure that only 10 prime numbers occupy each line
        if (numbers == 10)
        {
            cout << endl;
            numbers = 0;
        }
    }

    return 0;
}
