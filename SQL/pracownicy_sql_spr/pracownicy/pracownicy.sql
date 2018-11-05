DROP TABLE IF EXISTS pracownicy;
CREATE TABLE pracownicy (
    id_pracownika INTEGER PRIMARY KEY AUTOINCREMENT,
	imie VARCHAR(20),
	nazwisko VARCHAR(25),
	kod VARCHAR(6),
    miasto_z VARCHAR(25),
    ulica VARCHAR(20),
    data_u DATE,
    miasto_u VARCHAR(25)
);

DROP TABLE IF EXISTS stanowiska;
CREATE TABLE stanowiska (
    id_stanowiska INTEGER PRIMARY KEY AUTOINCREMENT,
    stanowisko VARCHAR(20)
);

DROP TABLE IF EXISTS kontakty;
CREATE TABLE kontakty (
	id_p INTEGER,
	typ_k TINYINT,
	kontakt VARCHAR(15),
	uwagi VARCHAR(20),
    FOREIGN KEY(id_p) REFERENCES pracownicy(id_pracownika)
);

DROP TABLE IF EXISTS place;
CREATE TABLE place (
	id_p INTEGER,
	id_s INTEGER,
	placa INTEGER,
	data_z DATE,
    FOREIGN KEY(id_p) REFERENCES pracownicy(id_pracownika),
    FOREIGN KEY(id_s) REFERENCES stanowiska(id_stanowiska)
);
