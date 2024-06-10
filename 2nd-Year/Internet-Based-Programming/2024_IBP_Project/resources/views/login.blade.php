@extends('schemas.layout')

@section('title', 'Giriş Yap')

@section('form')
    <h2>Detaylar için Giriş Yap</h2>
    <form action="{{route('login.post')}}" method="POST">
        @csrf
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required>

        <label for="password">Şifre:</label>
        <input type="password" id="password" name="password" required>
        <br><br>
        Hesabın yok mu? <a href="{{route('registration')}}">Hesap Oluştur</a>
        <br><br><br>
        <input type="submit" value="Giriş Yap" style="background-color:#548695">
    </form>
@endsection
