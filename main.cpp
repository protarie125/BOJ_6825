#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double w, h;
	cin >> w >> h;
	const auto& bmi = w / (h * h);

	if (bmi < 18.5) {
		cout << "Underweight";
	}
	else if (25 < bmi) {
		cout << "Overweight";
	}
	else {
		cout << "Normal weight";
	}

	return 0;
}