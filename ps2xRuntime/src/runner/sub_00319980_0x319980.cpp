#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00319980
// Address: 0x319980 - 0x319da0
void sub_00319980_0x319980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319980_0x319980");
#endif

    switch (ctx->pc) {
        case 0x319980u: goto label_319980;
        case 0x319984u: goto label_319984;
        case 0x319988u: goto label_319988;
        case 0x31998cu: goto label_31998c;
        case 0x319990u: goto label_319990;
        case 0x319994u: goto label_319994;
        case 0x319998u: goto label_319998;
        case 0x31999cu: goto label_31999c;
        case 0x3199a0u: goto label_3199a0;
        case 0x3199a4u: goto label_3199a4;
        case 0x3199a8u: goto label_3199a8;
        case 0x3199acu: goto label_3199ac;
        case 0x3199b0u: goto label_3199b0;
        case 0x3199b4u: goto label_3199b4;
        case 0x3199b8u: goto label_3199b8;
        case 0x3199bcu: goto label_3199bc;
        case 0x3199c0u: goto label_3199c0;
        case 0x3199c4u: goto label_3199c4;
        case 0x3199c8u: goto label_3199c8;
        case 0x3199ccu: goto label_3199cc;
        case 0x3199d0u: goto label_3199d0;
        case 0x3199d4u: goto label_3199d4;
        case 0x3199d8u: goto label_3199d8;
        case 0x3199dcu: goto label_3199dc;
        case 0x3199e0u: goto label_3199e0;
        case 0x3199e4u: goto label_3199e4;
        case 0x3199e8u: goto label_3199e8;
        case 0x3199ecu: goto label_3199ec;
        case 0x3199f0u: goto label_3199f0;
        case 0x3199f4u: goto label_3199f4;
        case 0x3199f8u: goto label_3199f8;
        case 0x3199fcu: goto label_3199fc;
        case 0x319a00u: goto label_319a00;
        case 0x319a04u: goto label_319a04;
        case 0x319a08u: goto label_319a08;
        case 0x319a0cu: goto label_319a0c;
        case 0x319a10u: goto label_319a10;
        case 0x319a14u: goto label_319a14;
        case 0x319a18u: goto label_319a18;
        case 0x319a1cu: goto label_319a1c;
        case 0x319a20u: goto label_319a20;
        case 0x319a24u: goto label_319a24;
        case 0x319a28u: goto label_319a28;
        case 0x319a2cu: goto label_319a2c;
        case 0x319a30u: goto label_319a30;
        case 0x319a34u: goto label_319a34;
        case 0x319a38u: goto label_319a38;
        case 0x319a3cu: goto label_319a3c;
        case 0x319a40u: goto label_319a40;
        case 0x319a44u: goto label_319a44;
        case 0x319a48u: goto label_319a48;
        case 0x319a4cu: goto label_319a4c;
        case 0x319a50u: goto label_319a50;
        case 0x319a54u: goto label_319a54;
        case 0x319a58u: goto label_319a58;
        case 0x319a5cu: goto label_319a5c;
        case 0x319a60u: goto label_319a60;
        case 0x319a64u: goto label_319a64;
        case 0x319a68u: goto label_319a68;
        case 0x319a6cu: goto label_319a6c;
        case 0x319a70u: goto label_319a70;
        case 0x319a74u: goto label_319a74;
        case 0x319a78u: goto label_319a78;
        case 0x319a7cu: goto label_319a7c;
        case 0x319a80u: goto label_319a80;
        case 0x319a84u: goto label_319a84;
        case 0x319a88u: goto label_319a88;
        case 0x319a8cu: goto label_319a8c;
        case 0x319a90u: goto label_319a90;
        case 0x319a94u: goto label_319a94;
        case 0x319a98u: goto label_319a98;
        case 0x319a9cu: goto label_319a9c;
        case 0x319aa0u: goto label_319aa0;
        case 0x319aa4u: goto label_319aa4;
        case 0x319aa8u: goto label_319aa8;
        case 0x319aacu: goto label_319aac;
        case 0x319ab0u: goto label_319ab0;
        case 0x319ab4u: goto label_319ab4;
        case 0x319ab8u: goto label_319ab8;
        case 0x319abcu: goto label_319abc;
        case 0x319ac0u: goto label_319ac0;
        case 0x319ac4u: goto label_319ac4;
        case 0x319ac8u: goto label_319ac8;
        case 0x319accu: goto label_319acc;
        case 0x319ad0u: goto label_319ad0;
        case 0x319ad4u: goto label_319ad4;
        case 0x319ad8u: goto label_319ad8;
        case 0x319adcu: goto label_319adc;
        case 0x319ae0u: goto label_319ae0;
        case 0x319ae4u: goto label_319ae4;
        case 0x319ae8u: goto label_319ae8;
        case 0x319aecu: goto label_319aec;
        case 0x319af0u: goto label_319af0;
        case 0x319af4u: goto label_319af4;
        case 0x319af8u: goto label_319af8;
        case 0x319afcu: goto label_319afc;
        case 0x319b00u: goto label_319b00;
        case 0x319b04u: goto label_319b04;
        case 0x319b08u: goto label_319b08;
        case 0x319b0cu: goto label_319b0c;
        case 0x319b10u: goto label_319b10;
        case 0x319b14u: goto label_319b14;
        case 0x319b18u: goto label_319b18;
        case 0x319b1cu: goto label_319b1c;
        case 0x319b20u: goto label_319b20;
        case 0x319b24u: goto label_319b24;
        case 0x319b28u: goto label_319b28;
        case 0x319b2cu: goto label_319b2c;
        case 0x319b30u: goto label_319b30;
        case 0x319b34u: goto label_319b34;
        case 0x319b38u: goto label_319b38;
        case 0x319b3cu: goto label_319b3c;
        case 0x319b40u: goto label_319b40;
        case 0x319b44u: goto label_319b44;
        case 0x319b48u: goto label_319b48;
        case 0x319b4cu: goto label_319b4c;
        case 0x319b50u: goto label_319b50;
        case 0x319b54u: goto label_319b54;
        case 0x319b58u: goto label_319b58;
        case 0x319b5cu: goto label_319b5c;
        case 0x319b60u: goto label_319b60;
        case 0x319b64u: goto label_319b64;
        case 0x319b68u: goto label_319b68;
        case 0x319b6cu: goto label_319b6c;
        case 0x319b70u: goto label_319b70;
        case 0x319b74u: goto label_319b74;
        case 0x319b78u: goto label_319b78;
        case 0x319b7cu: goto label_319b7c;
        case 0x319b80u: goto label_319b80;
        case 0x319b84u: goto label_319b84;
        case 0x319b88u: goto label_319b88;
        case 0x319b8cu: goto label_319b8c;
        case 0x319b90u: goto label_319b90;
        case 0x319b94u: goto label_319b94;
        case 0x319b98u: goto label_319b98;
        case 0x319b9cu: goto label_319b9c;
        case 0x319ba0u: goto label_319ba0;
        case 0x319ba4u: goto label_319ba4;
        case 0x319ba8u: goto label_319ba8;
        case 0x319bacu: goto label_319bac;
        case 0x319bb0u: goto label_319bb0;
        case 0x319bb4u: goto label_319bb4;
        case 0x319bb8u: goto label_319bb8;
        case 0x319bbcu: goto label_319bbc;
        case 0x319bc0u: goto label_319bc0;
        case 0x319bc4u: goto label_319bc4;
        case 0x319bc8u: goto label_319bc8;
        case 0x319bccu: goto label_319bcc;
        case 0x319bd0u: goto label_319bd0;
        case 0x319bd4u: goto label_319bd4;
        case 0x319bd8u: goto label_319bd8;
        case 0x319bdcu: goto label_319bdc;
        case 0x319be0u: goto label_319be0;
        case 0x319be4u: goto label_319be4;
        case 0x319be8u: goto label_319be8;
        case 0x319becu: goto label_319bec;
        case 0x319bf0u: goto label_319bf0;
        case 0x319bf4u: goto label_319bf4;
        case 0x319bf8u: goto label_319bf8;
        case 0x319bfcu: goto label_319bfc;
        case 0x319c00u: goto label_319c00;
        case 0x319c04u: goto label_319c04;
        case 0x319c08u: goto label_319c08;
        case 0x319c0cu: goto label_319c0c;
        case 0x319c10u: goto label_319c10;
        case 0x319c14u: goto label_319c14;
        case 0x319c18u: goto label_319c18;
        case 0x319c1cu: goto label_319c1c;
        case 0x319c20u: goto label_319c20;
        case 0x319c24u: goto label_319c24;
        case 0x319c28u: goto label_319c28;
        case 0x319c2cu: goto label_319c2c;
        case 0x319c30u: goto label_319c30;
        case 0x319c34u: goto label_319c34;
        case 0x319c38u: goto label_319c38;
        case 0x319c3cu: goto label_319c3c;
        case 0x319c40u: goto label_319c40;
        case 0x319c44u: goto label_319c44;
        case 0x319c48u: goto label_319c48;
        case 0x319c4cu: goto label_319c4c;
        case 0x319c50u: goto label_319c50;
        case 0x319c54u: goto label_319c54;
        case 0x319c58u: goto label_319c58;
        case 0x319c5cu: goto label_319c5c;
        case 0x319c60u: goto label_319c60;
        case 0x319c64u: goto label_319c64;
        case 0x319c68u: goto label_319c68;
        case 0x319c6cu: goto label_319c6c;
        case 0x319c70u: goto label_319c70;
        case 0x319c74u: goto label_319c74;
        case 0x319c78u: goto label_319c78;
        case 0x319c7cu: goto label_319c7c;
        case 0x319c80u: goto label_319c80;
        case 0x319c84u: goto label_319c84;
        case 0x319c88u: goto label_319c88;
        case 0x319c8cu: goto label_319c8c;
        case 0x319c90u: goto label_319c90;
        case 0x319c94u: goto label_319c94;
        case 0x319c98u: goto label_319c98;
        case 0x319c9cu: goto label_319c9c;
        case 0x319ca0u: goto label_319ca0;
        case 0x319ca4u: goto label_319ca4;
        case 0x319ca8u: goto label_319ca8;
        case 0x319cacu: goto label_319cac;
        case 0x319cb0u: goto label_319cb0;
        case 0x319cb4u: goto label_319cb4;
        case 0x319cb8u: goto label_319cb8;
        case 0x319cbcu: goto label_319cbc;
        case 0x319cc0u: goto label_319cc0;
        case 0x319cc4u: goto label_319cc4;
        case 0x319cc8u: goto label_319cc8;
        case 0x319cccu: goto label_319ccc;
        case 0x319cd0u: goto label_319cd0;
        case 0x319cd4u: goto label_319cd4;
        case 0x319cd8u: goto label_319cd8;
        case 0x319cdcu: goto label_319cdc;
        case 0x319ce0u: goto label_319ce0;
        case 0x319ce4u: goto label_319ce4;
        case 0x319ce8u: goto label_319ce8;
        case 0x319cecu: goto label_319cec;
        case 0x319cf0u: goto label_319cf0;
        case 0x319cf4u: goto label_319cf4;
        case 0x319cf8u: goto label_319cf8;
        case 0x319cfcu: goto label_319cfc;
        case 0x319d00u: goto label_319d00;
        case 0x319d04u: goto label_319d04;
        case 0x319d08u: goto label_319d08;
        case 0x319d0cu: goto label_319d0c;
        case 0x319d10u: goto label_319d10;
        case 0x319d14u: goto label_319d14;
        case 0x319d18u: goto label_319d18;
        case 0x319d1cu: goto label_319d1c;
        case 0x319d20u: goto label_319d20;
        case 0x319d24u: goto label_319d24;
        case 0x319d28u: goto label_319d28;
        case 0x319d2cu: goto label_319d2c;
        case 0x319d30u: goto label_319d30;
        case 0x319d34u: goto label_319d34;
        case 0x319d38u: goto label_319d38;
        case 0x319d3cu: goto label_319d3c;
        case 0x319d40u: goto label_319d40;
        case 0x319d44u: goto label_319d44;
        case 0x319d48u: goto label_319d48;
        case 0x319d4cu: goto label_319d4c;
        case 0x319d50u: goto label_319d50;
        case 0x319d54u: goto label_319d54;
        case 0x319d58u: goto label_319d58;
        case 0x319d5cu: goto label_319d5c;
        case 0x319d60u: goto label_319d60;
        case 0x319d64u: goto label_319d64;
        case 0x319d68u: goto label_319d68;
        case 0x319d6cu: goto label_319d6c;
        case 0x319d70u: goto label_319d70;
        case 0x319d74u: goto label_319d74;
        case 0x319d78u: goto label_319d78;
        case 0x319d7cu: goto label_319d7c;
        case 0x319d80u: goto label_319d80;
        case 0x319d84u: goto label_319d84;
        case 0x319d88u: goto label_319d88;
        case 0x319d8cu: goto label_319d8c;
        case 0x319d90u: goto label_319d90;
        case 0x319d94u: goto label_319d94;
        case 0x319d98u: goto label_319d98;
        case 0x319d9cu: goto label_319d9c;
        default: break;
    }

    ctx->pc = 0x319980u;

