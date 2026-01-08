% White Top Hat İşlemi Örneği
original = imread('rice.png');
figure;
imshow(original);
title('Original');

se = strel('disk',12);

tophatFiltered = imtophat(original,se);
figure;
imshow(tophatFiltered);
title('Opening');

I = imbinarize(tophatFiltered);
figure;
imshow(I);
title('Top Hat');
%%
I = imread('coins.png');

% Eğer grayscale değilse graye dönüştür
if size(I,3) == 3
    I = rgb2gray(I);
end

se = strel('disk', 12);

I_open = imopen(I, se);
I_wth  = imtophat(I, se);

figure;
subplot(1,3,1); imshow(I); title('Orijinal');
subplot(1,3,2); imshow(I_open); title('Opening');
subplot(1,3,3); imshow(I_wth); title('White Top-Hat');
