#include <bits/stdc++.h>

typedef long long ll;

const int numes[1381] = {2,2,3,2,2,3,4,5,2,3, 4,3,2,7,3,4,3,2,3,4, 3,4,5,11,18,10,11,3,4,3, 4,5,6,3,10,6,13,3,4,3, 4,5,6,3,10,6,5,4,6,5,
3,17,20,17,6,3,10,6,5,4, 6,5,3,19,20,3,19,3,20,19, 6,5,4,6,5,3,4,3,4,3, 7,46,105,23,28,46,105,23,3,28, 23,3,4,3,7,10,21,8,7,10,
21,4,3,4,29,42,29,42,29,7, 10,21,8,7,10,21,4,3,4,31, 42,31,42,31,7,10,21,8,7,10, 21,4,3,4,5,6,3,10,6,5, 6,4,5,6,37,10,21,4,3,4,
5,6,3,10,6,5,6,4,5,6, 41,10,42,41,60,41,4,5,6,3, 10,6,5,6,4,5,6,43,60,43, 60,43,4,5,6,3,10,6,5,6, 4,5,6,5,4,3,4,11,47,60,
47,264,47,66,47,10,6,5,6,4, 5,6,5,4,3,4,11,53,60,4, 11,53,66,53,10,6,5,6,4,5, 6,5,4,3,4,11,5,12,4,11, 5,6,5,118,66,59,66,4,13,295,
66,4,177,220,59,429,295,4,11,5, 12,4,11,5,6,5,122,66,61,66, 4,13,305,66,4,183,220,61,429,305, 4,11,5,12,4,11,5,6,5,14, 22,3,4,13,15,4,9,10,6,13,
15,67,88,67,143,67,12,4,143,67, 78,67,14,22,3,4,13,15,4,9, 10,6,13,15,71,88,71,143,71,12, 4,143,71,78,4,213,260,1491,22,3, 4,13,15,4,9,10,6,13,15,73,
88,13,18,13,4,18,73,78,4,219, 260,1533,22,3,4,13,15,4,9,10, 6,13,15,7,8,13,18,13,4,18, 13,4,9,10,1659,572,3,79,104,79, 195,6,79,4,9,260,6,79,13,15,
7,8,13,18,13,4,18,13,4,9, 10,6,3,83,104,83,195,6,83,4, 9,260,6,83,13,15,7,8,13,18, 13,4,18,13,4,9,10,6,3,89, 104,89,195,6,89,4,195,6,89,221,
20,267,7,8,13,18,13,4,18,13, 4,9,10,6,3,7,8,7,15,6, 7,4,15,6,7,17,20,21,97,104, 97,126,97,120,97,126,97,4,9,10, 6,3,7,8,7,15,6,7,4,15,
6,7,17,20,21,101,104,101,126,101, 120,101,126,101,4,9,10,6,3,7, 8,7,15,6,7,4,15,6,7,17, 20,21,103,104,17,21,17,103,120,17, 103,126,17,103,4,9,340,6,103,3,
7,8,7,15,6,7,4,15,6,7, 17,20,21,4,17,21,17,107,120,17, 35,6,17,107,140,321,340,6,35,107, 3,7,120,107,7,15,6,7,4,15, 6,7,17,20,21,4,17,21,17,109,
120,17,35,6,17,109,140,327,340,6, 35,109,323,327,7,120,109,7,15,6, 7,4,15,6,7,17,20,21,4,17, 21,17,56,15,17,35,6,17,113,140, 6,85,6,35,113,323,339,7,120,113,
7,15,6,7,1020,791,15,6,7,17, 20,21,4,17,21,17,56,15,17,35, 6,17,7,20,6,85,6,35,17,19, 20,21,20,17,127,255,6,127,1020,889, 255,6,127,17,140,381,3230,1778,17,21,
17,56,255,127,35,6,17,7,20,6, 85,6,35,17,19,20,21,20,17,5, 6,131,1020,7,6,5,262,17,140,393, 3230,21,262,17,21,17,140,131,35,6, 17,7,20,6,85,6,35,17,19,20,
21,20,17,5,6,4,15,7,6,5, 274,323,20,6,95,21,274,323,24,137, 323,20,19,685,323,1644,323,137,20,323, 6,685,17,19,140,411,20,17,5,6, 4,285,137,6,5,278,323,20,6,95,
21,278,323,24,139,323,20,19,695,323, 1668,323,139,1140,973,323,6,695,17,19, 140,417,20,17,5,6,4,285,139,6, 5,298,323,20,6,95,21,298,323,24, 149,323,20,19,745,323,1788,323,149,1140,
1043,323,6,745,323,298,190,447,20,323, 298,5,6,190,149,6,5,302,323,20, 6,95,21,302,323,24,151,323,20,19, 755,323,1812,323,151,1140,1057,323,6,755, 323,302,190,453,20,323,302,5,6,190,
151,6,5,6,19,20,6,95,21,6, 19,24,95,3297,323,20,19,45,19,1884, 323,4,15,21,19,6,785,323,314,190, 6,785,323,314,190,6,157,190,4,157, 6,190,471,19,20,6,95,168,157,6,
19,24,95,21,20,19,45,19,6,4, 15,21,19,6,5,326,190,6,5,326, 190,6,163,190,4,163,6,190,489,19, 20,6,2185,24,163,6,19,24,2185,489, 20,19,45,19,6,4,345,489,19,6,
5,334,190,6,5,334,190,6,167,190, 4,167,6,190,501,19,20,6,2185,24, 167,6,19,210,668,2185,501,20,19,45, 19,6,4,345,501,19,6,5,6,10, 6,5,6,10,6,173,190,4,9,346,
190,519,19,180,346,2185,24,173,6,2185, 346,210,692,2185,519,20,437,346,45,19, 6,230,519,19,6,5,6,10,6,5, 6,10,6,179,190,4,9,358,190,537, 19,180,358,2185,24,23,895,6,2185,358,
210,716,2185,537,20,437,358,45,19,6, 230,537,19,6,5,6,10,6,5,6, 10,6,181,190,4,9,362,190,543,190, 362,2185,24,23,905,6,2185,24,7,724, 2185,543,20,437,362,45,19,6,230,543,
19,6,5,6,10,6,5,6,10,6, 5,4,9,23,24,3,23,24,23,955, 437,24,7,23,6,955,437,382,45,1748, 6,191,230,573,19,6,230,573,10,6, 230,191,6,10,6,230,191,4,9,23,
24,3,23,24,23,965,437,24,7,23, 6,965,437,386,45,1748,6,193,230,579, 19,6,230,579,10,6,230,193,6,10, 6,230,193,4,9,23,24,3,23,24, 23,985,437,24,7,23,6,985,437,394,
230,6,197,230,4,1773,19,6,230,591, 10,6,230,197,6,10,6,230,197,4, 9,23,24,3,23,24,23,995,437,24, 7,23,6,995,437,398,230,6,199,230, 4,1791,19,6,230,597,10,6,230,199,
6,10,6,230,199,4,9,23,24,3, 23,24,23,55,23,24,7,23,6,55, 23,6,10,6,105,211,230,4,99,23, 422,230,633,230,422,230,211,6,230,7, 844,230,9,211,276,211,23,24,3,23,
24,23,55,23,24,7,23,6,55,23, 6,10,6,105,22,23,4,99,23,88, 223,230,33,23,446,230,223,6,230,7, 892};

