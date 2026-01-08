% Black Bottom Hat İşlemi Örneği
original = imread('rice.png');
figure;
imshow(original);
title('Original');

se = strel('disk',12);

bothatFiltered = imbothat(original,se);
figure;
imshow(bothatFiltered);
title('Closing');

I = imbinarize(bothatFiltered);
figure;
imshow(I);
title('Bottom Hat');
%%
I = imread('coins.png');

% grayscale'e dönüştür
if size(I,3) == 3
    I = rgb2gray(I);
end

se = strel('disk', 12);

I_close = imclose(I, se);
I_bth = imbothat(I, se);

figure;
subplot(1,3,1); imshow(I); title('Orijinal');
subplot(1,3,2); imshow(I_close); title('Closing');
subplot(1,3,3); imshow(I_bth); title('Black Bottom-Hat');
