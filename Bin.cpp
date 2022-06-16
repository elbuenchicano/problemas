#include <iostream>
#include <vector>
#include <list>

using namespace std;


bool make_bin(vector<bool>& vas, list<int>& E, int h) {
    if (!h) {
        bool acc = false;
        for (auto itr = E.begin(); itr != E.end(); itr++){
            if (*itr)
                acc |= (*itr > 0) ? vas[*itr] : !vas[abs(* itr)];
            else {
                if (!acc) return false;
                acc = false;
            }
        }
        
        return acc;
    }
    else {
        vas[h] = 1;
        if (make_bin(vas, E, h - 1)) return true;
        vas[h] = 0;
        return make_bin(vas, E, h - 1);
    }
}

int main()
{
    list<int>   E;
    int         temp,
                maxi = 0;
    for (cin >> temp; temp != 1000; cin >> temp) {
        if (abs(temp) > maxi)
            maxi = abs(temp);
        E.push_back(temp);
    }
    vector<bool> vas(maxi+1);
    if (make_bin(vas, E, maxi)) {
        for (size_t i = 1; i < vas.size(); ++i)
            cout << vas[i] << " ";
    }
    else
        cout << "nop";
    return 0;
}
