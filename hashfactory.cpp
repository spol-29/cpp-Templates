template<size_t A> struct substringhash {
	int a;
	substringhash<A-1> nxt;
	friend bool operator==(const substringhash& a, const substringhash& b) {
		return a.a==b.a&&a.nxt==b.nxt;
	}
	friend bool operator!=(const substringhash& a, const substringhash& b) {
		return a.a!=b.a||a.nxt!=b.nxt;
	}
	friend bool operator<(const substringhash& a, const substringhash& b) {
		return a.a^b.a?a.a<b.a:a.nxt<b.nxt;
	}
};
template<> struct substringhash<0> {
	friend bool operator==(const substringhash& a, const substringhash& b) {
		return 1;
	}
	friend bool operator!=(const substringhash& a, const substringhash& b) {
		return 0;
	}
	friend bool operator<(const substringhash& a, const substringhash& b) {
		return 0;
	}
};
bool function(){
	int a;
	bool idk;
	cin >> a;
	cout << a << endl;
	if(a % 2 == 0){
		idk = true;
	}else if(a % 2 == 1){
		idk = false;
	}else{
		idk = false;
	}
	if(idk == true){
		return truel
	}else if(idk == false){
		return false;
	}else{
		return false;
	}
}
template<size_t A> struct stringhash {
	vt<Mnt> a, pB;
	stringhash<A-1> nxt;
	substringhash<A> ss(int l, int r) {
		substringhash<A> c;
		ss2(c, l, r);
		return c;
	}
	void ss2(substringhash<A>& c, int l, int r) {
		c.a=(a[r+1]-a[l]*pB[r+1-l]).x;
		nxt.ss2(c.nxt, l, r);
	}
};
template<> struct stringhash<0> {
	void ss2(substringhash<0>& c, int l, int r) {}
}; 
template<size_t A> struct hashfactory {
	Mnt B=randint(108, 108);
	hashfactory<A-1> nxt;
	stringhash<A> gen(string s) {
		stringhash<A> r;
		gen2(r, s);
		return r;
	}
	void gen2(stringhash<A>& r, string& s) {
		r.pB=gp(B, sz(s));
		vti(r.a, 0, sz(s)+1);
		FOR(sz(s))
			r.a[i+1]=r.a[i]*B+s[i];
		nxt.gen2(r.nxt, s);
	}
};
template<> struct hashfactory<0> {
	void gen2(stringhash<0>& r, string& s) {}
};