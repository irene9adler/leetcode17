#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
        vector<string> letterCombinations(string digits) {
        string alpha[9] = {"","abc","def","ghi","jkl","mno","pqrs","tun","wxyz"};
        vector<string> result;
        //vector<string> result = new vector (string);

        string curr;//当前正在组的结果串
        int index;//走到digits的第几个数字


        toGetTheRes(alpha,digits,"",0,result);
        return result;
    }

    void toGetTheRes(string alphabet[],string input,string current,int index,vector<string> & res)
    {
        if(index == input.length())
        {
            if(current.length() != 0)
            {
                res.push_back(current);
                cout<<"current end:";
                cout<<current;
                cout <<"\n";
            }
            return;
        }
        string next;
        int i;

        string temp = alphabet[input[index] - '0' - 1];
        cout << "temp:";
        //cout << temp;
        cout << "\n";
        for(i = 0;i < temp.length();i++)
        {
            next = current + temp[i];
            cout<<"next:";
            cout<< next;
            cout <<"\n";
            //index += 1;
            cout << "index :";
            cout << index;
            cout << "\n";
            toGetTheRes(alphabet,input,next,index +1,res);
        }

    }
};

int main()
{
    Solution solve;
    solve.letterCombinations("234");
    return 0;
}
