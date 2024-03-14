#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> vec_of_vecs;

    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        vector<int> current_vec;
        for (int j = 0; j < size; j++)
        {
            int current_element;
            cin >> current_element;
            current_vec.push_back(current_element);
        }
        vec_of_vecs.push_back(current_vec);
    }

    int row, column;
    vector <int> answers;
    for (int i = 0; i < q; i++)
    {
        cin >> row >> column;
        answers.push_back(vec_of_vecs[row][column]);
    }

    for (int i = 0; i < q; i++)
        cout << answers[i] << endl;

    return 0;
}
