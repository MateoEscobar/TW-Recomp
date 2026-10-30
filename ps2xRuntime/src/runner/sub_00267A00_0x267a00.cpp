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

// Function: sub_00267A00
// Address: 0x267a00 - 0x267e48
void sub_00267A00_0x267a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267A00_0x267a00");
#endif

    switch (ctx->pc) {
        case 0x267a00u: goto label_267a00;
        case 0x267a04u: goto label_267a04;
        case 0x267a08u: goto label_267a08;
        case 0x267a0cu: goto label_267a0c;
        case 0x267a10u: goto label_267a10;
        case 0x267a14u: goto label_267a14;
        case 0x267a18u: goto label_267a18;
        case 0x267a1cu: goto label_267a1c;
        case 0x267a20u: goto label_267a20;
        case 0x267a24u: goto label_267a24;
        case 0x267a28u: goto label_267a28;
        case 0x267a2cu: goto label_267a2c;
        case 0x267a30u: goto label_267a30;
        case 0x267a34u: goto label_267a34;
        case 0x267a38u: goto label_267a38;
        case 0x267a3cu: goto label_267a3c;
        case 0x267a40u: goto label_267a40;
        case 0x267a44u: goto label_267a44;
        case 0x267a48u: goto label_267a48;
        case 0x267a4cu: goto label_267a4c;
        case 0x267a50u: goto label_267a50;
        case 0x267a54u: goto label_267a54;
        case 0x267a58u: goto label_267a58;
        case 0x267a5cu: goto label_267a5c;
        case 0x267a60u: goto label_267a60;
        case 0x267a64u: goto label_267a64;
        case 0x267a68u: goto label_267a68;
        case 0x267a6cu: goto label_267a6c;
        case 0x267a70u: goto label_267a70;
        case 0x267a74u: goto label_267a74;
        case 0x267a78u: goto label_267a78;
        case 0x267a7cu: goto label_267a7c;
        case 0x267a80u: goto label_267a80;
        case 0x267a84u: goto label_267a84;
        case 0x267a88u: goto label_267a88;
        case 0x267a8cu: goto label_267a8c;
        case 0x267a90u: goto label_267a90;
        case 0x267a94u: goto label_267a94;
        case 0x267a98u: goto label_267a98;
        case 0x267a9cu: goto label_267a9c;
        case 0x267aa0u: goto label_267aa0;
        case 0x267aa4u: goto label_267aa4;
        case 0x267aa8u: goto label_267aa8;
        case 0x267aacu: goto label_267aac;
        case 0x267ab0u: goto label_267ab0;
        case 0x267ab4u: goto label_267ab4;
        case 0x267ab8u: goto label_267ab8;
        case 0x267abcu: goto label_267abc;
        case 0x267ac0u: goto label_267ac0;
        case 0x267ac4u: goto label_267ac4;
        case 0x267ac8u: goto label_267ac8;
        case 0x267accu: goto label_267acc;
        case 0x267ad0u: goto label_267ad0;
        case 0x267ad4u: goto label_267ad4;
        case 0x267ad8u: goto label_267ad8;
        case 0x267adcu: goto label_267adc;
        case 0x267ae0u: goto label_267ae0;
        case 0x267ae4u: goto label_267ae4;
        case 0x267ae8u: goto label_267ae8;
        case 0x267aecu: goto label_267aec;
        case 0x267af0u: goto label_267af0;
        case 0x267af4u: goto label_267af4;
        case 0x267af8u: goto label_267af8;
        case 0x267afcu: goto label_267afc;
        case 0x267b00u: goto label_267b00;
        case 0x267b04u: goto label_267b04;
        case 0x267b08u: goto label_267b08;
        case 0x267b0cu: goto label_267b0c;
        case 0x267b10u: goto label_267b10;
        case 0x267b14u: goto label_267b14;
        case 0x267b18u: goto label_267b18;
        case 0x267b1cu: goto label_267b1c;
        case 0x267b20u: goto label_267b20;
        case 0x267b24u: goto label_267b24;
        case 0x267b28u: goto label_267b28;
        case 0x267b2cu: goto label_267b2c;
        case 0x267b30u: goto label_267b30;
        case 0x267b34u: goto label_267b34;
        case 0x267b38u: goto label_267b38;
        case 0x267b3cu: goto label_267b3c;
        case 0x267b40u: goto label_267b40;
        case 0x267b44u: goto label_267b44;
        case 0x267b48u: goto label_267b48;
        case 0x267b4cu: goto label_267b4c;
        case 0x267b50u: goto label_267b50;
        case 0x267b54u: goto label_267b54;
        case 0x267b58u: goto label_267b58;
        case 0x267b5cu: goto label_267b5c;
        case 0x267b60u: goto label_267b60;
        case 0x267b64u: goto label_267b64;
        case 0x267b68u: goto label_267b68;
        case 0x267b6cu: goto label_267b6c;
        case 0x267b70u: goto label_267b70;
        case 0x267b74u: goto label_267b74;
        case 0x267b78u: goto label_267b78;
        case 0x267b7cu: goto label_267b7c;
        case 0x267b80u: goto label_267b80;
        case 0x267b84u: goto label_267b84;
        case 0x267b88u: goto label_267b88;
        case 0x267b8cu: goto label_267b8c;
        case 0x267b90u: goto label_267b90;
        case 0x267b94u: goto label_267b94;
        case 0x267b98u: goto label_267b98;
        case 0x267b9cu: goto label_267b9c;
        case 0x267ba0u: goto label_267ba0;
        case 0x267ba4u: goto label_267ba4;
        case 0x267ba8u: goto label_267ba8;
        case 0x267bacu: goto label_267bac;
        case 0x267bb0u: goto label_267bb0;
        case 0x267bb4u: goto label_267bb4;
        case 0x267bb8u: goto label_267bb8;
        case 0x267bbcu: goto label_267bbc;
        case 0x267bc0u: goto label_267bc0;
        case 0x267bc4u: goto label_267bc4;
        case 0x267bc8u: goto label_267bc8;
        case 0x267bccu: goto label_267bcc;
        case 0x267bd0u: goto label_267bd0;
        case 0x267bd4u: goto label_267bd4;
        case 0x267bd8u: goto label_267bd8;
        case 0x267bdcu: goto label_267bdc;
        case 0x267be0u: goto label_267be0;
        case 0x267be4u: goto label_267be4;
        case 0x267be8u: goto label_267be8;
        case 0x267becu: goto label_267bec;
        case 0x267bf0u: goto label_267bf0;
        case 0x267bf4u: goto label_267bf4;
        case 0x267bf8u: goto label_267bf8;
        case 0x267bfcu: goto label_267bfc;
        case 0x267c00u: goto label_267c00;
        case 0x267c04u: goto label_267c04;
        case 0x267c08u: goto label_267c08;
        case 0x267c0cu: goto label_267c0c;
        case 0x267c10u: goto label_267c10;
        case 0x267c14u: goto label_267c14;
        case 0x267c18u: goto label_267c18;
        case 0x267c1cu: goto label_267c1c;
        case 0x267c20u: goto label_267c20;
        case 0x267c24u: goto label_267c24;
        case 0x267c28u: goto label_267c28;
        case 0x267c2cu: goto label_267c2c;
        case 0x267c30u: goto label_267c30;
        case 0x267c34u: goto label_267c34;
        case 0x267c38u: goto label_267c38;
        case 0x267c3cu: goto label_267c3c;
        case 0x267c40u: goto label_267c40;
        case 0x267c44u: goto label_267c44;
        case 0x267c48u: goto label_267c48;
        case 0x267c4cu: goto label_267c4c;
        case 0x267c50u: goto label_267c50;
        case 0x267c54u: goto label_267c54;
        case 0x267c58u: goto label_267c58;
        case 0x267c5cu: goto label_267c5c;
        case 0x267c60u: goto label_267c60;
        case 0x267c64u: goto label_267c64;
        case 0x267c68u: goto label_267c68;
        case 0x267c6cu: goto label_267c6c;
        case 0x267c70u: goto label_267c70;
        case 0x267c74u: goto label_267c74;
        case 0x267c78u: goto label_267c78;
        case 0x267c7cu: goto label_267c7c;
        case 0x267c80u: goto label_267c80;
        case 0x267c84u: goto label_267c84;
        case 0x267c88u: goto label_267c88;
        case 0x267c8cu: goto label_267c8c;
        case 0x267c90u: goto label_267c90;
        case 0x267c94u: goto label_267c94;
        case 0x267c98u: goto label_267c98;
        case 0x267c9cu: goto label_267c9c;
        case 0x267ca0u: goto label_267ca0;
        case 0x267ca4u: goto label_267ca4;
        case 0x267ca8u: goto label_267ca8;
        case 0x267cacu: goto label_267cac;
        case 0x267cb0u: goto label_267cb0;
        case 0x267cb4u: goto label_267cb4;
        case 0x267cb8u: goto label_267cb8;
        case 0x267cbcu: goto label_267cbc;
        case 0x267cc0u: goto label_267cc0;
        case 0x267cc4u: goto label_267cc4;
        case 0x267cc8u: goto label_267cc8;
        case 0x267cccu: goto label_267ccc;
        case 0x267cd0u: goto label_267cd0;
        case 0x267cd4u: goto label_267cd4;
        case 0x267cd8u: goto label_267cd8;
        case 0x267cdcu: goto label_267cdc;
        case 0x267ce0u: goto label_267ce0;
        case 0x267ce4u: goto label_267ce4;
        case 0x267ce8u: goto label_267ce8;
        case 0x267cecu: goto label_267cec;
        case 0x267cf0u: goto label_267cf0;
        case 0x267cf4u: goto label_267cf4;
        case 0x267cf8u: goto label_267cf8;
        case 0x267cfcu: goto label_267cfc;
        case 0x267d00u: goto label_267d00;
        case 0x267d04u: goto label_267d04;
        case 0x267d08u: goto label_267d08;
        case 0x267d0cu: goto label_267d0c;
        case 0x267d10u: goto label_267d10;
        case 0x267d14u: goto label_267d14;
        case 0x267d18u: goto label_267d18;
        case 0x267d1cu: goto label_267d1c;
        case 0x267d20u: goto label_267d20;
        case 0x267d24u: goto label_267d24;
        case 0x267d28u: goto label_267d28;
        case 0x267d2cu: goto label_267d2c;
        case 0x267d30u: goto label_267d30;
        case 0x267d34u: goto label_267d34;
        case 0x267d38u: goto label_267d38;
        case 0x267d3cu: goto label_267d3c;
        case 0x267d40u: goto label_267d40;
        case 0x267d44u: goto label_267d44;
        case 0x267d48u: goto label_267d48;
        case 0x267d4cu: goto label_267d4c;
        case 0x267d50u: goto label_267d50;
        case 0x267d54u: goto label_267d54;
        case 0x267d58u: goto label_267d58;
        case 0x267d5cu: goto label_267d5c;
        case 0x267d60u: goto label_267d60;
        case 0x267d64u: goto label_267d64;
        case 0x267d68u: goto label_267d68;
        case 0x267d6cu: goto label_267d6c;
        case 0x267d70u: goto label_267d70;
        case 0x267d74u: goto label_267d74;
        case 0x267d78u: goto label_267d78;
        case 0x267d7cu: goto label_267d7c;
        case 0x267d80u: goto label_267d80;
        case 0x267d84u: goto label_267d84;
        case 0x267d88u: goto label_267d88;
        case 0x267d8cu: goto label_267d8c;
        case 0x267d90u: goto label_267d90;
        case 0x267d94u: goto label_267d94;
        case 0x267d98u: goto label_267d98;
        case 0x267d9cu: goto label_267d9c;
        case 0x267da0u: goto label_267da0;
        case 0x267da4u: goto label_267da4;
        case 0x267da8u: goto label_267da8;
        case 0x267dacu: goto label_267dac;
        case 0x267db0u: goto label_267db0;
        case 0x267db4u: goto label_267db4;
        case 0x267db8u: goto label_267db8;
        case 0x267dbcu: goto label_267dbc;
        case 0x267dc0u: goto label_267dc0;
        case 0x267dc4u: goto label_267dc4;
        case 0x267dc8u: goto label_267dc8;
        case 0x267dccu: goto label_267dcc;
        case 0x267dd0u: goto label_267dd0;
        case 0x267dd4u: goto label_267dd4;
        case 0x267dd8u: goto label_267dd8;
        case 0x267ddcu: goto label_267ddc;
        case 0x267de0u: goto label_267de0;
        case 0x267de4u: goto label_267de4;
        case 0x267de8u: goto label_267de8;
        case 0x267decu: goto label_267dec;
        case 0x267df0u: goto label_267df0;
        case 0x267df4u: goto label_267df4;
        case 0x267df8u: goto label_267df8;
        case 0x267dfcu: goto label_267dfc;
        case 0x267e00u: goto label_267e00;
        case 0x267e04u: goto label_267e04;
        case 0x267e08u: goto label_267e08;
        case 0x267e0cu: goto label_267e0c;
        case 0x267e10u: goto label_267e10;
        case 0x267e14u: goto label_267e14;
        case 0x267e18u: goto label_267e18;
        case 0x267e1cu: goto label_267e1c;
        case 0x267e20u: goto label_267e20;
        case 0x267e24u: goto label_267e24;
        case 0x267e28u: goto label_267e28;
        case 0x267e2cu: goto label_267e2c;
        case 0x267e30u: goto label_267e30;
        case 0x267e34u: goto label_267e34;
        case 0x267e38u: goto label_267e38;
        case 0x267e3cu: goto label_267e3c;
        case 0x267e40u: goto label_267e40;
        case 0x267e44u: goto label_267e44;
        default: break;
    }

    ctx->pc = 0x267a00u;

