#include <iostream>
#include <string>
#include "BankAccount.h"
#include "BankAccount.cpp"

using std::cout;
using std::endl;

int main() {

    BankAccount alice_bank_account("alice123", 100);

    alice_bank_account.deposit(TransactionType::Cheque, 100);

    alice_bank_account.deposit(TransactionType::Electronic, 300);

    alice_bank_account.withdraw(TransactionType::Cash, 50);

    if (!alice_bank_account.withdraw(TransactionType::Cash, 500)) {
        cout << " Insufficient balance" << endl;
    }

    return 0;

}