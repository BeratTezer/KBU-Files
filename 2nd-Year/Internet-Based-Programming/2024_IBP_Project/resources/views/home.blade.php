<!DOCTYPE html>
<html lang="tr">
<head>
  <meta charset="UTF-8">
  <title>Turizm Topluluğu</title>
  <link rel="stylesheet" href="./style.css">
</head>
<body>
<!-- partial:index.partial.html -->
<!DOCTYPE html>
<html>
<head>
  <title>Travel</title>
  <link href="https://fonts.googleapis.com/css2?family=Golos+Text:wght@500&family=Playfair+Display&family=Poppins&display=swap" rel="stylesheet">
  <link href="https://fonts.googleapis.com/css2?family=Playfair+Display&family=Tilt+Neon&display=swap" rel="stylesheet">
  <link href="https://cdn.jsdelivr.net/npm/tailwindcss@2.2.19/dist/tailwind.min.css" rel="stylesheet">

  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
  <nav id="nav-bar">
    <ul>
      <li><a href="{{route('home')}}" class="current">Ana Sayfa</a></li>
      <li><a href="{{route('login')}}">Oturum Aç</a></li>
      <li style="padding-right: 50px"><a href="{{route('registration')}}">Kaydol</a></li>
    </ul>
    <h2>Maceraya Atıl!</h2>
    <div id="nav-btn-id" class="nav-btn">
      <div></div>
      <div></div>
      <div></div>
    </div>
  </nav>
  <header>
    <div class="container">
      <div>
        <h2>Dünyayı Keşfet, Kendini Tanı!</h2>
        <h1><b>Unutulmaz bir Maceraya Atıl!</b></h1>
        <button class="learnmore">Detaylar İçin Kaydır</button>
      </div>
    </div>
  </header>
  <section id="events-sec">
    <div class="container">
      <h1 id="scrollToMe">Yaklaşan Turlar</h1>
      <div>
        <div class="events" style="padding-left: 30px">
          <img src="https://lp-cms-production.imgix.net/2021-01/GettyRF_1158868086.jpg?auto=format&q=75&w=1920">
          <h2>Everest Kamplı Tur</h2>
          <p>Yol üzerinde kamp kurulacak ve tepeyi görmeden dönülmeyecek! Riski seviyorsan hemen yerini kap!</p>
          <button class="learnmore">1499€</button>
        </div>
        <div class="events" style="padding-right : 30px; width: 60%" >
          <img src="https://images.unsplash.com/photo-1553071001-273ca168a6a4?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1144&q=80">
          <h2>Doğa Yürüyüşü</h2>
          <p>Trekking tutkunlarına müjde! Dağ tepe gezmeyi seviyorsan, doğanın sunduğu manzalarının eşliğinde bir serüven seni bekliyor..</p>
          <button class="learnmore">599€</button>
        </div>
      </div>
    </div>
  </section>
  <section id="explore-sec">
    <div class="container">
      <h1>Dünya'yı Keşfet</h1>
      <p>Keşfederken kaşif ruhları arkadaş edin, dostlarında heyecanı katla!</p>
    </div>
    <div>

    </div>
  </section>
  <section id="tours-sec">
    <div class="container">
      <div class="d-text" style="padding-left: 30px;" >
        <h1>Gelecek Turlar - Hedefler</h1>
        <p>Paraşütlü atlayış, yamaç paraşütü, doğa kampları, dağcılık faaliyetler ve kano etkinlikleri 2025'de planlandı bile!</p>
          </div>
      <div class="d-images" style="padding-right: 30px" >
        <div><img src="https://images.unsplash.com/photo-1544735716-ea9ef790f501?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxzZWFyY2h8NHx8ZXZlcmVzdCUyMGJhc2UlMjBjYW1wfGVufDB8fDB8fA%3D%3D&auto=format&fit=crop&w=500&q=60"></div>
        <div><img src="https://images.pexels.com/photos/1371360/pexels-photo-1371360.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=1"></div>
        <div><img src="https://images.pexels.com/photos/238622/pexels-photo-238622.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=1"></div>
        <div><img src="https://images.pexels.com/photos/837745/pexels-photo-837745.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=1"></div>
      </div>
    </div>
  </section>
  <footer>
    <div class="container">
      Karabük/Türkiye. Karabük Üniversitesi
      <br>
      Copyright © 2024 Nur Vuslat Görgün
    </div>
  </footer>
</body>
</html>
<!-- partial -->
  <script src="./script.js"></script>
</body>
</html>
