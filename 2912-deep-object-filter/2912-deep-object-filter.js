var deepFilter = function(obj, fn) {
    if(Array.isArray(obj)){
        obj = obj.map((val) => deepFilter(val, fn)).filter((val) => val !== undefined)
        
        return obj.length > 0 ? obj : undefined
    } else if(typeof obj === "object" && obj !== null){
        const keys = Object.keys(obj)
        let empty = true
        
        for(const key of keys){
           obj[key] = deepFilter(obj[key], fn)
           if (obj[key] !== undefined) empty = false 
        }
        
        return empty ? undefined : obj
    }
    
    return fn(obj) ? obj : undefined
};