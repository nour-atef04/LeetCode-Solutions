/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    const freq = s.split("").reduce((map, ch)=> {
        map.set(ch, (map.get(ch) || 0)+1);
        return map;
    }, new Map());
    for(let ch of t){
        if(!freq.get(ch)) return false;
        freq.set(ch, freq.get(ch)-1);
    }
    const entries = freq.entries();
    for (let count of freq.values()) {
        if (count > 0) return false;
    }
    return true;
};