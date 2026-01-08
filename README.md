# M2_Test_Logiciel
Automatisation de tests : Création d'oracle de tests et utilisation d'outils automatiques de génération de tests (PathCrawler Online)

# Présentation 

L’objectif de ces TP est de générer des tests, détecter et expliquer les erreurs dans divers programmes en utilisant des outils automatiques de génération de tests (PathCrawler Online). Ce travail repose sur deux axes principaux : définir les domaines de test pour faciliter la génération de tests mettant en évidence les éventuelles erreurs, et écrire des oracles de test, c’est-à-dire de petits programmes qui traduisent les post-conditions des programmes à tester et vérifient leurs résultats. Les exemples de la racine carrée entière et de la recherche dans un tableau trié ont donc été testé à l'aide d'oracle de test afin de vérifier la conformité à leur spécification respective.

# Détail de la partie racine carré entière (sqrt())

Les tests de cette partie reposent sur la spécification suivante : \
La fonction de racine carrée entière sqrt( ), prend en argument un entier a et renvoie l’unique entier i tel que : \
i^2 ≤ a < (i + 1)^2 si a est positif, et 0 sinon. Pour cette même fonction sqrt, il y a à disposition différentes implémentations. Chaque implémentation est présente dans des fichiers C différents, notamment sqrt1.c et sqrt2.c.

# Détail de la partie recherche dans un tableau trié (search())

Les tests de cette partie reposent sur la spécification suivante : \
La fonction search prend en argument un tableau A et un élément elem, et renvoie l’index auquel elem est présent dans le tableau A s’il est présent, et −1 sinon. La taille du tableau A a été fixée à 8 (les index du tableau vont donc de 0 à 7), pour les tests qui ont été exécutés ensuite. Pour cette même fonction search, il y a à disposition différentes implémentations. Chaque implémentation est présente dans des fichiers C différents, notamment search1.c et search2.c.

# Exemples de Control Flow Graph (CFG)

Le CFG est un outil utilisé en ingénierie logicielle et en analyse de programmes pour représenter la structure d’un programme ou d’un algorithme. Ici, des exemples de CFG pour les programmes sqrt*.c et search*.c sont donnés, afin de représenter les chemins d’exécution possibles. Cela permettra d’identifier les conditions nécessaires pour obtenir une bonne couverture des chemins, d’aider à repérer des chemins d’exécution incorrects ou inattendus, et de détecter des chemins inaccessibles ou des boucles infinies. \
\
Ces graphes ont été construits durant les séances de TP.

## CFG du programme sqrt1
<img width="979" height="747" alt="CFG1" src="https://github.com/user-attachments/assets/6eee6152-55bc-462a-86e9-9696e6ced048" />

## CFG du programme sqrt2
<img width="1180" height="1180" alt="CFG2" src="https://github.com/user-attachments/assets/a5bbaaf6-2458-4539-b54d-d5e8ecce5965" />

## CFG du programme search2
<img width="1680" height="1240" alt="CFG_search2" src="https://github.com/user-attachments/assets/902ded1c-2922-42e0-ae1a-e368386a78c0" />
