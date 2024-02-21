    int carry = 0;
    string num1 = "329999", num2 = "9";
    string result = "";

    string test = "2";
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    int len = num1.length() < num2.length() ? num2.length() : num1.length();


    if (num1.length() > num2.length()) {
        for (int i = num2.length(); i < num1.length(); i++) {
            num2.push_back('0');
        }
    }
    else {
        for (int i = num1.length(); i < num2.length(); i++) {
            num1.push_back('0');
        }
    }

    __int64 a;

    for (int i = 0; i < len; i++) {

        int sum = num1[i] - '0' + num2[i] - '0' + carry;
        if (sum > 9) {
            carry = 1;
        }
        else {
            carry = 0;
        }
        result+= sum % 10 +'0';
    }

    reverse(result.begin(), result.end());

    cout << result;