label_267a00:
    // 0x267a00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x267a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_267a04:
    // 0x267a04: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x267a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_267a08:
    // 0x267a08: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x267a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_267a0c:
    // 0x267a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x267a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_267a10:
    // 0x267a10: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x267a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_267a14:
    // 0x267a14: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x267a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_267a18:
    // 0x267a18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x267a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_267a1c:
    // 0x267a1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x267a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_267a20:
    // 0x267a20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x267a20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_267a24:
    // 0x267a24: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x267a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_267a28:
    // 0x267a28: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x267a28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_267a2c:
    // 0x267a2c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x267a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_267a30:
    // 0x267a30: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x267a30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_267a34:
    // 0x267a34: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x267a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_267a38:
    // 0x267a38: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x267a38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_267a3c:
    // 0x267a3c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x267a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_267a40:
    // 0x267a40: 0x207b00a  movz        $s6, $s0, $a3
    ctx->pc = 0x267a40u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 16));
label_267a44:
    // 0x267a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_267a48:
    // 0x267a48: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x267a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_267a4c:
    // 0x267a4c: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x267a4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_267a50:
    // 0x267a50: 0x2415015d  addiu       $s5, $zero, 0x15D
    ctx->pc = 0x267a50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
label_267a54:
    // 0x267a54: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x267a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_267a58:
    // 0x267a58: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x267a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_267a5c:
    // 0x267a5c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x267a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_267a60:
    // 0x267a60: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x267a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_267a64:
    // 0x267a64: 0x245e74c0  addiu       $fp, $v0, 0x74C0
    ctx->pc = 0x267a64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 29888));
