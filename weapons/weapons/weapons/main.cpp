//
//  main.cpp
//  weapons
//
//  Created by David Phume on 2024/09/26.
//

#include <iostream>
using namespace std;

class weapon {
    
    public:
    bool state;
    void attack (bool state = 1){
        if (state == true ){
            cout << "attack with WEAPON!";
        }
        
        else {
            cout << " weapon down...." <<endl;
        }
    }
    
};

class axe : public weapon {
    
    public:
    bool state;
    void attack (bool state = 1){
        if (state == true ){
            cout << "attack with AXE!";
        }
        
        else {
            cout << " axe down...." <<endl;
        }
    }
};

class gun : public weapon {
    
    public:
    bool state;
    void attack (bool state = 0){
        if (state == true ){
            cout << "attack with GUN!";
        }
        
        else {
            cout << " axe down...." <<endl;
        }
    }
};

class player : public weapon  {
    
public :
    
  void useAll(){
        
      attack(1);
    }
    
    
    
};

int main (){
    
//    int amount;
//    cout << "How many weapons do you want?" << endl;
//    cin >> amount;
//    string *weapons;
//    weapons = new string [amount];
//    string input;
//    for (int x = 0 ; x < amount ; x++){
//        cout << "Name weapon " << x + 1 <<endl;
//        cin >> input;
//        weapons[x] = input;
//    }
//    
//    cout << "-----YOUR WEAPONS-----"<<endl;
//    
//    for (int y = 0 ; y < amount ; y ++){
//        cout << weapons[y] <<endl;
//    }

    
    weapon *weapon1;
    weapon *weapon2;
    

    axe pAxe;
    gun pGun;
//    
//    weapon1 = &pAxe;
//    weapon2 = &pGun;
    
    player *player1;
    player *player2;
    player1 = &pAxe;
    player2 = &pGun;
    
    //player1.useAll();
    
    
    
    return 0;
}
