DROP TABLE IF EXISTS nazwiska;
CREATE TABLE nazwiska(
	nr_ucznia INTEGER PRIMARY KEY,
	nazwisko VARCHAR(20),
	imie1 VARCHAR(20),
    imie2 VARCHAR(20) NOT NULL
);

DROP TABLE IF EXISTS dane_osobowe;
CREATE TABLE dane_osobowe(
	nr_ucznia INTEGER NOT NULL,
	dzien_u TINYINT,
	miesiac_u TINYINT,
	rok_u TINYINT,
    miejsce_u VARCHAR(25),
	wojewodztwo VARCHAR(25) NOT NULL,
    FOREIGN KEY (nr_ucznia) REFERENCES nazwiska(nr_ucznia)
);

DROP TABLE IF EXISTS oceny;
CREATE TABLE oceny(
	nr_ucznia INTEGER NOT NULL,
	zachowanie VARCHAR(20),
	rel_ety TINYINT,
    jpol TINYINT,
    jang TINYINT,
    jniem TINYINT,
    mat TINYINT,
    hist TINYINT,
    geog TINYINT,
    biol TINYINT,
    fiz TINYINT,
    che TINYINT,
    tech TINYINT,
    info TINYINT,
    plas TINYINT,
    po TINYINT,
    wf TINYINT,
    FOREIGN KEY (nr_ucznia) REFERENCES nazwiska(nr_ucznia)
);