label_267a68:
    // 0x267a68: 0xc089990  jal         func_226640
label_267a6c:
    if (ctx->pc == 0x267A6Cu) {
        ctx->pc = 0x267A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A68u;
        // 0x267a6c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A70u;
        goto label_267a70;
    }
    ctx->pc = 0x267A68u;
    SET_GPR_U32(ctx, 31, 0x267A70u);
    ctx->pc = 0x267A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A68u;
    // 0x267a6c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x267A68u, 0x267A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A70u;
label_267a70:
    // 0x267a70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x267a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_267a74:
    // 0x267a74: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x267a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_267a78:
    // 0x267a78: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x267a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_267a7c:
    // 0x267a7c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x267a7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_267a80:
    // 0x267a80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x267a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_267a84:
    // 0x267a84: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x267a84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_267a88:
    // 0x267a88: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x267a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_267a8c:
    // 0x267a8c: 0x40f809  jalr        $v0
label_267a90:
    if (ctx->pc == 0x267A90u) {
        ctx->pc = 0x267A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A8Cu;
        // 0x267a90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A94u;
        goto label_267a94;
    }
    ctx->pc = 0x267A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267A94u);
        ctx->pc = 0x267A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A8Cu;
        // 0x267a90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267A8Cu, 0x267A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267A94u;
label_267a94:
    // 0x267a94: 0xc088edc  jal         func_223B70
label_267a98:
    if (ctx->pc == 0x267A98u) {
        ctx->pc = 0x267A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A94u;
        // 0x267a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A9Cu;
        goto label_267a9c;
    }
    ctx->pc = 0x267A94u;
    SET_GPR_U32(ctx, 31, 0x267A9Cu);
    ctx->pc = 0x267A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A94u;
    // 0x267a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x267A94u, 0x267A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A9Cu;
label_267a9c:
    // 0x267a9c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_267aa0:
    if (ctx->pc == 0x267AA0u) {
        ctx->pc = 0x267AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A9Cu;
        // 0x267aa0: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AA4u;
        goto label_267aa4;
    }
    ctx->pc = 0x267A9Cu;
    {
        const bool branch_taken_0x267a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267a9c) {
            ctx->pc = 0x267AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267A9Cu;
            // 0x267aa0: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267AACu;
            goto label_267aac;
        }
    }
    ctx->pc = 0x267AA4u;
label_267aa4:
    // 0x267aa4: 0x1000000b  b           . + 4 + (0xB << 2)
label_267aa8:
    if (ctx->pc == 0x267AA8u) {
        ctx->pc = 0x267AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AA4u;
        // 0x267aa8: 0x24150143  addiu       $s5, $zero, 0x143 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AACu;
        goto label_267aac;
    }
    ctx->pc = 0x267AA4u;
    {
        const bool branch_taken_0x267aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AA4u;
        // 0x267aa8: 0x24150143  addiu       $s5, $zero, 0x143 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267aa4) {
            ctx->pc = 0x267AD4u;
            goto label_267ad4;
        }
    }
    ctx->pc = 0x267AACu;
label_267aac:
    // 0x267aac: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x267aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_267ab0:
    // 0x267ab0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_267ab4:
    // 0x267ab4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_267ab8:
    if (ctx->pc == 0x267AB8u) {
        ctx->pc = 0x267AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AB4u;
        // 0x267ab8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267ABCu;
        goto label_267abc;
    }
    ctx->pc = 0x267AB4u;
    {
        const bool branch_taken_0x267ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AB4u;
        // 0x267ab8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ab4) {
            ctx->pc = 0x267AD8u;
            goto label_267ad8;
        }
    }
    ctx->pc = 0x267ABCu;
label_267abc:
    // 0x267abc: 0xc089f66  jal         func_227D98
label_267ac0:
    if (ctx->pc == 0x267AC0u) {
        ctx->pc = 0x267AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267ABCu;
        // 0x267ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AC4u;
        goto label_267ac4;
    }
    ctx->pc = 0x267ABCu;
    SET_GPR_U32(ctx, 31, 0x267AC4u);
    ctx->pc = 0x267AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267ABCu;
    // 0x267ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x267ABCu, 0x267AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267AC4u;
label_267ac4:
    // 0x267ac4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_267ac8:
    if (ctx->pc == 0x267AC8u) {
        ctx->pc = 0x267AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AC4u;
        // 0x267ac8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267ACCu;
        goto label_267acc;
    }
    ctx->pc = 0x267AC4u;
    {
        const bool branch_taken_0x267ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AC4u;
        // 0x267ac8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ac4) {
            ctx->pc = 0x267AD8u;
            goto label_267ad8;
        }
    }
    ctx->pc = 0x267ACCu;
label_267acc:
    // 0x267acc: 0x241500c8  addiu       $s5, $zero, 0xC8
    ctx->pc = 0x267accu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_267ad0:
    // 0x267ad0: 0x241200cd  addiu       $s2, $zero, 0xCD
    ctx->pc = 0x267ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_267ad4:
    // 0x267ad4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x267ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_267ad8:
    // 0x267ad8: 0x1622003f  bne         $s1, $v0, . + 4 + (0x3F << 2)
label_267adc:
    if (ctx->pc == 0x267ADCu) {
        ctx->pc = 0x267ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AD8u;
        // 0x267adc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AE0u;
        goto label_267ae0;
    }
    ctx->pc = 0x267AD8u;
    {
        const bool branch_taken_0x267ad8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x267ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AD8u;
        // 0x267adc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ad8) {
            ctx->pc = 0x267BD8u;
            goto label_267bd8;
        }
    }
    ctx->pc = 0x267AE0u;
label_267ae0:
    // 0x267ae0: 0xc088edc  jal         func_223B70
label_267ae4:
    if (ctx->pc == 0x267AE4u) {
        ctx->pc = 0x267AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AE0u;
        // 0x267ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AE8u;
        goto label_267ae8;
    }
    ctx->pc = 0x267AE0u;
    SET_GPR_U32(ctx, 31, 0x267AE8u);
    ctx->pc = 0x267AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267AE0u;
    // 0x267ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x267AE0u, 0x267AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267AE8u;
