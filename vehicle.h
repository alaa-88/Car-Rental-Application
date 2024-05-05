#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;


class Vehicle: public Driver {
public:
string model;
int id;
string driver_name;
int location;
int seats;
string color;
string brand;
bool is_available;
int price_kilo;

};
class Car : public Vehicle{
public:
    Car(){
    }
    Car(string m,string n,int i,int l,int s,string c, string b, int p){
    model=m;
    driver_name=n;
    id=i;
    location=l;
    seats=s;
    color=c;
    brand=b;
    price_kilo=p;
    is_available= true;
    wifi_available= true;
    airConditioning_available= true;
    }
int wifi_available;
int airConditioning_available;
};
class Bus : public Vehicle{
public:
    Bus(){
    }
    Bus(string m,string n,int i,int l,int s,string c, string b, int p, string t, string st){
    model=m;
    driver_name=n;
    id=i;
    location=l;
    seats=s;
    color=c;
    brand=b;
    price_kilo=p;
    is_available= true;
    time= t;
    station= st;
    }
string time;
string station;
};
class Scooter : public Vehicle{
public:
    Scooter(){
    }
    Scooter(string m,string n,int i,int l,int s,string c, string b, int p){
    model=m;
    driver_name=n;
    id=i;
    location=l;
    seats=s;
    color=c;
    brand=b;
    price_kilo=p;
    is_available= true;
    }

};
Car cars[100];
Bus bus[100];
Scooter scooter[100];
int num_cars=0;///////
int num_scooters=0;////
int num_bus=0;///////
