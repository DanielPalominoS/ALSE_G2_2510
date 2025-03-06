#include <fstream>
#include <iostream>
#include <string>
#include <vector>
int main(int argc, char *argv[]) {
  /*First example: Prints the number of arguments and content*/
  //   std::cout << "Number of arguments: " << argc << std::endl;

  //   for (int i = 0; i < argc; i++) {
  //     std::cout << "Argument " << i << ": " << argv[i] << std::endl;
  //   }
  /*Second example: process input to convert it to integer using */
  //   if (argc < 2) {
  //     std::cerr << "Usage: " << argv[0] << " <number>\n";
  //     return 1; // Error code
  //   }

  //   int num = std::atoi(argv[1]); // Convert argument to integer
  //   std::cout << "You entered: " << num << ", which squared is " << num * num
  //             << std::endl;
  /*Third example: process input using string class from std library*/
  if (argc < 2) {
    std::cerr << "No argument provided!\n";
    return 1;
  }

  std::string arg1 = argv[1];
  if (arg1 == "hello") {
    std::cout << "You said hello!\n";
  } else {
    std::cout << "You said: " << arg1 << "\n";
  }
  /*Fourth example: process input using string class from std library, to
   convert data safely to numbers.
    This example uses exceptions to handle errors, a slight introduction to try
   catch  usage.
   */
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <number>\n";
    return 1;
  }

  try {
    int num = std::stoi(argv[1]); // Convert safely
    std::cout << "Number squared: " << num * num << "\n";
  } catch (const std::exception &e) {
    std::cerr << "Invalid number: " << argv[1] << "\n";
    return 1;
  }

  /*
  Fifth example: process input using file streams
  Run this prompts before running the program:
  echo "Hello, world!" > file.txt
  tree . >> folderStructure.txt

   */
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <filename>\n";
    return 1;
  }

  std::ifstream file(argv[1]);
  if (!file) {
    std::cerr << "Error opening file: " << argv[1] << "\n";
    return 1;
  }

  std::string line;
  while (std::getline(file, line)) {
    std::cout << line << "\n";
  }

  /*
  Advanced processing using vector and auto
  */
  // Convert char* array to std::vector<std::string> using itarator constructor
  std::vector<std::string> args(argv + 1, argv + argc); // Exclude program name
  // check arguments size
  if (args.empty()) {
    std::cout << "No arguments provided.\n";
    return 0;
  }
  // Parse/process arguments
  for (const auto &arg : args) {
    std::cout << "Argument: " << arg << std::endl;
    if (arg == "--help") {
      std::cout << "Usage: ./my_program [options]\n";
      return 0;
    }
  }

  return 0;
}