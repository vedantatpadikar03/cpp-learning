#include<iostream>
using namespace std;

int main()
{
    // three person are in the room
    int peopleInRoom = 3;

     cout<<"people in the room = "<< peopleInRoom<<"\n";

     // 3 people entering the room
     peopleInRoom++;
     cout<<"someone person entering - peolpe in the room ="<< peopleInRoom<<"\n";
     peopleInRoom++;
     cout<<"someoneperson entering - people in the room ="<< peopleInRoom<<"\n";
     peopleInRoom++;
     cout<<"someone person entering - people in the room ="<< peopleInRoom<<"\n";

     //one person left
     peopleInRoom --,
     cout<<"someone person left - people in the room ="<<peopleInRoom;
     return 0;

}