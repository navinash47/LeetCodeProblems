#include <bits/stdc++.h>
using namespace std;
bool palindrome(int i, string &s)
{
	if (i >= s.length() / 2)
		return true;
	if (s[i] != s[s.length() - i - 1])
		return false;

	return palindrome(i + 1, s);
}
bool is_palindrome_stl(const string& str) {
    return equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}
int main()
{

	// Example string.
	string s = "malayalam";
	cout << palindrome(0, s);
	cout << endl;
	cout << is_palindrome_stl(s);
	cout << endl;
	return 0;
}