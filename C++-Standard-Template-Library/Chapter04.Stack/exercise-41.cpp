int reversals(string exp) {
    stack<char> st;
    for (const char& ch : exp) {
        if (ch == '}') {
            // Remove all well formed braces
            if (!st.empty() && st.top() == '{') {
                st.pop();
                continue;
            }
        }
        st.push(ch);
    }
    if (st.size() & 1) return -1;
    int res = 0;
    char c1, c2;
    while (!st.empty()) {
        c1 = st.top(); st.pop();
        c2 = st.top(); st.pop();
        
        // 2 cases to consider
        // Case 1: } and { => res += 2, have to swap 2 braces
        // Case 2: }} => ++res, only have to swap the left brace
        if (c1 != c2) {
            ++res;
        }

        ++res;
    }
    return res;
}