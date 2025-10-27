import java.util.Scanner;

public class peak {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("Enter an array for" + n + "elements:");
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int left = 0, right = n - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] > arr[mid + 1]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        System.out.println("The peak of the array is: " + arr[left]);
        sc.close();
    }

}
