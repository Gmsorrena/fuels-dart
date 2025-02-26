#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
typedef struct _Dart_Handle* Dart_Handle;

typedef struct DartCObject DartCObject;

typedef int64_t DartPort;

typedef bool (*DartPostCObjectFnType)(DartPort port_id, void *message);

typedef struct wire_uint_8_list {
  uint8_t *ptr;
  int32_t len;
} wire_uint_8_list;

typedef struct wire_Provider {
  struct wire_uint_8_list *node_url;
} wire_Provider;

typedef struct wire_WalletUnlocked {
  struct wire_uint_8_list *private_key;
  struct wire_uint_8_list *mnemonic_phrase;
  struct wire_Provider *provider;
} wire_WalletUnlocked;

typedef struct wire_NativeBech32Address {
  const void *ptr;
} wire_NativeBech32Address;

typedef struct wire_Bech32Address {
  struct wire_NativeBech32Address native;
} wire_Bech32Address;

typedef struct wire_TxParameters {
  uint64_t gas_price;
  uint64_t gas_limit;
  uint32_t maturity;
} wire_TxParameters;

typedef struct DartCObject *WireSyncReturn;

void store_dart_post_cobject(DartPostCObjectFnType ptr);

Dart_Handle get_dart_object(uintptr_t ptr);

void drop_dart_object(uintptr_t ptr);

uintptr_t new_dart_opaque(Dart_Handle handle);

intptr_t init_frb_dart_api_dl(void *obj);

void wire_new_random__static_method__WalletUnlocked(int64_t port_, struct wire_Provider *provider);

void wire_new_from_private_key__static_method__WalletUnlocked(int64_t port_,
                                                              struct wire_uint_8_list *private_key,
                                                              struct wire_Provider *provider);

void wire_new_from_mnemonic_phrase__static_method__WalletUnlocked(int64_t port_,
                                                                  struct wire_uint_8_list *phrase,
                                                                  struct wire_Provider *provider);

void wire_new_from_mnemonic_phrase_with_path__static_method__WalletUnlocked(int64_t port_,
                                                                            struct wire_uint_8_list *phrase,
                                                                            struct wire_Provider *provider,
                                                                            struct wire_uint_8_list *path);

void wire_address__method__WalletUnlocked(int64_t port_, struct wire_WalletUnlocked *that);

void wire_get_asset_balance__method__WalletUnlocked(int64_t port_,
                                                    struct wire_WalletUnlocked *that,
                                                    struct wire_uint_8_list *asset);

void wire_get_balances__method__WalletUnlocked(int64_t port_, struct wire_WalletUnlocked *that);

void wire_transfer__method__WalletUnlocked(int64_t port_,
                                           struct wire_WalletUnlocked *that,
                                           struct wire_Bech32Address *to,
                                           uint64_t amount,
                                           struct wire_uint_8_list *asset,
                                           struct wire_TxParameters *tx_parameters);

void wire_from_bech32_string__static_method__Bech32Address(int64_t port_,
                                                           struct wire_uint_8_list *s);

void wire_from_b256_string__static_method__Bech32Address(int64_t port_, struct wire_uint_8_list *s);

void wire_to_bech32_string__method__Bech32Address(int64_t port_, struct wire_Bech32Address *that);

void wire_to_b256_string__method__Bech32Address(int64_t port_, struct wire_Bech32Address *that);

void wire_connect__static_method__Provider(int64_t port_, struct wire_uint_8_list *url);

struct wire_NativeBech32Address new_NativeBech32Address(void);

struct wire_Bech32Address *new_box_autoadd_bech_32_address_0(void);

struct wire_Provider *new_box_autoadd_provider_0(void);

struct wire_TxParameters *new_box_autoadd_tx_parameters_0(void);

struct wire_WalletUnlocked *new_box_autoadd_wallet_unlocked_0(void);

struct wire_uint_8_list *new_uint_8_list_0(int32_t len);

void drop_opaque_NativeBech32Address(const void *ptr);

const void *share_opaque_NativeBech32Address(const void *ptr);

void free_WireSyncReturn(WireSyncReturn ptr);

static int64_t dummy_method_to_enforce_bundling(void) {
    int64_t dummy_var = 0;
    dummy_var ^= ((int64_t) (void*) wire_new_random__static_method__WalletUnlocked);
    dummy_var ^= ((int64_t) (void*) wire_new_from_private_key__static_method__WalletUnlocked);
    dummy_var ^= ((int64_t) (void*) wire_new_from_mnemonic_phrase__static_method__WalletUnlocked);
    dummy_var ^= ((int64_t) (void*) wire_new_from_mnemonic_phrase_with_path__static_method__WalletUnlocked);
    dummy_var ^= ((int64_t) (void*) wire_address__method__WalletUnlocked);
    dummy_var ^= ((int64_t) (void*) wire_get_asset_balance__method__WalletUnlocked);
    dummy_var ^= ((int64_t) (void*) wire_get_balances__method__WalletUnlocked);
    dummy_var ^= ((int64_t) (void*) wire_transfer__method__WalletUnlocked);
    dummy_var ^= ((int64_t) (void*) wire_from_bech32_string__static_method__Bech32Address);
    dummy_var ^= ((int64_t) (void*) wire_from_b256_string__static_method__Bech32Address);
    dummy_var ^= ((int64_t) (void*) wire_to_bech32_string__method__Bech32Address);
    dummy_var ^= ((int64_t) (void*) wire_to_b256_string__method__Bech32Address);
    dummy_var ^= ((int64_t) (void*) wire_connect__static_method__Provider);
    dummy_var ^= ((int64_t) (void*) new_NativeBech32Address);
    dummy_var ^= ((int64_t) (void*) new_box_autoadd_bech_32_address_0);
    dummy_var ^= ((int64_t) (void*) new_box_autoadd_provider_0);
    dummy_var ^= ((int64_t) (void*) new_box_autoadd_tx_parameters_0);
    dummy_var ^= ((int64_t) (void*) new_box_autoadd_wallet_unlocked_0);
    dummy_var ^= ((int64_t) (void*) new_uint_8_list_0);
    dummy_var ^= ((int64_t) (void*) drop_opaque_NativeBech32Address);
    dummy_var ^= ((int64_t) (void*) share_opaque_NativeBech32Address);
    dummy_var ^= ((int64_t) (void*) free_WireSyncReturn);
    dummy_var ^= ((int64_t) (void*) store_dart_post_cobject);
    dummy_var ^= ((int64_t) (void*) get_dart_object);
    dummy_var ^= ((int64_t) (void*) drop_dart_object);
    dummy_var ^= ((int64_t) (void*) new_dart_opaque);
    return dummy_var;
}
