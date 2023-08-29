var deepFilter = function(obj, fn) {
    const dfs = (currentObj) => {
        if (Array.isArray(currentObj)) {
            const filteredArr = currentObj.map((val) => dfs(val)).filter((val) => val !== undefined);
            return filteredArr.length > 0 ? filteredArr : undefined;
        } else if (typeof currentObj === "object" && currentObj !== null) {
            const keys = Object.keys(currentObj);
            let empty = true;
            for (const key of keys) {
                currentObj[key] = dfs(currentObj[key]);
                if (currentObj[key] !== undefined) empty = false;
            }
            return empty ? undefined : currentObj;
        }
        return fn(currentObj) ? currentObj : undefined;
    };
    
    return dfs(obj);
};