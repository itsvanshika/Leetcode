class Solution {
    public int findMinDifference(List<String> timePoints) {
        List<Integer> mp = new ArrayList<>();
        
        for(String time:timePoints){
            String[] t = time.split(":");
            int hour = Integer.parseInt(t[0]);
            int min = Integer.parseInt(t[1]);
            mp.add(hour*60+min);
        }
        Collections.sort(mp);
        int ans=Integer.MAX_VALUE;
        for(int i=1;i<mp.size();i++){
            ans=Math.min(ans,(mp.get(i)-mp.get(i-1)));
        }
        ans = Math.min(ans,(24*60-(mp.get(mp.size()-1)-mp.get(0))));
        return ans;
    }
}