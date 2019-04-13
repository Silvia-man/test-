public class bincoins {
    public static void main( String[] args ){
        int i,res;
        int[] arr = new int[16];
        for(i = 0; i<16; i++){
            arr[i] = 2;
        }
        arr[7] = 1;

        res = BinarySearch(arr,0,15);

        if(res != -1){
            System.out.println("伪币为第" + (res+1)  + "个");
        }
        else{
            System.out.println("没有伪币");
        }
    }

    public static int BinarySearch(int[] arr,int from,int to){
        int result = -1;

        if(from+1 == to){
            result =  arr[from]-arr[to]>0?to:from;
        }else{
            int fromMax = (from+to-1)/2;
            int toMin = (from+to+1)/2;
            int sumFrom = 0;
            int sumTo = 0;

            for(int i=from;i<=fromMax;i++){
                sumFrom += arr[i];
            }
            for(int j=toMin;j<=to;j++){
                sumTo += arr[j];
            }
            //如果相等 返回 -1 未查到
            if(sumFrom ==sumTo){
                return result;
            }
            result = sumFrom-sumTo>0?BinarySearch(arr,toMin,to):BinarySearch(arr,from,fromMax);
        }
        return result;
    }
}
