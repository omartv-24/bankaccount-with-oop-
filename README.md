# Bank Safety System

A beginner-friendly C++ banking project built step by step while learning programming fundamentals and object-oriented programming.

The goal of this project is not only to create a banking system, but also to track my progress while learning C++ and improving the project with every new concept.

## Current Features

- Create a basic bank account
- Store account owner information
- Store account balance
- Deposit money
- Withdraw money
- Prevent withdrawals when the balance is insufficient
- Display the current balance

## Concepts Used

- Variables
- Data types
- Conditional statements
- Functions
- Classes
- Objects
- Methods

## Current Structure

```text
Bank-Safety-System/
│
├── main.cpp
└── README.md
```

## Example

```cpp
BankAccount account1;

account1.owner = "Omar";
account1.balance = 1000;

account1.deposit(500);
account1.withdraw(300);
account1.showBalance();
```

## How It Works

Each bank account is created as an object from the `BankAccount` class.

The class stores information about the account and contains functions that control what the account can do.

For example:

```cpp
deposit()
```

Adds money to the account.

```cpp
withdraw()
```

Removes money from the account if enough balance is available.

```cpp
showBalance()
```

Displays the current account balance.

## Planned Improvements

As I learn more C++ concepts, I will continue improving this project.

Planned features include:

- Constructors
- Encapsulation
- Private account data
- Getters and setters
- PIN authentication
- Multiple bank accounts
- Money transfers
- Transaction history
- Savings and checking accounts
- Inheritance
- Polymorphism
- File handling
- Saving account data
- Login system

## Learning Goal

This project is being built gradually.

Instead of learning all C++ concepts first and creating a project afterward, every new concept I learn will be applied directly to this project.

This allows the repository to show the full development process from a simple beginner program into a more complete object-oriented banking system.

## Project Status

Currently in early development.

The project will be updated as I continue learning C++ and object-oriented programming.

## Language

C++

## Author

Omar
