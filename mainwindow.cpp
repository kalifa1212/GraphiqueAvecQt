#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(600,500);

   // FenetrePrincipale = new QWidget;

    //FenetrePrincipale->show();

    setWindowTitle("Menu");
    Message = new QMessageBox();

    CreerAction();
    CreerMenu();

}
void MainWindow::CreerMenu()
{
    Fichier = menuBar()->addMenu("Fichier");
    Edition = menuBar()->addMenu("Edition");
    Outils = menuBar()->addMenu("Outils");

    Fichier->addAction(NouveauAction);
    Fichier->addAction(EnregistrerAction);
    Fichier->addAction(OuvrireAction);
    Fichier->addAction(QuitterAction);

    Edition->addAction(EditeAction);
    Edition->addAction(RechecheAction);

    Outils->addAction(MaintenanceAction);
    Outils->addAction(ParametreAction);

}
void MainWindow::CreerAction()
{
    NouveauAction = new QAction(tr("Nouveau Enregistrement"),this);
    connect(NouveauAction, SIGNAL (triggered()),this,SLOT(Nouveau()));
    EnregistrerAction = new QAction(tr("Enregistrer"),this);
    connect(EnregistrerAction, SIGNAL (triggered()),this,SLOT(Enregistrer()));
    OuvrireAction = new QAction(tr("Ouvrire"),this);
    connect(OuvrireAction, SIGNAL (triggered()),this,SLOT(Ouvrire())); //Ouvrire = Imprimer
    ParametreAction = new QAction(tr("Parametres"),this);
    connect(ParametreAction, SIGNAL (triggered()),this,SLOT(Parametre()));
    MaintenanceAction = new QAction(tr("Maintenir le systeme"),this);
    connect(MaintenanceAction, SIGNAL (triggered()),this,SLOT(Maintenance()));
    QuitterAction = new QAction(tr("Quitter"),this);
    connect(QuitterAction, SIGNAL (triggered()),this,SLOT (Quitter()));
    RechecheAction = new QAction(tr("Rechercher"),this);
    QObject::connect(RechecheAction, SIGNAL(triggered()),this,SLOT(Recherche()));
    EditeAction = new QAction(tr("Rechercher"),this);
    connect(EditeAction,SIGNAL (triggered()),this,SLOT(Edite()));
}

void MainWindow::Nouveau()
{

    Formulaire = new QWidget;
    Nom = new QLineEdit;
    Prenom = new QLineEdit;
    Email = new QLineEdit;
    Poste = new QLineEdit;
    Direction = new QLineEdit;

    Formulaire->setWindowTitle("Enregistrement");
    EnregistrerFormulaire = new QPushButton("Enregistrer");
    LayoutFormulaire = new QVBoxLayout;
    FormulaireInscription = new QFormLayout;

    FormulaireInscription->insertRow(1,"Nom :",Nom);
    FormulaireInscription->addRow("Prenom :",Prenom);
    FormulaireInscription->addRow("Email :",Email);
    FormulaireInscription->addRow("Poste Occupe :",Poste);
    FormulaireInscription->addRow("Dirrection Ratacher :",Direction);

    LayoutFormulaire->addLayout(FormulaireInscription);
    LayoutFormulaire->addWidget(EnregistrerFormulaire);

    //setLayout(FormulaireInscription);

    Formulaire->setLayout(LayoutFormulaire);
    Formulaire->setFixedSize(300,300);
    Formulaire->show();

}

void MainWindow::Enregistrer()
{

}

void MainWindow::Ouvrire()
{
    Ouverture = new QWidget;
    VueDeLaTable = new QTableView;
    Layout = new QVBoxLayout;

    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());

    VueDeLaTable->setModel(model);
    Layout->addWidget(VueDeLaTable);

    Ouverture->setLayout(Layout);

    Ouverture->show();
}

void MainWindow::Maintenance()
{

}

void MainWindow::Parametre()
{

}

void MainWindow::Quitter()
{

}

void MainWindow::Edite()
{

}

void MainWindow::Recherche()
{

}
MainWindow::~MainWindow()
{
    delete ui;
}

