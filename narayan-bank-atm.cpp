#include <iostream>
using namespace std;

int main() {
    int balance = 10000;
    int choice;
    
    cout << "=== NARAYAN NATIONAL BANK - ATM 🏧 ===" << endl;
    cout << "Owner: Narayan | Day 3 of C++ Journey" << endl;
    
    while(choice != 3) {
        cout << "\n1. Balance Check Karo 💰" << endl;
        cout << "2. Paise Nikalo 💸" << endl;
        cout << "3. Exit Karo 👋" << endl;
        cout << "Apna choice daalo: ";
        
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Tumhara Balance hai: " << balance << " Rs ✅" << endl;
                break;
                
            case 2:
                int amount;
                cout << "Kitne paise nikalne hai: ";
                cin >> amount;
                
                if(amount <= balance && amount > 0) {
                    balance = balance - amount;
                    cout << "Cash nikla: " << amount << " Rs 💵" << endl;
                    cout << "Bacha hua Balance: " << balance << " Rs 🔐" << endl;
                } else {
                    cout << "Bhai paisa nahi hai ya galat amount ❌" << endl;
                    cout << "Tumhara Balance: " << balance << " Rs hi hai" << endl;
                }
                break;
                
            case 3:
                cout << "Narayan National Bank mein aane ke liye Dhanyawaad! 🙏" << endl;
                break;
                
            default:
                cout << "Galat button daba diya bhai 😅 1, 2 ya 3 daal" << endl;
        }
    }
    
    return 0;
}
