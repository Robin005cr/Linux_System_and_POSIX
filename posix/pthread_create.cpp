#include <iostream>
#include <pthread.h>

using namespace std;

void* threadFunction(void* arg) {
    cout << "Thread is running." << endl;
    return nullptr;
}
int main() {
    pthread_t thread1;
    
    pthread_create(&thread1, nullptr, threadFunction, nullptr);
    pthread_join(thread1, nullptr);
   
    return 0;
}