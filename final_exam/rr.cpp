#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, tq;
    int bt[10],
        wt[10],
        tat[10],
        c_bt[10],
        p[10],
        max_bt;

    float avg_wt = 0, 
          avg_tat = 0, 
          time = 0;


    cout<<"Enter the number of process: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter burst time for process - "<<i+1<<": ";
        cin>>bt[i];
        c_bt[i] = bt[i];
        p[i] = i;
    }
    cout<<"Enter time quantum: ";
    cin>>tq;
    

    max_bt = bt[0];

    for (int i = 1; i < n; i++)
    {
        max_bt = max(max_bt, bt[i]);
    }
    
    // rr
    for (int i = 0; i < (max_bt/tq)+1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(bt[j] != 0){
                if(bt[j] <= tq){
                    time += bt[j];
                    tat[j] = time;
                    bt[j] = 0;
                }
                else{
                    bt[j] -= tq;
                    time += tq;
                }
            }
        } 
    }

    for (int i = 0; i < n; i++)
    {
        wt[i] = tat[i] - c_bt[i];
        avg_tat += tat[i];
        avg_wt += wt[i];
    }

    cout << "\n\nPROCESS\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << p[i] << "\t\t"
             << c_bt[i] << "\t"
             << wt[i] << "\t"
             << tat[i] << endl;
    }
    // Output
    cout << "\nAverage Turnaround Time = " << avg_tat / n;
    cout << "\nAverage Waiting Time = " << avg_wt / n;

    return 0;
}
