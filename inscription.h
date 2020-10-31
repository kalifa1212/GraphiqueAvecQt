#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QWidget>
#include <QFormLayout>
#include <QPushButton>
#include <QLineEdit>

class Inscription
{
public:
    Inscription();


    QWidget *Formulaire;

    QFormLayout *FormulaireInscription;
    QPushButton *EnregistrerFormulaire;

    QLineEdit *Nom;
    QLineEdit *Prenom;
    QLineEdit *Email;
    QLineEdit *Poste;
    QLineEdit *Direction;

};

#endif // INSCRIPTION_H
