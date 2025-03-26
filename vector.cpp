#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b);

int main()
{
    vector<int>vec1;
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        vec1.push_back(array[i]);
        cout << vec1[i];
        cout << " ";
    }
    cout << "\n";

    return 0;
}
int add(int a, int b)
{
    return a+b;
}