label_319980:
    // 0x319980: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x319980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_319984:
    // 0x319984: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x319984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_319988:
    // 0x319988: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x319988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_31998c:
    // 0x31998c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31998cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_319990:
    // 0x319990: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x319990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_319994:
    // 0x319994: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x319994u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_319998:
    // 0x319998: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x319998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_31999c:
    // 0x31999c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x31999cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3199a0:
    // 0x3199a0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x3199a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_3199a4:
    // 0x3199a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3199a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3199a8:
    // 0x3199a8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3199a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_3199ac:
    // 0x3199ac: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x3199acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_3199b0:
    // 0x3199b0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x3199b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_3199b4:
    // 0x3199b4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3199b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3199b8:
    // 0x3199b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3199b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3199bc:
    // 0x3199bc: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x3199bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3199c0:
    // 0x3199c0: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x3199c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3199c4:
    // 0x3199c4: 0xc087502  jal         func_21D408
label_3199c8:
    if (ctx->pc == 0x3199C8u) {
        ctx->pc = 0x3199C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199C4u;
        // 0x3199c8: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3199CCu;
        goto label_3199cc;
    }
    ctx->pc = 0x3199C4u;
    SET_GPR_U32(ctx, 31, 0x3199CCu);
    ctx->pc = 0x3199C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3199C4u;
    // 0x3199c8: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3199C4u, 0x3199CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3199CCu;
