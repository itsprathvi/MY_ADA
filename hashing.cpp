#include <iostream>
using namespace std;
int size, pos, val;

void hashtable(int hash[], int size)
{

    for (int i = 0; i < size; i++)
    {
        hash[size] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> val;
        pos = val % size;
        if (hash[pos] == 0)
        {
            hash[pos] = val;
            cout << "Value Added Successfully !!";
            cout << "Position : " << pos + 1 << "Value : " << hash[pos] << endl;
        }
        else if (hash[pos] != 0)
        {
            while (hash[pos] == 0)
            {
                for (int k = 1; k < size; k++)
                {
                    int a = val + k;
                    pos = a % size;
                }
            }
        }
        else
        {
            cout << "Hash Table is full!!" << endl;
        }
    }
}

int main()
{
    cout << "Enter the Size of Hash Table : ";
    cin >> size;
    int hash[size];

    hashtable(hash, size);
    return 0;
}