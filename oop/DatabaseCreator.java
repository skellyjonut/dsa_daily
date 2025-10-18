import java.sql.*;

public class DatabaseCreator {

    // 1. Database connection details (CHANGE THESE)
    static final String DB_URL = "jdbc:mysql://localhost:3306/"; // URL without a specific database
    static final String USER = "root";          // Your MySQL Username
    static final String PASS = "root"; // Your MySQL Password
    static final String NEW_DB_NAME = "LabExamDB"; // The name of the database to create

    public static void main(String[] args) {
        // Use try-with-resources to ensure resources (Connection, Statement) are closed
        try (Connection conn = DriverManager.getConnection(DB_URL, USER, PASS);
             Statement stmt = conn.createStatement()) {

            // STEP 1: Execute SQL to create the database
            String createDbSql = "CREATE DATABASE IF NOT EXISTS " + NEW_DB_NAME;
            stmt.executeUpdate(createDbSql);
            System.out.println("✅ Database '" + NEW_DB_NAME + "' created successfully (or already exists).");

        } catch (SQLException e) {
            e.printStackTrace();
            System.err.println("❌ Error connecting to MySQL server or creating database.");
            return; // Stop execution if database creation fails
        }

        // Now, establish a new connection to the created database to create a table
        String TABLE_DB_URL = DB_URL + NEW_DB_NAME;

        try (Connection conn = DriverManager.getConnection(TABLE_DB_URL, USER, PASS);
             Statement stmt = conn.createStatement()) {

            // STEP 2: Execute SQL to create a sample table
            String createTableSql = "CREATE TABLE Students (" +
                                    "RollNo INT NOT NULL PRIMARY KEY, " +
                                    "Name VARCHAR(100), " +
                                    "Marks INT)";
                                    
            stmt.executeUpdate(createTableSql);
            System.out.println("✅ Table 'Students' created successfully in " + NEW_DB_NAME + ".");

        } catch (SQLException e) {
            // Error code 1050 is 'Table already exists'
            if (e.getErrorCode() == 1050) { 
                 System.out.println("⚠️ Table 'Students' already exists. Skipping creation.");
            } else {
                e.printStackTrace();
                System.err.println("❌ Error creating table.");
            }
        }
    }
}