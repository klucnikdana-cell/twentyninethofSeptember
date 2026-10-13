#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Information
{
protected:
    string name;
    string owner;
    string phone;
    string address;
    string activity;

public:
    virtual void Add()
    {
        
    }
    virtual void ShowAll()
    {

    }
    virtual void SearchName()
    {

    }
    virtual void SearchOwner()
    {

    }
    virtual void SearchPhone()
    {

    }
    virtual void SearchActivity()
    {

    }
};

class Dovidnyk : public Information
{
public:
    void Add()override
    {
        ofstream file("Dovidka firms.txt", ios::app);

        cout << "Enter company name: ";
        cin >> name;

        cout << "Enter owner: ";
        cin >> owner;

        cout << "Enter phone: ";
        cin >> phone;

        cout << "Enter address: ";
        cin >> address;

        cout << "Enter activity: ";
        cin >> activity;

        file << name << " " << owner << " " << phone << " " << address 
            << " " << activity << " " << endl;

        file.close();
    }
    void ShowAll()override
    {
        '\n';
        ifstream file("Dovidka firms.txt");

        while (file >> name >> owner >> phone >> address >> activity)
        {
            cout << name << " " << owner << " "
                << phone << " " << address << " "
                << activity << endl;
        }
        file.close();

    }
    void SearchName()override
    {
        ifstream file("Dovidka firms.txt");

        string searchName;
        bool found = false;

        cout << "Enter company name: ";
        cin >> searchName;

        while (file >> name >> owner >> phone >> address >> activity)
        {
            if (name == searchName)
            {
                cout << name << " " << owner << " "
                    << phone << " " << address << " "
                    << activity << endl;
            }
        }
        if (found == false)
        {
            cout << "Company not found" << endl;
        }
        file.close();

    }
    void SearchOwner()override
    {
        ifstream file("Dovidka firms.txt");

        string searchOwner;
        bool found = false;

        cout << "Enter owner name: ";
        cin >> searchOwner;

        while (file >> name >> owner >> phone >> address >> activity)
        {
            if (owner == searchOwner)
            {
                cout << name << " " << owner << " "
                    << phone << " " << address << " "
                    << activity << endl;

                found = true;
            }
        }

        if (found == false)
        {
            cout << "Owner not found" << endl;
        }

        file.close();
    }
    void SearchPhone() override
    {
        ifstream file("Dovidka firms.txt");

        string searchPhone;
        bool found = false;

        cout << "Enter phone: ";
        cin >> searchPhone;

        while (file >> name >> owner >> phone >> address >> activity)
        {
            if (phone == searchPhone)
            {
                cout << name << " " << owner << " "
                    << phone << " " << address << " "
                    << activity << endl;

                found = true;
            }
        }

        if (found == false)
        {
            cout << "Phone not found" << endl;
        }

        file.close();
    }
    void SearchActivity() override
    {
        ifstream file("Dovidka firms.txt");

        string searchActivity;
        bool found = false;

        cout << "Enter activity: ";
        cin >> searchActivity;

        while (file >> name >> owner >> phone >> address >> activity)
        {
            if (activity == searchActivity)
            {
                cout << name << " " << owner << " "
                    << phone << " " << address << " "
                    << activity << endl;

                found = true;
            }
        }

        if (found == false)
        {
            cout << "Activity not found" << endl;
        }

        file.close();
    }
};


int main()
{
    Dovidnyk d;

    d.Add();
    d.ShowAll();
    d.SearchName();
    d.SearchOwner();
    d.SearchPhone();
    d.SearchActivity();

}