label_267ae8:
    // 0x267ae8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_267aec:
    if (ctx->pc == 0x267AECu) {
        ctx->pc = 0x267AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AE8u;
        // 0x267aec: 0x24110142  addiu       $s1, $zero, 0x142 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AF0u;
        goto label_267af0;
    }
    ctx->pc = 0x267AE8u;
    {
        const bool branch_taken_0x267ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AE8u;
        // 0x267aec: 0x24110142  addiu       $s1, $zero, 0x142 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ae8) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267AF0u;
label_267af0:
    // 0x267af0: 0xc08a02c  jal         func_2280B0
label_267af4:
    if (ctx->pc == 0x267AF4u) {
        ctx->pc = 0x267AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AF0u;
        // 0x267af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AF8u;
        goto label_267af8;
    }
    ctx->pc = 0x267AF0u;
    SET_GPR_U32(ctx, 31, 0x267AF8u);
    ctx->pc = 0x267AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267AF0u;
    // 0x267af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280B0u, 0x267AF0u, 0x267AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267AF8u;
label_267af8:
    // 0x267af8: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_267afc:
    if (ctx->pc == 0x267AFCu) {
        ctx->pc = 0x267AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AF8u;
        // 0x267afc: 0x24110108  addiu       $s1, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B00u;
        goto label_267b00;
    }
    ctx->pc = 0x267AF8u;
    {
        const bool branch_taken_0x267af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AF8u;
        // 0x267afc: 0x24110108  addiu       $s1, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267af8) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267B00u;
label_267b00:
    // 0x267b00: 0xc089f66  jal         func_227D98
label_267b04:
    if (ctx->pc == 0x267B04u) {
        ctx->pc = 0x267B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B00u;
        // 0x267b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B08u;
        goto label_267b08;
    }
    ctx->pc = 0x267B00u;
    SET_GPR_U32(ctx, 31, 0x267B08u);
    ctx->pc = 0x267B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B00u;
    // 0x267b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x267B00u, 0x267B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B08u;
label_267b08:
    // 0x267b08: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_267b0c:
    if (ctx->pc == 0x267B0Cu) {
        ctx->pc = 0x267B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B08u;
        // 0x267b0c: 0x241100cc  addiu       $s1, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B10u;
        goto label_267b10;
    }
    ctx->pc = 0x267B08u;
    {
        const bool branch_taken_0x267b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B08u;
        // 0x267b0c: 0x241100cc  addiu       $s1, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b08) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267B10u;
label_267b10:
    // 0x267b10: 0xc088e68  jal         func_2239A0
label_267b14:
    if (ctx->pc == 0x267B14u) {
        ctx->pc = 0x267B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B10u;
        // 0x267b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B18u;
        goto label_267b18;
    }
    ctx->pc = 0x267B10u;
    SET_GPR_U32(ctx, 31, 0x267B18u);
    ctx->pc = 0x267B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B10u;
    // 0x267b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x267B10u, 0x267B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B18u;
label_267b18:
    // 0x267b18: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_267b1c:
    if (ctx->pc == 0x267B1Cu) {
        ctx->pc = 0x267B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B18u;
        // 0x267b1c: 0x24110092  addiu       $s1, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B20u;
        goto label_267b20;
    }
    ctx->pc = 0x267B18u;
    {
        const bool branch_taken_0x267b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B18u;
        // 0x267b1c: 0x24110092  addiu       $s1, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b18) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267B20u;
label_267b20:
    // 0x267b20: 0xc088e70  jal         func_2239C0
label_267b24:
    if (ctx->pc == 0x267B24u) {
        ctx->pc = 0x267B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B20u;
        // 0x267b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B28u;
        goto label_267b28;
    }
    ctx->pc = 0x267B20u;
    SET_GPR_U32(ctx, 31, 0x267B28u);
    ctx->pc = 0x267B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B20u;
    // 0x267b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x267B20u, 0x267B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B28u;
label_267b28:
    // 0x267b28: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_267b2c:
    if (ctx->pc == 0x267B2Cu) {
        ctx->pc = 0x267B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B28u;
        // 0x267b2c: 0x24110084  addiu       $s1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B30u;
        goto label_267b30;
    }
    ctx->pc = 0x267B28u;
    {
        const bool branch_taken_0x267b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B28u;
        // 0x267b2c: 0x24110084  addiu       $s1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b28) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267B30u;
label_267b30:
    // 0x267b30: 0xc088e50  jal         func_223940
label_267b34:
    if (ctx->pc == 0x267B34u) {
        ctx->pc = 0x267B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B30u;
        // 0x267b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B38u;
        goto label_267b38;
    }
    ctx->pc = 0x267B30u;
    SET_GPR_U32(ctx, 31, 0x267B38u);
    ctx->pc = 0x267B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B30u;
    // 0x267b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223940u, 0x267B30u, 0x267B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B38u;
label_267b38:
    // 0x267b38: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_267b3c:
    if (ctx->pc == 0x267B3Cu) {
        ctx->pc = 0x267B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B38u;
        // 0x267b3c: 0x2411008b  addiu       $s1, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B40u;
        goto label_267b40;
    }
    ctx->pc = 0x267B38u;
    {
        const bool branch_taken_0x267b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B38u;
        // 0x267b3c: 0x2411008b  addiu       $s1, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b38) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267B40u;
label_267b40:
    // 0x267b40: 0xc088e58  jal         func_223960
label_267b44:
    if (ctx->pc == 0x267B44u) {
        ctx->pc = 0x267B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B40u;
        // 0x267b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B48u;
        goto label_267b48;
    }
    ctx->pc = 0x267B40u;
    SET_GPR_U32(ctx, 31, 0x267B48u);
    ctx->pc = 0x267B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B40u;
    // 0x267b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x267B40u, 0x267B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B48u;
label_267b48:
    // 0x267b48: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_267b4c:
    if (ctx->pc == 0x267B4Cu) {
        ctx->pc = 0x267B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B48u;
        // 0x267b4c: 0x2411007f  addiu       $s1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B50u;
        goto label_267b50;
    }
    ctx->pc = 0x267B48u;
    {
        const bool branch_taken_0x267b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B48u;
        // 0x267b4c: 0x2411007f  addiu       $s1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b48) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267B50u;
label_267b50:
    // 0x267b50: 0xc088e38  jal         func_2238E0
label_267b54:
    if (ctx->pc == 0x267B54u) {
        ctx->pc = 0x267B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B50u;
        // 0x267b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B58u;
        goto label_267b58;
    }
    ctx->pc = 0x267B50u;
    SET_GPR_U32(ctx, 31, 0x267B58u);
    ctx->pc = 0x267B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B50u;
    // 0x267b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x267B50u, 0x267B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B58u;
label_267b58:
    // 0x267b58: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_267b5c:
    if (ctx->pc == 0x267B5Cu) {
        ctx->pc = 0x267B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B58u;
        // 0x267b5c: 0x241100d0  addiu       $s1, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B60u;
        goto label_267b60;
    }
    ctx->pc = 0x267B58u;
    {
        const bool branch_taken_0x267b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B58u;
        // 0x267b5c: 0x241100d0  addiu       $s1, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b58) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267B60u;
label_267b60:
    // 0x267b60: 0xc088e40  jal         func_223900
label_267b64:
    if (ctx->pc == 0x267B64u) {
        ctx->pc = 0x267B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B60u;
        // 0x267b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B68u;
        goto label_267b68;
    }
    ctx->pc = 0x267B60u;
    SET_GPR_U32(ctx, 31, 0x267B68u);
    ctx->pc = 0x267B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B60u;
    // 0x267b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x267B60u, 0x267B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B68u;
label_267b68:
    // 0x267b68: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_267b6c:
    if (ctx->pc == 0x267B6Cu) {
        ctx->pc = 0x267B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B68u;
        // 0x267b6c: 0x241100d3  addiu       $s1, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B70u;
        goto label_267b70;
    }
    ctx->pc = 0x267B68u;
    {
        const bool branch_taken_0x267b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B68u;
        // 0x267b6c: 0x241100d3  addiu       $s1, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b68) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267B70u;
label_267b70:
    // 0x267b70: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x267b70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_267b74:
    // 0x267b74: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x267b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_267b78:
    // 0x267b78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_267b7c:
    // 0x267b7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_267b80:
    if (ctx->pc == 0x267B80u) {
        ctx->pc = 0x267B84u;
        goto label_267b84;
    }
    ctx->pc = 0x267B7Cu;
    {
        const bool branch_taken_0x267b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b7c) {
            ctx->pc = 0x267BA4u;
            goto label_267ba4;
        }
    }
    ctx->pc = 0x267B84u;
label_267b84:
    // 0x267b84: 0xc089f66  jal         func_227D98
label_267b88:
    if (ctx->pc == 0x267B88u) {
        ctx->pc = 0x267B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B84u;
        // 0x267b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B8Cu;
        goto label_267b8c;
    }
    ctx->pc = 0x267B84u;
    SET_GPR_U32(ctx, 31, 0x267B8Cu);
    ctx->pc = 0x267B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B84u;
    // 0x267b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x267B84u, 0x267B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B8Cu;
label_267b8c:
    // 0x267b8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_267b90:
    if (ctx->pc == 0x267B90u) {
        ctx->pc = 0x267B94u;
        goto label_267b94;
    }
    ctx->pc = 0x267B8Cu;
    {
        const bool branch_taken_0x267b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267b8c) {
            ctx->pc = 0x267BA4u;
            goto label_267ba4;
        }
    }
    ctx->pc = 0x267B94u;
label_267b94:
    // 0x267b94: 0xc088ee6  jal         func_223B98
label_267b98:
    if (ctx->pc == 0x267B98u) {
        ctx->pc = 0x267B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B94u;
        // 0x267b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B9Cu;
        goto label_267b9c;
    }
    ctx->pc = 0x267B94u;
    SET_GPR_U32(ctx, 31, 0x267B9Cu);
    ctx->pc = 0x267B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267B94u;
    // 0x267b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x267B94u, 0x267B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B9Cu;
label_267b9c:
    // 0x267b9c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_267ba0:
    if (ctx->pc == 0x267BA0u) {
        ctx->pc = 0x267BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B9Cu;
        // 0x267ba0: 0x241100c3  addiu       $s1, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267BA4u;
        goto label_267ba4;
    }
    ctx->pc = 0x267B9Cu;
    {
        const bool branch_taken_0x267b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B9Cu;
        // 0x267ba0: 0x241100c3  addiu       $s1, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b9c) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267BA4u;
label_267ba4:
    // 0x267ba4: 0xc088ed2  jal         func_223B48
label_267ba8:
    if (ctx->pc == 0x267BA8u) {
        ctx->pc = 0x267BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BA4u;
        // 0x267ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267BACu;
        goto label_267bac;
    }
    ctx->pc = 0x267BA4u;
    SET_GPR_U32(ctx, 31, 0x267BACu);
    ctx->pc = 0x267BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BA4u;
    // 0x267ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x267BA4u, 0x267BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267BACu;
label_267bac:
    // 0x267bac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_267bb0:
    if (ctx->pc == 0x267BB0u) {
        ctx->pc = 0x267BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BACu;
        // 0x267bb0: 0x2411015c  addiu       $s1, $zero, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267BB4u;
        goto label_267bb4;
    }
    ctx->pc = 0x267BACu;
    {
        const bool branch_taken_0x267bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BACu;
        // 0x267bb0: 0x2411015c  addiu       $s1, $zero, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267bac) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267BB4u;
label_267bb4:
    // 0x267bb4: 0xc089fee  jal         func_227FB8
label_267bb8:
    if (ctx->pc == 0x267BB8u) {
        ctx->pc = 0x267BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BB4u;
        // 0x267bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267BBCu;
        goto label_267bbc;
    }
    ctx->pc = 0x267BB4u;
    SET_GPR_U32(ctx, 31, 0x267BBCu);
    ctx->pc = 0x267BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BB4u;
    // 0x267bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x267BB4u, 0x267BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267BBCu;
label_267bbc:
    // 0x267bbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_267bc0:
    if (ctx->pc == 0x267BC0u) {
        ctx->pc = 0x267BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BBCu;
        // 0x267bc0: 0x2411013f  addiu       $s1, $zero, 0x13F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267BC4u;
        goto label_267bc4;
    }
    ctx->pc = 0x267BBCu;
    {
        const bool branch_taken_0x267bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BBCu;
        // 0x267bc0: 0x2411013f  addiu       $s1, $zero, 0x13F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267bbc) {
            ctx->pc = 0x267BD4u;
            goto label_267bd4;
        }
    }
    ctx->pc = 0x267BC4u;
label_267bc4:
    // 0x267bc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x267bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_267bc8:
    // 0x267bc8: 0xc099bf6  jal         func_266FD8
label_267bcc:
    if (ctx->pc == 0x267BCCu) {
        ctx->pc = 0x267BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BC8u;
        // 0x267bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267BD0u;
        goto label_267bd0;
    }
    ctx->pc = 0x267BC8u;
    SET_GPR_U32(ctx, 31, 0x267BD0u);
    ctx->pc = 0x267BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BC8u;
    // 0x267bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266FD8u, 0x267BC8u, 0x267BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267BD0u;
label_267bd0:
    // 0x267bd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x267bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267bd4:
    // 0x267bd4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x267bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_267bd8:
    // 0x267bd8: 0x2453df28  addiu       $s3, $v0, -0x20D8
    ctx->pc = 0x267bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
label_267bdc:
    // 0x267bdc: 0xc041532  jal         func_1054C8
label_267be0:
    if (ctx->pc == 0x267BE0u) {
        ctx->pc = 0x267BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BDCu;
        // 0x267be0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267BE4u;
        goto label_267be4;
    }
    ctx->pc = 0x267BDCu;
    SET_GPR_U32(ctx, 31, 0x267BE4u);
    ctx->pc = 0x267BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267BDCu;
    // 0x267be0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x267BDCu, 0x267BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267BE4u;
label_267be4:
    // 0x267be4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x267be4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267be8:
    // 0x267be8: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_267bec:
    if (ctx->pc == 0x267BECu) {
        ctx->pc = 0x267BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BE8u;
        // 0x267bec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267BF0u;
        goto label_267bf0;
    }
    ctx->pc = 0x267BE8u;
    {
        const bool branch_taken_0x267be8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x267BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267BE8u;
        // 0x267bec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267be8) {
            ctx->pc = 0x267C08u;
            goto label_267c08;
        }
    }
    ctx->pc = 0x267BF0u;
label_267bf0:
    // 0x267bf0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x267bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_267bf4:
    // 0x267bf4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x267bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_267bf8:
    // 0x267bf8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x267bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_267bfc:
    // 0x267bfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x267bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_267c00:
    // 0x267c00: 0xc04159e  jal         func_105678
label_267c04:
    if (ctx->pc == 0x267C04u) {
        ctx->pc = 0x267C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C00u;
        // 0x267c04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C08u;
        goto label_267c08;
    }
    ctx->pc = 0x267C00u;
    SET_GPR_U32(ctx, 31, 0x267C08u);
    ctx->pc = 0x267C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C00u;
    // 0x267c04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x267C00u, 0x267C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C08u;
label_267c08:
    // 0x267c08: 0x121027  nor         $v0, $zero, $s2
    ctx->pc = 0x267c08u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
label_267c0c:
    // 0x267c0c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_267c10:
    if (ctx->pc == 0x267C10u) {
        ctx->pc = 0x267C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C0Cu;
        // 0x267c10: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C14u;
        goto label_267c14;
    }
    ctx->pc = 0x267C0Cu;
    {
        const bool branch_taken_0x267c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267c0c) {
            ctx->pc = 0x267C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267C0Cu;
            // 0x267c10: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267C68u;
            goto label_267c68;
        }
    }
    ctx->pc = 0x267C14u;
label_267c14:
    // 0x267c14: 0xc041532  jal         func_1054C8
label_267c18:
    if (ctx->pc == 0x267C18u) {
        ctx->pc = 0x267C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C14u;
        // 0x267c18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C1Cu;
        goto label_267c1c;
    }
    ctx->pc = 0x267C14u;
    SET_GPR_U32(ctx, 31, 0x267C1Cu);
    ctx->pc = 0x267C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C14u;
    // 0x267c18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x267C14u, 0x267C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C1Cu;
label_267c1c:
    // 0x267c1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x267c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267c20:
    // 0x267c20: 0x52600010  beql        $s3, $zero, . + 4 + (0x10 << 2)
label_267c24:
    if (ctx->pc == 0x267C24u) {
        ctx->pc = 0x267C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C20u;
        // 0x267c24: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C28u;
        goto label_267c28;
    }
    ctx->pc = 0x267C20u;
    {
        const bool branch_taken_0x267c20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x267c20) {
            ctx->pc = 0x267C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267C20u;
            // 0x267c24: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267C64u;
            goto label_267c64;
        }
    }
    ctx->pc = 0x267C28u;
label_267c28:
    // 0x267c28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x267c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_267c2c:
    // 0x267c2c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x267c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_267c30:
    // 0x267c30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x267c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_267c34:
    // 0x267c34: 0x40f809  jalr        $v0
label_267c38:
    if (ctx->pc == 0x267C38u) {
        ctx->pc = 0x267C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C34u;
        // 0x267c38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C3Cu;
        goto label_267c3c;
    }
    ctx->pc = 0x267C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267C3Cu);
        ctx->pc = 0x267C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C34u;
        // 0x267c38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267C34u, 0x267C3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267C3Cu;
label_267c3c:
    // 0x267c3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x267c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_267c40:
    // 0x267c40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x267c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_267c44:
    // 0x267c44: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x267c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_267c48:
    // 0x267c48: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x267c48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_267c4c:
    // 0x267c4c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x267c4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267c50:
    // 0x267c50: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x267c50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_267c54:
    // 0x267c54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x267c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_267c58:
    // 0x267c58: 0xc041664  jal         func_105990
label_267c5c:
    if (ctx->pc == 0x267C5Cu) {
        ctx->pc = 0x267C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C58u;
        // 0x267c5c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C60u;
        goto label_267c60;
    }
    ctx->pc = 0x267C58u;
    SET_GPR_U32(ctx, 31, 0x267C60u);
    ctx->pc = 0x267C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C58u;
    // 0x267c5c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x267C58u, 0x267C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C60u;
label_267c60:
    // 0x267c60: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x267c60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267c64:
    // 0x267c64: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x267c64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267c68:
    // 0x267c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267c6c:
    // 0x267c6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_267c70:
    // 0x267c70: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x267c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_267c74:
    // 0x267c74: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x267c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_267c78:
    // 0x267c78: 0xc040698  jal         func_101A60
label_267c7c:
    if (ctx->pc == 0x267C7Cu) {
        ctx->pc = 0x267C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C78u;
        // 0x267c7c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C80u;
        goto label_267c80;
    }
    ctx->pc = 0x267C78u;
    SET_GPR_U32(ctx, 31, 0x267C80u);
    ctx->pc = 0x267C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C78u;
    // 0x267c7c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x267C78u, 0x267C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C80u;
label_267c80:
    // 0x267c80: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_267c84:
    if (ctx->pc == 0x267C84u) {
        ctx->pc = 0x267C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C80u;
        // 0x267c84: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C88u;
        goto label_267c88;
    }
    ctx->pc = 0x267C80u;
    {
        const bool branch_taken_0x267c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C80u;
        // 0x267c84: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c80) {
            ctx->pc = 0x267CF4u;
            goto label_267cf4;
        }
    }
    ctx->pc = 0x267C88u;
label_267c88:
    // 0x267c88: 0xc088ed2  jal         func_223B48
label_267c8c:
    if (ctx->pc == 0x267C8Cu) {
        ctx->pc = 0x267C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C88u;
        // 0x267c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C90u;
        goto label_267c90;
    }
    ctx->pc = 0x267C88u;
    SET_GPR_U32(ctx, 31, 0x267C90u);
    ctx->pc = 0x267C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C88u;
    // 0x267c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x267C88u, 0x267C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C90u;
label_267c90:
    // 0x267c90: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_267c94:
    if (ctx->pc == 0x267C94u) {
        ctx->pc = 0x267C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C90u;
        // 0x267c94: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C98u;
        goto label_267c98;
    }
    ctx->pc = 0x267C90u;
    {
        const bool branch_taken_0x267c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C90u;
        // 0x267c94: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c90) {
            ctx->pc = 0x267D64u;
            goto label_267d64;
        }
    }
    ctx->pc = 0x267C98u;
label_267c98:
    // 0x267c98: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x267c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_267c9c:
    // 0x267c9c: 0xc041532  jal         func_1054C8
label_267ca0:
    if (ctx->pc == 0x267CA0u) {
        ctx->pc = 0x267CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C9Cu;
        // 0x267ca0: 0x2444df28  addiu       $a0, $v0, -0x20D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267CA4u;
        goto label_267ca4;
    }
    ctx->pc = 0x267C9Cu;
    SET_GPR_U32(ctx, 31, 0x267CA4u);
    ctx->pc = 0x267CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C9Cu;
    // 0x267ca0: 0x2444df28  addiu       $a0, $v0, -0x20D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x267C9Cu, 0x267CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267CA4u;
label_267ca4:
    // 0x267ca4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x267ca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267ca8:
    // 0x267ca8: 0x5240002d  beql        $s2, $zero, . + 4 + (0x2D << 2)
label_267cac:
    if (ctx->pc == 0x267CACu) {
        ctx->pc = 0x267CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CA8u;
        // 0x267cac: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267CB0u;
        goto label_267cb0;
    }
    ctx->pc = 0x267CA8u;
    {
        const bool branch_taken_0x267ca8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x267ca8) {
            ctx->pc = 0x267CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267CA8u;
            // 0x267cac: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267D60u;
            goto label_267d60;
        }
    }
    ctx->pc = 0x267CB0u;
label_267cb0:
    // 0x267cb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x267cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_267cb4:
    // 0x267cb4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x267cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_267cb8:
    // 0x267cb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x267cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_267cbc:
    // 0x267cbc: 0x40f809  jalr        $v0
label_267cc0:
    if (ctx->pc == 0x267CC0u) {
        ctx->pc = 0x267CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CBCu;
        // 0x267cc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267CC4u;
        goto label_267cc4;
    }
    ctx->pc = 0x267CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267CC4u);
        ctx->pc = 0x267CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CBCu;
        // 0x267cc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267CBCu, 0x267CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267CC4u;
