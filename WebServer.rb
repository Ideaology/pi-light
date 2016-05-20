

require 'sinatra'
require "sinatra/json"

set :bind, '0.0.0.0'

#get "/is_light_on" do
#data=File.read("data.txt")
#json :is_light_on=>data=="True"


#end

get "/is_light_on" do
data=File.read("data.txt")

	if data=="True"
	json :is_light_on=>true
    

	elsif data=="False"
	json :is_light_on=>false
    end

end

post "/toggle_light" do
  is_on = params["on"]
  File.write("input.txt", is_on)
  json status: "success"
  
end




get "/g_toggle_light" do
  is_on = params["on"]
  File.write("input.txt", is_on)
  json status: "success"
  
end

get "/batti" do
  File.read("data.txt")
end


get '/ali' do
  "ali rox"
end

get "/" do
  "hello world"
end
