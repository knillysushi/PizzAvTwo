#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Made by knightly with NO ai, this was confusing because of math bye

// ----------------------- Prototypes -----------------------
void printBanner();
int calcSlicesNeeded(int guests, int slicesPerGuest);
int calcPizzasNeeded(int slicesNeeded);
double calcSubtotal(int pizzas, double pricePerPizza);
double calcGst(double subtotal);
double calcCostPerGuest(double total, int guests);


const double NUM_SLICES = 8.0; // per pizza
const double GST_TAX = 0.05; // tax bye\

int main()
{
    string partyName;
    double numGuests;
    double slicePerGuest;
    double pricePerPizza;
    int totalSlices;
    int numPizza;
    double totalCost;
    double total;
    double gst;
    double pricePerGuests;

    cout << "Party name:";
    getline(cin, partyName); // get the party name

    cout << "Number of guests:"; // know how much party guests there will be
    cin >> numGuests;

    cout << "Slices per guest:";
    cin >> slicePerGuest;

    cout << "Price per pizza: $";
    cin >> pricePerPizza;

    printBanner();
    cout << "Party:           " << partyName << endl;
    cout << "Guests:           " << numGuests << endl;

    totalSlices = calcSlicesNeeded(numGuests, slicePerGuest);
    cout << "Slice needed:     " << totalSlices << endl;

    numPizza = calcPizzasNeeded(totalSlices);
    cout << "Pizzas to order:  " << numPizza << endl;
    cout << "----------------------------" << endl;

    cout << fixed << setprecision(2);
    totalCost = calcSubtotal(numPizza, pricePerPizza);
    cout << "Subtotal:         $" << totalCost << endl;

    gst = calcGst(totalCost);
    cout << "GST (5%) :        $" << gst << endl;

    total = gst + totalCost;
    pricePerGuests = calcCostPerGuest(total, numGuests);
    cout << "Total:            $" << total << endl;
    cout << "Per guest:        $" << pricePerGuests << endl;


    return 0;
}

// ----------------------- function definition -----------------------

// Purpose: Print out the banner
// Input: The banner lol
// Output: Banner...
void printBanner()
{
    cout << "============================" << endl;
    cout << "    PIZZA PARTY PLANNER" << endl;
    cout << "============================" << endl;
}

// Purpose: calculate the slices of pizza needed
// Input:   return
// Output:  how many slices needed
int calcSlicesNeeded(int guests, int slicesPerGuest) {
    return guests * slicesPerGuest;
}

// Purpose: calculate the pizzas needed
// Input:   return
// Output:  the amount of pizzas needed rounded to a whole number
int calcPizzasNeeded(int slicesNeeded) {
    return ceil(slicesNeeded / NUM_SLICES);
}

// Purpose: to show the total cost for all the pizzas ordered
// Input:   nothing
// Output:  the total cost of the pizzas
double calcSubtotal(int pizzas, double pricePerPizza) {
    double totalCost;
    return totalCost = pricePerPizza * pizzas;
}

// Purpose: to calculate the tax
// Input:   nothing
// Output:  the gst tax
double calcGst(double subtotal) {

    return subtotal * GST_TAX;
}

// Purpose: calculate cost per person
// Input:   nothing
// Output:  the cost per person
double calcCostPerGuest(double total, int guests) {
     return total / guests;
}


void printMoneyLine(string label, double amount)
