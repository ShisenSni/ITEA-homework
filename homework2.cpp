#include <iostream>

using namespace std;

int main()
{
    /* 1. Write a program to check whether a given number by user is positive or negative. 
          Depending on a result - report it in the console. After that – ask user to enter another number. 
          Find the largest of two entered numbers. Depending on a result - report it in the console.
    */
    int your_numb = 0;
    int your_sec_numb;
    cout<<" Pls enter your number :";
    cin>> your_numb;
    if (your_numb > 0) {
    cout<< "Your number is positive"<< endl;
    }else {
    cout<<"Your number is negative"<< endl;
    }
    cout<<"Pls enter your next number :";
    cin>> your_sec_numb;
    if (your_numb > your_sec_numb){
    cout<<"Your first number is biger";
    }else {
    cout<< "Your second number is biger";
    }
   
    
    
    
    
  
    /* 2. Write a small program to compare two strings which values was written by user’s keyboard. 
          Also, create additional logic variable (boolean). 
          If strings are the same – print the next message: <your_string_1> is equal to <your_string_2> and assign truth to a logic variable, 
          otherwise – assign false and report it in the console.
    */
    
   std::string your_string1 = "clear";
    std::string your_string2 = "clear";
    bool equality = true;
    cout<< "pls enter you first string : ";
    cin>> your_string1;
    cout<< "pls enter you secont string : ";
    cin>> your_string2;
    if (your_string1 == your_string2)
    {
   cout<< "your firs string " << your_string1 << " is equal to "<<" your second string " << your_string2 << endl;
   equality = true;
    }else {
    equality = false;
    out<< "your strings are different" << endl;
    }
    
    
    
    /*  3. Write a program that finds the largest of three entered numbers. 
           Depending on a result - report it in the console.
           
           Підказка: use if in if:
           
           if (...) 
           {
               if (...) 
               {
                   
               }
           }
           
           or you can use:
            - and &&
            - or || 
    
    */
    
    // put your code here
    
    
    
    return 0;
}