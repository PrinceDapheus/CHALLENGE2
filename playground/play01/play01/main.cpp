//
//  main.cpp
//  play01
//
//  Created by David Phume on 2024/09/27.
//

// vectors and smart pointer


#include <iostream>
#include <vector>
using namespace std;


int main(){


vector <string> list;
int size;
string input1;
cout << "How many guests do you want?"<<endl;
cin >> size;

for (int x = 0 ; x < size ; x++){
cout << " Enter name of guest " << x+1 <<endl;
cin >> input1;

list.push_back(input1);

}

cout << "------ YOUR GUEST LIST OF "<< list.size() <<" ------" <<endl;



for(string i : list){

    cout << i << endl;
}
cout <<"-----------------"<<endl;
start:
cout<< "Enter D to delete a name or I to insert a name or E to exit"<<endl;
char letterInput;
string input2;
cin >> letterInput;
if (letterInput == 'D'){

    list.erase(list.begin());

}

if (letterInput == 'I'){

cout << "Enter name of guest"<<endl;
cin >> input2;
    list.insert(list.begin()+1 , input2);

}

if (letterInput == 'E'){

cout << "Program has shutdown...."<<endl;


return 0;
}
cout << "------ YOUR GUEST LIST OF "<< list.size() <<" ------" <<endl;




for(string i : list){

    cout << i << endl;
}




goto start;

    return 0;
}

