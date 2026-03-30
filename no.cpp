#include <iostream>
using namespace std;

class Account
{
private:
    int acc_no;
    float balance;

public:
    int get_acc_no()
    {
        return acc_no;
    }
    void set_acc_no(int acc_no)
    {
        this->acc_no = acc_no;
    }
    int get_balance()
    {
        return balance;
    }
    void set_balance(int balance)
    {
        this->balance = balance;
    }
    void displayAccount()
    {
        cout << "Account No  ::  " << get_acc_no() << endl;
        cout << "Balance  ::  " << get_balance() << endl;
    }
    Account()
    {
        cout << "Account created with default values" << endl;
        acc_no = 1;
        balance = 0;
    };
    Account(int, float);
};

Account::Account(int acc_no, float balance)
{
    this->acc_no = acc_no;
    this->balance = balance;
}
int main()
{
    Account A;
    A.displayAccount();
    Account B(1000, 200);
    B.displayAccount();
    return 0;
}