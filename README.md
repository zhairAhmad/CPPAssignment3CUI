# Question 1 
Define a class for bank account that includes the following data members:
a) Name of the depositor
b) Account Number
c) Type of account
d) Balance amount in the account
The class also contains the following member functions:
a) A constructor to assign initial values
b) Deposit function to deposit some amount. It should accept the amount as parameter
c) Withdraw function to withdraw an amount after checking the balance. It should accept the
amount as parameter.
d) Display function to display name and balance

# Question 2
Create a class that imitates part of the functionality of the basic data type int. Call the class
Int (note different capitalization). The only data in this class is an int variable.
Include member functions to initialize an Int to 0, to initialize it to an int value, to display it (it
looks just like an int), and to add two Int values.
Write a program that exercises this class by creating one uninitialized and two initialized Int
values, adding the two initialized values and placing the response in the uninitialized value, and
then displaying this result.

# Question 3 
 Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
toll. Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by, and of the total amount of
money collected.
Model this tollbooth with a class called tollBooth. The two data items are a type
unsigned int to hold the total number of cars, and a type double to hold the total amount of
money collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 0.50 to the cash total. Another function, called
nopayCar(), increments the car total but adds nothing to the cash total. Finally, a member
function called display() displays the two totals. Make appropriate member functions const.
Include a program to test this class. This program should allow the user to push one key to count
a paying car, and another to count a nonpaying car. Pushing the Esc key should cause the program
to print out the total cars and total cash and then exit. 

# Question 4 
Create a class called time that has separate int member data for hours, minutes, and
seconds. One constructor should initialize this data to 0, and another should initialize it to fixed
values. Another member function should display it, in 11:59:59 format. The final member
function should add two objects of type time passed as arguments.
A main () program should create two initialized time objects (should they be const?) and one that
isn’t initialized. Then it should add the two initialized values together, leaving the result in the
third time variable. Finally, it should display the value of this third variable. Make appropriate
member functions const.