std::vector<int> vec = {1, 2, 3, 4, 5};
int* ptr = &vec[0];
for (int i = 0; i < vec.size(); ++i) {
  ptr[i] += 10; 
}
for (int i = 0; i < vec.size(); i++){
  std::cout << vec[i] << std::endl;
}