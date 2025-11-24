#include <iostream>
using namespace std;

class Auth
{
    virtual int signUp(string email, string password) = 0;
    virtual int signIn(string email, string password) = 0;
    virtual int signOut(string email) = 0;
    virtual int passwordChange(string oldPassword, string newPassword) = 0;
    virtual int forgotPassword(string email, string otp, string newPassword) = 0;
};

class Mobile : public Auth
{
};

class Web : public Auth
{
};

int main()
{
}