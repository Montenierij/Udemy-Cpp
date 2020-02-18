/**
 * Jacob Montenieri
 * Section 9 Challenge - Udemy C++
 * This code allows a user to create a vector of numbers
 * use certain functions including:
 * P - printing the vector
 * A - adding numbers
 * M - Taking the mean of the numbers
 * S - Find the smallest number
 * L - Find the largest number
 * Q - Quit the program
 * Any other input will tell the user to input a correct choice
 * and bring them back to the menu.
 */
#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> numbers{};
    char choice;
    int userInput;
    int total;
    double mean;
    int small;
    int large;
    do
    {
        cout<<"\n\nP - Print numbers\nA - Add a number\nM - Display mean of the numbers" << endl;
        cout<<"S - Display the smallest number\nL - Display the largest number\nQ - Quit" << endl;
        cout<<"Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            //----------------------------------------------------
            //P = Print Array of numbers
            //----------------------------------------------------
            case 'p':
            case 'P':
            if(numbers.size()<1)
                cout << "[] - the list is empty\n";
            else
            {
                cout << "[";
                for(auto i:numbers)
                    cout<<" "<<i<<" ";
                cout << "]";
            }
            break;
            //----------------------------------------------------
            //A = Add a number
            //----------------------------------------------------
            case 'a':
            case 'A':
            cout<<"Enter a number to add: ";
            cin>>userInput;
            numbers.push_back(userInput);
            break;
            //----------------------------------------------------
            //M = Mean of numbers
            //----------------------------------------------------
            case 'm':
            case 'M':
            total = 0;
            if(numbers.size()<1)
                cout<<"Unable to calculate the mean - no data\n";
            else
                {
                    for(auto i:numbers)
                        total += i;
                    mean=total/numbers.size();
                    cout<<"Mean of data: "<<mean<<"\n";
                } 
            break;
            //----------------------------------------------------
            //S = Smallest number
            //----------------------------------------------------
            case 's':
            case 'S':
            if(numbers.size()<1)
                cout<<"Unable to determine the smallest number - list is empty\n";
            else
            {
                small = numbers.at(0);
                for(auto i:numbers)
                    if(small>i)
                        small = i;
                cout<<"The smallest number is "<<small<<endl;
            }
            break;
            //----------------------------------------------------
            //L = Largest number
            //----------------------------------------------------
            case 'l':
            case 'L':
            if(numbers.size()<1)
                cout<<"Unable to determine the largest number - list is empty\n";
            else
            {
                large = numbers.at(0);
                for(auto i:numbers)
                    if(large<i)
                        large = i;
                cout<<"The largest number is "<<large<<endl;
            }
            break;
            //----------------------------------------------------
            //Q = Quit program
            //----------------------------------------------------
            case 'q':
            case 'Q':
            cout<<"Goodbye\n";
            return 0;
            //----------------------------------------------------
            //Any invalid choices
            //----------------------------------------------------
            default:
            cout << "Illegal choice\n";
            break;

        }
    }while(1);
}
