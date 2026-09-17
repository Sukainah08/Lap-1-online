/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
double roomwidth,roomLength,roomArea; 
double tileSquareFeet,numOfTiles;
cout<<"\nPlease enter the room width in feet: ";
cin>>roomwidth;
cout<<"\nPlease enter the room length in feet: ";
cin>>roomLength;
roomArea = roomwidth * roomLength;
cout<<"\nThe area of the room = " << roomArea << " square feet";
tileSquareFeet = (6.0 / 12) * (6.0 / 12);
numOfTiles = roomArea / tileSquareFeet;
cout<<"\nThe number of 6-inch square tiles needed to tile the floor: "<<numOfTiles;
     return 0;
}