label_267cc4:
    // 0x267cc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x267cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_267cc8:
    // 0x267cc8: 0x16740004  bne         $s3, $s4, . + 4 + (0x4 << 2)
label_267ccc:
    if (ctx->pc == 0x267CCCu) {
        ctx->pc = 0x267CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CC8u;
        // 0x267ccc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267CD0u;
        goto label_267cd0;
    }
    ctx->pc = 0x267CC8u;
    {
        const bool branch_taken_0x267cc8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x267CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CC8u;
        // 0x267ccc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cc8) {
            ctx->pc = 0x267CDCu;
            goto label_267cdc;
        }
    }
    ctx->pc = 0x267CD0u;
label_267cd0:
    // 0x267cd0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x267cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_267cd4:
    // 0x267cd4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x267cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_267cd8:
    // 0x267cd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x267cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_267cdc:
    // 0x267cdc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x267cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_267ce0:
    // 0x267ce0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x267ce0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267ce4:
    // 0x267ce4: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x267ce4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_267ce8:
    // 0x267ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_267cec:
    // 0x267cec: 0x10000019  b           . + 4 + (0x19 << 2)
label_267cf0:
    if (ctx->pc == 0x267CF0u) {
        ctx->pc = 0x267CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CECu;
        // 0x267cf0: 0x24060134  addiu       $a2, $zero, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267CF4u;
        goto label_267cf4;
    }
    ctx->pc = 0x267CECu;
    {
        const bool branch_taken_0x267cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CECu;
        // 0x267cf0: 0x24060134  addiu       $a2, $zero, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cec) {
            ctx->pc = 0x267D54u;
            goto label_267d54;
        }
    }
    ctx->pc = 0x267CF4u;
