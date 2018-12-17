#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  model_orm.py

from peewee import *

baza_plik = 'quiz.db'
############## MODEL
baza = SqliteDatabase(baza_plik)
class BazaModel(Model):
    class Meta:
        database = baza

class Kategoria(BazaModel):
    kategoria = CharField(null=False)

class Pytanie(BazaModel):
    pytanie = CharField(null=False)
    id_kat = ForeignKeyField(Kategoria, related_name='Pytanie')
    
class Odpowiedz(BazaModel):
    odpowiedz = CharField(null=False)
    id_p = ForeignKeyField(Pytanie, related_name='Odpowiedz')
    odpok = BooleanField(default=False)
