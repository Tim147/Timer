#include <sys/time.h>
#include <cstdio>
#include <unistd.h>

using namespace std;

int main(){
    float exe_time = 0;
    struct timeval start;
    struct timeval end;
    gettimeofday(&start,NULL);
    printf("start.tv_sec: %d\n",start.tv_sec);
    printf("start.tv_usec: %d\n",start.tv_usec);

    sleep(10);

    gettimeofday(&end,NULL);
    printf("end.tv_sec: %d\n", end.tv_sec);
    printf("end.tv_usec: %d\n",end.tv_usec);
    exe_time = (end.tv_sec - start.tv_sec)*1000000+(end.tv_usec-start.tv_usec);
    printf("time used = %fs\n",exe_time/1000000);
    return 0;
}
