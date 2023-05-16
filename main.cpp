#include <array>
#include <bits/stdc++.h>
#include <cstdlib>
#include <ctype.h>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

struct RENTAL_TYPE {
  string name, address, owner, fault, gas, roadside, carName, discount, check;
  int members, days, car, contact;
  double bill, minus;
};

int main() {
  RENTAL_TYPE group1;
  string dummy;
  
  cout << "Welcome to Monke.Inc! Where all of your car desires are met!";

  //name
  cout << "\nWhat is your name? ";
  cin >> group1.name;

  //address
  cout << "\nWhat is your address? ";
  getline(cin, dummy);
  getline(cin, group1.address);

  //members in a group
  cout << "\nHow many members are in your group? ";
  cin >> group1.members;

  //emergency contact
  cout << "\nWhat is the name of your emergency contact (no dashes)? ";
  cin >> group1.contact;

  //days group is renting the vehicle
  cout << "\nHow many days are you renting the vehicle? ";
  cin >> group1.days;

  //name of the credit card owner
  cout << "\nWhat is the name of your credit card owner? ";
  cin >> group1.owner;

  //options for vehicle
  if(group1.members >=1 && group1.members <=2){
    cout << "\n1. MARIO KART (BEST VALUE!!!) - $120,000";
    cout << "\n2. 2021 Porsche Boxster - $62,000";
    cout << "\n3. Vespa Primavera 150 Moped - $5,000";
  }
  else if(group1.members >=3 && group1.members <=6){
    cout << "\n1. 2012 Honda Odyssey (Best Seller Among Moms!) - $11,500";
    cout << "\n2. 1940 Ford F100 - $49,500";
    cout << "\n3. Lightning McQueen (W CAR) - $100,000";
  }
  else if(group1.members >=7){
    cout << "\n1. BANANA BOAT BANANA BOAT BANANA BOAT - $12";
    cout << "\n2. Marchi Mobile's EleMMent Palazzo Superior - $300,000";
    cout << "\n3. 2019 Chevrolet Express Cargo 2500 Extended RWD - $35,000";
  }

  cout << endl;
  cin >> group1.car;

  //GETTING PRICES OF EACH CAR
  //small car
  if((group1.members >=1 && group1.members <=2) && group1.car == 1){
    group1.bill = group1.bill + 120000;
    group1.carName = "MARIO KART";
  }
  else if((group1.members >=1 && group1.members <=2) && group1.car == 2){
    group1.bill = group1.bill + 62000;
    group1.carName = "2021 Porsche Boxster";
  }
  else if((group1.members >=1 && group1.members <=2) && group1.car == 3){
    group1.bill = group1.bill + 5000;
    group1.carName = "Vespa Primavera 150 Moped";
  }//medium car
  else if ((group1.members >=3 && group1.members <=6) && group1.car == 1){
    group1.bill = group1.bill + 11500;
    group1.carName = "2012 Honda Odyssey";
  }
  else if ((group1.members >=3 && group1.members <=6) && group1.car == 2){
    group1.bill = group1.bill + 49500;
    group1.carName = "1940 Ford F100";
  }
  else if ((group1.members >=3 && group1.members <=6) && group1.car == 3){
    group1.bill = group1.bill + 100000;
    group1.carName = "Lightning McQueen";
  }//big car
  else if (group1.members >=7 & group1.car == 1){
    group1.bill = group1.bill + 12;
    group1.carName = "BANANA BOAT BANANA BOAT BANANA BOAT";
  }
  else if (group1.members >=7 & group1.car == 2){
    group1.bill = group1.bill + 300000;
    group1.carName = "Marchi Mobile's EleMMent Palazzo Superior";
  }
  else if (group1.members >=7 & group1.car == 3){
    group1.bill = group1.bill + 35000;
    group1.carName = "2019 Chevrolet Express Cargo 2500 Extended RWD";
  }

  cout << "\nWould you like to add roadside assistance? (y/n)";
  cin >> group1.roadside;
  cout << "\nWould you like to add on gas fill coverage? (y/n)";
  cin >> group1.gas;
  cout << "\nWould you like to add on driver fault coverage? (y/n)";
  cin >> group1.fault;

  //roadside assistance
  if(group1.roadside == "y" || group1.roadside == "Y"){
    group1.bill = group1.bill + 100;
    group1.roadside = "Yes";
  }
  else{
    group1.roadside = "No";
  }

  //gas fill coverage
  if(group1.gas == "y" || group1.gas == "Y"){
    group1.bill = group1.bill + 1000;
    group1.gas = "Yes";
  }
  else{
    group1.gas = "No";
  }

  //driver fault coverage
  if(group1.fault == "y" || group1.fault == "Y"){
    group1.bill = group1.bill + 500;
    group1.fault = "Yes";
  }
  else{
    group1.fault = "No";
  }

  //confirmation number
  int random = rand() % 999999999;    

  //EXTRA
  cout << "\nEnter discount code for a discount! ";
  cin >> group1.discount;

  group1.check = "FindGod123";

  if(group1.check == group1.discount){
    group1.minus = group1.bill * .2;
    group1.bill = group1.bill - group1.minus;
    cout << "\nDiscount applied.";
  }
  else{
    cout << "\nCode is invalid.";
  }
  //da bill
  cout << "\n\n\nBILL: ";
  cout << "\nName: " << group1.name;
  cout << "\nAddress: " << group1.address;
  cout << "\n# of Members: " << group1.members;
  cout << "\n# of days renting vehicle: " << group1.days;
  cout << "\nEmergency Contact: " << group1.contact;
  cout << "\n\nName of Vehicle: " << group1.carName;
  cout << "\nRoadside Assistance: " << group1.roadside;
  cout << "\nGas Fill Coverage: " << group1.gas;
  cout << "\nDrivers Fault Coverage: " << group1.fault;
  cout << "\n\nTotal Amount: $" << group1.bill;  
  cout << "\n\nConfirmation Number: " << random;
}
