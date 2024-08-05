#ifndef TIMER_H
#define TIMER_H

#include <iostream>
#include <chrono>
#include <utility>
#include <string>

using namespace std;
using namespace std::chrono;

template<typename Func, typename... Args>
auto measure_execution_time(const string& func_name, Func func, Args&&... args) {
    auto start = high_resolution_clock::now(); // Start time

    // Call the function with the provided arguments
    auto result = func(forward<Args>(args)...);

    auto end = high_resolution_clock::now();   // End time

    // Calculate duration in microseconds
    auto duration = duration_cast<microseconds>(end - start).count();
    cout << "Function " << func_name << " - Time taken: " << duration << " microseconds" << endl;

    return result; // Return the result of the function
}

// Macro to automatically get the function name
#define MEASURE_TIME(func, ...) measure_execution_time(#func, func, ##__VA_ARGS__)

#endif // TIMER_H

