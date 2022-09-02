#include "BankAccount.h"

using std::cout;
using std::endl;
using std::string;
using std::to_string;

BankAccount::BankAccount(string account_id, float balance):
    account_id (account_id), balance(balance) {

        cout << " Starting balance is: " << balance << endl;
    }

void BankAccount::deduct_service_charge(TransactionType transaction_type) {
    if(transaction_type == TransactionType::Cheque) {
        balance = balance - 2;
    } else if (transaction_type == TransactionType::Cash) {
        balance = balance - 1;
    } else if (transaction_type == TransactionType::Electronic) {
        balance = balance - 0.5;
    }
}

bool BankAccount::withdraw(TransactionType transaction_type, float amount) {
    if (amount <= balance) {
        balance = balance - amount;

        deduct_service_charge(transaction_type);

        cout << " Withdraw " << amount << " Balance is: " << balance << endl;

        return true;
    }
    return false;
}

void BankAccount::deposit(TransactionType transaction_type, float amount) {
    balance = balance + amount;

    deduct_service_charge(transaction_type);

    cout << " Deposited " << amount << " Balance is: " << balance << endl;
}





