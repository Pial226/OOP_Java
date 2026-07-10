 #include<iostream>
using namespace std ;
class Car {
 public :
 string brand ;
 string model ;
 double price ;
 void display ( ){
 cout<< "\n Brand :"<< brand ;
 cout<< "\n Model :"<< model ;
 cout<< "\n price :"<< price ;
} };
 int main() {
 Car c1, c2;
 c1.brand = "Toyota";
 c1.model = "Corolla";
 c1.price = 2500000;
 c2.brand = "Honda";
 c2.model = "Civic";
 c2.price = 3200000;
 c1.display();
 c2.display();
 return 0 ; }