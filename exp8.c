#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int at[20], bt[20], pr[20];
    int ct[20], tat[20], wt[20], rt[20], st[20];
    int done[20] = {0};

    for(i = 0; i < n; i++)
    {
        printf("\nProcess P%d\n", i+1);

        printf("Arrival Time: ");
        scanf("%d", &at[i]);

        printf("Burst Time: ");
        scanf("%d", &bt[i]);

        printf("Priority (Higher number = Higher priority): ");
        scanf("%d", &pr[i]);
    }

    int time = 0, completed = 0;

    while(completed < n)
    {
        int max_priority = -1;
        int index = -1;

        for(i = 0; i < n; i++)
        {
            if(at[i] <= time && done[i] == 0)
            {
                if(pr[i] > max_priority)
                {
                    max_priority = pr[i];
                    index = i;
                }
            }
        }

        if(index != -1)
        {
            st[index] = time;                 
            rt[index] = st[index] - at[index]; 

            time += bt[index];

            ct[index] = time;                
            tat[index] = ct[index] - at[index]; 
            wt[index] = tat[index] - bt[index]; 

            done[index] = 1;
            completed++;
        }
        else
        {
            time++;   // CPU Idle
        }
    }

    float avg_wt = 0, avg_tat = 0, avg_rt = 0;

    printf("\nProcess\tAT\tBT\tPriority\tST\tCT\tTAT\tWT\tRT\n");

    for(i = 0; i < n; i++)
    {
        printf("P%d\t%d\t%d\t%d\t\t%d\t%d\t%d\t%d\t%d\n",
               i+1, at[i], bt[i], pr[i],
               st[i], ct[i], tat[i], wt[i], rt[i]);

        avg_wt += wt[i];
        avg_tat += tat[i];
        avg_rt += rt[i];
    }

    avg_wt /= n;
    avg_tat /= n;
    avg_rt /= n;

    printf("\nAverage Waiting Time = %.2f", avg_wt);
    printf("\nAverage Turnaround Time = %.2f", avg_tat);
    printf("\nAverage Response Time = %.2f\n", avg_rt);

    return 0;
}
