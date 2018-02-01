#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool greaterThan(int i,int j)
{
    return i<j;

}

int main ()
{

    int n;
    cin>>n;
    vector<int> inputs(100);

    for(int i=0;i<n;i++)
    {

        cin>>inputs.at(i);
    }

   /* for(int i=0;i<n;i++)
    {

    cout<<inputs.at(i)<<endl;

    }*/
    sort(inputs.begin(),inputs.end(),greater<int>());

    /*for(int i=0;i<n;i++){

    cout<<inputs.at(i)<<endl;

    }*/

    int sum=0;
    int maxValue=inputs.at(0);
    int j;
    for(j=0;j<n;j++)

    {
        while(inputs.at(j)!=maxValue)
        {
            sum++;
            inputs.at(j)++;

        }
    }
    cout<<sum<<endl;




    inputs.erase(inputs.begin(),inputs.end());
    return 0;
}
