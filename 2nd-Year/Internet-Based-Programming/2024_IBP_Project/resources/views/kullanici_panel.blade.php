<!DOCTYPE html>
<html lang="tr">
<head>
  <meta charset="UTF-8">
  <title>Turizm Topluluğu</title>
  <link rel="stylesheet" href="{{asset('style.css')}}">
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
        <li style="padding-right: 50px"><a href="{{route('logout')}}">Çıkış Yap</a></li>

    </ul>
    <div id="nav-btn-id" class="nav-btn">
      <div></div>
      <div></div>
      <div></div>
    </div>
  </nav>
  <header>
    <div class="container">
      <div>
        <h2>Hoş Geldin <b>{{Auth::user()->email}}</b></h2>
        <h1><b>Maceran için detaylar seni bekliyor!</b></h1>
        <button class="learnmore">Detaylar İçin Kaydır</button>
      </div>
    </div>
  </header>
  <section id="events-sec">
    <div class="container" style="padding-left: 30%; padding-right: 30%;">
      <h1>İletişime Geç</h1>
      @foreach ($messages as $message)
      <div style="margin-bottom: 20px; max-width: 80%; clear: both;">
              <div style="font-weight: bold; text-align: {{ $message->sender_id == Auth::user()->id ? 'left' : 'right' }};">{{ $message->sender_id == Auth::user()->id ? "Sizin Mesajınız" : "Adminin Yanıtı" }}</div>
              <div style="color: #999; text-align: {{ $message->sender_id == Auth::user()->id ? 'left' : 'right' }};">{{$message->created_at}}</div>
              <div style="clear: both;"></div>
              <div>{{$message->message}}</div>
      </div>
  @endforeach



            </div>
            <!--/.direct-chat-messages-->
        </div>
        <!-- /.card-footer-->
    </div>


            <form action="{{route('messageChatHome.post')}}" method="post">
                @csrf
                <input type="text" name="receiver_id" value="1" hidden>
                <input type="text" name="sender_id" value="{{Auth::user()->id}}" hidden>
                <div class="relative w-full mb-3">
                    <label style="color: orange" class="block uppercase text-xs font-bold mb-2" for="message">Mesaj İçeriği (Yalnızca admin görebilir)</label>
                    <input type="text" name="message" style="color:black; width: 1000px" rows="4" cols="80" class="px-3 py-3 placeholder-gray-400 bg-white rounded text-sm shadow focus:outline-none focus:shadow-outline w-full" placeholder="Mesaj yazın...">
                </div>
                <div class="text-center mt-6">
                    <button class="bg-gray-900 text-white active:bg-gray-700 text-sm font-bold uppercase px-6 py-3 rounded shadow hover:shadow-lg outline-none focus:outline-none mr-1 mb-1" type="submit" style="transition: all 0.15s ease 0s;">
                        Mesajı İlet
                    </button>
                </div>
            </form>


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
  <script src="{{asset('script.js')}}"></script>
</body>
</html>
