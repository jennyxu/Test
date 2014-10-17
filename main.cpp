/*
 *  Source program for Assignment #3 Easy Option for CS 2A
 *  Body Mass Index Calculation Program
 *  Written by Jenny Xu 10/11/14
 *
 */
#include <iostream>
using namespace std;

int main()
{ 
   //initialize variables weight and height
   double weight;
   double height;
   //Prompt the user for weight and height and 
   //assign the values to the correspoding variables
   cout << "\n\nWhat is your weight (pounds)? : ";
   cin >> weight;
   cout << "What is your height (inches)? : ";
   cin >> height;
   //if either value is negative, print an error and end
   if (weight < 0 || height < 0)
   {
      cout << "Invalid input! You entered a negative number!"<<endl<<endl;
      return (0);
   }
   //calculate BMI using the formula weight x 703.0 /height * height
   double bmi = (weight * 703.0)/(height * height);
   cout << "Your height is : " << height << " inches";
   cout <<" and your weight is " << weight << " pounds"<<endl;
   cout << "Your BMI is : " << bmi<<endl;
   //display whether the person is underweight(<18.5) or overweight(>25)
   if (bmi < 18.5)
   {
      cout << "You are underweight!";
   } 
   else if (bmi > 25)
   {
      cout << "You are overweight!";
   }
   else 
   {
      cout << "You are optimal!";
   }
   cout << endl<<endl;
   return (0);
}

/* ---------------- output pasted below ----------------
 
Run #1
 
What is your weight (pounds)? : 115
What is your height (inches)? : 63
Your height is : 63 inches and your weight is 115 pounds
Your BMI is : 20.3691
You are optimal!
 
 
Run #2
 
What is your weight (pounds)? : 120
What is your height (inches)? : 52
Your height is : 52 inches and your weight is 120 pounds
Your BMI is : 31.1982
You are overweight!

Run #3
 
What is your weight (pounds)? : 100
What is your height (inches)? : -53
Invalid input! You entered a negative number!
 
---------------------- end of output ----------------- */
