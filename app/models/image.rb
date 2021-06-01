class Image < ApplicationRecord
  validates :title, presence: true
  validates :drawing, presence: true
  belongs_to :album
  has_rich_text :body
  has_one_attached :drawing

	def drawing_f
  		return self.drawing.variant(resize: "200x200!").processed
 	end

 	def drawing_big
  		return self.drawing.variant(resize: "400x400!").processed
 	end

 	def drawing_c
  		return self.drawing.variant(resize: "175x175!").processed
	 end
	 


 	def add_one
 		self.id + 1
 	end

 	def take_one
 		self.id - 1
 	end

 	def next_1
 		self.add_one unless !album.images.where("id > ?", self.id).exists?
  	end

  	def prev_1
 		self.take_one unless !album.images.where("id < ?", self.id).exists?
  	end

  	def has_next?
  		album.images.where("id > ?", self.id).exists?
  	end

  	def has_prev?
  		album.images.where("id < ?", self.id).exists?
  	end

end




##Image.offset(self.id).limit(1).order("id ASC").first
##self.add_one unless !album.images.where("id > ?", self.id).exists?