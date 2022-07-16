void myFunction(string fname="O") {
  cout << fname;
}

void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int myFunction(int x, int y) {
  return x + y;
}

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  myFunction("L");
  myFunction("J" , 7);
  myFunction(2,3);
  return 0;
}