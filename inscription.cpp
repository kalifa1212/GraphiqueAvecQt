#include "inscription.h"

Inscription::Inscription()
{
    Formulaire = new QWidget;

    EnregistrerFormulaire = new QPushButton("Enregistrer");
    FormulaireInscription = new QFormLayout;
    FormulaireInscription->addRow("Nom: ",Nom);
    FormulaireInscription->setSpacing(5);
    FormulaireInscription->addRow("Prenom :",Prenom);
    FormulaireInscription->setSpacing(5);
    FormulaireInscription->addRow("Email :",Email);
    FormulaireInscription->setSpacing(5);
    FormulaireInscription->addRow("Poste Occupe :",Poste);
    FormulaireInscription->setSpacing(5);
    FormulaireInscription->addRow("Dirrection Ratacher :",Direction);
    FormulaireInscription->setSpacing(5);
    FormulaireInscription->addWidget(EnregistrerFormulaire);

    Formulaire->setLayout(FormulaireInscription);

    Formulaire->show();
}
