#include <iostream>

using namespace std;

int main(){
    const int small_fee = 25;
    const int large_fee = 35;
    int small;
    int large;
    int total;
    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n\n";
    cout << "How many small rooms would you like cleaned?";
    cin >> small;
    cout << "How many large rooms would you like cleaned?";
    cin >> large;
    total = (small*small_fee) + (large*large_fee);
    cout << "Price per small room: $" << small_fee << endl;
    cout << "Price per large room: $" << large_fee << endl;
    cout << "Cost : $" << total << endl;
    cout << "Tax: $" << total*0.06 << endl;
    cout << "===============================\n";
    cout << "Total estimate: $" << total*1.06 << endl;
    cout << "This estimate is valid for 30 days\n";
    return 0;
}