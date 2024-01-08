#include <iostream>
#include <string>

class Order
{
private:
    int order_id;
    std::string customer_name;
    std::string shipping_address;
    double total_amount;

public:
    // Constructor
    Order(int id, const std::string &name, const std::string &address, double amount)
        : order_id(id), customer_name(name), shipping_address(address), total_amount(amount) {}

    // All Setter methods
    void setOrderId(int id)
    {
        order_id = id;
    }

    void setCustomerName(const std::string &name)
    {
        customer_name = name;
    }

    void setShippingAddress(const std::string &address)
    {
        shipping_address = address;
    }

    void setTotalAmount(double amount)
    {
        total_amount = amount;
    }

    // All Getter methods
    int getOrderId() const
    {
        return order_id;
    }

    const std::string &getCustomerName() const
    {
        return customer_name;
    }

    const std::string &getShippingAddress() const
    {
        return shipping_address;
    }

    double getTotalAmount() const
    {
        return total_amount;
    }

    // Display order details
    void displayOrder() const
    {
        std::cout << "Order ID: " << order_id << "\n";
        std::cout << "Customer Name: " << customer_name << "\n";
        std::cout << "Shipping Address: " << shipping_address << "\n";
        std::cout << "Total Amount: Rs. " << total_amount << "\n";
    }
};

// Tester
int main()
{
    // Example usage
    Order myOrder(1, "Kshitij Varshney", "panchvati", 199);

    // Display order details
    myOrder.displayOrder();
    int newAmt;
    std::cout << "Enter updated amount: ";
    std::cin >> newAmt;

    std::string newAddress;
    std::cout << "Enter new shipping address: ";
    std::cin >> newAddress;
    // Update order details
    myOrder.setTotalAmount(newAmt);
    myOrder.setShippingAddress(newAddress);

    // Display updated order details
    myOrder.displayOrder();

    return 0;
}