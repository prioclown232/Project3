# Project3
GrocerlistProject
Oscar Medina
CS-210-R3217 Programming Languages 24EW3
Richard Foster
March 1, 2024
	Project 7 is aimed at creating three menus that would allow the user to display the names of objects and the frequency of them.  The program must display a menu that will allow the user to access different objects in a list from a input file text. It will also collect the redundancy data. 
First what I want to do is create the main menu.
Int main will contain the print menu function which will access the following functions:
A menu function that inputs values between 1 and SENTINEL (4)
A process function that will initialize the menu input values between 1 and 4 when the issuer inputs an option. A version of the same function to past strings through.
A print menu display with “Menu,” “1. Find Item,” 2. “Print Frequency list,” “3. Print Histogram” and “. Exit” to terminate the program.
A function that will allow the user to input strings into the menu and look for a matching object inside the list.
A function that will read file “food.txt” and count the frequencies of object listed in the list.
A function that prints the frequency data into an output file.
A function that will print the frequency as a star (***) Histogram.
