@extends('schemas.admin_panel_layout')

@section('title', 'Bildiri Ekle')

@section('form')
<div class="card-header">
    <h3 class="card-title">Bildiri İçeriği</h3>
</div>
<form action="{{ route('addAnnouncement.post') }}" method="post">
    @csrf
    <div class="card-body">
        <div class="form-group">
            <label for="tittle">Bildiri Başlığı:</label>
            <input style="background-color: #4d88df92 !important" name="tittle" id="tittle" class="form-control" required>
        </div>

        <div class="form-group">
            <label for="description">Açıklama (Opsiyonel):</label>
            <input style="background-color: #4d88df92 !important" name="description" id="description" class="form-control" required>
        </div>

        <div class="form-group">
            <label for="content">Bildiri Metni:</label>
            <input style="background-color: #4d88df92 !important" name="content" id="content" class="form-control" required>
        </div>
    </div>
    <div class="card-footer">
        <button type="submit" class="btn btn-primary">Duyuru Oluştur</button>
    </div>
</form>
@endsection
