#include <iostream>
#include <string>
#include <vector>

using namespace std;

void displayHeader() {
    cout << "=== SECURITY AUDIT TOOL v1.0 ===" << endl;
    cout << "Status: Active Monitoring..." << endl;
    cout << "--------------------------------" << endl;
}

int main() {
    displayHeader();
    string password = "Abcde!2345";
    string cipherText = encryptData(password);
    
    cout << "Encrypted password is " << cipherText << endl;
    
    if (isSecure(password)) {
        cout << "Password is secure!" << endl;
    } else {
        cout << "Password is not secure!" << endl;
    }
}