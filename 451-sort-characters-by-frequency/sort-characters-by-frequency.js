/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function(s) {
    const myMap = s.split("").reduce((map, ch) =>{
        map.set(ch, (map.get(ch) || 0)+1);
        return map;
    }, new Map());

    const mapEntries = [...myMap.entries()];
    mapEntries.sort((a, b) => b[1]-a[1]);

    let sorted ="";
    for(let entry of mapEntries){
        sorted += entry[0].repeat(entry[1]);
    }

    return sorted;
};