#include <iostream>
using namespace std;

int main()
{
    int floors, rooms, occupied_rooms, unoccupied_rooms;
    int total_rooms = 0;
    int total_occupied_rooms = 0;
    int total_unoccupied_rooms = 0;

    cout << "Enter the number of floors: " << endl;
    cin >> floors;

    for (int i = 1; i <= floors; i++)
    {
        cout << "How many rooms are there: " << "floor" << i << endl;
        cin >> rooms;
        total_rooms += rooms;
        cout << "How many are occupied: " << endl;
        cin >> occupied_rooms;
        if (occupied_rooms > rooms)
        {
            cout << "Error: Occupied rooms are greater than total rooms on floor " << i << "." << endl;
            continue;
        }
        total_occupied_rooms += occupied_rooms;
        int unoccupied_rooms = rooms - occupied_rooms;
        total_unoccupied_rooms += unoccupied_rooms;
    }
    cout << "Total Rooms: " << total_rooms << endl;
    cout << "Total Occupied rooms: " << total_occupied_rooms << endl;
    cout << "Total Unccupied rooms: " << total_unoccupied_rooms << endl;
    return 0;
}