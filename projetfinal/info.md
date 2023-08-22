**TP : Gestion de village en C**

 

**Objectif** : Créer un petit jeu de gestion de village. Ce village sera composé d'un hôtel de ville, de divers bâtiments (scierie, mine, caserne, raffinerie) et d'un ensemble de villageois.

 

**Description générale** :

 

1. **Hôtel de ville** : C'est le cœur du village. Sa mise à niveau permettra de débloquer de nouveaux bâtiments ou améliorations.


2. **Bâtiments** :


- **Scierie** : Produit du bois.


- **Mine** : Produit de l'or.


- **Caserne** : Permet d'entraîner des villageois pour les transformer en soldats.


- **Raffinerie** : Produit de la matière noire.


3. **Villageois** : Ils sont nécessaires pour construire ou faire fonctionner les bâtiments. Certains bâtiments nécessitent un certain nombre de villageois pour fonctionner.

 

**Détails** :

 

1. **Ressources** :


- Bois


- Or


- Matière Noire

 

2. **Bâtiments** :


- Coût de construction :


- Scierie : 50 or


- Mine : 100 or, 20 bois


- Caserne : 200 or, 50 bois


- Raffinerie : 500 or, 100 bois, 50 matière noire


- Villageois nécessaires pour le fonctionnement :


- Scierie : 2 villageois


- Mine : 3 villageois


- Caserne : 4 villageois


- Raffinerie : 5 villageois


- Ressources produites par jour :


- Scierie : +20 bois


- Mine : +50 or


- Caserne : (n'ajoute pas directement de ressources, mais permet d'entraîner des soldats)


- Raffinerie : +10 matière noire

 

**Fonctionnalités** :


1. L'utilisateur devra pouvoir :


- Voir l'état actuel du village : ressources disponibles, bâtiments présents, nombre de villageois, etc.


- Construire de nouveaux bâtiments s'il a les ressources nécessaires.


- Assigner des villageois aux bâtiments.


- Collecter les ressources des bâtiments.


- Mise à jour des ressources tous les 'jours' (une itération).

 

2. Gestion des villageois :


- Un nombre fixe de villageois sera disponible au départ (par exemple 10).


- L'utilisateur devra assigner des villageois aux bâtiments pour qu'ils produisent des ressources.


- Si un bâtiment n'a pas assez de villageois, il ne produit pas de ressources.

 

**Bonus** :


1. Implémenter une fonctionnalité où l'hôtel de ville peut être amélioré pour augmenter le nombre maximum de villageois disponibles ou débloquer de nouvelles améliorations.


2. Ajouter d'autres types de bâtiments ou ressources.


3. Permettre aux villageois d'être entraînés en tant que soldats dans la caserne. Les soldats pourraient défendre le village contre les attaques ou être utilisés dans d'autres fonctionnalités avancées.

 

**Livrables** :


1. Code source en C.


2. Un fichier README
 détaillant la manière de compiler et d'exécuter le programme.


3. Tout autre documentation nécessaire.

 

**Évaluation** :


1. Fonctionnalité de base : 70%.


2. Propreté et clarté du code : 20%.


3. Originalité : 10%.

 

Bonne chance!