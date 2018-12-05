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
int main() {

cout<<"kilos to miles class object"<<endl;
kilos_miles kilos1(100.0);
kilos1.convert_it();

cout << endl;
cout << endl << "Distance in kilometers is: " << kilos1.get_initial();
cout << endl << "Distance in miles is: " << kilos1.get_converted();
cout << endl;
cout<<"miles to kilos class object"<<endl;
miles_kilos miles1(60.0);
miles1.convert_it();

cout << endl;
cout << endl << "Distance in  miles is: " << miles1.get_initial();
cout << endl << "Distance in kilometers is: " << miles1.get_converted();
cout << endl;
return 0;
}