label_3199cc:
    // 0x3199cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3199ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3199d0:
    // 0x3199d0: 0xc0a3630  jal         func_28D8C0
label_3199d4:
    if (ctx->pc == 0x3199D4u) {
        ctx->pc = 0x3199D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199D0u;
        // 0x3199d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3199D8u;
        goto label_3199d8;
    }
    ctx->pc = 0x3199D0u;
    SET_GPR_U32(ctx, 31, 0x3199D8u);
    ctx->pc = 0x3199D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3199D0u;
    // 0x3199d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x3199D0u, 0x3199D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3199D8u;
label_3199d8:
    // 0x3199d8: 0xc0a3628  jal         func_28D8A0
label_3199dc:
    if (ctx->pc == 0x3199DCu) {
        ctx->pc = 0x3199DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199D8u;
        // 0x3199dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3199E0u;
        goto label_3199e0;
    }
    ctx->pc = 0x3199D8u;
    SET_GPR_U32(ctx, 31, 0x3199E0u);
    ctx->pc = 0x3199DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3199D8u;
    // 0x3199dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x3199D8u, 0x3199E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3199E0u;
label_3199e0:
    // 0x3199e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3199e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3199e4:
    // 0x3199e4: 0x56e30044  bnel        $s7, $v1, . + 4 + (0x44 << 2)
label_3199e8:
    if (ctx->pc == 0x3199E8u) {
        ctx->pc = 0x3199E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199E4u;
        // 0x3199e8: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3199ECu;
        goto label_3199ec;
    }
    ctx->pc = 0x3199E4u;
    {
        const bool branch_taken_0x3199e4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x3199e4) {
            ctx->pc = 0x3199E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3199E4u;
            // 0x3199e8: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319AF8u;
            goto label_319af8;
        }
    }
    ctx->pc = 0x3199ECu;
label_3199ec:
    // 0x3199ec: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3199ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3199f0:
    // 0x3199f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3199f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3199f4:
    // 0x3199f4: 0x54620040  bnel        $v1, $v0, . + 4 + (0x40 << 2)
label_3199f8:
    if (ctx->pc == 0x3199F8u) {
        ctx->pc = 0x3199F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199F4u;
        // 0x3199f8: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3199FCu;
        goto label_3199fc;
    }
    ctx->pc = 0x3199F4u;
    {
        const bool branch_taken_0x3199f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3199f4) {
            ctx->pc = 0x3199F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3199F4u;
            // 0x3199f8: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319AF8u;
            goto label_319af8;
        }
    }
    ctx->pc = 0x3199FCu;
label_3199fc:
    // 0x3199fc: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x3199fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_319a00:
    // 0x319a00: 0x8ec4489c  lw          $a0, 0x489C($s6)
    ctx->pc = 0x319a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_319a04:
    // 0x319a04: 0xc0e409a  jal         func_390268
label_319a08:
    if (ctx->pc == 0x319A08u) {
        ctx->pc = 0x319A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A04u;
        // 0x319a08: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319A0Cu;
        goto label_319a0c;
    }
    ctx->pc = 0x319A04u;
    SET_GPR_U32(ctx, 31, 0x319A0Cu);
    ctx->pc = 0x319A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A04u;
    // 0x319a08: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x319A04u, 0x319A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A0Cu;
label_319a0c:
    // 0x319a0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319a10:
    // 0x319a10: 0x52000039  beql        $s0, $zero, . + 4 + (0x39 << 2)
