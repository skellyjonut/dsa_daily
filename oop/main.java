import javax.swing.*;
import java.awt.*;

public class main {
    public static void main(String[] args) {

        // Create Frame
        JFrame frame = new JFrame("Simple Swing App");
        frame.setLayout(new FlowLayout());
        frame.setSize(400, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // JLabel
        JLabel label = new JLabel("Enter Name:");

        // JTextField
        JTextField textField = new JTextField(15);

        // JButton
        JButton button = new JButton("Submit");

        // JCheckBox
        JCheckBox checkBox = new JCheckBox("I Agree");

        // JRadioButton
        JRadioButton male = new JRadioButton("Male");
        JRadioButton female = new JRadioButton("Female");

        // Group radio buttons
        ButtonGroup bg = new ButtonGroup();
        bg.add(male);
        bg.add(female);

        // JTextArea
        JTextArea textArea = new JTextArea(5, 20);
        textArea.setText("Write something here...");

        // Add components to frame
        frame.add(label);
        frame.add(textField);
        frame.add(male);
        frame.add(female);
        frame.add(checkBox);
        frame.add(button);
        frame.add(textArea);

        // Display the frame
        frame.setVisible(true);
    }
}
