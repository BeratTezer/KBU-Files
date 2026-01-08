% Aşındırma ve Genişletme İşlemleri Örneği
I = imread('coins.png');
I = imbinarize(I);

se = strel('disk', 3);

I_eroded = imerode(I, se);
I_dilated = imdilate(I, se);

figure;
subplot(1,3,1); imshow(I); title('Orijinal');
subplot(1,3,2); imshow(I_eroded); title('Erosion');
subplot(1,3,3); imshow(I_dilated); title('Dilation');
