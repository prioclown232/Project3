/*Oscar Medina
* CS 210
* 3/1/2024
* Richard Foster
* 
* This program prints a menu to prompt the user to select between four options. The options in the menu access the .txt file, food.txt, to find objects as strings and count the amount per
* object. The menu options work three functions to output three diffent list and an option to close the program.
 */


#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>



using namespace std;
// Functions
void printMenu();
int One();
int One(string);
const int SENTINEL = 4;
void processOne(int);
int fileOne();
int findItem();
void printFrequencyList();
void printHistogram();




int main() { // main function runs all functions
    
    int one = 0; // initilises the interger one

    {
        printMenu(); // adds print function to main
        one = One("Enter input from menu selction from 1 to " + to_string(SENTINEL)+ " "); // adds function One (String prompt) to main
        cout << one << endl; //  outputs string value from function One()
        processOne(one); // adds the process menu function to main
        fileOne(); // add fileOne function
    }
    while (one != SENTINEL); // while loop sets condition for one to not be SENTINEL

    return 0;

}



void printMenu() // Print menu options
{
    cout << "\nMenu:" << endl;
    cout << "1. Find Item" << endl;
    cout << "2. Print Frequency List" << endl;
    cout << "3. Print Histogram" << endl;
    cout << SENTINEL << ". Exit" << endl << endl;
}

int One() // input taking function
{
    int one = 0;
    bool missingItem = true; // boolean sets object to true

    do {
        cout << "Input selection: ";
        cin >> one;
        missingItem = ((one < 1) || (one > SENTINEL)); // sets the range between 1 and SENTINEL (4)
        if (missingItem) { // if loop returns the value back if the input is invalid
            cout << "Invalid input" << endl;
        }

    } while (missingItem); 
    return one;
}

int One(string prompt) // similar to function One, but pushes a string prompt
{
    int one = 0;
    bool missingItem = true; 

    do {
        cout << prompt;
        cin >> one;
        missingItem = ((one < 1) || (one > SENTINEL));
        if (missingItem) { 
            cout << "Invalid input" << endl; // outs a warning if the input is invalid or the program fails
        }

    } while (missingItem);
    return one;


}



void processOne(int one ) // function that processes the various functions to work the menu
{
    switch (one)
    {
    case 1:
       // call function 
        findItem();
        break;
    case 2:
        int fileOne();

        break;
    case 3:
        printHistogram();
        break;
    case 4:
        cout << "Exiting the program." << endl;
        break;
    default:
        cout << "Invalid choice. Please enter a valid menu option." << endl;
        break;
    }

}

int fileOne() // opens the input file and creates a list
{
    ifstream inputFile; //  sets the inputFile to open the file text
    string item;
    int itemsAdded = 0;
    int itemsUpdated = 0;
    map<string, int> grocer; // sets keys by creating a container for strings and intergers into grocer

    inputFile.open("food.txt"); //  opens the file txt

    if (inputFile.fail()) { // loop function warns the user if the file fails to open
        cout << "Error in file " << endl; // returns an error to the user
        return 1;
    } 

    while (inputFile >> item) { //  moves the 

        if (grocer.count(item)) { // if statement sets a the grocer string to count the number of items in file.

            grocer[item]++;
            itemsUpdated++; // update the item count
        } 
        else { // else statement sets the condition that emplaces the item into grocer
            grocer.emplace(item, 1);
            itemsAdded++; // adds the items emplaced
        } 
    } 

    cout << "Items added = " << itemsAdded << endl; // outputs the count of items added
    cout << "Items updated = " << itemsUpdated << endl; // outputs the count of items updated

    int count = 1;

    for (auto Groceries : grocer) { // for loop: auto detects and ssigns the data types in the function
        cout << count << " " << Groceries.first << " " << Groceries.second << endl;
        count++; // displays the number of objects per catergory

    }

    inputFile.close(); // closes file

    return 0;
}

int findItem() // It was supposed to input the objects into the menu to look for it, but I couldn't figure out how to make it work
{
    ifstream myFile;
    string itemName;
    cin.ignore();
    
   
    myFile.open("food.txt");
    if (myFile.fail()) {
        cout << "Error in file " << endl;
        return 1;
    } // if
    

 cout << "Enter name of grocery item: " << endl;
   
    cin >> itemName;

    
    cout << "Grocery item: " << itemName << endl;

 

    myFile.close(); //

    return 0;
}

void printFrequencyList() // 
{
    string itemName;
    ifstream inputFile;
    ofstream outputFile;

}

void printHistogram() //
{
}

