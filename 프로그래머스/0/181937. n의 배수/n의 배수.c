#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int n)
{
    int answer = 0;

    if (num % n == 0) {
        answer = 1;
    } else {
        answer = 0;
    }

    return answer;
}

int main()
{
    printf("%d\n", solution(98, 2));
    printf("%d\n", solution(34, 3));

    return 0;
}