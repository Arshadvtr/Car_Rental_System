#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct cars
{
    string company[100] = {"Toyota", "Honda", "Ford", "Chevrolet", "BMW", "Mercedes-Benz"};
    string model[100] = {"Camry", "Civic", "Mustang", "Cruze", "X5", "E-Class"};
    string colors[100] = {"Red", "Blue", "Silver", "Black", "White", "Gray"};
    string maxspeed[100] = {"225 km/h", "209 km/h", "241 km/h", "225 km/h", "250 km/h", "250 km/h"};
    string fuelType[100] = {"Gasoline", "Petrol", "Gasoline", "Diesel", "Gasoline", "Gasoline"};
    double price[100] = {25000, 22000, 35000, 28000, 52000, 56000};
    string manufacturerCountry[100] = {"Japan", "Japan", "United States", "United States", "Germany", "Germany"};

} car;

struct lease_info
{
    string first_name[100];
    string last_name[100];
    string national_id[100];
    string phone_number[100];
    double payment[100];
} ls;
void login()
{
    string pass;
    char ch;
    cout << "\t\t Car Rental System";
    cout << "\t\t Enter the Password";
    ch = _getch();
    while (ch != 13)
    {
        pass.push_back(ch);
        cout << "*";
        ch = _getch();
    }
    if (pass == "Arshad")
    {
        cout << "\t\t Password Matched" << endl;
        cout << "\t\t Loading ..." << endl;
        system("Pause");
        cout << "Access Granted ! Welcome to our Car Rental System" << endl;
        system("cls");
    }
    else
    {
        cout << "\t\t Password Not Matched" << endl;
        cout << "\t\t Try Again" << endl;
        system("Pause");
        system("cls");
    }
}
void check_lease(int j)
{
    if (ls.payment[j] >= car.price[j])
    {
        cout << "\t\t\t Payment Successfull" << endl;

        cout << "\t\t\t Thank you for using our service" << endl;
    }
    else
    {
        cout << "\t\t\t Payment Unsuccessful" << endl;
        cout << "\t\t\t Please enter the correct amount" << endl;
    }
}
void c(int choice)
{

    cout << "\t\t ..................... " << endl;
    cout << "\t\t Company " << car.company[choice - 1] << endl;
    cout << "\t\t Model " << car.model[choice - 1] << endl;
    cout << "\t\t Color " << car.colors[choice - 1] << endl;
    cout << "\t\t Maxspeed " << car.maxspeed[choice - 1] << endl;
    cout << "\t\t FuelType " << car.fuelType[choice - 1] << endl;
    cout << "\t\t ManufacturerCountry " << car.manufacturerCountry[choice - 1] << endl;
    cout << "\t\t Price " << car.price[choice - 1] << endl;
}
void menu()
{
    int num = 1;
    for (int i = 0; i < 6; i++)
    {
        cout << "\t\t" << num << "." << car.company[i] << endl;
        num++;
    }
}

void user_input(int choice)
{
    system("cls");
    int i = 0;
    int j = choice - 1;

    cout << "\t\t................................." << endl;
    cout << "\t\t Please provide your persnol details" << endl;
    cout << "\t\t................................." << endl;
    cout << "\t\t................................." << endl;
    cout << "\t\t\t Enter your first name" << endl;
    cin >> ls.first_name[i];
    cout << "\t\t................................." << endl;
    cout << "\t\t\t Enter your last name" << endl;
    cin >> ls.last_name[i];
    cout << "\t\t................................." << endl;
    cout << "\t\t\t Enter your National id" << endl;
    cin >> ls.national_id[i];
    cout << "\t\t................................." << endl;
    cout << "\t\t\t Enter your Phone Number" << endl;
    cin >> ls.phone_number[i];
    cout << "\t\t................................." << endl;
    cout << "\t\t\t Enter amount that you want to pay" << endl;
    cin >> ls.payment[i];
    check_lease(i);
}

int main()
{
    void login();

    string decide = "yes";
    cout << "\t\t " << endl;
    cout << "\t\t Welcome to our CAR RENTAL SYSTEM" << endl;
    cout << "\t\t Choose your option" << endl;
    while (decide != "exit")
    {
        menu();
        cout << "\t\t Your Choice" << endl;
        int choice;
        cin >> choice;
        c(choice);
        cout << "\t\t Are you sure you want to rent this Car (yes/no/exit)" << endl;
        cin >> decide;
        if (decide == "yes" || decide == "Yes")
        {
            user_input(choice);
            cout << "Do you want to continue? (yes/no)" << endl;
            cin >> decide;
            if (decide == "no" || decide == "No")
            {
                cout << "\t\t\t Thanks for using our system" << endl;
                break;
                system("cls");
            }
        }
        else if (decide == "no" || decide == "No")
        {
            cout << "\t\t Choose your option" << endl;
            cout << "\t\t ..................... " << endl;
        }
        else if (decide == "exit" || decide == "Exit")
        {

            cout << "\t\t ..................... " << endl;
            cout << "\t\t Thank You for using our system " << endl;
            cout << "\t\t ..................... " << endl;
        }
        else
        {
            if (decide == "no" || decide == "No")
            {
                system("cls");
                continue;
            }
            else if (decide == "exit" || decide == "Exit")
            {
                cout << "\t\t\t Thanks for using our system" << endl;
                break;
            }
        }

        return 0;
        getch();
    }
}
