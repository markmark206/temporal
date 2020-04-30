OUT_DIR := out/

all:
	@mkdir -p $(OUT_DIR)/cpp $(OUT_DIR)/java $(OUT_DIR)/ruby $(OUT_DIR)/python $(OUT_DIR)/js $(OUT_DIR)/csharp $(OUT_DIR)/golang
	@for proto_file in *.proto; do \
		echo "Compiling file $$proto_file"; \
		protoc $$proto_file --cpp_out=$(OUT_DIR)/cpp --java_out=$(OUT_DIR)/java --ruby_out=$(OUT_DIR)/ruby --python_out=$(OUT_DIR)/python --js_out=$(OUT_DIR)/js --csharp_out=$(OUT_DIR)/csharp; \
		protoc --proto_path=. --gogofaster_out=Mgoogle/protobuf/wrappers.proto=github.com/gogo/protobuf/types,Mgoogle/protobuf/timestamp.proto=github.com/gogo/protobuf/types,plugins=grpc,paths=source_relative:$(OUT_DIR)/golang $$proto_file; \
	done

lint:
	@for proto_file in *.proto; do \
		echo "###################"; \
		echo "Linting $$proto_file"; \
		echo "    ### Lint 1"; \
		api-linter $$proto_file --disable-rule has-comments --disable-rule versioned-packages; \
		echo "    ### Lint 2"; \
		buf  check lint --file $$proto_file; \
		echo " "; \
	done


clean:
	find $(OUT_DIR) -type f -name '*' -delete

install-linters:
	brew tap bufbuild/buf && brew install buf
	go get -u github.com/googleapis/api-linter/cmd/api-linter
