var sortedArrayToBST = function(nums) 
{
    return add(nums, 0, nums.length-1);
};

var add = function(nums, left, right)
{   
    
    if(left > right)
        return null;

    var middle = ((left+right)/2) >> 0;
    var node = new TreeNode(nums[middle]);
    node.left = add(nums, left, middle-1);
    node.right = add(nums, middle+1, right);
    return node;
};
