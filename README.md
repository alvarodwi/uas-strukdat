# uas-strukdat

Implementasi koding dari paper di Internet, mengenai permasalahan Graph dan Tree

Rifqy Kurnia Sudarman - 14081020039
Alvaro Dwi Oktaviano - 140810200041

## Paper yang Digunakan

Kami menggunakan paper **“[Penerapan Teori Graf pada Jaringan Komputer dengan Algoritma Kruskal](https://ejournal.poltektegal.ac.id/index.php/informatika/article/download/1032/pdf_28)”** yang ditulis oleh Fajar Mahardika.

Paper ini dipublish di Jurnal Informatika : Jurnal Pengembangan IT (JPIT), Vol 04, No.01, Januari 2019.

Sesuai judulnya, paper ini membahas penerapan algoritma kruskal untuk membangun jaringan komputer, dalam hal ini, optimasi panjang kabel yang digunakan.

## Algoritma yang Dipakai

Algoritma yang dipakai dalam paper yang kami gunakan adalah algoritma kruskal.  Algoritma ini dipakai untuk mencari Minimum Spanning Tree (MST) dari suatu graph.

Graph yang dipakai berupa graph tanpa arah yang memiliki bobot (weighted graph).

## Panduan Memulai

Eksekusi perintah dibawah ini untuk membuat file `kruskal.exe` dengan bantuan [makefile](src/makefile)

```bash
make
```

File `kruskal.exe` ini akan ada di folder [bin](src/bin)

Gunakan file [`input1.in`](src/bin/input1.in) dan [`input2.in`](src/bin/input2.in) sebagai referensi data yang akan di-input.

Atau gunakan formula dibawah ini :

> **Input Format**
>
> Baris pertama berisi dua integer:
>
> - ***n***, jumlah nodes dalam graph
>
> - ***e***, jumlah edge yang akan diinput
>
> Lalu, ***e*** baris berikutnya masing-masing berisi tiga integer:
>
> - ***k1***, node asal atau source
>
> - ***k2***, node tujuan atau destination
>
> - ***b***, bobot edge ***k1*** dan ***k2***

Artinya, input seperti ini

```md
4 3
2 3 4
0 3 5
0 1 10
```

berarti sebuah graph dengan 4 nodes serta 3 edge, masing masing edge nya (2,3), (0,3) dan (0,1) dengan bobot 4, 5, dan 10 berturut-turut.

---

Selain itu, file \*.in yang ada di folder bin juga bisa dipakai langsung dengan file `kruskal.exe` hasil build.

Gunakan perintah ini (untuk memakai file input1.in)

```bash
\.kruskal.exe < input1.in (pwsh/bash)
kruskal.exe < input1.in (cmd)
```

## Catatan

File paper bisa diakses [disini](wiki/1032-4423-1-PB.pdf)

## Lisensi

MIT License 2021
