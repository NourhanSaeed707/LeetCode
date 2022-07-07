class Solution {
    public void merge_sort(int[] nums, int low, int high) {
        int mid;
        if (low < high) {
            mid = (low + high) / 2;
            merge_sort(nums, low, mid);
            merge_sort(nums, mid + 1, high);
            merge(nums, low, high, mid);
        }
    }
    public void merge(int[] nums, int low, int high, int mid ) {
        int i, j, k;
        int []c = new int [300];
        i = low;
        k = low;
        j = mid + 1;
        while (i <= mid && j <= high){
            if (nums[i] < nums[j]) {
                c[k] = nums[i];
                k++;
                i++;
           }
            else {
                c[k] = nums[j];
                k++;
                j++;
            }
        }
        while (i <= mid) {
            c[k] = nums[i];
            k++;
            i++;
        }
        while (j <= high) {
            c[k] = nums[j];
            k++;
            j++;
        }
        for (i = low; i < k; i++) {
            nums[i] = c[i];
        }
    }
    public void sortColors(int[] nums) {
        merge_sort(nums, 0, nums.length-1);
    }
}
