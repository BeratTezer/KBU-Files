@extends('schemas.admin_panel_layout')

@section('title', 'Turizm Ana Sayfa')

@section('content')
<br>
        <h5 class="mb-2" style="margin-left: 40px">Kart Sözler</h5>
        <div class="card card-success">
          <div class="card-body">
            <div class="row">
              <div class="col-md-12 col-lg-6 col-xl-4">
                <div class="card mb-2 bg-gradient-dark">
                  <img class="card-img-top" src="{{asset('item1.jpg')}}" style="filter: brightness(40%);" alt="Dist Photo 1">
                  <div class="card-img-overlay d-flex flex-column justify-content-end">
                    <h5 class="card-title text-primary text-white">Kural #1: Disiplin</h5>
                    <p class="card-text text-white pb-2 pt-1">Az da olsa hep olmalı. Gelişim zaman ister ancak devamlılık da gerektirir.</p>
                    <a href="#" class="text-white">Son güncelleme 2dk önce</a>
                  </div>
                </div>
              </div>
              <div class="col-md-12 col-lg-6 col-xl-4">
                <div class="card mb-2">
                  <img class="card-img-top" src="{{asset('item2.jpg')}}" style="filter: brightness(40%);" alt="Dist Photo 2">
                  <div class="card-img-overlay d-flex flex-column justify-content-center">
                    <h5 class="card-title text-white mt-5 pt-2">Kural #2: Özveri</h5>
                    <p class="card-text pb-2 pt-1 text-white">
                      Az ya da çok, <br>
                      en iyi ya da en kötü <br>
                      hepsi birer kelime. Sen hangisisin?
                    </p>
                    <a href="#" class="text-white">Son güncelleme 15dk önce</a>
                  </div>
                </div>
              </div>
              <div class="col-md-12 col-lg-6 col-xl-4">
                <div class="card mb-2">
                  <img class="card-img-top" src="{{asset('item3.jpg')}}" style="filter: brightness(40%);" alt="Dist Photo 2">
                  <div class="card-img-overlay d-flex flex-column justify-content-center">
                    <h5 class="card-title text-white mt-5 pt-2">Kural #3: Karalılık</h5>
                    <p class="card-text pb-2 pt-1 text-white">
                        Bazen hep ve <br>
                        sürekli yaparız ama bırakışımız ani olur.<br>
                        Unutmayın, herkesin serüveni eşsizdir<br>
                        keyfini çıkarmaya bakın.
                    </p>
                    <a href="#" class="text-white">Son güncelleme 3 saat önce</a>
                  </div>
                </div>
              </div>
              <div class="col-md-12 col-lg-6 col-xl-4">
                <div class="card mb-2">
                  <img class="card-img-top" src="{{asset('item4.jpg')}}" style="filter: brightness(40%);" alt="Dist Photo 2">
                  <div class="card-img-overlay d-flex flex-column justify-content-center">
                    <h5 class="card-title text-white mt-5 pt-2">Kural #4: Çözüm Odaklı Ol</h5>
                    <p class="card-text pb-2 pt-1 text-white">
                        Sorunlar hep olaca, peki sen ne yapacaksın?
                    </p>
                    <a href="#" class="text-white">Son güncelleme 2 gün önce</a>
                  </div>
                </div>
              </div>
              <div class="col-md-12 col-lg-6 col-xl-4">
                <div class="card mb-2">
                  <img class="card-img-top" src="{{asset('item5.jpg')}}" style="filter: brightness(40%);" alt="Dist Photo 2">
                  <div class="card-img-overlay d-flex flex-column justify-content-center">
                    <h5 class="card-title text-white mt-5 pt-2">Kural #5: Programını Bil</h5>
                    <p class="card-text pb-2 pt-1 text-white">
                      Kör kütük program hazırlama <br>
                      yaptığını ve yapacağını daima bil<br>
                      ve kontorllü bir şekilde ilerle.
                    </p>
                    <a href="#" class="text-white">Son güncelleme 3 gün önce</a>
                  </div>
                </div>
              </div>
              <div class="col-md-12 col-lg-6 col-xl-4">
                <div class="card mb-2">
                  <img class="card-img-top" src="{{asset('item6.jpg')}}" style="filter: brightness(40%);" alt="Dist Photo 2">
                  <div class="card-img-overlay d-flex flex-column justify-content-center">
                    <h5 class="card-title text-white mt-5 pt-2">Kural #6: Denemekten Korkma</h5>
                    <p class="card-text pb-2 pt-1 text-white">
                      Bazen zoru denemek gerekir <br>
                      yoksa deneyenleri izlemek kalır geriye...
                    </p>
                    <a href="#" class="text-white">Son güncelleme 4 gün önce</a>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
@endsection
