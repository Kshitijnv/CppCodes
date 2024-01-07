 ifstream inputFile("accounts.txt");
    if (inputFile.is_open()) {
        while (!inputFile.eof() && OpenAccCount < 100) {
            obj[OpenAccCount].LoadFromFile(inputFile);
            OpenAccCount++;
        }
        inputFile.close();
    }
    ofstream outputFile;