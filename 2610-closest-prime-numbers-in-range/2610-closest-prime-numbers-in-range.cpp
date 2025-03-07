vector<int> prime; // Small primes <= 1000
bitset<1001> sieve=0;

class Solution {
public:
    void linearSieve(int n) {
        // don't play once trick
        sieve=0;
        prime={};
        sieve[0]=sieve[1]=1;
        for (int i=2; i<=n; i++) {
            if (!sieve[i]) prime.push_back(i);
            for (int j=0; j<prime.size() && i*prime[j]<= n; j++) {
                sieve[i*prime[j]]=1;
                if (i%prime[j]==0) break;
            }
        }
    }

    bool isPrime(int x) {
        if (x<=1000) return !sieve[x]; // Check small primes
        int xsqrt=sqrt(x);
        for (int p: prime) {
            if (p>xsqrt) break;
            if (x%p==0) return 0;
        }
        return 1;
    }

    vector<int> closestPrimes(int left, int right) {
        if (left<=2 && right>=3) return {2, 3};
        left=(left&1)?left:left+1;
        right=(right&1)?right:right-1;

        if (right-left<2) return {-1, -1};

        linearSieve(1000);

        int minDist=1e6, prevPrime=-1e9-7;
        vector<int> ans={-1, -1};
        for (int p=left; p<=right; p+=2) {
            if (isPrime(p)) {
                const int dist=p-prevPrime;
                if (dist==2) return {prevPrime, p};
                if (dist<minDist){
                    ans={prevPrime, p};
                    minDist=dist;
                }
                prevPrime=p;
            }
        } 
        return ans;
    }
};