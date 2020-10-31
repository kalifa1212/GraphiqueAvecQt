#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "inscription.h"
#include <QMainWindow>
#include <QWidget>
#include <QMenu>
#include <QMenuBar>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFileSystemModel>
#include <QMessageBox>
#include <QTableView>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Inscription *Inscrit;

    QWidget *FenetrePrincipale;

    QWidget *Ouverture;

    QTableView *VueDeLaTable;

    QMessageBox *Message;

    QMenu *Fichier;
    QMenu *Edition;
    QMenu *Outils;
    QWidget *Formulaire;

    QFormLayout * FormulaireInscription;

    QLineEdit *Nom;
    QLineEdit *Prenom;
    QLineEdit *Email;
    QLineEdit *Poste;
    QLineEdit *Direction;

    QVBoxLayout *LayoutFormulaire;
    QVBoxLayout *Layout;

    QAction *NouveauAction;
    QAction *EnregistrerAction;
    QAction *OuvrireAction;
    QAction *EditeAction;
    QAction *MaintenanceAction;
    QAction *ParametreAction;
    QAction *RechecheAction;
    QAction *QuitterAction;

    QPushButton *EnregistrerFormulaire;


private slots:
    void Nouveau();
    void Enregistrer();
    //void EnregistrerSous();
    void Ouvrire();
    void Maintenance();
    void Parametre();
    void Quitter();
    void Edite();
    void Recherche();

private:
    Ui::MainWindow *ui;
    void CreerMenu();
    void CreerAction();
};
#endif // MAINWINDOW_H
