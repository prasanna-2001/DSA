int fn(string s){
	int fin=0;
	stack <int> st;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '(')	st.push(0);
		else if(s[i] == ')')	st.pop();
		fin = max(fin, (int)st.size());
	}
	return fin;
}
int main(){
    int ab;
    
    ab=fn("((((((()())())())())())())");
}