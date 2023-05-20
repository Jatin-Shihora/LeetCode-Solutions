var areDeeplyEqual = function(o1, o2) {
function dfs(node1, node2) {
if(node1 === node2) return true
​
if(node1 === null || node2 === null) return false
​
if(Object.prototype.toString.call(node1) !== Object.prototype.toString.call(node2)) return false
​
if(typeof node1 !== 'object') {
return node1 === node2
}
​
if(Array.isArray(node1)) {
if(node1.length !== node2.length) return false
​
for(let i= 0; i < node1.length; i++) {
if(!dfs(node1[i], node2[i])) return false
}
​
return true
}
​
if(Object.keys(node1).length !== Object.keys(node2).length) return false
​
for(const key in node1) {
if(!dfs(node1[key],node2[key])) return false
}
​
return true
}
​
return dfs(o1,o2)
};