#include<iostream>
using namespace std;
//Wazingwa's Teller Machine

// Stuct holding produxt information

// MAIN FUNCTION IMPORT OUTUT CALLING A DUNCTION
struct Products{
    int serialNumber;
    string name;
    double price;
};

int main (){
    // Create an array of products
    // Applying Arrays of Structs
    Products myProducts [20] = {
    {1, "Water", 1.50},
    {2, "Soda", 2.00},
    {3, "Chips", 1.00},
    {4, "Candy", 0.50},
    {5, "Juice", 2.50},
    {6, "Cookies", 1.75},
    {7, "Chocolate", 1.25},
    {8, "Gum", 0.75},
    {9, "Ice Cream", 3.00},
    {10, "Cake", 4.00},
    {11, "Mealie Meal", 1.50},
    {12, "Bread", 4.50},
    {13, "Chilli", 1.40},
    {14, "Apples", 1.60},
    {15, "Oranges", 4.50},
    {16, "Garlic", 8.50},
    {17, "Onions", 9.50},
    {18, "Peppers", 2.50},
    {19, "Mints", 4.50},
    {20, "Eggs", 1.75}, };

   // cout<<"Test the code"<<endl;
   // Printing out the products avaible
   cout<<"Hello! Welcome to TellZed"<<endl;
   cout<<"\n\n\nList of avaible products: "<<endl;
   cout<<"\n";
   for (int i = 0; i < 20; i++){
    cout<<myProducts[i].serialNumber<<" "<<myProducts[i].name<<" - "<<"K"<<myProducts[i].price<<endl;
   }

   cout<<"--------------------------------------------"<<endl;
   cout<<"\nPlease select a product by entering the serial number and quantity: "<<endl;
    
   
   Products chosenProducts[5];
   int quantityOfProduct[5];
   int count = 0;
    // Using a while loop to promt the user to enter produc serial number nd the quanty as requited
    int serialNumber, quantity;
   do {
    cout<<count+1<<". Enter the serial number of the product: ";
    cin>>serialNumber;
    cout<<count+1<<". Enter the quantity: ";
    cin>>quantity;
            
    bool productFound = false;
    // Loop through the products array to find the product with the given serial number
    for (int i = 0; i<20; i++){
        if (myProducts[i].serialNumber == serialNumber){
            chosenProducts[count] = myProducts[i];
            quantityOfProduct[count] = quantity;
            count++;
            productFound = true;
            break;
        }
    }

    if(!productFound){
        cout<<"Invalid serial number, please try again"<<endl;
    }
    } while (count<5);
    count++;

    cout << "--------------------------------------------" << endl;
    cout << "You have selected the following products: " << endl;
    cout << " # " << "  NAME" << "\t\t" << "QUANTITY" << "\t\t" << "UNIT PRICE" << "\t\t" << "TOTAL" << endl;
    cout << "...................................................................................." << endl;
    
    double grandTotal = 0;
    
    for (int i = 0; i <5; i++) {
        double productTotal = quantityOfProduct[i] * chosenProducts[i].price; // Calculate total for each product
        cout << (i + 1) << ". " << chosenProducts[i].name << "\t\t" 
             << quantityOfProduct[i] << "\t\t" 
             << "K" << chosenProducts[i].price << "\t\t" 
             << "K" << productTotal << endl;
    
        grandTotal += productTotal; // Add to grand total
    }
    
    cout << "--------------------------------------------" << endl;
    cout << "Grand Total: K" << grandTotal << endl;
    cout << "--------------------------------------------" << endl;
    
    return 0;
}
//implenting th code to esure that all clases and dunction
// Are included in the systen