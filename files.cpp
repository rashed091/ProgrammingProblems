#include <bits/stdc++.h>
using namespace std;

const int NUM_LINES = 4;
const int COLUMN_WIDTH = 20;

int main()
{
    ifstream file("file.txt");

    if (!file.is_open())
    {
        cerr << "Could not open the file file.txt" << endl;
    }
    else
    {
        for (size_t k = 0; k < NUM_LINES; ++k)
        {
            int intValue;
            double doubleValue;
            file >> intValue >> doubleValue;

            cout << setw(COLUMN_WIDTH) << (k + 1) << " | ";
            cout << setw(COLUMN_WIDTH) << intValue << " | ";
            cout << setw(COLUMN_WIDTH) << doubleValue << endl;
        }
    }

    return 0;
}
