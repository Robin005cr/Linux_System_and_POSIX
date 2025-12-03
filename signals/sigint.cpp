#include <csignal>
#include <iostream>
#include <atomic>

std::atomic_bool g_interrupted{false};

void handle_sigint(int signal) {
    std::cout << "\nCaught SIGINT (" << signal << "), shutting down...\n";
    g_interrupted = true;
}

int main() {
    // Register the handler for SIGINT (Ctrl+C)
    std::signal(SIGINT, handle_sigint);  // SIGINT is usually 2 on POSIX systems

    std::cout << "Running; press Ctrl+C to trigger SIGINT.\n";

    // Simulate work loop that checks for interruption
    while (!g_interrupted) {
        // Do useful work here
        // For demo, just spin or sleep
    }

    std::cout << "Clean exit after SIGINT.\n";
    return 0;
}
