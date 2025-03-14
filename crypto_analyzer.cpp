#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to the Crypto Price Analyzer!\n";
    std::cout << "Enter prices and amounts for your cryptocurrencies.\n\n";

    // متغيرات لتخزين البيانات
    double bitcoin_price, ethereum_price;
    double bitcoin_amount, ethereum_amount;
    double max_price = 0, min_price = 999999;

    // إدخال بيانات Bitcoin
    std::cout << "Enter Bitcoin price (USD): ";
    std::cin >> bitcoin_price;
    std::cout << "Enter your Bitcoin amount: ";
    std::cin >> bitcoin_amount;

    // إدخال بيانات Ethereum
    std::cout << "Enter Ethereum price (USD): ";
    std::cin >> ethereum_price;
    std::cout << "Enter your Ethereum amount: ";
    std::cin >> ethereum_amount;

    // حساب القيم
    double bitcoin_value = bitcoin_price * bitcoin_amount;
    double ethereum_value = ethereum_price * ethereum_amount;
    double total_value = bitcoin_value + ethereum_value;

    // تحديد أعلى وأدنى سعر
    if (bitcoin_price > max_price) max_price = bitcoin_price;
    if (ethereum_price > max_price) max_price = ethereum_price;
    if (bitcoin_price < min_price) min_price = bitcoin_price;
    if (ethereum_price < min_price) min_price = ethereum_price;

    // عرض النتائج
    std::cout << "\n--- Your Crypto Portfolio ---\n";
    std::cout << "Bitcoin Value: $" << bitcoin_value << "\n";
    std::cout << "Ethereum Value: $" << ethereum_value << "\n";
    std::cout << "Total Portfolio Value: $" << total_value << "\n";
    std::cout << "Highest Price: $" << max_price << "\n";
    std::cout << "Lowest Price: $" << min_price << "\n";
    std::cout << "Thanks for using the Crypto Analyzer!\n";

    return 0;
}