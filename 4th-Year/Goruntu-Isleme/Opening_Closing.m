% Açma ve Kapama Örneği
I = imread('coins.png');
I = imbinarize(I);

se = strel('disk', 3);

I_open = imopen(I, se);
I_close = imclose(I, se);
I_close = imfill(I_close, "holes");

figure;
subplot(1,3,1); imshow(I); title('Orijinal');
subplot(1,3,2); imshow(I_open); title('Opening');
subplot(1,3,3); imshow(I_close); title('Closing');
%%
[etiket, adet] = bwlabel(I_close);
imshow(etiket==8);
%% bireysel çalışma
x = etiket == 8;
acma = imerode(x, strel('disk', 5));
[a,b] = bwlabel(acma);
imshow(a);
%%
org = imread('coins.png');
sonuc = uint8(acma) .* org;
imshow(sonuc);
