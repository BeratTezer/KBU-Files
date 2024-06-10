@extends('schemas.admin_panel_layout')

@section('title', 'Anons Güncelle')

@section('form')
<form action="{{ route('addAnnouncement.post') }}" method="post">
    @csrf
    <div class="card-body">
        <div class="form-group mb-3">
            <label for="tittle" class="form-label">Anons Başlığı:</label>
            <input style="background-color: #4d88df92 !important" type="text" name="tittle" id="tittle" class="form-control" value="{{ $announcement->tittle }}" placeholder="Başlık giriniz" required>
        </div>

        <div class="form-group mb-3">
            <label for="description" class="form-label">Açıklama (Opsiyonel):</label>
            <textarea style="background-color: #4d88df92 !important" name="description" id="description" class="form-control" rows="3" placeholder="Açıklama giriniz">{{ $announcement->description }}</textarea>
        </div>

        <div class="form-group mb-3">
            <label for="content" class="form-label">Anons Metni:</label>
            <textarea style="background-color: #4d88df92 !important" name="content" id="content" class="form-control" rows="5" placeholder="İçerik giriniz" required>{{ $announcement->content }}</textarea>
        </div>
    </div>
    <div class="card-footer text-end">
        <button type="submit" class="btn btn-warning">Anonsyi Güncelle
        </button>
    </div>
</form>
@endsection
