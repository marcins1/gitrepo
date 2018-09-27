DROP TABLE IF EXISTS miasta;
CREATE TABLE miasta(
	id_miasta INTEGER PRIMARY KEY AUTOINCREMENT,
	nazwa_miasta TEXT(30),
	wojewodztwo TEXT(35)
);

DROP TABLE IF EXISTS mieszkancy;
CREATE TABLE mieszkancy(
	id_mieszkancy INTEGER PRIMARY KEY AUTOINCREMENT,
	liczba_mieszkancow INTEGER,
	grupa_wiekowa TEXT(20),
	data_aktualizacji DATE,
	id_miasta INTEGER REFERENCES miasta(id_miasta)
);

DROP TABLE IF EXISTS powierzchnie;
CREATE TABLE powierzchnie(
	id_powierzchnie INTEGER PRIMARY KEY AUTOINCREMENT,
	powierzchnia_miasta INTEGER,
	powierzchnia_terenow_zielonych INTEGER,
	data_aktualizacji DATE,
	id_miasta INTEGER REFERENCES miasta(id_miasta)
);
