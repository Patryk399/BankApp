# Banking System

This is a simple banking system program written in C++ that simulates a login process and allows users to check their account balance, add more money, make transfers, and log off.

## Table of Contents
- [Overview](#overview)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Class Descriptions](#class-descriptions)
- [License](#license)

## Overview

This program implements a basic banking system with a login feature. Users are required to input their login and password to access their account. Once logged in, users can perform various banking operations.

## Prerequisites

To compile and run this program, you need:
- A C++ compiler (e.g., g++)
- Standard C++ library

## Usage

1. Clone the repository:

git clone https://github.com/Patryk399/BankApp.git
cd BankApp


2. Compile the program:
g++ main.cpp -o banking_system


3. Run the program:
 ./Bank_app


## Class Descriptions

### LoginPage

The `LoginPage` class handles the login process. Users are required to enter their login and password to log in. If the provided credentials are correct, the user is successfully logged in.

- `inputLogin()`: Allows the user to enter login and password.
- `isLoggedIn()`: Checks if the user is logged in.
- `clearConsole()`: Clears the console screen for better user experience.

### Balance

The `Balance` class inherits from `LoginPage` and allows users to perform banking operations.

- `showBalance()`: Displays options related to account balance and provides choices.
- `addMoreMoney()`: Allows the user to add more money to their account.
- `makeTransfer()`: Facilitates transferring money to another account.

## License

This project is licensed under the [MIT License](LICENSE).
