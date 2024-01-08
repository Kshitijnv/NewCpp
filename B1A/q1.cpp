#include <iostream>
#include <string>

using namespace std;

class Room
{
private:
    int roomId;
    string roomName;
    int numOfSeats;
    double pricePerSeat;

public:
    // Default constructor
    Room() : roomId(0), numOfSeats(0), pricePerSeat(0.0) {}

    // Parameterized constructor
    Room(int id, const string &name, int seats, double price)
        : roomId(id), roomName(name), numOfSeats(seats), pricePerSeat(price) {}

    // Setter methods
    void setRoomId(int id)
    {
        roomId = id;
    }

    void setRoomName(const string &name)
    {
        roomName = name;
    }

    void setNumOfSeats(int seats)
    {
        numOfSeats = seats;
    }

    void setPricePerSeat(double price)
    {
        pricePerSeat = price;
    }

    // Getter methods
    int getRoomId() const
    {
        return roomId;
    }

    const string &getRoomName() const
    {
        return roomName;
    }

    int getNumOfSeats() const
    {
        return numOfSeats;
    }

    double getPricePerSeat() const
    {
        return pricePerSeat;
    }

    // Calculate total price for all seats in the room
    double calculateTotalPrice() const
    {
        return numOfSeats * pricePerSeat;
    }

    // Display room details
    void displayRoomDetails() const
    {
        cout << "Room ID: " << roomId << endl;
        cout << "Room Name: " << roomName << endl;
        cout << "Number of Seats: " << numOfSeats << endl;
        cout << "Price per Seat: $" << pricePerSeat << endl;
        cout << "Total Price for all Seats: $" << calculateTotalPrice() << endl;
    }
};

int main()
{
    // Create an instance of the Room class
    Room room1;

    // Set room details using setter methods
    room1.setRoomId(101);
    room1.setRoomName("Conference Room A");
    room1.setNumOfSeats(50);
    room1.setPricePerSeat(10.0); // Assuming $10 per seat

    // Display room details using the displayRoomDetails method
    cout << "Room Details:" << endl;
    room1.displayRoomDetails();

    return 0;
}
