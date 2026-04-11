#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid1, pid2, pid3, pid4, pid5;

    printf("Parent Process Started\n");
    printf("Parent PID: %d\n", getpid());

    pid1 = fork();
    if (pid1 == 0)
    {
        printf("Hello I am Child 1\n");
        printf("Child 1 PID: %d | Parent PID: %d\n", getpid(), getppid());
        return 0;
    }

    pid2 = fork();
    if (pid2 == 0)
    {
        printf("Hello I am Child 2\n");
        printf("Child 2 PID: %d | Parent PID: %d\n", getpid(), getppid());
        return 0;
    }

    pid3 = fork();
    if (pid3 == 0)
    {
        printf("Hello I am Child 3\n");
        printf("Child 3 PID: %d | Parent PID: %d\n", getpid(), getppid());
        return 0;
    }

    pid4 = fork();
    if (pid4 == 0)
    {
        printf("Hello I am Child 4\n");
        printf("Child 4 PID: %d | Parent PID: %d\n", getpid(), getppid());
        return 0;
    }

    pid5 = fork();
    if (pid5 == 0)
    {
        printf("Hello I am Child 5\n");
        printf("Child 5 PID: %d | Parent PID: %d\n", getpid(), getppid());
        return 0;
    }

    // Parent waits for all 5 children
    wait(NULL);
    wait(NULL);
    wait(NULL);
    wait(NULL);
    wait(NULL);

    printf("\nAll 5 child processes completed\n");
    printf("Parent process exiting\n");

    return 0;
}
