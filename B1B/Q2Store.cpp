#include <iostream>
#include <vector>
#include "Order.h"

int main()
{
    std::cout << "Enter 10 orders details : " << std::endl;

    std::vector<Order> orders;
    for (int i = 0; i < 2; i++)
    {
        int order_id;
        std::string customer_name;
        std::string shipping_address;
        double total_amount;
        int flag = 0;
        std::cout << "Enter " << i + 1 << " order details : " << std::endl;

        // Order ID validation
        std::string order_id_str;
        bool valid_order_id = false;
        do
        {
            std::cout << "Enter Order ID: ";
            std::cin >> order_id_str;

            try
            {
                order_id = std::stoi(order_id_str);
                valid_order_id = true;
            }
            catch (const std::exception &e)
            {
                std::cout << "Invalid Order ID. Please enter a valid ID." << std::endl;
            }
        } while (!valid_order_id || order_id <= 0);

        // Customer Name validation
        do
        {
            std::cout << "Enter Customer Name: ";
            std::cin.ignore(); // Ignore the newline character from the previous input
            std::getline(std::cin, customer_name);

            if (customer_name.empty())
            {
                std::cout << "Invalid input. Please enter a valid name." << std::endl;
            }
        } while (customer_name.empty());
        // Shipping Address validation
        do
        {
            std::cout << "Enter Shipping Address: ";
            std::cin.ignore(); // Ignore the newline character from the previous input
            std::getline(std::cin, shipping_address);

            if (shipping_address.empty())
            {
                std::cout << "Invalid input. Please enter a valid shipping address." << std::endl;
            }
        } while (shipping_address.empty());

        // Total Amount validation
        std::string total_amount_str;
        bool valid_total_amount = false;
        do
        {
            std::cout << "Enter total amount: ";
            std::cin >> total_amount_str;

            try
            {
                total_amount = std::stoi(total_amount_str);
                valid_total_amount = true;
            }
            catch (const std::exception &e)
            {
                std::cout << "Invalid amount. Please enter a valid amount." << std::endl;
            }
        } while (!valid_total_amount || total_amount <= 0.0);

        Order order(order_id, customer_name, shipping_address, total_amount);
        orders.push_back(order);
    }

    double minAmount;
    std::cout << "Enter the order amount to filter the orders: ";
    std::cin >> minAmount;
    int count = 0;
    std::cout << "Orders with total amount greater than " << minAmount << ":" << std::endl;
    for (const Order &order : orders)
    {
        if (order.getTotalAmount() > minAmount)
        {
            order.displayOrder();
            count++;
        }
    }

    std::cout << "Count of orders with total amount greater than " << minAmount << ": " << count << std::endl;

    return 0;
}
