function searchMatrix(matrix: number[][], target: number): boolean {

    const m = matrix.length;
    const n = matrix[0].length;

    let i = 0;
    let j = n - 1;

    while(i < m && j >= 0){
       if(matrix[i][j] === target)
       {
        return true;
       }
       else if(target < matrix[i][j])
       {
        j--;
       }
       else
       {
        i++;
       }
    }

    return false;


};