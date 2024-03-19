// CarpetCleaningService.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int calculateCost(int small_rooms, int large_rooms) {
    int cost;
    cost = (small_rooms * 25) + (large_rooms * 35);
    return cost;
}

int main()
{
    int small_rooms, large_rooms;
    std::cout << "Welcome to Evanna's Carpet Cleaning Service\n";
    std::cout << "How many small rooms you would like to be cleaned?\n";
    std::cin >> small_rooms;
    std::cout << "How many large rooms you would like to be cleaned?\n";
    std::cin >> large_rooms;
    std::cout << "Price for small rooms: $25\nPrice for large rooms: $35\n";
    std::cout << "Number of small rooms: " << small_rooms << "\nNumber of large rooms: " << large_rooms << "\n";
    int total_cost = calculateCost(small_rooms, large_rooms);
    std::cout << "Total Estimate: $" << total_cost << "\n";
    std::cout << "Press any key to exit the console...";
    std::cin.ignore();
    std::cin.get();
}

