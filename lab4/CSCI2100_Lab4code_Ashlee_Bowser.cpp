//Ashlee Bowser, my partner is Gabbi H
//use array or vector to store the data

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    while (true)
    {
        vector<int> nums;
        int x;

        while (cin >> x)
        {
            if(x == -1) 
            {
                return 0;
            }
            if (x == 0) 
            {
                break;
            }
            nums.push_back(x);
        }

        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size(); j++)
            {
                if (nums[i] * 2 == nums[j])
                {
                    count++;
                }
            }
        }

        cout << count << endl;
        nums.clear();
    }

    return 0;
}