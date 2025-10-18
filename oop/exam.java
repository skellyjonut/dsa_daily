import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

public class exam {
public static void main(String[] args) {
String url = "jdbc:mysql://localhost:3306/studentdb"; // your database name
String user = "root"; // your MySQL username
String password = "root"; // your MySQL password (if any)
    try {
        // Step 1: Load MySQL JDBC Driver
        Class.forName("com.mysql.cj.jdbc.Driver");

        // Step 2: Establish connection
        Connection con = DriverManager.getConnection(url, user, password);

        // Step 3: Create SQL statement
        Statement stmt = con.createStatement();

        String sql = "CREATE TABLE IF NOT EXISTS registration ("
                + "id INT AUTO_INCREMENT PRIMARY KEY, "
                + "name VARCHAR(100), "
                + "phone VARCHAR(15), "
                + "email VARCHAR(100), "
                + "address VARCHAR(255), "
                + "country VARCHAR(50), "
                + "dob DATE, "
                + "department VARCHAR(100), "
                + "languages VARCHAR(100), "
                + "gender VARCHAR(10), "
                + "username VARCHAR(50), "
                + "password VARCHAR(50))";

        // Step 4: Execute SQL
        stmt.executeUpdate(sql);

        System.out.println("✅ Table 'registration' created successfully!");

        // Step 5: Close connection
        con.close();

    } catch (Exception e) {
        System.out.println("❌ Error: " + e.getMessage());
    }
}
}
