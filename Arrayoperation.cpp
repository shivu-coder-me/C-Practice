#include <iostream>
using namespace std;

class Array
{
    int arr[10];
    int n;

public:

    // Constructor
    Array()
    {
        n = 0;
    }

    // Create array
    void create()
    {
        cout << "Enter the size of array: ";
        cin >> n;

        if(n < 1 || n > 10)
        {
            cout << "Invalid size!" << endl;
            n = 0;
            return;
        }

        cout << "Enter the elements of array:" << endl;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    // Insert element
    void insert()
    {
        int pos, value;

        if(n >= 10)
        {
            cout << "Array is full!" << endl;
            return;
        }

        cout << "Enter the position: ";
        cin >> pos;

        cout << "Enter the value: ";
        cin >> value;

        if(pos < 1 || pos > n + 1)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        for(int i = n - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[pos - 1] = value;
        n++;

        cout << "Element inserted successfully!" << endl;
    }

    // Display
    void display()
    {
        if(n == 0)
        {
            cout << "Array is empty!" << endl;
            return;
        }

        cout << "Array elements:" << endl;

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // Delete element
    void removeElement()
    {
        int pos;

        cout << "Enter the position of element to delete: ";
        cin >> pos;

        if(pos < 1 || pos > n)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        for(int i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        cout << "Element deleted successfully!" << endl;
    }

    // Update element
    void update()
    {
        int pos, value;

        cout << "Enter the position: ";
        cin >> pos;

        if(pos < 1 || pos > n)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        cout << "Enter the new value: ";
        cin >> value;

        arr[pos - 1] = value;

        cout << "Element updated successfully!" << endl;
    }

    // Search element
    void search()
    {
        int value;
        int flag = 0;

        cout << "Enter the value to search: ";
        cin >> value;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] == value)
            {
                cout << "Element found at position: " << i + 1 << endl;
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            cout << "Element not found!" << endl;
        }
    }

    // Sort array
    void sort()
    {
        int temp;

        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j < n - i - 1; j++)
            {
                if(arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        cout << "Array sorted successfully!" << endl;
    }
};

int main()
{
    Array obj;
    int choice;

    do
    {
        cout << "\n1. Display" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Update" << endl;
        cout << "5. Search" << endl;
        cout << "6. Sort" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                obj.display();
                break;

            case 2:
                obj.insert();
                break;

            case 3:
                obj.removeElement();
                break;

            case 4:
                obj.update();
                break;

            case 5:
                obj.search();
                break;

            case 6:
                obj.sort();
                break;

            case 7:
                cout << "Program exited." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 7);

    return 0;
}