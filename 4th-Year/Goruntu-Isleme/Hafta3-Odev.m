function cikti = gezginFonksiyon(resim, islem)
    % x sadece 0, 1, 2, 3 olabilir
    girdiler = [0 1 2 3];
    if ~ismember(islem, girdiler)
        error('Geçersiz giriş! islem yalnızca 0(min filtre), 1(maks filtre), 2(mean-ortalama filtre) veya 3(medyan-ortanca filtre) olabilir.');
    end
    
    [satir, sutun] = size(resim);
    defaultResim = resim;
    
    % 2^den baslama ve -1'de bitirme sebebi kenarları ellememek
    for sa = 2:1:satir-1
        for su = 2:1:sutun-1
            % 3x3lük görselden 3x3lük bir matris alıyoruz aslında
            filtre = [defaultResim(sa-1,su-1), defaultResim(sa-1,su), defaultResim(sa-1,su+1), defaultResim(sa,su-1), defaultResim(sa,su), defaultResim(sa,su+1), defaultResim(sa+1,su-1), defaultResim(sa+1,su), defaultResim(sa+1,su+1)];
            
            if islem == 0
                resim(sa,su) = minHesaplayici(filtre);
            elseif islem == 1
                resim(sa,su) = maksHesaplayici(filtre);
            elseif islem == 2
                resim(sa,su) = ortHesaplayici(filtre);
            else % islem 3 durumu
                resim(sa,su) = ortancaHesaplayici(filtre);
            end
        end
    end
    
    cikti = resim;   
    % çözüm şahsıma, Berat TEZER'e aittir.
end

function minDeger = minHesaplayici(filtre)
    minDeger = filtre(1);
    
    for i = 2:1:9
        if filtre(i) < minDeger
            minDeger = filtre(i);
        end
    end     
end

function maksDeger = maksHesaplayici(filtre)
    maksDeger = filtre(1);
    
    for i = 2:1:9
        if filtre(i) > maksDeger
            maksDeger = filtre(i);
        end
    end     
end

function ortDeger = ortHesaplayici(filtre)
    toplam= 0;
    
    for i = 1:1:9
        toplam = toplam + filtre(i)/9;
    end 
    ortDeger = toplam;     
end

function ortancaDeger = ortancaHesaplayici(filtre)
    filtre = sort(filtre);
    ortancaDeger = filtre(5);     
end

resim = imread('coins.png');

resimMin = gezginFonksiyon(resim, 0);
resimMax = gezginFonksiyon(resim, 1);
resimOrt = gezginFonksiyon(resim, 2);
resimOrtanca = gezginFonksiyon(resim, 3);

tiledlayout(2,2);

nexttile;
imshow(resimMin);
title('Minimum Filtre');

nexttile;
imshow(resimMax);
title('Maksimum Filtre');

nexttile;
imshow(resimOrt);
title('Ortalama Filtre');

nexttile;
imshow(resimOrtanca);
title('Ortanca Filtre');
