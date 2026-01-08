clear; clc;
resim = imread('Sekiller.jpg');
resimGri = rgb2gray(resim);
resimBinary = imbinarize(resimGri);
[objeler, adet] = bwlabel(resimBinary);

features = zeros(adet, 4);
for i=1:adet
    obje=objeler==i;
    stats = regionprops(obje, 'all');
    cember = stats.Circularity;
    elips = stats.Eccentricity;
    ortalama = mean(mean(obje));
    sapma = std(obje(:));
    features(i, 1:4) = [cember, elips, ortalama, sapma];
%     figure;
%     imshow(objeler==i);
end
% 0: yuvarlak - 1:köşeli
etiket = [0, 1, 1, 0, 1, 0, 0, 1];
features(:, 5) = etiket;
secilen = randperm(adet, 7);
kalan = setdiff(1:adet, secilen);
egitimSeti = features(secilen, :);
testSeti = features(kalan, :);

modelSVM = fitcsvm(egitimSeti(:, 1:4), egitimSeti(:, 5));
sonuc = predict(modelSVM, testSeti(:, 1:4));
fprintf('SVM Sonuç: %d\n', sonuc);
fprintf('Gerçek Sonuç: %d\n', etiket(kalan));

modelKNN = fitcknn(egitimSeti(:, 1:4), egitimSeti(:, 5), "NumNeighbors",1);
sonuc = predict(modelKNN, testSeti(:,1:4));
fprintf('KNN Sonuç: %d\n', sonuc);
fprintf('Gerçek Sonuç: %d\n', etiket(kalan));