label_267cf4:
    // 0x267cf4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_267cf8:
    if (ctx->pc == 0x267CF8u) {
        ctx->pc = 0x267CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CF4u;
        // 0x267cf8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267CFCu;
        goto label_267cfc;
    }
    ctx->pc = 0x267CF4u;
    {
        const bool branch_taken_0x267cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CF4u;
        // 0x267cf8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cf4) {
            ctx->pc = 0x267D64u;
            goto label_267d64;
        }
    }
    ctx->pc = 0x267CFCu;
label_267cfc:
    // 0x267cfc: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x267cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_267d00:
    // 0x267d00: 0xc041532  jal         func_1054C8
label_267d04:
    if (ctx->pc == 0x267D04u) {
        ctx->pc = 0x267D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D00u;
        // 0x267d04: 0x2464df28  addiu       $a0, $v1, -0x20D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D08u;
        goto label_267d08;
    }
    ctx->pc = 0x267D00u;
    SET_GPR_U32(ctx, 31, 0x267D08u);
    ctx->pc = 0x267D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D00u;
    // 0x267d04: 0x2464df28  addiu       $a0, $v1, -0x20D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x267D00u, 0x267D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D08u;
label_267d08:
    // 0x267d08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x267d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267d0c:
    // 0x267d0c: 0x52400014  beql        $s2, $zero, . + 4 + (0x14 << 2)
