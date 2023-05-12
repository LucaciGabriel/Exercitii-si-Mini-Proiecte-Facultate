import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MainWindow {
    private JLabel rezultat;
    private JButton btnCelsius;
    private JButton btnFar;
    private JPanel panel;
    private JTextArea txtGrade;

    public MainWindow() {
        btnCelsius.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String s=txtGrade.getText();
                Double gradec = Double.parseDouble(s);
                Double celsius=(gradec-32)/1.8;
                rezultat.setText(celsius.toString());
            }
        });
        btnFar.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String s=txtGrade.getText();
                Double gradef = Double.parseDouble(s);
                Double fahr=(gradef*1.8)+32;
                rezultat.setText(fahr.toString());
            }
        });
    }

    public static void main(String[] args) {
        JFrame frame=new JFrame("Aplicatie Grade");
        frame.setContentPane(new MainWindow().panel);
        frame.pack();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
