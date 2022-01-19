#include <thread>
#include <vector>

int main() {
	std::vector<std::thread> threads;

	for (size_t i = 0; i < 1000000; ++i) {
		threads.emplace_back([]() {
			std::this_thread::sleep_for(std::chrono::hours(1));
		});
	}

	threads[0].join();
	return 0;
}
