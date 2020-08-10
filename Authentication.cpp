#include <iostream>
using namespace std;

int main ()
{
	system("color 0a");
    string id, id2;
    string p,p2;
    int attempt = 0;
    cout << "Enter your Id: ";
    cin >> id;
    cout << "Enter your Password: ";
    cin >> p;
    
    system ("cls");


    while (attempt < 3)
    {
        cout << "Enter Id Again: ";
        cin >> id2;
        cout << "Enter Password: ";
        cin >> p2;
     
        if (id == id2 && p== p2)
        {
            cout << "Login Successfull\n";
            break;
        }
        else
        {
            cout << "Either Id or password is wrong try again.\n";
            attempt++;
             system ("pause");
             system("cls");
    }
    if (attempt == 3)
    {
            cout << "Alert!!!Too many login attemps! \n";
            cout<<"No. of attempts till now : "<<attempt<<endl;
            system ("pause");
            return 0;
    }
}
}