label_319a14:
    if (ctx->pc == 0x319A14u) {
        ctx->pc = 0x319A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A10u;
        // 0x319a14: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319A18u;
        goto label_319a18;
    }
    ctx->pc = 0x319A10u;
    {
        const bool branch_taken_0x319a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x319a10) {
            ctx->pc = 0x319A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319A10u;
            // 0x319a14: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319AF8u;
            goto label_319af8;
        }
    }
    ctx->pc = 0x319A18u;
label_319a18:
    // 0x319a18: 0xc087502  jal         func_21D408
label_319a1c:
    if (ctx->pc == 0x319A1Cu) {
        ctx->pc = 0x319A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A18u;
        // 0x319a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319A20u;
        goto label_319a20;
    }
    ctx->pc = 0x319A18u;
    SET_GPR_U32(ctx, 31, 0x319A20u);
    ctx->pc = 0x319A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A18u;
    // 0x319a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x319A18u, 0x319A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A20u;
label_319a20:
    // 0x319a20: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x319a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_319a24:
    // 0x319a24: 0x8e82020c  lw          $v0, 0x20C($s4)
    ctx->pc = 0x319a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_319a28:
    // 0x319a28: 0x54620033  bnel        $v1, $v0, . + 4 + (0x33 << 2)
label_319a2c:
    if (ctx->pc == 0x319A2Cu) {
        ctx->pc = 0x319A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A28u;
        // 0x319a2c: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319A30u;
        goto label_319a30;
    }
    ctx->pc = 0x319A28u;
    {
        const bool branch_taken_0x319a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x319a28) {
            ctx->pc = 0x319A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319A28u;
            // 0x319a2c: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319AF8u;
            goto label_319af8;
        }
    }
    ctx->pc = 0x319A30u;
label_319a30:
    // 0x319a30: 0x26330090  addiu       $s3, $s1, 0x90
    ctx->pc = 0x319a30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_319a34:
    // 0x319a34: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x319a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_319a38:
    // 0x319a38: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x319a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_319a3c:
    // 0x319a3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x319a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319a40:
    // 0x319a40: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x319a40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_319a44:
    // 0x319a44: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x319a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_319a48:
    // 0x319a48: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x319a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_319a4c:
    // 0x319a4c: 0x8ec4489c  lw          $a0, 0x489C($s6)
    ctx->pc = 0x319a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_319a50:
    // 0x319a50: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x319a50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_319a54:
    // 0x319a54: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_319a58:
    // 0x319a58: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x319a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_319a5c:
    // 0x319a5c: 0xc1067b8  jal         func_419EE0
label_319a60:
    if (ctx->pc == 0x319A60u) {
        ctx->pc = 0x319A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A5Cu;
        // 0x319a60: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319A64u;
        goto label_319a64;
    }
    ctx->pc = 0x319A5Cu;
    SET_GPR_U32(ctx, 31, 0x319A64u);
    ctx->pc = 0x319A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A5Cu;
    // 0x319a60: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x319A5Cu, 0x319A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A64u;
label_319a64:
    // 0x319a64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x319a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319a68:
    // 0x319a68: 0x52300023  beql        $s1, $s0, . + 4 + (0x23 << 2)
label_319a6c:
    if (ctx->pc == 0x319A6Cu) {
        ctx->pc = 0x319A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A68u;
        // 0x319a6c: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319A70u;
        goto label_319a70;
    }
    ctx->pc = 0x319A68u;
    {
        const bool branch_taken_0x319a68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x319a68) {
            ctx->pc = 0x319A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319A68u;
            // 0x319a6c: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319AF8u;
            goto label_319af8;
        }
    }
    ctx->pc = 0x319A70u;
label_319a70:
    // 0x319a70: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x319a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_319a74:
    // 0x319a74: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x319a74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_319a78:
    // 0x319a78: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x319a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_319a7c:
    // 0x319a7c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x319a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_319a80:
    // 0x319a80: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x319a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_319a84:
    // 0x319a84: 0xc0cdb38  jal         func_336CE0
label_319a88:
    if (ctx->pc == 0x319A88u) {
        ctx->pc = 0x319A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A84u;
        // 0x319a88: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319A8Cu;
        goto label_319a8c;
    }
    ctx->pc = 0x319A84u;
    SET_GPR_U32(ctx, 31, 0x319A8Cu);
    ctx->pc = 0x319A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A84u;
    // 0x319a88: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x319A84u, 0x319A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A8Cu;
label_319a8c:
    // 0x319a8c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x319a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_319a90:
    // 0x319a90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x319a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_319a94:
    // 0x319a94: 0x0  nop
    ctx->pc = 0x319a94u;
    // NOP
label_319a98:
    // 0x319a98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x319a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319a9c:
    // 0x319a9c: 0x0  nop
    ctx->pc = 0x319a9cu;
    // NOP
label_319aa0:
    // 0x319aa0: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_319aa4:
    if (ctx->pc == 0x319AA4u) {
        ctx->pc = 0x319AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AA0u;
        // 0x319aa4: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319AA8u;
        goto label_319aa8;
    }
    ctx->pc = 0x319AA0u;
    {
        const bool branch_taken_0x319aa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319aa0) {
            ctx->pc = 0x319AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319AA0u;
            // 0x319aa4: 0x92a2003c  lbu         $v0, 0x3C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319AF8u;
            goto label_319af8;
        }
    }
    ctx->pc = 0x319AA8u;
label_319aa8:
    // 0x319aa8: 0xc0a4e54  jal         func_293950
label_319aac:
    if (ctx->pc == 0x319AACu) {
        ctx->pc = 0x319AB0u;
        goto label_319ab0;
    }
    ctx->pc = 0x319AA8u;
    SET_GPR_U32(ctx, 31, 0x319AB0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x319AA8u, 0x319AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AB0u;
label_319ab0:
    // 0x319ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319ab4:
    // 0x319ab4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_319ab8:
    if (ctx->pc == 0x319AB8u) {
        ctx->pc = 0x319AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AB4u;
        // 0x319ab8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319ABCu;
        goto label_319abc;
    }
    ctx->pc = 0x319AB4u;
    {
        const bool branch_taken_0x319ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x319AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AB4u;
        // 0x319ab8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ab4) {
            ctx->pc = 0x319AE8u;
            goto label_319ae8;
        }
    }
    ctx->pc = 0x319ABCu;