label_267d10:
    if (ctx->pc == 0x267D10u) {
        ctx->pc = 0x267D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D0Cu;
        // 0x267d10: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D14u;
        goto label_267d14;
    }
    ctx->pc = 0x267D0Cu;
    {
        const bool branch_taken_0x267d0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x267d0c) {
            ctx->pc = 0x267D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267D0Cu;
            // 0x267d10: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267D60u;
            goto label_267d60;
        }
    }
    ctx->pc = 0x267D14u;
label_267d14:
    // 0x267d14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x267d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_267d18:
    // 0x267d18: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x267d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_267d1c:
    // 0x267d1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x267d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_267d20:
    // 0x267d20: 0x40f809  jalr        $v0
label_267d24:
    if (ctx->pc == 0x267D24u) {
        ctx->pc = 0x267D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D20u;
        // 0x267d24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D28u;
        goto label_267d28;
    }
    ctx->pc = 0x267D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267D28u);
        ctx->pc = 0x267D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D20u;
        // 0x267d24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267D20u, 0x267D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267D28u;
label_267d28:
    // 0x267d28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x267d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_267d2c:
    // 0x267d2c: 0x16740004  bne         $s3, $s4, . + 4 + (0x4 << 2)
label_267d30:
    if (ctx->pc == 0x267D30u) {
        ctx->pc = 0x267D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D2Cu;
        // 0x267d30: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D34u;
        goto label_267d34;
    }
    ctx->pc = 0x267D2Cu;
    {
        const bool branch_taken_0x267d2c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x267D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D2Cu;
        // 0x267d30: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d2c) {
            ctx->pc = 0x267D40u;
            goto label_267d40;
        }
    }
    ctx->pc = 0x267D34u;
label_267d34:
    // 0x267d34: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x267d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_267d38:
    // 0x267d38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x267d38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_267d3c:
    // 0x267d3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x267d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_267d40:
    // 0x267d40: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x267d40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_267d44:
    // 0x267d44: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x267d44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267d48:
    // 0x267d48: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x267d48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_267d4c:
    // 0x267d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_267d50:
    // 0x267d50: 0x240600c6  addiu       $a2, $zero, 0xC6
    ctx->pc = 0x267d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_267d54:
    // 0x267d54: 0xc041664  jal         func_105990
label_267d58:
    if (ctx->pc == 0x267D58u) {
        ctx->pc = 0x267D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D54u;
        // 0x267d58: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D5Cu;
        goto label_267d5c;
    }
    ctx->pc = 0x267D54u;
    SET_GPR_U32(ctx, 31, 0x267D5Cu);
    ctx->pc = 0x267D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D54u;
    // 0x267d58: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x267D54u, 0x267D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D5Cu;
