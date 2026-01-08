% Skeletonization İşlemi
I = imread('text.png');
imshow(I);
skel = bwmorph(I, 'skel', Inf);
figure;
imshow(skel);

%%
figure;
imshow(I); hold on;
spy(skel, 'r');   %kırmızı iskelet
title('Skeleton Overlay');
%%
BW = imread('circles.png');
BW3 = bwmorph(BW,'skel',Inf);
figure;
imshow(BW);
figure;
imshow(BW3);
%%
BW = imread('circles.png');

D = bwdist(~BW);      % Distance transform
skel = bwskel(BW);    

figure;
subplot(1,3,1); imshow(BW); title('Binary');
subplot(1,3,2); imagesc(D); axis image; colormap jet; title('Distance Transform');
subplot(1,3,3); imshow(skel); title('bwskel Skeleton');
%%
I = imread('coins.png');
I = imbinarize(I);

skel = bwmorph(I, 'skel', Inf);

figure;
subplot(1,2,1); imshow(I); title('Binary Image');
subplot(1,2,2); imshow(skel); title('Skeleton');
