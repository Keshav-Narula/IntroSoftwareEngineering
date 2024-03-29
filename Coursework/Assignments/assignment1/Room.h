#ifndef ROOM_H
#define ROOM_H


#include <iostream>
#include <string>
#include <iomanip>

#include "defs.h"
#include "Date.h"
#include "Reservation.h"


using namespace std;

class Room {
   public:
   Room(int roomNumber, string bedType, int capacity, bool hasFridge);
   ~Room();


   int getRoomNumber();


   bool isMatch(string bt, int cap, bool f);
   bool lessThan(Room& r);
   bool addReservation(string customerName, Date& d, int duration);
   void print();
   void printReservations();


   private:
    int roomNumber;
    string bedType;
    int capacity;
    bool hasFridge;
    Reservation* reservations[MAX_RES];
    int numReservations;



};





#endif
