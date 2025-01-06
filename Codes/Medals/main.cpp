#include <iostream>
using namespace std;

// Function to read medal data
void read_medals(int medals[3][4])
{
    string categories[3] = {"Gold", "Silver", "Bronze"};

    for (int i = 0; i < 3; ++i)
    {
        cout << "Enter the number of " << categories[i] << " medals for 4 countries:" << endl;
        for (int j = 0; j < 4; ++j)
        {
            cout << categories[i] << " for Country " << j + 1 << ": ";
            cin >> medals[i][j];
        }
    }
}

// Function to calculate total medals for a specific country
int total_medals_country(int medals[3][4], int country_index)
{
    int total = 0;
    for (int i = 0; i < 3; ++i)
    {
        total += medals[i][country_index];
    }
    return total;
}

// Function to find the largest number of medals won
int largest_medals(int medals[3][4])
{
    int largest = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (medals[i][j] > largest)
            {
                largest = medals[i][j];
            }
        }
    }
    return largest;
}

// Function to find the smallest number of medals won
int smallest_medals(int medals[3][4])
{
    int smallest = medals[0][0];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (medals[i][j] < smallest)
            {
                smallest = medals[i][j];
            }
        }
    }
    return smallest;
}

// Function to find the highest number of gold medals won
int highest_gold_medals(int medals[3][4])
{
    int highest = 0;
    for (int i = 0; i < 4; ++i)
    {
        if (medals[0][i] > highest)
        {
            highest = medals[0][i];
        }
    }
    return highest;
}

// Function to calculate total bronze medals won
int total_bronze_medals(int medals[3][4])
{
    int total = 0;
    for (int i = 0; i < 4; ++i)
    {
        total += medals[2][i];
    }
    return total;
}

int main()
{
    // Step 1: Read medal data
    int medals[3][4];
    read_medals(medals);

    // Step 2: Process and display results
    int country_index = 2; // Country 3 (0-based index)
    cout << "Total number of medals won by Country 3: " << total_medals_country(medals, country_index) << endl;
    cout << "Largest number of medals won: " << largest_medals(medals) << endl;
    cout << "Smallest number of medals won: " << smallest_medals(medals) << endl;
    cout << "Highest number of gold medals won: " << highest_gold_medals(medals) << endl;
    cout << "Total number of bronze medals won: " << total_bronze_medals(medals) << endl;

    return 0;
}