const int denos[1381] = {1,1,2,1,1,2,3,4,1,2, 3,2,1,6,2,3,2,1,2,3, 2,3,4,10,11,9,10,2,3,2, 3,4,5,2,9,5,12,2,3,2, 3,4,5,2,9,5,4,3,5,4,
2,15,17,12,5,2,9,5,4,3, 5,4,2,15,19,2,15,2,19,18, 5,4,3,5,4,2,3,2,3,2, 6,35,92,21,23,35,92,21,2,23, 21,2,3,2,6,7,20,7,6,7,
20,3,2,3,28,29,21,29,28,6, 7,20,7,6,7,20,3,2,3,28, 31,21,31,28,6,7,20,7,6,7, 20,3,2,3,4,5,2,9,5,4, 5,3,4,5,36,7,20,3,2,3,
4,5,2,9,5,4,5,3,4,5, 36,7,41,30,41,40,3,4,5,2, 9,5,4,5,3,4,5,36,43,30, 43,40,3,4,5,2,9,5,4,5, 3,4,5,4,3,2,3,10,44,47,
36,235,44,47,44,9,5,4,5,3, 4,5,4,3,2,3,10,44,53,3, 10,44,53,44,9,5,4,5,3,4, 5,4,3,2,3,10,4,11,3,10, 4,5,4,99,59,44,59,3,10,286,
59,3,176,177,55,295,286,3,10,4, 11,3,10,4,5,4,99,61,44,61, 3,10,286,61,3,176,183,55,305,286, 3,10,4,11,3,10,4,5,4,11, 21,2,3,10,13,3,8,9,5,10,
13,66,67,66,134,52,11,3,134,52, 67,52,11,21,2,3,10,13,3,8, 9,5,10,13,66,71,66,142,52,11, 3,142,52,71,3,208,213,1430,21,2, 3,10,13,3,8,9,5,10,13,66,
73,12,13,12,3,13,72,73,3,208, 219,1430,21,2,3,10,13,3,8,9, 5,10,13,6,7,12,13,12,3,13, 12,3,8,9,1430,553,2,78,79,78, 158,5,78,3,8,237,5,78,10,13,
6,7,12,13,12,3,13,12,3,8, 9,5,2,78,83,78,166,5,78,3, 8,249,5,78,10,13,6,7,12,13, 12,3,13,12,3,8,9,5,2,78, 89,78,178,5,78,3,178,5,78,178,
17,260,6,7,12,13,12,3,13,12, 3,8,9,5,2,6,7,6,14,5, 6,3,14,5,6,14,17,20,78,97, 84,97,84,97,90,97,84,3,8,9, 5,2,6,7,6,14,5,6,3,14,
5,6,14,17,20,78,101,84,101,84, 101,90,101,84,3,8,9,5,2,6, 7,6,14,5,6,3,14,5,6,14, 17,20,78,103,14,17,14,102,103,15, 102,103,14,102,3,8,309,5,102,2,
6,7,6,14,5,6,3,14,5,6, 14,17,20,3,14,17,14,102,107,15, 34,5,14,102,107,280,321,5,34,105, 2,6,107,105,6,14,5,6,3,14, 5,6,14,17,20,3,14,17,14,102,
109,15,34,5,14,102,109,280,327,5, 34,105,218,323,6,109,105,6,14,5, 6,3,14,5,6,14,17,20,3,14, 17,14,51,14,15,34,5,14,102,113, 5,84,5,34,105,226,323,6,113,105,
6,14,5,6,791,765,14,5,6,14, 17,20,3,14,17,14,51,14,15,34, 5,14,6,17,5,84,5,34,15,14, 19,20,17,15,102,254,5,102,889,765, 254,5,102,14,127,340,2667,1615,14,17,
14,51,254,105,34,5,14,6,17,5, 84,5,34,15,14,19,20,17,15,4, 5,102,917,6,5,4,255,14,131,340, 2751,19,255,14,17,14,131,105,34,5, 14,6,17,5,84,5,34,15,14,19,
20,17,15,4,5,3,14,6,5,4, 255,274,19,5,84,19,255,274,19,136, 274,19,15,646,274,1615,274,114,17,274, 5,646,15,14,137,380,17,15,4,5, 3,274,114,5,4,255,278,19,5,84,
19,255,278,19,136,278,19,15,646,278, 1615,278,114,973,969,278,5,646,15,14, 139,380,17,15,4,5,3,278,114,5, 4,255,298,19,5,84,19,255,298,19, 136,298,19,15,646,298,1615,298,114,1043,
969,298,5,646,298,285,149,380,17,298, 285,4,5,149,114,5,4,255,302,19, 5,84,19,255,302,19,136,302,19,15, 646,302,1615,302,114,1057,969,302,5,646, 302,285,151,380,17,302,285,4,5,151,
114,5,4,5,18,19,5,84,19,5, 18,19,84,3230,314,19,15,38,18,1615, 314,3,14,19,18,5,646,314,285,157, 5,646,314,285,157,5,152,157,3,152, 5,157,380,18,19,5,84,157,152,5,
18,19,84,20,19,15,38,18,5,3, 14,19,18,5,4,285,163,5,4,285, 163,5,152,163,3,152,5,163,380,18, 19,5,1956,23,152,5,18,19,1956,460, 19,15,38,18,5,3,326,437,18,5,
4,285,167,5,4,285,167,5,152,167, 3,152,5,167,380,18,19,5,2004,23, 152,5,18,167,665,2004,460,19,15,38, 18,5,3,334,437,18,5,4,5,9, 5,4,5,9,5,152,173,3,8,285,
173,380,18,173,285,2076,23,152,5,2076, 345,173,665,2076,460,19,346,345,38,18, 5,173,437,18,5,4,5,9,5,4, 5,9,5,152,179,3,8,285,179,380, 18,179,285,2148,23,20,874,5,2148,345,
179,665,2148,460,19,358,345,38,18,5, 179,437,18,5,4,5,9,5,4,5, 9,5,152,181,3,8,285,181,380,181, 285,2172,23,20,874,5,2172,23,6,665, 2172,460,19,362,345,38,18,5,181,437,
18,5,4,5,9,5,4,5,9,5, 4,3,8,18,23,2,18,23,20,874, 382,23,6,21,5,874,382,345,38,1719, 5,184,191,437,18,5,191,460,9,5, 191,184,5,9,5,191,184,3,8,18,
23,2,18,23,20,874,386,23,6,21, 5,874,386,345,38,1737,5,184,193,437, 18,5,193,460,9,5,193,184,5,9, 5,193,184,3,8,18,23,2,18,23, 20,874,394,23,6,21,5,874,394,345,
197,5,184,197,3,1748,18,5,197,460, 9,5,197,184,5,9,5,197,184,3, 8,18,23,2,18,23,20,874,398,23, 6,21,5,874,398,345,199,5,184,199, 3,1748,18,5,199,460,9,5,199,184,
5,9,5,199,184,3,8,18,23,2, 18,23,20,46,22,23,6,21,5,46, 22,5,9,5,92,210,211,3,92,22, 345,211,460,211,345,211,184,5,211,6, 805,211,8,207,211,184,18,23,2,18,
23,20,46,22,23,6,21,5,46,22, 5,9,5,92,21,22,3,92,22,69, 220,223,23,22,345,223,184,5,223,6, 805};

