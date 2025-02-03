std::vector<int> vec = {1, 2, 3, 4, 5};
for (int& x : vec) {
  x += 10;
}
for (int x : vec) {
  std::cout << x << std::endl;
}