label_319abc:
    // 0x319abc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_319ac0:
    // 0x319ac0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x319ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_319ac4:
    // 0x319ac4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x319ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_319ac8:
    // 0x319ac8: 0x40f809  jalr        $v0
label_319acc:
    if (ctx->pc == 0x319ACCu) {
        ctx->pc = 0x319ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AC8u;
        // 0x319acc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319AD0u;
        goto label_319ad0;
    }
    ctx->pc = 0x319AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x319AD0u);
        ctx->pc = 0x319ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AC8u;
        // 0x319acc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319AC8u, 0x319AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x319AD0u;
label_319ad0:
    // 0x319ad0: 0xc68c013c  lwc1        $f12, 0x13C($s4)
    ctx->pc = 0x319ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_319ad4:
    // 0x319ad4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x319ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319ad8:
    // 0x319ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319adc:
    // 0x319adc: 0xc0af288  jal         func_2BCA20
label_319ae0:
    if (ctx->pc == 0x319AE0u) {
        ctx->pc = 0x319AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319ADCu;
        // 0x319ae0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319AE4u;
        goto label_319ae4;
    }
    ctx->pc = 0x319ADCu;
    SET_GPR_U32(ctx, 31, 0x319AE4u);
    ctx->pc = 0x319AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319ADCu;
    // 0x319ae0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCA20u, 0x319ADCu, 0x319AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AE4u;
label_319ae4:
    // 0x319ae4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x319ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_319ae8:
    // 0x319ae8: 0xc0a35d6  jal         func_28D758
label_319aec:
    if (ctx->pc == 0x319AECu) {
        ctx->pc = 0x319AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AE8u;
        // 0x319aec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319AF0u;
        goto label_319af0;
    }
    ctx->pc = 0x319AE8u;
    SET_GPR_U32(ctx, 31, 0x319AF0u);
    ctx->pc = 0x319AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319AE8u;
    // 0x319aec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x319AE8u, 0x319AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AF0u;
label_319af0:
    // 0x319af0: 0x1000009c  b           . + 4 + (0x9C << 2)
label_319af4:
    if (ctx->pc == 0x319AF4u) {
        ctx->pc = 0x319AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AF0u;
        // 0x319af4: 0xa2b70018  sb          $s7, 0x18($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 24), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319AF8u;
        goto label_319af8;
    }
    ctx->pc = 0x319AF0u;
    {
        const bool branch_taken_0x319af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AF0u;
        // 0x319af4: 0xa2b70018  sb          $s7, 0x18($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 24), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319af0) {
            ctx->pc = 0x319D64u;
            goto label_319d64;
        }
    }
    ctx->pc = 0x319AF8u;
label_319af8:
    // 0x319af8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_319afc:
    if (ctx->pc == 0x319AFCu) {
        ctx->pc = 0x319AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AF8u;
        // 0x319afc: 0x92a2003d  lbu         $v0, 0x3D($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 61)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319B00u;
        goto label_319b00;
    }
    ctx->pc = 0x319AF8u;
    {
        const bool branch_taken_0x319af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319af8) {
            ctx->pc = 0x319AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319AF8u;
            // 0x319afc: 0x92a2003d  lbu         $v0, 0x3D($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 61)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319B3Cu;
            goto label_319b3c;
        }
    }
    ctx->pc = 0x319B00u;
label_319b00:
    // 0x319b00: 0xc0a4e54  jal         func_293950
label_319b04:
    if (ctx->pc == 0x319B04u) {
        ctx->pc = 0x319B08u;
        goto label_319b08;
    }
    ctx->pc = 0x319B00u;
    SET_GPR_U32(ctx, 31, 0x319B08u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x319B00u, 0x319B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B08u;
label_319b08:
    // 0x319b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319b0c:
    // 0x319b0c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_319b10:
    if (ctx->pc == 0x319B10u) {
        ctx->pc = 0x319B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B0Cu;
        // 0x319b10: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319B14u;
        goto label_319b14;
    }
    ctx->pc = 0x319B0Cu;
    {
        const bool branch_taken_0x319b0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x319B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B0Cu;
        // 0x319b10: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b0c) {
            ctx->pc = 0x319B28u;
            goto label_319b28;
        }
    }
    ctx->pc = 0x319B14u;
label_319b14:
    // 0x319b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319b18:
    // 0x319b18: 0x24e716c0  addiu       $a3, $a3, 0x16C0
    ctx->pc = 0x319b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5824));
label_319b1c:
    // 0x319b1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x319b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_319b20:
    // 0x319b20: 0xc0b4c54  jal         func_2D3150
label_319b24:
    if (ctx->pc == 0x319B24u) {
        ctx->pc = 0x319B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B20u;
        // 0x319b24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319B28u;
        goto label_319b28;
    }
    ctx->pc = 0x319B20u;
    SET_GPR_U32(ctx, 31, 0x319B28u);
    ctx->pc = 0x319B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B20u;
    // 0x319b24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3150u, 0x319B20u, 0x319B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B28u;
label_319b28:
    // 0x319b28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x319b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_319b2c:
    // 0x319b2c: 0xc0a35d6  jal         func_28D758
label_319b30:
    if (ctx->pc == 0x319B30u) {
        ctx->pc = 0x319B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B2Cu;
        // 0x319b30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319B34u;
        goto label_319b34;
    }
    ctx->pc = 0x319B2Cu;
    SET_GPR_U32(ctx, 31, 0x319B34u);
    ctx->pc = 0x319B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B2Cu;
    // 0x319b30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x319B2Cu, 0x319B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B34u;
label_319b34:
    // 0x319b34: 0x1000008c  b           . + 4 + (0x8C << 2)
label_319b38:
    if (ctx->pc == 0x319B38u) {
        ctx->pc = 0x319B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B34u;
        // 0x319b38: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319B3Cu;
        goto label_319b3c;
    }
    ctx->pc = 0x319B34u;
    {
        const bool branch_taken_0x319b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B34u;
        // 0x319b38: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b34) {
            ctx->pc = 0x319D68u;
            goto label_319d68;
        }
    }
    ctx->pc = 0x319B3Cu;