class VeryLong{ // high precision natural number
	private:
		static const int len = 30;
		static const ll BASE = 1000000000ll;
		int n, s[len];
		void init() {memset(s, 0, sizeof s); n = 1;}
		void initint(int x) {init(); s[0] = x;} // x < 10^9
		void initstr(const char *s);
		void initself(const VeryLong &b) {n = b.n; memcpy(s, b.s, sizeof s);}
	public:
		VeryLong () {init();}
		VeryLong (int x) {initint(x);}
		VeryLong (const char *s) {initstr(s);}
		VeryLong (const VeryLong &b) {initself(b);}
		char * tostring(char *buf);
		VeryLong & operator = (int x) {initint(x); return *this;}
		VeryLong & operator = (const char *s) {initstr(s); return *this;}
		VeryLong & operator = (const VeryLong &b) {initself(b); return *this;}
		int compare(const VeryLong &b);
		bool operator > (const VeryLong &b) {return compare(b) > 0;}
		VeryLong & operator *= (int x) {return *this = *this * x;}
		VeryLong & operator /= (int x) {return *this = *this / x;}
		VeryLong operator * (int x); // x < 10^9
		VeryLong operator / (int x); // x < 10^9
};
 
void VeryLong::initstr(const char *str) { // init with string
	int L = strlen(str);
	char tok[10];
	init();
	n = (L + 8) / 9;
	for(int i = 1; i * 9 <= L; ++i){
		memcpy(tok, str + (L - i * 9), 9);
		tok[9] = 0;
		s[i - 1] = strtol(tok, NULL, 10);
	}
	if(L % 9){
		memcpy(tok, str, L % 9);
		tok[L % 9] = 0;
		s[n - 1] = strtol(tok, NULL, 10);
	}
}

