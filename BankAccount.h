#pragma once

#include <iostream>
#include <string>

enum class TransactionType {
    Cheque,
    Cash,
    Electronic
};

class BankAccount {

    private:
        std::string account_id;
        float balance;

        void deduct_service_charge(TransactionType transaction_type);
    
    public:
        BankAccount(std::string account_id, float balance);

        bool withdraw(TransactionType transaction_type, float amount);
        void deposit(TransactionType transaction_type, float amount);
};