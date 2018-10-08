DROP TABLE IF EXISTS uczniowie;
CREATE TABLE uczniowie(
	id_ucznia INTEGER PRIMARY KEY,
	nazwisko VARCHAR(20),
	imie VARCHAR(20),
    ulica VARCHAR(20),
    dom TINYINT,
    id_klasy VARCHAR(2)
);

DROP TABLE IF EXISTS oceny;
CREATE TABLE oceny(
	id_ucznia INTEGER NOT NULL,
	ocena TINYINT,
	dataa DATE,
	id_przedmiotu TINYINT,
    FOREIGN KEY (id_ucznia) REFERENCES uczniowie(id_ucznia),
    FOREIGN KEY (id_przedmiotu) REFERENCES przedmioty(id_przedmiotu)
);

DROP TABLE IF EXISTS przedmioty;
CREATE TABLE przedmioty(
	id_przedmiotu INTEGER NOT NULL,
	nazwaprzedmiotu VARCHAR(20),
	nazwisko_naucz VARCHAR(20),
    imie_naucz VARCHAR(20)
);
