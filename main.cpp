#include <iostream>

// Lab 9 — Hussain
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.

// TODO: double average(const int a[], int n);
double average(const int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; ++i) sum += a[i];
	if (n == 0) {
		return 0.0;
	}
	else {
		return sum * 1.0 / n;
	}
}
// TODO: void printSummary(double avg);
void printSummary(double avg) {
	std::cout << "Average: " << avg << '\n';
}

int main() {
	const int N = 4;
	int scores[N] = { 80, 90, 70, 100 };
	// TODO: double avg = average(scores, N);
	double avg = average(scores, N);
	// TODO: printSummary(avg);
	printSummary(avg);
	return 0;
}
