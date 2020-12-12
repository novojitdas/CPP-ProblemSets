#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v1{};
    vector<int> v2{};

    v1.push_back(10);
    v1.push_back(20);
    cout << v1.at(0) << endl;
    cout << v1.at(1) << endl;
    cout << "Size of the vector v1: " << v1.size() << endl;

    v2.push_back(100);
    v2.push_back(200);
    cout << v2.at(0) << endl;
    cout << v2.at(1) << endl;
    cout << "Size of the vector v2: " << v2.size() << endl;

    vector<vector<int>> vector_2d{};
    vector_2d.push_back(v1);
    vector_2d.push_back(v2);

    cout << "Elements of vector 2d:" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    v1.at(0) = 1000;

    cout << "Elements of vector 2d after update:" << endl;
    cout << vector_2d.at(0).at(0) << endl; // won't update cause this container is copy of v1
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    cout << "v1 after update:\n";
    cout << v1.at(0) << endl;
    cout << v1.at(1) << endl;

    return 0;
}
