//
//  main.cpp
//  play01
//
//  Created by David Phume on 2024/09/27.
//

// vectors and smart pointer


#include <iostream>
using namespace std;

#include <vector>






int main () {
    
    // create a vector container.
    
    vector <string> list;
    
    //add elements to the vector.
    
    list.push_back("David");
    list.push_back("Israel");
    list.push_back("Lemba");
    cout << "You have " << list.size() << " guests."  << endl;
  
    
    
    // output current state of the vector.
    
    for (string i : list ){
        
        cout << i <<endl;
        
        
     }
    
    cout<< "------" <<endl;
    
    
    
    // Insert another element in second place.
    
    list.insert (list.begin()+1 , "Bonang");
    
    list.insert (list.begin()+4 , "extra");
    
    
    // output current state of the vector.
    
   for (string i : list ){
        
        cout << i <<endl;
        
        
     }
    cout<< "------" <<endl;
    
    
    
    // remove an element.
    
    list.erase (list.begin()+4);
    
    
    // output current state of the vector.
    
   for (string i : list ){
        
        cout << i <<endl;
        
        
     }
    
    cout<< "------" <<endl;
    
    
    
    
    
    
    return 0;
}

