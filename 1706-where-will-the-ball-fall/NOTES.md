* If current grid pgrid[r][c] is a \ then check it's right column -> grid[r][c+1] is same or not and Go to it's digonal place -> grid[r+1][c+1] else return -1 from there
* and if it is / then check it's left column grid[r][c-1] is same or not if it same then go -> grid[r+1][c-1] else return -1 from there
* If You reach last Row return Column Number <<<------- Do this task for each column