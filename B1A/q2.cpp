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

    // Display room details (as in the previous response)
};

int main()
{
    const int numberOfRooms = 10;
    Room rooms[numberOfRooms];

    // Input details for each room
    for (int i = 0; i < numberOfRooms; ++i)
    {
        cout << "Enter details for room #" << i + 1 << ":" << endl;

        int roomId;
        cout << "Room ID: ";
        cin >> roomId;
        rooms[i].setRoomId(roomId);

        string roomName;
        cout << "Room Name: ";
        getline(cin >> ws, roomName);
        rooms[i].setRoomName(roomName);

        int numOfSeats;
        cout << "Number of Seats: ";
        cin >> numOfSeats;
        rooms[i].setNumOfSeats(numOfSeats);

        double pricePerSeat;
        cout << "Price per Seat: ";
        cin >> pricePerSeat;
        rooms[i].setPricePerSeat(pricePerSeat);

        cout << endl;
    }

    // Accept the number of students from the user
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Display rooms with total amount for rooms with capacity >= number of students
    cout << "\nRooms with Total Amount (Price per Seat: 100 Rs):" << endl;
    for (int i = 0; i < numberOfRooms; ++i)
    {
        if (rooms[i].getNumOfSeats() >= numStudents)
        {
            double totalAmount = rooms[i].calculateTotalPrice();
            cout << "Room ID: " << rooms[i].getRoomId() << ", Room Name: " << rooms[i].getRoomName()
                 << ", Total Amount: " << totalAmount << " Rs" << endl;
        }
    }

    return 0;
}
