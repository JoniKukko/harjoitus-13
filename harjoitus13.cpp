/******************************************
* Teht„v„: Harjoitus 13 A
* Tekij„: Joni Kukko
* PVM: 24.09.2013
* Kuvaus:
*   Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
*   yhdist„„ nimet yhdeksi merkkijonoksi ja tulostaa ne
*   lopuksi nayt”lle.
*   a) Kayta cstring-kirjastoa (C:n merkkitaulukot) tehd„ksesi merkkijonojen yhdist„misen
*   b) Kayta string-kirjastoa (C++:n merkkijonot) tehd„ksesi merkkijonojen yhdist„misen  TEE, JOS ON AIKAA
******************************************/

#include <iostream> 
#include <cstring>

int main() {

	char etunimi[50], sukunimi[50], kokonimi[50] = "";

    std::cout << "Anna etunimi: ";
    std::cin.get(etunimi, 50);

    std::cout << "Anna sukunimi: ";
    std::cin.get();
    std::cin.get(sukunimi, 50);
	
	strcat_s(kokonimi, etunimi);
	strcat_s(kokonimi, " ");
	strcat_s(kokonimi, sukunimi);

    std::cout << "Nimesi on: " << kokonimi << std::endl;

}
  
  