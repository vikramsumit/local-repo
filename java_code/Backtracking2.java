public class Backtracking2 {
    public static void findSubset(String str, String ans, int i){
        //base case
        if(i == str.length()) {
            if (ans.length()==0){
                System.out.println("null");
            }
            else{
                System.out.println(ans);
            }
            return;
        }
        //yes choice
        findSubset(str, ans+str.charAt(i), i+1);
        ///no choice
        findSubset(str, ans, i+1);
    }
    public static void main(String[] args) {
        String str = "abcd";
        findSubset(str, "", 0);
    }
}
