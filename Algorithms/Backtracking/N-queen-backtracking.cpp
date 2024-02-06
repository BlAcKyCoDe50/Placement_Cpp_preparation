/*
start from the leftmost column
If all queens are placed -> return true

try all rows in the current column
    do following for every tried row
        if the queen can be placed safely in this row. Then mark this [row,column] as part if the solution and recursively check if placing 
        queen here leads to a solution.
        If placing the queen in [row,column] leads to a solution then return true.
        If placing queen doesn't lead to a solution then unmark this [row,column] (backtrack) and go to steo (a) to try other rows.

if all rows have been tried and nothing worked, return false to trigger backtracking.








*/


