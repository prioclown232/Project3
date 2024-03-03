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


Summarize the project and what problem it was solving.
The project is a program to display a menu that allows a user to look up items in a list, count the frequency, and backup data. Due to a lack of expertise on my part the program is incomplete and seems to only display one function from the menu regardless of prompts.

What did you do particularly well?
Nothing in particular, I am actually disappointed with my performance. It will probably take way more practice before I can actually program with C++. I particularly struggled with MAPs and could not keep up my functions from leaking data between each other.
Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

Which pieces of code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
While I had issues with most of the project I had the hardest time with maps. I probably did not study enough to use maps flexibly with my own code. I think the best resource to add to my support network are better learning tools so I can review the code and commands I keep forgetting. Maybe if I had organization skills, I could have done a better job.

What skills from this project will be particularly transferable to other projects or course work?
The ability to open and close files is probably the most transferable skill as other methods can be used in other processes such as vectors and public and private classes. I have used the fstream more in many projects, so it does seen very helpful.

How did you make this program maintainable, readable, and adaptable?
I tried to use a SENTINEL to limit the values that could be input and loops to prevent invalid inputs, but at some point, the information from one of my function leaked and corrupted my process.
