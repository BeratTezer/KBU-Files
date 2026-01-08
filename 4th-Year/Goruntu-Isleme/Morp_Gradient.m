% Morphological Gradient İşlemi
I = imread('coins.png');
I = imbinarize(I);
I = imfill(I, "holes");
se = strel('disk', 1);

grad = imdilate(I,se) - imerode(I,se);
figure;
imshow(grad); 
title('Morphological Gradient');

%%
org = imread('cameraman.tif');
I = imbinarize(org);
se = strel('disk', 1);

grad = imdilate(I,se) - imerode(I,se);
figure;
imshow(org);
figure;
imshow(grad); 
title('Morphological Gradient');