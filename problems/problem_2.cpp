float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;

    result = (i>j) ? i:j;
    result = (j>result) ? j:result;

    return result;
}