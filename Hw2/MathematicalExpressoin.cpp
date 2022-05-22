////#include <iostream>
////using namespace std;
////
////bool isOperand(char c) { return (c >= '0' && c <= '9'); }
////int value(char c) {  return (c - '0'); }
////
////int evaluate(char *exp)
////{
////    if (*exp == '\0')  return -1;
////    int res = value(exp[0]);
////
////    for (int i = 1; exp[i]; i += 2){
////        char opr = exp[i], opd = exp[i+1];
////
////        if (!isOperand(opd))  return -1;
////
////        if (opr == '+')       res += value(opd);
////        else if (opr == '-')  res -= value(opd);
////        else if (opr == '*')  res *= value(opd);
////        else if (opr == '/')  res /= value(opd);
////
////            // If not a valid operator
////        else                  return -1;
////    }
////    return res;
////}
////
////int main()
////{
////    char expr1[] = "2^3+5/3*(231-130)+10000";
////    int res = evaluate(expr1);
////    (res == -1)? cout << expr1 << " is " << "Invalid\n":
////    cout << "Value of " << expr1 << " is " << res << endl;
////}
//
//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//string s;
//int g_pos;
//
//double Translation(int &pos) {
//
//    double integer = 0.0;
//    double remainder = 0.0;
//
//    while (s[pos] >= '0' && s[pos] <= '9') {
//        integer *= 10;
//        integer += (s[pos] - '0');
//        pos++;
//    }
//
//    if (s[pos == '.']) {
//
//        pos++;
//        int c = 1;
//        while (s[pos] >= '0' && s[pos] <= '9') {
//            double t = s[pos] - '0';
//            t *= pow(0.1, c);
//            c++;
//            remainder += t;
//            pos++;
//        }
//    }
//    return integer + remainder;
//}
//
//int GetLevel(char ch) {
//    switch (ch) {
//        case '+':
//        case '-': return 1;
//        case '*':
//        case '/': return 2;
//        case '(': return 0;
//        case '#': return -1;
//        case '^': return 3;
//    };
//    return 1;
//}
//
//double Operate(double a1, char op, double a2) {
//    switch(op) {
//        case '+': return a1 + a2;
//        case '-': return a1 - a2;
//        case '*': return a1 * a2;
//        case '/': return a1 / a2;
//        case '^': return pow (a1, a2);
//    }
//    return 0.0;
//}
//
//double Compute() {
//    stack<char> optr;
//    stack<double> opnd;
//
//    optr.push('#');
//    int len = s.length();
//    bool is_minus = true;
//
//    for (int g_pos = 0; g_pos < len;) {
//        if (s[g_pos] == '-' && is_minus) {
//            opnd.push(0);
//            optr.push('-');
//            g_pos++;
//        }
//        else if (s[g_pos] == ')') {
//            is_minus = false;
//            g_pos++;
//
//            while (optr.top() != '(') {
//                double a2 = opnd.top();
//                opnd.pop();
//                double a1 = opnd.top();
//                opnd.pop();
//                char op = optr.top();
//                optr.pop();
//
//                double result = Operate(a1, op, a2);
//                opnd.push(result);
//            }
//
//int main()
//{
//    char expr1[] = "2^3+5/3*(231-130)+10000";
//    int res = evaluate(expr1);
//    (res == -1)? cout << expr1 << " is " << "Invalid\n":
//    cout << "Value of " << expr1 << " is " << res << endl;
//}