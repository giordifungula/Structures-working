#include <iostream>
#include <string>

using namespace std;

struct Shirt
    {
        int size; //1st declaration
        char style; //2nd declaration
        float price; //3rd declaration
        string color;
    };
//Function definitions

void inputData(Shirt & shirtP)
{
cout << "Enter the size of the shirt: ";
cin >> shirtP.size;
cout << "Enter the style of the shirt (A/B/C): ";
cin >> shirtP.style;
cout << "Enter the colour of the shirt: ";
cin >> shirtP.color;
cout << "Enter the price of the shirt: R";
cin >> shirtP.price;
}


void displayData(const Shirt & shirtP)
{
cout << " Shirt info " << endl;
cout << " ========== " << endl;
cout << " Style: " << shirtP.style << endl;
cout << " Size: " << shirtP.size << endl;
cout << " Price: R " << shirtP.price << endl;
cout << " Colour: " << shirtP.color;
}


int main()
{
    Shirt myShirt; //namining the structure  to myShirt

    inputData(myShirt);
    displayData(myShirt);
}
