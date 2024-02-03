//Rate-maze with multiple jumps

/*
IF destination is reached
    print the solution matrix
ELSE
    mark current cell in solution matrix as 1
    Move forward/jump (for each valid steps) in horizontal direction
    Recursively check if this move leads to a solution
    ELSE move down and check if this move leads to a solution
    IF none of the above solutions work then unmark this cell as o 
    (BACKTRACK) and return false


*/