import java.io.File;

public class DemanderAcces {
    public static void main(String[] args) {
        String filePath = args[0];
        String targetPassword = args[1];

        File file = new File(filePath);
        if (file.exists() && file.isFile()) {
            System.out.println("Access to file granted.");
            try {
                Runtime.getRuntime().exec("./charge_fichier_cpp " + filePath + " " + targetPassword);
            } catch (Exception e) {
                e.printStackTrace();
            }
        } else {
            System.out.println("Error: File not found.");
        }
    }
}