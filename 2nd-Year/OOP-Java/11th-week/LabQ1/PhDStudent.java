public class PhDStudent extends MasterStudent implements ArticleScoreBehaviour {
    int numberOfArticles;

    public PhDStudent(int id, float mid, float fin, int numberOfArticles) {
        super(id,mid,fin,0);
        this.numberOfArticles = numberOfArticles;
    }

    @Override
    float computeTotalScore() {
        return computeBaseScore() + articleScore();
    }

    @Override
    public float articleScore() {
        return numberOfArticles*8;
    }
}
