#include <iostream>
using namespace std;
class convert_base {

protected:
   double initial_value;
   double converted_value;

public:

   convert_base(double passed_value) {
       initial_value = passed_value;
       }

   double get_initial() {
       return initial_value;
       }

   double get_converted() {
       return converted_value;
       }

   virtual void convert_it() = 0;


};

class kilos_miles : public convert_base {

public:
   kilos_miles(double passed_value) : convert_base(passed_value) { }



   void convert_it() {
       converted_value = initial_value * 0.621371;
       }

};

class miles_kilos : public convert_base {

public:
   miles_kilos(double passed_value) : convert_base(passed_value) { }

   void convert_it() {
       converted_value = initial_value /0.621371 ;
       }


};
class meters_yards : public convert_base {

public:
   meters_yards(double passed_value) : convert_base(passed_value) { }

   void convert_it() {
       converted_value = initial_value * 1.09361;
       }


};
class yards_meters : public convert_base {

public:
   yards_meters(double passed_value) : convert_base(passed_value) { }

   void convert_it() {
       converted_value = initial_value/1.09361;
       }


};
int main() {
double k,m,me,y;
cout<<"kilos to miles class object"<<endl;
cout<<"kilmeters=";
cin>>k;
kilos_miles kilos1(k);
kilos1.convert_it();

cout << endl;
cout << endl << "Distance in kilometers is: " << kilos1.get_initial();
cout << endl << "Distance in miles is: " << kilos1.get_converted();
cout << endl;
cout << endl;
cout << endl;
cout<<"miles to kilos class object"<<endl;
cout<<"miles=";
cin>>m;
miles_kilos miles1(m);
miles1.convert_it();
cout << endl;
cout << endl << "Distance in  miles is: " << miles1.get_initial();
cout << endl << "Distance in kilometers is: " << miles1.get_converted();
cout << endl;
cout << endl;
cout << endl;
cout<<"meters to yards class object"<<endl;
cout<<"meters=";
cin>>me;
meters_yards meters1(me);
meters1.convert_it();

cout << endl;
cout << endl << "Distance in meters is: " << meters1.get_initial();
cout << endl << "Distance in yards1 is: " << meters1.get_converted();
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout<<"yards to meters class object"<<endl;
cout<<"yards=";
cin>>y;
yards_meters yards1(y);
yards1.convert_it();

cout << endl;
cout << endl << "Distance in yards is: " << yards1.get_initial();
cout << endl << "Distance in meters is: " <<yards1.get_converted();
cout << endl;
return 0;
}
