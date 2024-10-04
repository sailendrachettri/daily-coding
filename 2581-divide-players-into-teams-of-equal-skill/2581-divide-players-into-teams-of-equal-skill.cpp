class Solution {
    #define ll long long

public:
    long long dividePlayers(vector<int>& skill) {
        ll n = skill.size();
        ll sum = 0;
        unordered_map<ll, ll> skillFreq;

        for(ll i = 0; i < n; i++){
            sum += skill[i];
            skillFreq[skill[i]]++;
        }

        ll teams = n/2;

        if(sum % teams != 0) return -1;
        ll target = sum / teams;
        ll chemistry = 0;

        for(auto [skill, freq] : skillFreq){
            if(!skillFreq.count(target - skill) || freq != skillFreq[target-skill]){
                return -1;
            }

            chemistry += skill * (target - skill) * freq;
        }

        return chemistry / 2;

    }
};