label_319b3c:
    // 0x319b3c: 0x26b00020  addiu       $s0, $s5, 0x20
    ctx->pc = 0x319b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_319b40:
    // 0x319b40: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x319b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_319b44:
    // 0x319b44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x319b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_319b48:
    // 0x319b48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x319b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_319b4c:
    // 0x319b4c: 0xc10587a  jal         func_4161E8
label_319b50:
    if (ctx->pc == 0x319B50u) {
        ctx->pc = 0x319B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B4Cu;
        // 0x319b50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319B54u;
        goto label_319b54;
    }
    ctx->pc = 0x319B4Cu;
    SET_GPR_U32(ctx, 31, 0x319B54u);
    ctx->pc = 0x319B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B4Cu;
    // 0x319b50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x319B4Cu, 0x319B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B54u;
label_319b54:
    // 0x319b54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x319b54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_319b58:
    // 0x319b58: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x319b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_319b5c:
    // 0x319b5c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x319b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_319b60:
    // 0x319b60: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x319b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_319b64:
    // 0x319b64: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x319b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
label_319b68:
    // 0x319b68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x319b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_319b6c:
    // 0x319b6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x319b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_319b70:
    // 0x319b70: 0xc0cd508  jal         func_335420
label_319b74:
    if (ctx->pc == 0x319B74u) {
        ctx->pc = 0x319B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B70u;
        // 0x319b74: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319B78u;
        goto label_319b78;
    }
    ctx->pc = 0x319B70u;
    SET_GPR_U32(ctx, 31, 0x319B78u);
    ctx->pc = 0x319B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B70u;
    // 0x319b74: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x319B70u, 0x319B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B78u;
label_319b78:
    // 0x319b78: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x319b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_319b7c:
    // 0x319b7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x319b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_319b80:
    // 0x319b80: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x319b80u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_319b84:
    // 0x319b84: 0xc0d3e54  jal         func_34F950
label_319b88:
    if (ctx->pc == 0x319B88u) {
        ctx->pc = 0x319B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B84u;
        // 0x319b88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319B8Cu;
        goto label_319b8c;
    }
    ctx->pc = 0x319B84u;
    SET_GPR_U32(ctx, 31, 0x319B8Cu);
    ctx->pc = 0x319B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B84u;
    // 0x319b88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x319B84u, 0x319B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B8Cu;
label_319b8c:
    // 0x319b8c: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x319b8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319b90:
    // 0x319b90: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x319b90u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_319b94:
    // 0x319b94: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x319b94u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_319b98:
    // 0x319b98: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x319b98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_319b9c:
    // 0x319b9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_319ba0:
    if (ctx->pc == 0x319BA0u) {
        ctx->pc = 0x319BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B9Cu;
        // 0x319ba0: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319BA4u;
        goto label_319ba4;
    }
    ctx->pc = 0x319B9Cu;
    {
        const bool branch_taken_0x319b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B9Cu;
        // 0x319ba0: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b9c) {
            ctx->pc = 0x319BB0u;
            goto label_319bb0;
        }
    }
    ctx->pc = 0x319BA4u;
label_319ba4:
    // 0x319ba4: 0x0  nop
    ctx->pc = 0x319ba4u;
    // NOP
label_319ba8:
    // 0x319ba8: 0x640004e  bltz        $s2, . + 4 + (0x4E << 2)
label_319bac:
    if (ctx->pc == 0x319BACu) {
        ctx->pc = 0x319BB0u;
        goto label_319bb0;
    }
    ctx->pc = 0x319BA8u;
    {
        const bool branch_taken_0x319ba8 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x319ba8) {
            ctx->pc = 0x319CE4u;
            goto label_319ce4;
        }
    }
    ctx->pc = 0x319BB0u;
label_319bb0:
    // 0x319bb0: 0xc0cd538  jal         func_3354E0
label_319bb4:
    if (ctx->pc == 0x319BB4u) {
        ctx->pc = 0x319BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BB0u;
        // 0x319bb4: 0x26e4b880  addiu       $a0, $s7, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319BB8u;
        goto label_319bb8;
    }
    ctx->pc = 0x319BB0u;
    SET_GPR_U32(ctx, 31, 0x319BB8u);
    ctx->pc = 0x319BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319BB0u;
    // 0x319bb4: 0x26e4b880  addiu       $a0, $s7, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x319BB0u, 0x319BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319BB8u;
label_319bb8:
    // 0x319bb8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x319bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_319bbc:
    // 0x319bbc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x319bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_319bc0:
    // 0x319bc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x319bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_319bc4:
    // 0x319bc4: 0x26c31740  addiu       $v1, $s6, 0x1740
    ctx->pc = 0x319bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 5952));
label_319bc8:
    // 0x319bc8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x319bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_319bcc:
    // 0x319bcc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x319bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_319bd0:
    // 0x319bd0: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x319bd0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_319bd4:
    // 0x319bd4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x319bd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_319bd8:
    // 0x319bd8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x319bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_319bdc:
    // 0x319bdc: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x319bdcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_319be0:
    // 0x319be0: 0xc12e310  jal         func_4B8C40
label_319be4:
    if (ctx->pc == 0x319BE4u) {
        ctx->pc = 0x319BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BE0u;
        // 0x319be4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319BE8u;
        goto label_319be8;
    }
    ctx->pc = 0x319BE0u;
    SET_GPR_U32(ctx, 31, 0x319BE8u);
    ctx->pc = 0x319BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319BE0u;
    // 0x319be4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x319BE0u, 0x319BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319BE8u;
label_319be8:
    // 0x319be8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x319be8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_319bec:
    // 0x319bec: 0xc12e29c  jal         func_4B8A70
label_319bf0:
    if (ctx->pc == 0x319BF0u) {
        ctx->pc = 0x319BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BECu;
        // 0x319bf0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319BF4u;
        goto label_319bf4;
    }
    ctx->pc = 0x319BECu;
    SET_GPR_U32(ctx, 31, 0x319BF4u);
    ctx->pc = 0x319BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319BECu;
    // 0x319bf0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x319BECu, 0x319BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319BF4u;
