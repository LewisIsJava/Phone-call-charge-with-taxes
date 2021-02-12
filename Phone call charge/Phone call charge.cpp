// Phone call charge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int minutes, price_over_10_minutes = 2;
    double price_per_minute = 0.50, overall_cost, value_added_tax, cross_network_charge, national_communication_regulatory_authority_charge, company_scholarship_charge;
    const double value_added_tax_percentage = 0.05, cross_network_charge_percentage = 0.10, national_communication_regulatory_authority_percentage = 0.02, company_scholarship_charge_percentage = 0.03; // rember to times the cost you want to add this percentage too then add the orignal cost back on like so "cost = (cost * tax) + cost" this adds the percentage back onto cost
    cout << "enter minutes on call: ";
    cin >> minutes;


    while (minutes > 0)
    {
        if (minutes > 10)
        {
            overall_cost = (minutes * price_per_minute) * price_over_10_minutes - 5;
            minutes = 0;
        }
        else
        {
            overall_cost = minutes * price_per_minute;
            minutes = 0;
        }
        cout << endl;
        
        cout << "The gross profit of this call was $" << overall_cost << endl;
        
        value_added_tax = (overall_cost * value_added_tax_percentage);
        cout << "The amount withheld for value added tax is $" << value_added_tax << endl;
        
        cout << endl;
        
        cross_network_charge = (overall_cost * cross_network_charge_percentage);
        cout << "The amount withheld for cross network charge is $" << cross_network_charge << endl;
        
        cout << endl;

        national_communication_regulatory_authority_charge = (overall_cost * national_communication_regulatory_authority_percentage);
        cout << "The amount withheld for the contribution to the national communication regulatory authority is $" << national_communication_regulatory_authority_charge << endl;

        cout << endl;
        
        company_scholarship_charge = (overall_cost * company_scholarship_charge_percentage);
        cout << "The ammount witheld for the company's scholarship for students of tellecommunication is $" << company_scholarship_charge << endl;

        cout << endl;
       
        cout << "The net profit of this call was $" << overall_cost - value_added_tax - cross_network_charge - national_communication_regulatory_authority_charge - company_scholarship_charge << endl;

        cout << endl;
        
        cout << "If you want to do another, please enter the value for minutes again, if not, enter 0: ";
        cin >> minutes;
        cout << "----------------------------------------------------------------------------------------------------";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
