#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> convert_mas(string &a);
void algoritm(vector<int> &v2);

int main()
{
    string a;

    cout << "Enter number of your credit card"
         << "\n";
    cin >> a;

    cout << "card number is " << a << "\n";

    vector<int> v1 = convert_mas(a);
    algoritm(v1);

}

vector<int> convert_mas(string &a)
{
    vector<int> v1;

    for (int i = 0; i < a.size(); i++)
    {
        v1.push_back(int(a[i] - '0'));
    }
    return v1;
}

void algoritm(vector<int> &v2)
{
    int sum = 0;
    for (int i = 0; i < v2.size(); i++)
    {
        if (i % 2 != 0)
        {
            v2[i] *= 2;
            if (v2[i] > 9)
            {
                v2[i] -= 9;
            }
        }
    }

    for (int i = 0; i < v2.size(); i++)
    {
        sum = sum + v2[i];
    }

    sum % 10 == 0 ? cout << "card is valid" : cout << "card is not valid";
}
