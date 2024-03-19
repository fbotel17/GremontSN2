#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>

void situation_finale(int n, int m, std::vector<std::string>& villes, const std::string& actions) {
	std::deque<std::string> queue(villes.begin(), villes.end());
	std::deque<std::string> estomac;
	bool direction = true;

	for (char action : actions) {
		if (action == 'A') {
			if (direction) {
				queue.push_back(queue.front());
				queue.pop_front();
			}
			else {
				queue.push_front(queue.back());
				queue.pop_back();
			}
		}
		else if (action == 'M') {
			if (direction) {
				estomac.push_back(queue.front());
				queue.pop_front();
			}
			else {
				estomac.push_back(queue.back());
				queue.pop_back();
			}
		}
		else if (action == 'R') {
			direction = !direction;
		}
		else if (action == 'C' && !estomac.empty()) {
			if (direction) {
				queue.push_front(estomac.back());
				estomac.pop_back();
			}
			else {
				queue.push_back(estomac.back());
				estomac.pop_back();
			}
		}
	}

	if (!direction) {
		std::reverse(queue.begin(), queue.end());
	}

	for (const auto& ville : queue) {
		std::cout << ville << std::endl;
	}
}

int main() {
	int n;
	std::cin >> n;
	int m;
	std::cin >> m;
	std::cin.ignore();

	std::vector<std::string> villes(n);
	for (int i = 0; i < n; i++) {
		std::getline(std::cin, villes[i]);
	}

	std::string actions;
	std::getline(std::cin, actions);

	situation_finale(n, m, villes, actions);

	return 0;
}
