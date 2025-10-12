resim = imread('coins.png');      

[row, column] = size(resim);

for i=1:row
    for j=1:column
        if resim(i,j) < 100
            resim(i,j)=0;
        else
            resim(i,j)=255;
        end
    end
end

resim = imfill(resim,'holes');

resim2 = resim;

resim2(:, 2:end) = resim(:, 1:end-1); 

sonuc = resim & ~resim2;

imshow(sonuc);