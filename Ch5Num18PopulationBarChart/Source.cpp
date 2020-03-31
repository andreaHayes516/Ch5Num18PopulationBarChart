/************************************************
** Author: Andrea Hayes
** Date: March 31,2020
** Purpose: Make a bar chart for population
** Input: file, date
** Processing: input file & loop
** Output: Display chart for population 
*************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile;  // Variables 
    int num,pop; 

    inputFile.open("C:/Users/Andrea Hayes/source/repos/Ch5Num18PopulationBarChart/People.txt"); // Opens file

    if (!inputFile)  // If file cannot open
    {
        cout << "Could not open file.";
        return 1;
    }

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "Each '*' represents 1,000 people" << endl;
    cout << "____________________" << endl;

    for (int year = 1900; year <= 2000; year += 20) // Loop for years
    {
        cout << year << " ";
        inputFile >> num;  // Puts file into 'num'
        pop = num / 1000;  // Divides numbers in file by 1,000

        for (int astrix = 0; astrix < pop; astrix++)  // Loop for astrixs
        {
            cout << "*";
        }
        cout << endl;
    }
    
        inputFile.close(); // Closes file

    return 0;
}