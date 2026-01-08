%Disk Boyutu Değişimi
I = imread('coins.png');
I = imbinarize(I);

figure;
for r = [2 5 10 20]
    se = strel('disk', r);
    I_d = imdilate(I, se);
    subplot(2,2,find([2 5 10 20]==r)); 
    imshow(I_d);
    title(['Disk radius = ' num2str(r)]);
end
