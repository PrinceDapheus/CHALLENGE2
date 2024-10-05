
//Create a progam that demostrates the use of 
//vectors
//vector functions to add, delete and insert elements in the vector
//also demostrate the use of a standard iterator, reverse iterator and a range based loop
//traversing through the vector elements forwards and in reverse.

#include <iostream>
using namespace std;
#include <vector>


int main () {

vector <string> list;
cout<< "How many guests fo you want?" <<endl;

int size;
cin >> size;
string input1;

    for (int x = 0 ; x < size ; x++){
        cout << "Enter name of guest : " << x+1 <<endl;

        cin >> input1;
        list.push_back(input1);

    }
cout<<endl;
cout <<"------YOU HAVE " << list.size() << " GUESTS"<< " -----------" <<endl;


    for (vector <string> :: iterator it = list.begin() ; it != list.end() ; it ++ ){

        cout << *it << endl;
    }
    cout<<endl;

cout << "-----------" <<endl;

cout << "Enter -D- to delete a name, -I- to insert and -A- to add" <<endl;
cout << "Or enter -R- to reverse the order of the names. "<< endl;
cout << endl;

string input2;
cin >> input2;


    if ( input2 == "D"){

        list.pop_back();

    }

    if ( input2 == "I"){
        cout << "Enter name to insert:" << endl;
        string newName1;
        cin >> newName1;
        list.insert(list.begin() , newName1);

    }

     if ( input2 == "A"){
        cout << " Enter name to add" << endl;
        string newName2;
        cin >> newName2;
        list.push_back(newName2);

    }

         if ( input2 == "R"){
        cout <<"------YOU NOW HAVE " << list.size() << " GUESTS"<< " -----------" <<endl;
        cout << endl;
        for ( vector <string > :: reverse_iterator rit = list.rbegin() ; rit != list.rend() ; rit ++){

            cout << *rit << endl;
        }
        return 0;

    }

cout<<endl;

cout <<"------YOU NOW HAVE " << list.size() << " GUESTS"<< " -----------" <<endl;

    for (vector <string> :: iterator it = list.begin() ; it != list.end() ; it ++ ){

        cout << *it << endl;
    }
    cout<<endl;




    return 0;

}


