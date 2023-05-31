void kayitDegistir(FILE* file, int veri1, int veri2) {
    struct hesapBilgileri kayit1, kayit2;

    fseek(file, veri1, SEEK_SET);
    fread(&kayit1, sizeof(hesapBilgileri), 1, file);

    fseek(file, veri2, SEEK_SET);
    fread(&kayit2, sizeof(hesapBilgileri), 1, file);

    fseek(file, veri1, SEEK_SET);
    fwrite(&kayit2, sizeof(hesapBilgileri), 1, file);

    fseek(file, veri2, SEEK_SET);
    fwrite(&kayit1, sizeof(hesapBilgileri), 1, file);
}