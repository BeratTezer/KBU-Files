@extends('schemas.admin_panel_layout')

@section('title', 'Güzergah Güncelle')

@section('form')
            <div class="card border-secondary shadow-lg"style="background-color: #4d88df92 !important">
                <form action="{{ route('updateRotation.post') }}" method="post">
                    @csrf
                    <div class="card-body">
                        <div class="form-group mb-3">
                            <label for="name" class="form-label">Güzergah İsmi:</label>
                            <input style="background-color: #4d88df92 !important" type="text" name="name" id="name" class="form-control" required>
                        </div>
                        <div class="form-group mb-3">
                            <label for="location" class="form-label">Adresi:</label>
                            <input style="background-color: #4d88df92 !important" type="text" name="location" id="location" class="form-control" required>
                        </div>
                        <div class="form-group mb-3">
                            <label for="guide_name" class="form-label">Rehberin Adı:</label>
                            <input style="background-color: #4d88df92 !important" type="tel" name="guide_name" id="guide_name" class="form-control" required>
                        </div>
                        <div class="form-group mb-3">
                            <label for="guide_phone" class="form-label">Rehberin Telefon Numarası:</label>
                            <input style="background-color: #4d88df92 !important" type="guide_phone" name="guide_phone" id="guide_phone" class="form-control" required>
                        </div>
                        <div class="form-group mb-3">
                            <label for="price" class="form-label">Ücret:</label>
                            <input style="background-color: #4d88df92 !important" type="number" step="1" name="price" id="price" class="form-control" required>
                        </div>
                        <div class="form-group mb-3">
                            <label for="time" class="form-label">Kapasite:</label>
                            <input style="background-color: #4d88df92 !important" type="number" name="time" id="time" class="form-control" required>
                        </div>
                        <div class="form-group mb-3">
                            <label for="description" class="form-label">Açıklama:</label>
                            <textarea style="background-color: #4d88df92 !important" name="description" id="description" class="form-control" rows="2" required></textarea>
                        </div>
                    </div>
                    <div class="card-footer text-end">
                        <button  type="submit" class="btn btn-success">Güzergahı Güncelle</button>
                    </div>
                </form>
            </div>
@endsection