label_319bf4:
    // 0x319bf4: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x319bf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_319bf8:
    // 0x319bf8: 0x26621730  addiu       $v0, $s3, 0x1730
    ctx->pc = 0x319bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5936));
label_319bfc:
    // 0x319bfc: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x319bfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_319c00:
    // 0x319c00: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x319c00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_319c04:
    // 0x319c04: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x319c04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_319c08:
    // 0x319c08: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x319c08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_319c0c:
    // 0x319c0c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x319c0cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_319c10:
    // 0x319c10: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x319c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_319c14:
    // 0x319c14: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x319c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_319c18:
    // 0x319c18: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x319c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319c1c:
    // 0x319c1c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x319c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319c20:
    // 0x319c20: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x319c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_319c24:
    // 0x319c24: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x319c24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_319c28:
    // 0x319c28: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x319c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_319c2c:
    // 0x319c2c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x319c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_319c30:
    // 0x319c30: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x319c30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_319c34:
    // 0x319c34: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x319c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_319c38:
    // 0x319c38: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x319c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_319c3c:
    // 0x319c3c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x319c3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_319c40:
    // 0x319c40: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x319c40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_319c44:
    // 0x319c44: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x319c44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_319c48:
    // 0x319c48: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x319c48u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_319c4c:
    // 0x319c4c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x319c4cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_319c50:
    // 0x319c50: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x319c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_319c54:
    // 0x319c54: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x319c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_319c58:
    // 0x319c58: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x319c58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_319c5c:
    // 0x319c5c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x319c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_319c60:
    // 0x319c60: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x319c60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_319c64:
    // 0x319c64: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x319c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_319c68:
    // 0x319c68: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x319c68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_319c6c:
    // 0x319c6c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x319c6cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_319c70:
    // 0x319c70: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x319c70u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_319c74:
    // 0x319c74: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x319c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_319c78:
    // 0x319c78: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x319c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_319c7c:
    // 0x319c7c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x319c7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_319c80:
    // 0x319c80: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x319c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_319c84:
    // 0x319c84: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x319c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_319c88:
    // 0x319c88: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x319c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_319c8c:
    // 0x319c8c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x319c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_319c90:
    // 0x319c90: 0xc136b24  jal         func_4DAC90
label_319c94:
    if (ctx->pc == 0x319C94u) {
        ctx->pc = 0x319C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C90u;
        // 0x319c94: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319C98u;
        goto label_319c98;
    }
    ctx->pc = 0x319C90u;
    SET_GPR_U32(ctx, 31, 0x319C98u);
    ctx->pc = 0x319C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319C90u;
    // 0x319c94: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x319C90u, 0x319C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C98u;
label_319c98:
    // 0x319c98: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x319c98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_319c9c:
    // 0x319c9c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x319c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_319ca0:
    // 0x319ca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x319ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_319ca4:
    // 0x319ca4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x319ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_319ca8:
    // 0x319ca8: 0xc136b18  jal         func_4DAC60
label_319cac:
    if (ctx->pc == 0x319CACu) {
        ctx->pc = 0x319CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CA8u;
        // 0x319cac: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319CB0u;
        goto label_319cb0;
    }
    ctx->pc = 0x319CA8u;
    SET_GPR_U32(ctx, 31, 0x319CB0u);
    ctx->pc = 0x319CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319CA8u;
    // 0x319cac: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x319CA8u, 0x319CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319CB0u;
label_319cb0:
    // 0x319cb0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x319cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_319cb4:
    // 0x319cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x319cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_319cb8:
    // 0x319cb8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x319cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_319cbc:
    // 0x319cbc: 0xc0941c2  jal         func_250708
label_319cc0:
    if (ctx->pc == 0x319CC0u) {
        ctx->pc = 0x319CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CBCu;
        // 0x319cc0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319CC4u;
        goto label_319cc4;
    }
    ctx->pc = 0x319CBCu;
    SET_GPR_U32(ctx, 31, 0x319CC4u);
    ctx->pc = 0x319CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319CBCu;
    // 0x319cc0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x319CBCu, 0x319CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319CC4u;
label_319cc4:
    // 0x319cc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319cc8:
    // 0x319cc8: 0x5200ffb7  beql        $s0, $zero, . + 4 + (-0x49 << 2)
label_319ccc:
    if (ctx->pc == 0x319CCCu) {
        ctx->pc = 0x319CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CC8u;
        // 0x319ccc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319CD0u;
        goto label_319cd0;
    }
    ctx->pc = 0x319CC8u;
    {
        const bool branch_taken_0x319cc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x319cc8) {
            ctx->pc = 0x319CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319CC8u;
            // 0x319ccc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319ba8;
        }
    }
    ctx->pc = 0x319CD0u;
label_319cd0:
    // 0x319cd0: 0xc092414  jal         func_249050
label_319cd4:
    if (ctx->pc == 0x319CD4u) {
        ctx->pc = 0x319CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CD0u;
        // 0x319cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319CD8u;
        goto label_319cd8;
    }
    ctx->pc = 0x319CD0u;
    SET_GPR_U32(ctx, 31, 0x319CD8u);
    ctx->pc = 0x319CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319CD0u;
    // 0x319cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249050u, 0x319CD0u, 0x319CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319CD8u;
label_319cd8:
    // 0x319cd8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x319cd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_319cdc:
    // 0x319cdc: 0x1200ffb2  beqz        $s0, . + 4 + (-0x4E << 2)
label_319ce0:
    if (ctx->pc == 0x319CE0u) {
        ctx->pc = 0x319CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CDCu;
        // 0x319ce0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319CE4u;
        goto label_319ce4;
    }
    ctx->pc = 0x319CDCu;
    {
        const bool branch_taken_0x319cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x319CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CDCu;
        // 0x319ce0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319cdc) {
            ctx->pc = 0x319BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319ba8;
        }
    }
    ctx->pc = 0x319CE4u;
label_319ce4:
    // 0x319ce4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_319ce8:
    if (ctx->pc == 0x319CE8u) {
        ctx->pc = 0x319CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CE4u;
        // 0x319ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319CECu;
        goto label_319cec;
    }
    ctx->pc = 0x319CE4u;
    {
        const bool branch_taken_0x319ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x319CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CE4u;
        // 0x319ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ce4) {
            ctx->pc = 0x319D08u;
            goto label_319d08;
        }
    }
    ctx->pc = 0x319CECu;
