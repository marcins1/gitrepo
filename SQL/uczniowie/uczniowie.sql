DROP TABLE IF EXISTS uczniowie;
CREATE TABLE uczniowie (
	id INTEGER PRIMARY KEY AUTOINCREMENT,
	imie VARCHAR(20),
	nazwisko VARCHAR(20),
    plec BOOLEAN,
    id_klasa INTEGER,
    egz_hum TINYINT,
    egz_mat TINYINT,
    egz_jez TINYINT,
    FOREIGN KEY (id_klasa) REFERENCES klasy(id)
    ON DELETE CASCADE ON UPDATE NO ACTION
);

DROP TABLE IF EXISTS klasy;
CREATE TABLE klasy (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    klasa VARCHAR(2),
    rok_naboru SMALLINT,
    rok_matury SMALLINT
);

DROP TABLE IF EXISTS przedmioty;
CREATE TABLE przedmioty (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    przedmiot VARCHAR(20),
    imie_naucz VARCHAR(20),
    nazwisko_naucz VARCHAR(20),
    plec_naucz BOOLEAN
);

DROP TABLE IF EXISTS oceny;
CREATE TABLE oceny (
    id INTEGER PRIMARY KEY,
    datad DATE,
    id_uczen INTEGER NOT NULL,
    id_przedmiot INTEGER NOT NULL,
    ocena DECIMAL,
    FOREIGN KEY(id_uczen) REFERENCES uczniowie(id),
    FOREIGN KEY(id_przedmiot) REFERENCES przedmioty(id)
);
