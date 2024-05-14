@extends('layout')
@section('title', "Home Page")
@section('content')
    {{auth()->user()->name}}
    Admin Sayfası
@endsection