label_319cec:
    // 0x319cec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x319cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319cf0:
    // 0x319cf0: 0xc0937ba  jal         func_24DEE8
label_319cf4:
    if (ctx->pc == 0x319CF4u) {
        ctx->pc = 0x319CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CF0u;
        // 0x319cf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319CF8u;
        goto label_319cf8;
    }
    ctx->pc = 0x319CF0u;
    SET_GPR_U32(ctx, 31, 0x319CF8u);
    ctx->pc = 0x319CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319CF0u;
    // 0x319cf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DEE8u, 0x319CF0u, 0x319CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319CF8u;
label_319cf8:
    // 0x319cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x319cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319cfc:
    // 0x319cfc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_319d00:
    if (ctx->pc == 0x319D00u) {
        ctx->pc = 0x319D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CFCu;
        // 0x319d00: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319D04u;
        goto label_319d04;
    }
    ctx->pc = 0x319CFCu;
    {
        const bool branch_taken_0x319cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x319D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CFCu;
        // 0x319d00: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319cfc) {
            ctx->pc = 0x319D08u;
            goto label_319d08;
        }
    }
    ctx->pc = 0x319D04u;
label_319d04:
    // 0x319d04: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x319d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_319d08:
    // 0x319d08: 0xc0a4e54  jal         func_293950
label_319d0c:
    if (ctx->pc == 0x319D0Cu) {
        ctx->pc = 0x319D10u;
        goto label_319d10;
    }
    ctx->pc = 0x319D08u;
    SET_GPR_U32(ctx, 31, 0x319D10u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x319D08u, 0x319D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D10u;
label_319d10:
    // 0x319d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319d14:
    // 0x319d14: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_319d18:
    if (ctx->pc == 0x319D18u) {
        ctx->pc = 0x319D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D14u;
        // 0x319d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319D1Cu;
        goto label_319d1c;
    }
    ctx->pc = 0x319D14u;
    {
        const bool branch_taken_0x319d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x319D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D14u;
        // 0x319d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319d14) {
            ctx->pc = 0x319D38u;
            goto label_319d38;
        }
    }
    ctx->pc = 0x319D1Cu;
label_319d1c:
    // 0x319d1c: 0x92a2003d  lbu         $v0, 0x3D($s5)
    ctx->pc = 0x319d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 61)));
label_319d20:
    // 0x319d20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x319d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_319d24:
    // 0x319d24: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x319d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_319d28:
    // 0x319d28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x319d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_319d2c:
    // 0x319d2c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x319d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_319d30:
    // 0x319d30: 0xc0b4c54  jal         func_2D3150
label_319d34:
    if (ctx->pc == 0x319D34u) {
        ctx->pc = 0x319D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D30u;
        // 0x319d34: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319D38u;
        goto label_319d38;
    }
    ctx->pc = 0x319D30u;
    SET_GPR_U32(ctx, 31, 0x319D38u);
    ctx->pc = 0x319D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D30u;
    // 0x319d34: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3150u, 0x319D30u, 0x319D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D38u;
label_319d38:
    // 0x319d38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x319d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_319d3c:
    // 0x319d3c: 0xc0a35d6  jal         func_28D758
label_319d40:
    if (ctx->pc == 0x319D40u) {
        ctx->pc = 0x319D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D3Cu;
        // 0x319d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319D44u;
        goto label_319d44;
    }
    ctx->pc = 0x319D3Cu;
    SET_GPR_U32(ctx, 31, 0x319D44u);
    ctx->pc = 0x319D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D3Cu;
    // 0x319d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x319D3Cu, 0x319D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D44u;
label_319d44:
    // 0x319d44: 0x92a3003d  lbu         $v1, 0x3D($s5)
    ctx->pc = 0x319d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 61)));
label_319d48:
    // 0x319d48: 0x92a2003c  lbu         $v0, 0x3C($s5)
    ctx->pc = 0x319d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
label_319d4c:
    // 0x319d4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x319d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_319d50:
    // 0x319d50: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x319d50u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_319d54:
    // 0x319d54: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_319d58:
    if (ctx->pc == 0x319D58u) {
        ctx->pc = 0x319D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D54u;
        // 0x319d58: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319D5Cu;
        goto label_319d5c;
    }
    ctx->pc = 0x319D54u;
    {
        const bool branch_taken_0x319d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319d54) {
            ctx->pc = 0x319D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319D54u;
            // 0x319d58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x319D5Cu;
            goto label_319d5c;
        }
    }
    ctx->pc = 0x319D5Cu;
label_319d5c:
    // 0x319d5c: 0x2010  mfhi        $a0
    ctx->pc = 0x319d5cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_319d60:
    // 0x319d60: 0xa2a4003d  sb          $a0, 0x3D($s5)
    ctx->pc = 0x319d60u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 61), (uint8_t)GPR_U32(ctx, 4));
label_319d64:
    // 0x319d64: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x319d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_319d68:
    // 0x319d68: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x319d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_319d6c:
    // 0x319d6c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x319d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_319d70:
    // 0x319d70: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x319d70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_319d74:
    // 0x319d74: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x319d74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_319d78:
    // 0x319d78: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x319d78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_319d7c:
    // 0x319d7c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x319d7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_319d80:
    // 0x319d80: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x319d80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_319d84:
    // 0x319d84: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x319d84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_319d88:
    // 0x319d88: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x319d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_319d8c:
    // 0x319d8c: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x319d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_319d90:
    // 0x319d90: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x319d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_319d94:
    // 0x319d94: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x319d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_319d98:
    // 0x319d98: 0x3e00008  jr          $ra
label_319d9c:
    if (ctx->pc == 0x319D9Cu) {
        ctx->pc = 0x319D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D98u;
        // 0x319d9c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319DA0u;
        goto label_fallthrough_0x319d98;
    }
    ctx->pc = 0x319D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D98u;
        // 0x319d9c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x319d98:
    ctx->pc = 0x319DA0u;
}
