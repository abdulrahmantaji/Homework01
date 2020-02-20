/*
this code can draw a pyramid, Inverted pyramid and Diamond shapes using stars and between certain range
getting the value from the user.
*/
#include <iostream>
using namespace std;
int NumberControl(int low, int hight, int rows);
void pyramid(int rows);
void InvertedPyramid(int rows);
void Diamond(int rows);


int main()
{
    int op;
    int rows;

    cout << "1: pyramid, \n 2: Inverted pyramid, \n 3: Diamond, \n 0: Exit!\n";
    cin >> op;
    cout << "Enter number of rows: ";
    cin >> rows;
    if (op==1) {
            for (int i = 0; i < 3; i++) { //the user will be given 3 attempts
                // controlling if the given number is in the right range.
                cout << "please enter between 3 and 15 :"; 
                cin >> rows;

                if (NumberControl(3, 15, rows) == 1) {
                    pyramid(rows);
                    return 0;
                }
            }
        
    }
    else if(op==2)
    {
        for (int i = 0; i < 3; i++) {
            cout << "please enter between 3 and 15 :";
            cin >> rows;

            if (NumberControl(3, 15, rows) == 1) {
                InvertedPyramid(rows);
                return 0;
            }
        }
    }
    else if (op == 3)
    {
        for (int i = 0; i < 3; i++) {
            cout << "please enter between 5 and 15 :";
            cin >> rows;

            if (NumberControl(5, 15, rows) == 1) {
                Diamond(rows);
                return 0;
            }
        }
    }
    return 0;
}

int NumberControl(int low, int hight, int rows) { //this function to garantee if the numbers are in the right range

    if (low<rows && hight>rows) {
        return 1;
    }
    else
    {
        return 0;
    }

}

void pyramid(int rows) // to drow the pyramid
{
    int space;
    for (int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            cout << "  ";
        }
        for (k; k != 2 * i - 1; ++k)
        {
            cout << "* ";

        }
        cout << "\n";
    }

}
void InvertedPyramid(int rows) // to drow the inversed pyramid
{
    int i = rows;
    while (i >= 1)

    {
        int space = 0;
        while(space < rows - i){
            cout << "  ";
        ++space;
        }
        int j = i;
        while (j <= 2 * i - 1) 
        {
            cout << "* ";
            ++j;
        }
        int c = 0;
        while (c < i - 1){
            cout << "* ";
            ++c;
        }
            cout << "\n";
        --i;
    }
}
void Diamond(int rows) { //to draw the dimond shape 
    pyramid(rows); //calling this to draw the upper side
    InvertedPyramid(rows); // calling this to draw the bottom side
    
}
