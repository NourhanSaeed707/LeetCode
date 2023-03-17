class Solution {
    public double average(int[] salary) {
        int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
        double avg = 0;
        for(int i = 0; i < salary.length; i ++){
            if(salary[i] <= min) min = salary[i];
            if(salary[i] > max) max = salary[i];
        }
        System.out.println("max: " + max);
        System.out.println("min: " + min);
        for(int i = 0; i < salary.length; i++){
            if(salary[i] != max && salary[i] != min)
              avg += salary[i];
        }
        avg /= salary.length - 2;
        return avg;
    }
}
