#include <iostream>
using namespace std;

int main() {
    int balance = 10000;
    int choice = 0;
    int secretPin = 1234;
    int userPin;
    cout << "🔐 PIN daalo: ";
    cin >> userPin;

    if(userPin == secretPin) {
        cout << "✅ Welcome Narayan Sir" << endl;
        cout << "=== NARAYAN NATIONAL BANK - ATM 🏧 ===" << endl;
        cout << "Owner: Narayan | Day 4 of C++ Journey" << endl;

        while(choice != 3) {
            cout << "\n1. Balance Check Karo 💰" << endl;
            cout << "2. Paise Nikalo 💸" << endl;
            cout << "3. Exit Karo 👋" << endl;
            cout << "Apna choice daalo: ";

            cin >> choice;

            switch(choice) {
                case 1:
                    cout << "Tumhara Balance hai: " << balance << endl;
                    break;
                case 2:
                    int amount;
                    cout << "Kitne paise nikalne hai: ";
                    cin >> amount;
                    if(amount <= balance && amount > 0) {
                        balance = balance - amount;
                        cout << "Cash nikla: " << amount << endl;
                        cout << "Bacha hua Balance: " << balance << endl;
                    } else {
                        cout << "Bhai paise nahi hai ya galat amount" << endl;
                    }
                    break;
                case 3:
                    cout << "Dhanyavaad! Narayan Bank mein phir aana" << endl;
                    break;
                default:
                    cout << "Galat button bhai" << endl;
            } // switch ka }
        } // while ka }
    } else { 
        cout << "❌ Galat PIN. ATM band" << endl;
    } 

    return 0;
}