char * VeryLong::tostring(char *buf) { // to string
	buf += sprintf(buf, "%d", s[n - 1]);
	for(int i = n - 2; i >= 0; --i)
		buf += sprintf(buf, "%09d", s[i]);
	return buf;
}

int VeryLong::compare(const VeryLong &b) { // compare (-1, 0, 1)
	if(n != b.n) return n < b.n ? -1 : 1;
	for(int i = n - 1; i >= 0; i--)
		if(s[i] != b.s[i]) return s[i] < b.s[i] ? -1 : 1;
	return 0;
}

VeryLong VeryLong::operator * (int x) {
	VeryLong ret;
	int i; ll T = 0;
	ret.n = n;
	for(i = 0; i < n; ++i){
		T = (ll)s[i] * (ll)x;
		ret.s[i] += T % BASE;
		ret.s[i + 1] += T / BASE;
	}
	for(i = 0; i < ret.n; ++i)
		if(ret.s[i] >= BASE) {ret.s[i + 1] += ret.s[i] / BASE; ret.s[i] %= BASE;}
	if(ret.s[ret.n]) ++ret.n;
	return ret;
}

VeryLong VeryLong::operator / (int x) {
	VeryLong ret;
	int i; ll T = 0;
	ret.n = n;
	for(i = n - 1; i >= 0; --i){
		T = T * BASE + s[i];
		ret.s[i] = T / x;
		T %= x;
	}
	if(!ret.s[n - 1]) --ret.n;
	return ret;
}

char str[1000];
int i;

VeryLong s(1), t, S;

int main(){
	scanf("%s", str);
	S = str;
	for(i = 0; i < 1381; ++i){
		t = s * numes[i];
		t /= denos[i];
		if(t > S) break;
		s = t;
	}
	s.tostring(str);
	printf("%s\n", str);
	return 0;
}