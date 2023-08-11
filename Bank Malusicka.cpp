#include <iostream>
#include <string>

class LoginPage
{
private:
	std::string validLogin = "Sonek";
	std::string validPassword = "Sonek";
	bool loggedIn = false;
public:
	bool inputLogin()
	{
		std::string inputLogin;
		std::string inputPassword;

		std::cout << "TYPE YOUR LOGIN: ";
		std::cin >> inputLogin;
		
		std::cout << "TYPE YOUR PASSWORD: ";
		std::cin >> inputPassword;
		
			if (inputLogin == validLogin && inputPassword == validPassword)
			{
				std::cout << "LOGIN SUCCESSFUL" << std::endl;
				loggedIn = true;
				return true;
			}
			else
			{
				std::cout << "WRONG! TRY AGAIN" << std::endl;
				return false;
			}
	        
			
	
	}
	bool isLoggedIn()
	{
		return loggedIn;
	}

};
class Balance : public LoginPage
{
private:
	double accountBalance =(1.345); //Starting balance
public:

	void showBalance()
	{
		if (isLoggedIn())
		{
			std::cout << "Your account balance: $" << accountBalance << std::endl;

		}
		else
		{ 
			std::cout << "Please log in first" << std::endl;
		}

	}
};

int main()
{
	Balance balancePage;
	if (balancePage.inputLogin())
	{
		balancePage.showBalance();
	}

	return 0;
}