<!-- PROJECT LOGO -->
<br />

<h3 align="center">LIBASM</h3>

  <p align="center">
    42Project by csapt
    <br />
    <a href="https://cdn.intra.42.fr/pdf/pdf/21703/fr.subject.pdf"><strong>Subject »</strong></a>
    <br />
  </p>
</p>

<!-- ABOUT THE PROJECT -->
## A Propos du Projet

Nous devons recréer des fonctions de notre "libft" en language assembleur.

Le langage assembleur, souvent appellé asm, est un langage de bas niveau pour ordinateur - ou autre machine programmable - qui possède une très forte correspondance
entre le langage et l’architecture de la machine.
Chaque asm est spécifique à un ordinateur particulier. A l’opposé, les langages hautniveau sont généralement portables sur de multiples plateformes mais nécessitent compilation ou interprétation. Le langage assembleur peut également être appellé langage
machine symbolique.

Voici un Notion qui regroupe toutes mes notes et les infos utiles concernant le projet: [Lien](https://www.notion.so/LibASM-143483f9bb58407ba6d3375628b3201e)
## Tester et Compiler la lib

Voici les commandes:

### Pré-requis

* MacOS (Tested on 10.14)
* Ne marche pas sur Linux car les appels systèmes sont différents.

### Tester le projet

1. Clone le repo
   ```sh
   git clone https://github.com/clement0910/libasm
   ```
2. Créer la lib avec le tester
   ```sh
   make run
   ```
3. Testez le projet
    ```sh
   ./libasm_tester
   ```

### Compiler la lib
1. Clone le repo
   ```sh
   git clone https://github.com/clement0910/libasm
   ```
2. Compiler la lib avec les bonus
   ```sh
   make bonus
   ```
### Grade

<p align="center">
  <a href="https://github.com/clement0910/libasm">
    <img src="https://zupimages.net/up/21/16/va25.png" alt="Logo">
  </a>

105/100 avec la fonction bonus list_size

### Documentation:

  - https://revers.engineering/applied-re-basic-architecture/
  - https://www.tutorialspoint.com/assembly_programming/assembly_system_calls.htm
  - https://www.youtube.com/watch?v=HgEGAaYdABA
  - https://www.youtube.com/watch?v=I9GRaQctLog
  - https://filippo.io/making-system-calls-from-assembly-in-mac-os-x/
  - https://www.tutorialspoint.com/assembly_programming/assembly_basic_syntax.htm
  - https://codehost.wordpress.com/2011/07/29/59/
  - https://www.tutorialspoint.com/assembly_programming/assembly_introduction.htm
  - http://staffwww.fullcoll.edu/aclifton/courses/cs241/syntax.html
  - https://www.commentcamarche.net/contents/15-introduction-a-l-assembleur
  - https://benoit-m.developpez.com/assembleur/tutoriel/#:~:text=Le%20«%20bitwise%20»%20est%20une%20technique,à%20manipuler%20des%20«%20bits%20
  - http://dustin.schultz.io/mac-os-x-64-bit-assembly-system-calls.html
  - https://tuttlem.github.io/2013/01/08/strlen-implementation-in-nasm.html
  - https://pub.phyks.me/sdz/sdz/en-profondeur-avec-l-assembleur.html#Lammoireendtails
  - https://www.tutorialspoint.com/assembly_programming/assembly_registers.htm
  - https://www.gladir.com/LEXIQUE/ASM/movzx.htm
  - https://stackoverflow.com/questions/63355469/how-to-use-adress-returned-from-call 
 
### Logiciels utilisées pour une meilleure compréhension

* [Ghidra](https://ghidra-sre.org/) | Ghidra est un logiciel libre d'ingénierie inverse développé par la NSA. Son interface graphique intègre un désassembleur et un décompilateur afin de réaliser l'analyse de fichiers binaires.
* [GDB Peda](https://github.com/longld/peda) | GDB Peda est une extension de GDB normalement utilisé pour le reverse engineering mais TRÈS UTILE pour ce projet.
