#include <iostream>
using namespace std;

void showMenu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. Check " << endl;
    cout << "2. Deposit " << endl;
    cout << "3. Withdraw " << endl;
    cout << "4. Exit " << endl;
    cout << "************************" << endl;
}

int main()
{
    // Check balance , deposit , Withdraw, show menu.

    int option;
    double balance = 500;

    do{
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            cout << "Balance is: " << balance << " $ " << endl;
            break;
        case 2:
            cout << "Deposit Amount: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:
            cout << "Withdraw Amount: ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Not enough Money" << endl;
            break;
        default:
           cout<<"Invalid request !!"<<endl;
        }
    }while(option!=4);

    return 0;
}