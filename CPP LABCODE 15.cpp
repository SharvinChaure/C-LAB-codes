#include <iostream>
using namespace std;

int main() {
  
  // Variable declaration and initialization
  
   string bookTitle = "12 Rules of Life"; // String variable for the book title
   
  string author = "Jordan Peterson"; // String variable for the author's name
  
  int yearOfPublication = 2018; // Integervvariable for the year of publication
  
  double price = 299.99; // Double variable for the price in Rupees
  
  bool isAvailable = true; // Boolean variable for availability
  
  // Display the book information
  cout << "Book Title: " << bookTitle << endl;
  cout << "Author: " << author << endl;
  cout << "Year of Publication: " << yearOfPublication << endl;
  cout << "Price: " << price << " Rs." << endl;
  cout << "Availability: " << (isAvailable ? "Yes" : "No") << endl;
  return 0;
}