#include <bits/stdc++.h>
using namespace std;

const double pi = 3.14159265358979323846;
const double e = 2.71828182845904523536;

#define For for(int i = 0; i < n; i++)
#define FOR for(int i = 1; i <= n; i++)
#define loop for(int i = 0; i <= n; i++)
#define Loop for(int i = 1; i < n; i++)

#define pb push_back;
#define mp make_pair;

#define ti tuple<int,int,int>
#define vvi vector<vector<int>>

#define ar array
#define cl ceil
#define fl floor
#define s sort

#define write cout<< 
#define read cin>>
#define end <<"\n";

#define unset unordered_set<int> s;

#define rsz resize
#define cnt count
#define ers erase
#define ins insert

#define F first
#define S second

#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

#define elif else if
#define el else

#define mod 1000000007

#define sv sort(v.begin(), v.end());

#define doub double
#define cr char
#define flt float
#define ll long long

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef map<int,int> mi;


void solve(){
	
}

int main(){
    cin.tie(0); 
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}

void area(int bl_x, int bl_y, int tr_x, int tr_y) {
	long long length = tr_y - bl_y;
	long long width = tr_x - bl_x;
	long long area =  length * width;
    write area end
}

void intersect(vector<int> s1, vector<int> s2) {
	int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
	int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];
	if (bl_a_x >= tr_b_x || tr_a_x <= bl_b_x 
			|| bl_a_y >= tr_b_y || tr_a_y <= bl_b_y) {
		write false end
	} else {
		write true end
	}
}

void inter_area(vector<int> s1, vector<int> s2) {
	int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
	int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];

	write ((min(tr_a_x, tr_b_x) - max(bl_a_x, bl_b_x))*(min(tr_a_y, tr_b_y) - max(bl_a_y, bl_b_y))) end
}

void triarea(int h, int b) {
	write (0.5*h*b) end
}

void hexarea(int s){
	write ((3*sqrt(3)*s*s)/2) end
}

void octarea(int s){
	write 2*(1+sqrt(2))*s*s end
}

void traparea(int b1, int b2, int h){
	write ((b1+b2)*h/2) end
}

void cirarea(int r){
	write pi*r*r end
}

void cirperim(int r){
	write 2*pi*r end
}

void equiperim(int s, int hs){
	write s*hs end
}

void perim(int s1, int s2, int s3, int s4){
	write s1+s2+s3+s4 end
}