label_267d5c:
    // 0x267d5c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x267d5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267d60:
    // 0x267d60: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x267d60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267d64:
    // 0x267d64: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x267d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_267d68:
    // 0x267d68: 0xc041532  jal         func_1054C8
label_267d6c:
    if (ctx->pc == 0x267D6Cu) {
        ctx->pc = 0x267D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D68u;
        // 0x267d6c: 0x2444df28  addiu       $a0, $v0, -0x20D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D70u;
        goto label_267d70;
    }
    ctx->pc = 0x267D68u;
    SET_GPR_U32(ctx, 31, 0x267D70u);
    ctx->pc = 0x267D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D68u;
    // 0x267d6c: 0x2444df28  addiu       $a0, $v0, -0x20D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x267D68u, 0x267D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D70u;
label_267d70:
    // 0x267d70: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x267d70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267d74:
    // 0x267d74: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
label_267d78:
    if (ctx->pc == 0x267D78u) {
        ctx->pc = 0x267D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D74u;
        // 0x267d78: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D7Cu;
        goto label_267d7c;
    }
    ctx->pc = 0x267D74u;
    {
        const bool branch_taken_0x267d74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D74u;
        // 0x267d78: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d74) {
            ctx->pc = 0x267DF4u;
            goto label_267df4;
        }
    }
    ctx->pc = 0x267D7Cu;
label_267d7c:
    // 0x267d7c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x267d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_267d80:
    // 0x267d80: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x267d80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_267d84:
    // 0x267d84: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x267d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_267d88:
    // 0x267d88: 0x40f809  jalr        $v0
label_267d8c:
    if (ctx->pc == 0x267D8Cu) {
        ctx->pc = 0x267D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D88u;
        // 0x267d8c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D90u;
        goto label_267d90;
    }
    ctx->pc = 0x267D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267D90u);
        ctx->pc = 0x267D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D88u;
        // 0x267d8c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267D88u, 0x267D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267D90u;
label_267d90:
    // 0x267d90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x267d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_267d94:
    // 0x267d94: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x267d94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267d98:
    // 0x267d98: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x267d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_267d9c:
    // 0x267d9c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x267d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_267da0:
    // 0x267da0: 0x40f809  jalr        $v0
label_267da4:
    if (ctx->pc == 0x267DA4u) {
        ctx->pc = 0x267DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DA0u;
        // 0x267da4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DA8u;
        goto label_267da8;
    }
    ctx->pc = 0x267DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267DA8u);
        ctx->pc = 0x267DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DA0u;
        // 0x267da4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267DA0u, 0x267DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267DA8u;
label_267da8:
    // 0x267da8: 0x12540003  beq         $s2, $s4, . + 4 + (0x3 << 2)
label_267dac:
    if (ctx->pc == 0x267DACu) {
        ctx->pc = 0x267DB0u;
        goto label_267db0;
    }
    ctx->pc = 0x267DA8u;
    {
        const bool branch_taken_0x267da8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x267da8) {
            ctx->pc = 0x267DB8u;
            goto label_267db8;
        }
    }
    ctx->pc = 0x267DB0u;
label_267db0:
    // 0x267db0: 0x12930006  beq         $s4, $s3, . + 4 + (0x6 << 2)
label_267db4:
    if (ctx->pc == 0x267DB4u) {
        ctx->pc = 0x267DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DB0u;
        // 0x267db4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DB8u;
        goto label_267db8;
    }
    ctx->pc = 0x267DB0u;
    {
        const bool branch_taken_0x267db0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        ctx->pc = 0x267DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DB0u;
        // 0x267db4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267db0) {
            ctx->pc = 0x267DCCu;
            goto label_267dcc;
        }
    }
    ctx->pc = 0x267DB8u;
label_267db8:
    // 0x267db8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x267db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_267dbc:
    // 0x267dbc: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x267dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_267dc0:
    // 0x267dc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x267dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_267dc4:
    // 0x267dc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_267dc8:
    if (ctx->pc == 0x267DC8u) {
        ctx->pc = 0x267DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DC4u;
        // 0x267dc8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DCCu;
        goto label_267dcc;
    }
    ctx->pc = 0x267DC4u;
    {
        const bool branch_taken_0x267dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DC4u;
        // 0x267dc8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267dc4) {
            ctx->pc = 0x267DD0u;
            goto label_267dd0;
        }
    }
    ctx->pc = 0x267DCCu;
label_267dcc:
    // 0x267dcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x267dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_267dd0:
    // 0x267dd0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x267dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_267dd4:
    // 0x267dd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x267dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267dd8:
    // 0x267dd8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x267dd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_267ddc:
    // 0x267ddc: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x267ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_267de0:
    // 0x267de0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x267de0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267de4:
    // 0x267de4: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x267de4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_267de8:
    // 0x267de8: 0xc04229e  jal         func_108A78
label_267dec:
    if (ctx->pc == 0x267DECu) {
        ctx->pc = 0x267DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DE8u;
        // 0x267dec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267DF0u;
        goto label_267df0;
    }
    ctx->pc = 0x267DE8u;
    SET_GPR_U32(ctx, 31, 0x267DF0u);
    ctx->pc = 0x267DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267DE8u;
    // 0x267dec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x267DE8u, 0x267DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267DF0u;
label_267df0:
    // 0x267df0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x267df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_267df4:
    // 0x267df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267df8:
    // 0x267df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267dfc:
    // 0x267dfc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x267dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_267e00:
    // 0x267e00: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_267e04:
    // 0x267e04: 0xa4600118  sh          $zero, 0x118($v1)
    ctx->pc = 0x267e04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
label_267e08:
    // 0x267e08: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x267e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_267e0c:
    // 0x267e0c: 0xc089974  jal         func_2265D0
label_267e10:
    if (ctx->pc == 0x267E10u) {
        ctx->pc = 0x267E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E0Cu;
        // 0x267e10: 0xa4620144  sh          $v0, 0x144($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267E14u;
        goto label_267e14;
    }
    ctx->pc = 0x267E0Cu;
    SET_GPR_U32(ctx, 31, 0x267E14u);
    ctx->pc = 0x267E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267E0Cu;
    // 0x267e10: 0xa4620144  sh          $v0, 0x144($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x267E0Cu, 0x267E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267E14u;
label_267e14:
    // 0x267e14: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x267e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_267e18:
    // 0x267e18: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x267e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_267e1c:
    // 0x267e1c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x267e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_267e20:
    // 0x267e20: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x267e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_267e24:
    // 0x267e24: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x267e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_267e28:
    // 0x267e28: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x267e28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_267e2c:
    // 0x267e2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x267e2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_267e30:
    // 0x267e30: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x267e30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_267e34:
    // 0x267e34: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x267e34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_267e38:
    // 0x267e38: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x267e38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_267e3c:
    // 0x267e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_267e40:
    // 0x267e40: 0x3e00008  jr          $ra
label_267e44:
    if (ctx->pc == 0x267E44u) {
        ctx->pc = 0x267E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E40u;
        // 0x267e44: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267E48u;
        goto label_fallthrough_0x267e40;
    }
    ctx->pc = 0x267E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E40u;
        // 0x267e44: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x267e40:
    ctx->pc = 0x267E48u;
}
