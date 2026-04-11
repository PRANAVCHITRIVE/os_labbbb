#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid1, pid2, pid3;

    printf("Parent Process Started\n");
    printf("Parent PID: %d\n", getpid());

    pid1 = fork();
    if (pid1 == 0)
    {
        printf("\nChild 1\n");
        printf("Child 1 PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
        execl("/bin/ls", "ls", "-l", NULL);
        printf("Exec failed\n");
        return 0;
    }

    pid2 = fork();
    if (pid2 == 0)
    {
        printf("\nChild 2\n");
        printf("Child 2 PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
        execl("/bin/ls", "ls", "-l", NULL);
        printf("Exec failed\n");
        return 0;
    }

    pid3 = fork();
    if (pid3 == 0)
    {
        printf("\nChild 3\n");
        printf("Child 3 PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
        execl("/bin/ls", "ls", "-l", NULL);
        printf("Exec failed\n");
        return 0;
    }

    // Parent waits for all 3 children
    wait(NULL);
    wait(NULL);
    wait(NULL);

    printf("\nAll child processes completed\n");
    printf("Parent process exiting\n");

    return 0;
}
