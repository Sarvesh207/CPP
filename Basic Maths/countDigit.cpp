int countDigits(int n) {
  // Write your code here.
  int cnt = 0;
  while (n > 0) {
    int lastDigit = n % 10;
	cnt = cnt + 1;
    n = n / 10;
  }
  return cnt;
}