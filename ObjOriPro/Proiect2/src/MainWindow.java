
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import Gamepackage.*;

public class MainWindow {
    private JButton btnIntroducere;
    private JButton btnAfisareMedie;
    private JPanel panel;
    private JTextArea txtName;
    private JTextArea txtRating;
    private JTextArea txtPrice;
    private JLabel labelName;
    private JLabel labelRating;
    private JLabel labelPrice;
    private JLabel labelMedie;
    private JLabel labelBestRating;
    private JButton btnBestRating;
    private JList lstAfisareDate;
    private JLabel lblAfisareMesaj;
    DefaultListModel<String> model= new DefaultListModel<String>();
    public MainWindow() {

        ArrayList<Game> list=new ArrayList<Game>();
        btnIntroducere.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String name= txtName.getText();
                Double rating= Double.parseDouble(txtRating.getText());
                Double price= Double.parseDouble(txtPrice.getText());
                if(!name.isEmpty() && rating>0 && price>=0) {
                    list.add(new Game(name, rating, price));
                    txtName.setText("");
                    txtRating.setText("");
                    txtPrice.setText("");
                    refreshList(name);
                    lblAfisareMesaj.setText("S-a introdus jocul");
                }
                else lblAfisareMesaj.setText("Date incorecte sau deja existente");
            }
        });
        btnAfisareMedie.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Double auxmedie=Operatii.AfisareMediePreturi(list);
                labelMedie.setText(auxmedie.toString());
            }
        });
        btnBestRating.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Game aux=Operatii.AfisareMaxRating(list);
                labelBestRating.setText(aux.toString());
            }
        });
    }

    public void refreshList(String name)
    {
        model.addElement(name);
        lstAfisareDate.setModel(model);
    }
    public static void main(String[] args) {
        JFrame frame=new JFrame("Game App");
        frame.setContentPane(new MainWindow().panel);
        frame.pack();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}