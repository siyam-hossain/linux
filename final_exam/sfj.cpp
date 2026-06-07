#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int p[20], bt[20], wt[20], tat[20];
    int n;
    float wt_avg = 0, tat_avg = 0;
    
    cout<<"Enter number of process: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter burst time: ";
        cin>>bt[i];
        p[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1+i; j < n; j++)
        {
            if(bt[i] > bt[j]){
                swap(bt[i], bt[j]);
                swap(p[i], p[j]);
            }
        }
    }
    
    wt[0] = 0;
    tat[0] = bt[0];

    wt_avg = 0;
    tat_avg = bt[0];

    for (int i = 1; i < n; i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
        tat[i] = tat[i-1] + bt[i];

        wt_avg += wt[i];
        tat_avg += tat[i];
    }
    cout<<endl;
    cout<<"Process\t\tBurst time\tWaiting time\tTurnaround time\n";

    for (int i = 0; i < n; i++)
    {
        cout<<"p"<<p[i]<<"\t\t"
            <<bt[i]<<"\t\t"
            <<wt[i]<<"\t\t"
            <<tat[i]<<endl;
    }
    cout<<endl;
    cout<<"Average waiting time: "<<wt_avg/n<<endl;
    cout<<"Average waiting time: "<<tat_avg/n<<endl;
    
    
    return 0;
}
