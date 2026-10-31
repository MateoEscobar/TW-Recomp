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

// Function: sub_00271B30
// Address: 0x271b30 - 0x271ef0
void sub_00271B30_0x271b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271B30_0x271b30");
#endif

    switch (ctx->pc) {
        case 0x271b30u: goto label_271b30;
        case 0x271b34u: goto label_271b34;
        case 0x271b38u: goto label_271b38;
        case 0x271b3cu: goto label_271b3c;
        case 0x271b40u: goto label_271b40;
        case 0x271b44u: goto label_271b44;
        case 0x271b48u: goto label_271b48;
        case 0x271b4cu: goto label_271b4c;
        case 0x271b50u: goto label_271b50;
        case 0x271b54u: goto label_271b54;
        case 0x271b58u: goto label_271b58;
        case 0x271b5cu: goto label_271b5c;
        case 0x271b60u: goto label_271b60;
        case 0x271b64u: goto label_271b64;
        case 0x271b68u: goto label_271b68;
        case 0x271b6cu: goto label_271b6c;
        case 0x271b70u: goto label_271b70;
        case 0x271b74u: goto label_271b74;
        case 0x271b78u: goto label_271b78;
        case 0x271b7cu: goto label_271b7c;
        case 0x271b80u: goto label_271b80;
        case 0x271b84u: goto label_271b84;
        case 0x271b88u: goto label_271b88;
        case 0x271b8cu: goto label_271b8c;
        case 0x271b90u: goto label_271b90;
        case 0x271b94u: goto label_271b94;
        case 0x271b98u: goto label_271b98;
        case 0x271b9cu: goto label_271b9c;
        case 0x271ba0u: goto label_271ba0;
        case 0x271ba4u: goto label_271ba4;
        case 0x271ba8u: goto label_271ba8;
        case 0x271bacu: goto label_271bac;
        case 0x271bb0u: goto label_271bb0;
        case 0x271bb4u: goto label_271bb4;
        case 0x271bb8u: goto label_271bb8;
        case 0x271bbcu: goto label_271bbc;
        case 0x271bc0u: goto label_271bc0;
        case 0x271bc4u: goto label_271bc4;
        case 0x271bc8u: goto label_271bc8;
        case 0x271bccu: goto label_271bcc;
        case 0x271bd0u: goto label_271bd0;
        case 0x271bd4u: goto label_271bd4;
        case 0x271bd8u: goto label_271bd8;
        case 0x271bdcu: goto label_271bdc;
        case 0x271be0u: goto label_271be0;
        case 0x271be4u: goto label_271be4;
        case 0x271be8u: goto label_271be8;
        case 0x271becu: goto label_271bec;
        case 0x271bf0u: goto label_271bf0;
        case 0x271bf4u: goto label_271bf4;
        case 0x271bf8u: goto label_271bf8;
        case 0x271bfcu: goto label_271bfc;
        case 0x271c00u: goto label_271c00;
        case 0x271c04u: goto label_271c04;
        case 0x271c08u: goto label_271c08;
        case 0x271c0cu: goto label_271c0c;
        case 0x271c10u: goto label_271c10;
        case 0x271c14u: goto label_271c14;
        case 0x271c18u: goto label_271c18;
        case 0x271c1cu: goto label_271c1c;
        case 0x271c20u: goto label_271c20;
        case 0x271c24u: goto label_271c24;
        case 0x271c28u: goto label_271c28;
        case 0x271c2cu: goto label_271c2c;
        case 0x271c30u: goto label_271c30;
        case 0x271c34u: goto label_271c34;
        case 0x271c38u: goto label_271c38;
        case 0x271c3cu: goto label_271c3c;
        case 0x271c40u: goto label_271c40;
        case 0x271c44u: goto label_271c44;
        case 0x271c48u: goto label_271c48;
        case 0x271c4cu: goto label_271c4c;
        case 0x271c50u: goto label_271c50;
        case 0x271c54u: goto label_271c54;
        case 0x271c58u: goto label_271c58;
        case 0x271c5cu: goto label_271c5c;
        case 0x271c60u: goto label_271c60;
        case 0x271c64u: goto label_271c64;
        case 0x271c68u: goto label_271c68;
        case 0x271c6cu: goto label_271c6c;
        case 0x271c70u: goto label_271c70;
        case 0x271c74u: goto label_271c74;
        case 0x271c78u: goto label_271c78;
        case 0x271c7cu: goto label_271c7c;
        case 0x271c80u: goto label_271c80;
        case 0x271c84u: goto label_271c84;
        case 0x271c88u: goto label_271c88;
        case 0x271c8cu: goto label_271c8c;
        case 0x271c90u: goto label_271c90;
        case 0x271c94u: goto label_271c94;
        case 0x271c98u: goto label_271c98;
        case 0x271c9cu: goto label_271c9c;
        case 0x271ca0u: goto label_271ca0;
        case 0x271ca4u: goto label_271ca4;
        case 0x271ca8u: goto label_271ca8;
        case 0x271cacu: goto label_271cac;
        case 0x271cb0u: goto label_271cb0;
        case 0x271cb4u: goto label_271cb4;
        case 0x271cb8u: goto label_271cb8;
        case 0x271cbcu: goto label_271cbc;
        case 0x271cc0u: goto label_271cc0;
        case 0x271cc4u: goto label_271cc4;
        case 0x271cc8u: goto label_271cc8;
        case 0x271cccu: goto label_271ccc;
        case 0x271cd0u: goto label_271cd0;
        case 0x271cd4u: goto label_271cd4;
        case 0x271cd8u: goto label_271cd8;
        case 0x271cdcu: goto label_271cdc;
        case 0x271ce0u: goto label_271ce0;
        case 0x271ce4u: goto label_271ce4;
        case 0x271ce8u: goto label_271ce8;
        case 0x271cecu: goto label_271cec;
        case 0x271cf0u: goto label_271cf0;
        case 0x271cf4u: goto label_271cf4;
        case 0x271cf8u: goto label_271cf8;
        case 0x271cfcu: goto label_271cfc;
        case 0x271d00u: goto label_271d00;
        case 0x271d04u: goto label_271d04;
        case 0x271d08u: goto label_271d08;
        case 0x271d0cu: goto label_271d0c;
        case 0x271d10u: goto label_271d10;
        case 0x271d14u: goto label_271d14;
        case 0x271d18u: goto label_271d18;
        case 0x271d1cu: goto label_271d1c;
        case 0x271d20u: goto label_271d20;
        case 0x271d24u: goto label_271d24;
        case 0x271d28u: goto label_271d28;
        case 0x271d2cu: goto label_271d2c;
        case 0x271d30u: goto label_271d30;
        case 0x271d34u: goto label_271d34;
        case 0x271d38u: goto label_271d38;
        case 0x271d3cu: goto label_271d3c;
        case 0x271d40u: goto label_271d40;
        case 0x271d44u: goto label_271d44;
        case 0x271d48u: goto label_271d48;
        case 0x271d4cu: goto label_271d4c;
        case 0x271d50u: goto label_271d50;
        case 0x271d54u: goto label_271d54;
        case 0x271d58u: goto label_271d58;
        case 0x271d5cu: goto label_271d5c;
        case 0x271d60u: goto label_271d60;
        case 0x271d64u: goto label_271d64;
        case 0x271d68u: goto label_271d68;
        case 0x271d6cu: goto label_271d6c;
        case 0x271d70u: goto label_271d70;
        case 0x271d74u: goto label_271d74;
        case 0x271d78u: goto label_271d78;
        case 0x271d7cu: goto label_271d7c;
        case 0x271d80u: goto label_271d80;
        case 0x271d84u: goto label_271d84;
        case 0x271d88u: goto label_271d88;
        case 0x271d8cu: goto label_271d8c;
        case 0x271d90u: goto label_271d90;
        case 0x271d94u: goto label_271d94;
        case 0x271d98u: goto label_271d98;
        case 0x271d9cu: goto label_271d9c;
        case 0x271da0u: goto label_271da0;
        case 0x271da4u: goto label_271da4;
        case 0x271da8u: goto label_271da8;
        case 0x271dacu: goto label_271dac;
        case 0x271db0u: goto label_271db0;
        case 0x271db4u: goto label_271db4;
        case 0x271db8u: goto label_271db8;
        case 0x271dbcu: goto label_271dbc;
        case 0x271dc0u: goto label_271dc0;
        case 0x271dc4u: goto label_271dc4;
        case 0x271dc8u: goto label_271dc8;
        case 0x271dccu: goto label_271dcc;
        case 0x271dd0u: goto label_271dd0;
        case 0x271dd4u: goto label_271dd4;
        case 0x271dd8u: goto label_271dd8;
        case 0x271ddcu: goto label_271ddc;
        case 0x271de0u: goto label_271de0;
        case 0x271de4u: goto label_271de4;
        case 0x271de8u: goto label_271de8;
        case 0x271decu: goto label_271dec;
        case 0x271df0u: goto label_271df0;
        case 0x271df4u: goto label_271df4;
        case 0x271df8u: goto label_271df8;
        case 0x271dfcu: goto label_271dfc;
        case 0x271e00u: goto label_271e00;
        case 0x271e04u: goto label_271e04;
        case 0x271e08u: goto label_271e08;
        case 0x271e0cu: goto label_271e0c;
        case 0x271e10u: goto label_271e10;
        case 0x271e14u: goto label_271e14;
        case 0x271e18u: goto label_271e18;
        case 0x271e1cu: goto label_271e1c;
        case 0x271e20u: goto label_271e20;
        case 0x271e24u: goto label_271e24;
        case 0x271e28u: goto label_271e28;
        case 0x271e2cu: goto label_271e2c;
        case 0x271e30u: goto label_271e30;
        case 0x271e34u: goto label_271e34;
        case 0x271e38u: goto label_271e38;
        case 0x271e3cu: goto label_271e3c;
        case 0x271e40u: goto label_271e40;
        case 0x271e44u: goto label_271e44;
        case 0x271e48u: goto label_271e48;
        case 0x271e4cu: goto label_271e4c;
        case 0x271e50u: goto label_271e50;
        case 0x271e54u: goto label_271e54;
        case 0x271e58u: goto label_271e58;
        case 0x271e5cu: goto label_271e5c;
        case 0x271e60u: goto label_271e60;
        case 0x271e64u: goto label_271e64;
        case 0x271e68u: goto label_271e68;
        case 0x271e6cu: goto label_271e6c;
        case 0x271e70u: goto label_271e70;
        case 0x271e74u: goto label_271e74;
        case 0x271e78u: goto label_271e78;
        case 0x271e7cu: goto label_271e7c;
        case 0x271e80u: goto label_271e80;
        case 0x271e84u: goto label_271e84;
        case 0x271e88u: goto label_271e88;
        case 0x271e8cu: goto label_271e8c;
        case 0x271e90u: goto label_271e90;
        case 0x271e94u: goto label_271e94;
        case 0x271e98u: goto label_271e98;
        case 0x271e9cu: goto label_271e9c;
        case 0x271ea0u: goto label_271ea0;
        case 0x271ea4u: goto label_271ea4;
        case 0x271ea8u: goto label_271ea8;
        case 0x271eacu: goto label_271eac;
        case 0x271eb0u: goto label_271eb0;
        case 0x271eb4u: goto label_271eb4;
        case 0x271eb8u: goto label_271eb8;
        case 0x271ebcu: goto label_271ebc;
        case 0x271ec0u: goto label_271ec0;
        case 0x271ec4u: goto label_271ec4;
        case 0x271ec8u: goto label_271ec8;
        case 0x271eccu: goto label_271ecc;
        case 0x271ed0u: goto label_271ed0;
        case 0x271ed4u: goto label_271ed4;
        case 0x271ed8u: goto label_271ed8;
        case 0x271edcu: goto label_271edc;
        case 0x271ee0u: goto label_271ee0;
        case 0x271ee4u: goto label_271ee4;
        case 0x271ee8u: goto label_271ee8;
        case 0x271eecu: goto label_271eec;
        default: break;
    }

    ctx->pc = 0x271b30u;

label_271b30:
    // 0x271b30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x271b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_271b34:
    // 0x271b34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x271b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271b38:
    // 0x271b38: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x271b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_271b3c:
    // 0x271b3c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x271b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_271b40:
    // 0x271b40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x271b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_271b44:
    // 0x271b44: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x271b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_271b48:
    // 0x271b48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x271b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_271b4c:
    // 0x271b4c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x271b4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_271b50:
    // 0x271b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271b54:
    // 0x271b54: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x271b54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_271b58:
    // 0x271b58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x271b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271b5c:
    // 0x271b5c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x271b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_271b60:
    // 0x271b60: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x271b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_271b64:
    // 0x271b64: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x271b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_271b68:
    // 0x271b68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x271b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_271b6c:
    // 0x271b6c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x271b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_271b70:
    // 0x271b70: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x271b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_271b74:
    // 0x271b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x271b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_271b78:
    // 0x271b78: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x271b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_271b7c:
    // 0x271b7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x271b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_271b80:
    // 0x271b80: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x271b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_271b84:
    // 0x271b84: 0xc099cb4  jal         func_2672D0
label_271b88:
    if (ctx->pc == 0x271B88u) {
        ctx->pc = 0x271B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B84u;
        // 0x271b88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271B8Cu;
        goto label_271b8c;
    }
    ctx->pc = 0x271B84u;
    SET_GPR_U32(ctx, 31, 0x271B8Cu);
    ctx->pc = 0x271B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271B84u;
    // 0x271b88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x271B84u, 0x271B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B8Cu;
label_271b8c:
    // 0x271b8c: 0x245700ed  addiu       $s7, $v0, 0xED
    ctx->pc = 0x271b8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 237));
label_271b90:
    // 0x271b90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271b94:
    // 0x271b94: 0xc08a658  jal         func_229960
label_271b98:
    if (ctx->pc == 0x271B98u) {
        ctx->pc = 0x271B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B94u;
        // 0x271b98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271B9Cu;
        goto label_271b9c;
    }
    ctx->pc = 0x271B94u;
    SET_GPR_U32(ctx, 31, 0x271B9Cu);
    ctx->pc = 0x271B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271B94u;
    // 0x271b98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x271B94u, 0x271B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B9Cu;
label_271b9c:
    // 0x271b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271ba0:
    // 0x271ba0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x271ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_271ba4:
    // 0x271ba4: 0xc095142  jal         func_254508
label_271ba8:
    if (ctx->pc == 0x271BA8u) {
        ctx->pc = 0x271BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BA4u;
        // 0x271ba8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BACu;
        goto label_271bac;
    }
    ctx->pc = 0x271BA4u;
    SET_GPR_U32(ctx, 31, 0x271BACu);
    ctx->pc = 0x271BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BA4u;
    // 0x271ba8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x271BA4u, 0x271BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BACu;
label_271bac:
    // 0x271bac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x271bacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_271bb0:
    // 0x271bb0: 0xc087502  jal         func_21D408
label_271bb4:
    if (ctx->pc == 0x271BB4u) {
        ctx->pc = 0x271BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BB0u;
        // 0x271bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BB8u;
        goto label_271bb8;
    }
    ctx->pc = 0x271BB0u;
    SET_GPR_U32(ctx, 31, 0x271BB8u);
    ctx->pc = 0x271BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BB0u;
    // 0x271bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x271BB0u, 0x271BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BB8u;
label_271bb8:
    // 0x271bb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x271bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_271bbc:
    // 0x271bbc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_271bc0:
    if (ctx->pc == 0x271BC0u) {
        ctx->pc = 0x271BC4u;
        goto label_271bc4;
    }
    ctx->pc = 0x271BBCu;
    {
        const bool branch_taken_0x271bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271bbc) {
            ctx->pc = 0x271BD4u;
            goto label_271bd4;
        }
    }
    ctx->pc = 0x271BC4u;
label_271bc4:
    // 0x271bc4: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x271bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_271bc8:
    // 0x271bc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x271bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_271bcc:
    // 0x271bcc: 0x0  nop
    ctx->pc = 0x271bccu;
    // NOP
label_271bd0:
    // 0x271bd0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x271bd0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_271bd4:
    // 0x271bd4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x271bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_271bd8:
    // 0x271bd8: 0x0  nop
    ctx->pc = 0x271bd8u;
    // NOP
label_271bdc:
    // 0x271bdc: 0x450100b6  bc1t        . + 4 + (0xB6 << 2)
label_271be0:
    if (ctx->pc == 0x271BE0u) {
        ctx->pc = 0x271BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BDCu;
        // 0x271be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BE4u;
        goto label_271be4;
    }
    ctx->pc = 0x271BDCu;
    {
        const bool branch_taken_0x271bdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x271BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BDCu;
        // 0x271be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271bdc) {
            ctx->pc = 0x271EB8u;
            goto label_271eb8;
        }
    }
    ctx->pc = 0x271BE4u;
label_271be4:
    // 0x271be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271be8:
    // 0x271be8: 0xc0895a8  jal         func_2256A0
label_271bec:
    if (ctx->pc == 0x271BECu) {
        ctx->pc = 0x271BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BE8u;
        // 0x271bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BF0u;
        goto label_271bf0;
    }
    ctx->pc = 0x271BE8u;
    SET_GPR_U32(ctx, 31, 0x271BF0u);
    ctx->pc = 0x271BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BE8u;
    // 0x271bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2256A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2256A0u, 0x271BE8u, 0x271BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BF0u;
label_271bf0:
    // 0x271bf0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_271bf4:
    if (ctx->pc == 0x271BF4u) {
        ctx->pc = 0x271BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BF0u;
        // 0x271bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BF8u;
        goto label_271bf8;
    }
    ctx->pc = 0x271BF0u;
    {
        const bool branch_taken_0x271bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BF0u;
        // 0x271bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271bf0) {
            ctx->pc = 0x271C60u;
            goto label_271c60;
        }
    }
    ctx->pc = 0x271BF8u;
label_271bf8:
    // 0x271bf8: 0x3c058fc5  lui         $a1, 0x8FC5
    ctx->pc = 0x271bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36805 << 16));
label_271bfc:
    // 0x271bfc: 0xc089998  jal         func_226660
label_271c00:
    if (ctx->pc == 0x271C00u) {
        ctx->pc = 0x271C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BFCu;
        // 0x271c00: 0x34a57a60  ori         $a1, $a1, 0x7A60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31328);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C04u;
        goto label_271c04;
    }
    ctx->pc = 0x271BFCu;
    SET_GPR_U32(ctx, 31, 0x271C04u);
    ctx->pc = 0x271C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BFCu;
    // 0x271c00: 0x34a57a60  ori         $a1, $a1, 0x7A60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31328);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x271BFCu, 0x271C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C04u;
label_271c04:
    // 0x271c04: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
label_271c08:
    if (ctx->pc == 0x271C08u) {
        ctx->pc = 0x271C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C04u;
        // 0x271c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C0Cu;
        goto label_271c0c;
    }
    ctx->pc = 0x271C04u;
    {
        const bool branch_taken_0x271c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C04u;
        // 0x271c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c04) {
            ctx->pc = 0x271EB8u;
            goto label_271eb8;
        }
    }
    ctx->pc = 0x271C0Cu;
label_271c0c:
    // 0x271c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271c10:
    // 0x271c10: 0xc089998  jal         func_226660
label_271c14:
    if (ctx->pc == 0x271C14u) {
        ctx->pc = 0x271C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C10u;
        // 0x271c14: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C18u;
        goto label_271c18;
    }
    ctx->pc = 0x271C10u;
    SET_GPR_U32(ctx, 31, 0x271C18u);
    ctx->pc = 0x271C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C10u;
    // 0x271c14: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x271C10u, 0x271C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C18u;
label_271c18:
    // 0x271c18: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_271c1c:
    if (ctx->pc == 0x271C1Cu) {
        ctx->pc = 0x271C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C18u;
        // 0x271c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C20u;
        goto label_271c20;
    }
    ctx->pc = 0x271C18u;
    {
        const bool branch_taken_0x271c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C18u;
        // 0x271c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c18) {
            ctx->pc = 0x271C84u;
            goto label_271c84;
        }
    }
    ctx->pc = 0x271C20u;
label_271c20:
    // 0x271c20: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x271c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_271c24:
    // 0x271c24: 0xc089998  jal         func_226660
label_271c28:
    if (ctx->pc == 0x271C28u) {
        ctx->pc = 0x271C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C24u;
        // 0x271c28: 0x34a57fff  ori         $a1, $a1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C2Cu;
        goto label_271c2c;
    }
    ctx->pc = 0x271C24u;
    SET_GPR_U32(ctx, 31, 0x271C2Cu);
    ctx->pc = 0x271C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C24u;
    // 0x271c28: 0x34a57fff  ori         $a1, $a1, 0x7FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x271C24u, 0x271C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C2Cu;
label_271c2c:
    // 0x271c2c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_271c30:
    if (ctx->pc == 0x271C30u) {
        ctx->pc = 0x271C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C2Cu;
        // 0x271c30: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C34u;
        goto label_271c34;
    }
    ctx->pc = 0x271C2Cu;
    {
        const bool branch_taken_0x271c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C2Cu;
        // 0x271c30: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c2c) {
            ctx->pc = 0x271C88u;
            goto label_271c88;
        }
    }
    ctx->pc = 0x271C34u;
label_271c34:
    // 0x271c34: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x271c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_271c38:
    // 0x271c38: 0xc05dc36  jal         func_1770D8
label_271c3c:
    if (ctx->pc == 0x271C3Cu) {
        ctx->pc = 0x271C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C38u;
        // 0x271c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C40u;
        goto label_271c40;
    }
    ctx->pc = 0x271C38u;
    SET_GPR_U32(ctx, 31, 0x271C40u);
    ctx->pc = 0x271C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C38u;
    // 0x271c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770D8u, 0x271C38u, 0x271C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C40u;
label_271c40:
    // 0x271c40: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x271c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_271c44:
    // 0x271c44: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x271c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_271c48:
    // 0x271c48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x271c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_271c4c:
    // 0x271c4c: 0x0  nop
    ctx->pc = 0x271c4cu;
    // NOP
label_271c50:
    // 0x271c50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x271c50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_271c54:
    // 0x271c54: 0x0  nop
    ctx->pc = 0x271c54u;
    // NOP
label_271c58:
    // 0x271c58: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_271c5c:
    if (ctx->pc == 0x271C5Cu) {
        ctx->pc = 0x271C60u;
        goto label_271c60;
    }
    ctx->pc = 0x271C58u;
    {
        const bool branch_taken_0x271c58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271c58) {
            ctx->pc = 0x271C68u;
            goto label_271c68;
        }
    }
    ctx->pc = 0x271C60u;
label_271c60:
    // 0x271c60: 0x10000095  b           . + 4 + (0x95 << 2)
label_271c64:
    if (ctx->pc == 0x271C64u) {
        ctx->pc = 0x271C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C60u;
        // 0x271c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C68u;
        goto label_271c68;
    }
    ctx->pc = 0x271C60u;
    {
        const bool branch_taken_0x271c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C60u;
        // 0x271c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c60) {
            ctx->pc = 0x271EB8u;
            goto label_271eb8;
        }
    }
    ctx->pc = 0x271C68u;
label_271c68:
    // 0x271c68: 0xc05d484  jal         func_175210
label_271c6c:
    if (ctx->pc == 0x271C6Cu) {
        ctx->pc = 0x271C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C68u;
        // 0x271c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C70u;
        goto label_271c70;
    }
    ctx->pc = 0x271C68u;
    SET_GPR_U32(ctx, 31, 0x271C70u);
    ctx->pc = 0x271C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C68u;
    // 0x271c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x271C68u, 0x271C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C70u;
label_271c70:
    // 0x271c70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x271c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_271c74:
    // 0x271c74: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x271c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_271c78:
    // 0x271c78: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x271c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_271c7c:
    // 0x271c7c: 0xa0f809  jalr        $a1
label_271c80:
    if (ctx->pc == 0x271C80u) {
        ctx->pc = 0x271C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C7Cu;
        // 0x271c80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271C84u;
        goto label_271c84;
    }
    ctx->pc = 0x271C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x271C84u);
        ctx->pc = 0x271C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C7Cu;
        // 0x271c80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271C7Cu, 0x271C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271C84u;
label_271c84:
    // 0x271c84: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x271c84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_271c88:
    // 0x271c88: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x271c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_271c8c:
    // 0x271c8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x271c8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_271c90:
    // 0x271c90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x271c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_271c94:
    // 0x271c94: 0x2610e250  addiu       $s0, $s0, -0x1DB0
    ctx->pc = 0x271c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959696));
label_271c98:
    // 0x271c98: 0xc041532  jal         func_1054C8
label_271c9c:
    if (ctx->pc == 0x271C9Cu) {
        ctx->pc = 0x271C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C98u;
        // 0x271c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CA0u;
        goto label_271ca0;
    }
    ctx->pc = 0x271C98u;
    SET_GPR_U32(ctx, 31, 0x271CA0u);
    ctx->pc = 0x271C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C98u;
    // 0x271c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271C98u, 0x271CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CA0u;
label_271ca0:
    // 0x271ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271ca4:
    // 0x271ca4: 0xc041532  jal         func_1054C8
label_271ca8:
    if (ctx->pc == 0x271CA8u) {
        ctx->pc = 0x271CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CA4u;
        // 0x271ca8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CACu;
        goto label_271cac;
    }
    ctx->pc = 0x271CA4u;
    SET_GPR_U32(ctx, 31, 0x271CACu);
    ctx->pc = 0x271CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CA4u;
    // 0x271ca8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271CA4u, 0x271CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CACu;
label_271cac:
    // 0x271cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271cb0:
    // 0x271cb0: 0xc041532  jal         func_1054C8
label_271cb4:
    if (ctx->pc == 0x271CB4u) {
        ctx->pc = 0x271CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CB0u;
        // 0x271cb4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CB8u;
        goto label_271cb8;
    }
    ctx->pc = 0x271CB0u;
    SET_GPR_U32(ctx, 31, 0x271CB8u);
    ctx->pc = 0x271CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CB0u;
    // 0x271cb4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271CB0u, 0x271CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CB8u;
label_271cb8:
    // 0x271cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271cbc:
    // 0x271cbc: 0xc041532  jal         func_1054C8
label_271cc0:
    if (ctx->pc == 0x271CC0u) {
        ctx->pc = 0x271CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CBCu;
        // 0x271cc0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CC4u;
        goto label_271cc4;
    }
    ctx->pc = 0x271CBCu;
    SET_GPR_U32(ctx, 31, 0x271CC4u);
    ctx->pc = 0x271CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CBCu;
    // 0x271cc0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271CBCu, 0x271CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CC4u;
label_271cc4:
    // 0x271cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271cc8:
    // 0x271cc8: 0xc041532  jal         func_1054C8
label_271ccc:
    if (ctx->pc == 0x271CCCu) {
        ctx->pc = 0x271CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CC8u;
        // 0x271ccc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CD0u;
        goto label_271cd0;
    }
    ctx->pc = 0x271CC8u;
    SET_GPR_U32(ctx, 31, 0x271CD0u);
    ctx->pc = 0x271CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CC8u;
    // 0x271ccc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271CC8u, 0x271CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CD0u;
label_271cd0:
    // 0x271cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271cd4:
    // 0x271cd4: 0xc041532  jal         func_1054C8
label_271cd8:
    if (ctx->pc == 0x271CD8u) {
        ctx->pc = 0x271CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CD4u;
        // 0x271cd8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CDCu;
        goto label_271cdc;
    }
    ctx->pc = 0x271CD4u;
    SET_GPR_U32(ctx, 31, 0x271CDCu);
    ctx->pc = 0x271CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CD4u;
    // 0x271cd8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271CD4u, 0x271CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CDCu;
label_271cdc:
    // 0x271cdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271ce0:
    // 0x271ce0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x271ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271ce4:
    // 0x271ce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271ce8:
    // 0x271ce8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x271ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_271cec:
    // 0x271cec: 0xc09d872  jal         func_2761C8
label_271cf0:
    if (ctx->pc == 0x271CF0u) {
        ctx->pc = 0x271CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CECu;
        // 0x271cf0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271CF4u;
        goto label_271cf4;
    }
    ctx->pc = 0x271CECu;
    SET_GPR_U32(ctx, 31, 0x271CF4u);
    ctx->pc = 0x271CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CECu;
    // 0x271cf0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761C8u, 0x271CECu, 0x271CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CF4u;
label_271cf4:
    // 0x271cf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271cf8:
    // 0x271cf8: 0xc08aff4  jal         func_22BFD0
label_271cfc:
    if (ctx->pc == 0x271CFCu) {
        ctx->pc = 0x271CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CF8u;
        // 0x271cfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D00u;
        goto label_271d00;
    }
    ctx->pc = 0x271CF8u;
    SET_GPR_U32(ctx, 31, 0x271D00u);
    ctx->pc = 0x271CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CF8u;
    // 0x271cfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFD0u, 0x271CF8u, 0x271D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D00u;
label_271d00:
    // 0x271d00: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_271d04:
    if (ctx->pc == 0x271D04u) {
        ctx->pc = 0x271D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D00u;
        // 0x271d04: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D08u;
        goto label_271d08;
    }
    ctx->pc = 0x271D00u;
    {
        const bool branch_taken_0x271d00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D00u;
        // 0x271d04: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d00) {
            ctx->pc = 0x271D24u;
            goto label_271d24;
        }
    }
    ctx->pc = 0x271D08u;
label_271d08:
    // 0x271d08: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x271d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_271d0c:
    // 0x271d0c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x271d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_271d10:
    // 0x271d10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x271d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271d14:
    // 0x271d14: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x271d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_271d18:
    // 0x271d18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x271d18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271d1c:
    // 0x271d1c: 0xc04159e  jal         func_105678
label_271d20:
    if (ctx->pc == 0x271D20u) {
        ctx->pc = 0x271D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D1Cu;
        // 0x271d20: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D24u;
        goto label_271d24;
    }
    ctx->pc = 0x271D1Cu;
    SET_GPR_U32(ctx, 31, 0x271D24u);
    ctx->pc = 0x271D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271D1Cu;
    // 0x271d20: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x271D1Cu, 0x271D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D24u;
label_271d24:
    // 0x271d24: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_271d28:
    if (ctx->pc == 0x271D28u) {
        ctx->pc = 0x271D2Cu;
        goto label_271d2c;
    }
    ctx->pc = 0x271D24u;
    {
        const bool branch_taken_0x271d24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x271d24) {
            ctx->pc = 0x271D68u;
            goto label_271d68;
        }
    }
    ctx->pc = 0x271D2Cu;
label_271d2c:
    // 0x271d2c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x271d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_271d30:
    // 0x271d30: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x271d30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_271d34:
    // 0x271d34: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x271d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_271d38:
    // 0x271d38: 0x40f809  jalr        $v0
label_271d3c:
    if (ctx->pc == 0x271D3Cu) {
        ctx->pc = 0x271D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D38u;
        // 0x271d3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D40u;
        goto label_271d40;
    }
    ctx->pc = 0x271D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x271D40u);
        ctx->pc = 0x271D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D38u;
        // 0x271d3c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271D38u, 0x271D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271D40u;
label_271d40:
    // 0x271d40: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x271d40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_271d44:
    // 0x271d44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x271d44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_271d48:
    // 0x271d48: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x271d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_271d4c:
    // 0x271d4c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x271d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_271d50:
    // 0x271d50: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x271d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271d54:
    // 0x271d54: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x271d54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271d58:
    // 0x271d58: 0x254a00a8  addiu       $t2, $t2, 0xA8
    ctx->pc = 0x271d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 168));
label_271d5c:
    // 0x271d5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271d60:
    // 0x271d60: 0xc041664  jal         func_105990
label_271d64:
    if (ctx->pc == 0x271D64u) {
        ctx->pc = 0x271D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D60u;
        // 0x271d64: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D68u;
        goto label_271d68;
    }
    ctx->pc = 0x271D60u;
    SET_GPR_U32(ctx, 31, 0x271D68u);
    ctx->pc = 0x271D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271D60u;
    // 0x271d64: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x271D60u, 0x271D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D68u;
label_271d68:
    // 0x271d68: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_271d6c:
    if (ctx->pc == 0x271D6Cu) {
        ctx->pc = 0x271D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D68u;
        // 0x271d6c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D70u;
        goto label_271d70;
    }
    ctx->pc = 0x271D68u;
    {
        const bool branch_taken_0x271d68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D68u;
        // 0x271d6c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d68) {
            ctx->pc = 0x271D88u;
            goto label_271d88;
        }
    }
    ctx->pc = 0x271D70u;
label_271d70:
    // 0x271d70: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x271d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_271d74:
    // 0x271d74: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x271d74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_271d78:
    // 0x271d78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x271d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_271d7c:
    // 0x271d7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x271d7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_271d80:
    // 0x271d80: 0xc041b20  jal         func_106C80
label_271d84:
    if (ctx->pc == 0x271D84u) {
        ctx->pc = 0x271D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D80u;
        // 0x271d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D88u;
        goto label_271d88;
    }
    ctx->pc = 0x271D80u;
    SET_GPR_U32(ctx, 31, 0x271D88u);
    ctx->pc = 0x271D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271D80u;
    // 0x271d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x271D80u, 0x271D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D88u;
label_271d88:
    // 0x271d88: 0xc05d484  jal         func_175210
label_271d8c:
    if (ctx->pc == 0x271D8Cu) {
        ctx->pc = 0x271D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D88u;
        // 0x271d8c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D90u;
        goto label_271d90;
    }
    ctx->pc = 0x271D88u;
    SET_GPR_U32(ctx, 31, 0x271D90u);
    ctx->pc = 0x271D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271D88u;
    // 0x271d8c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x271D88u, 0x271D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D90u;
label_271d90:
    // 0x271d90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x271d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_271d94:
    // 0x271d94: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x271d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_271d98:
    // 0x271d98: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x271d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_271d9c:
    // 0x271d9c: 0xa0f809  jalr        $a1
label_271da0:
    if (ctx->pc == 0x271DA0u) {
        ctx->pc = 0x271DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D9Cu;
        // 0x271da0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DA4u;
        goto label_271da4;
    }
    ctx->pc = 0x271D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x271DA4u);
        ctx->pc = 0x271DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D9Cu;
        // 0x271da0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271D9Cu, 0x271DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271DA4u;
label_271da4:
    // 0x271da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271da8:
    // 0x271da8: 0xc087016  jal         func_21C058
label_271dac:
    if (ctx->pc == 0x271DACu) {
        ctx->pc = 0x271DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DA8u;
        // 0x271dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DB0u;
        goto label_271db0;
    }
    ctx->pc = 0x271DA8u;
    SET_GPR_U32(ctx, 31, 0x271DB0u);
    ctx->pc = 0x271DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DA8u;
    // 0x271dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x271DA8u, 0x271DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DB0u;
label_271db0:
    // 0x271db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271db4:
    // 0x271db4: 0xc089990  jal         func_226640
label_271db8:
    if (ctx->pc == 0x271DB8u) {
        ctx->pc = 0x271DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DB4u;
        // 0x271db8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DBCu;
        goto label_271dbc;
    }
    ctx->pc = 0x271DB4u;
    SET_GPR_U32(ctx, 31, 0x271DBCu);
    ctx->pc = 0x271DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DB4u;
    // 0x271db8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x271DB4u, 0x271DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DBCu;
label_271dbc:
    // 0x271dbc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x271dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_271dc0:
    // 0x271dc0: 0xc05d53a  jal         func_1754E8
label_271dc4:
    if (ctx->pc == 0x271DC4u) {
        ctx->pc = 0x271DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DC0u;
        // 0x271dc4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DC8u;
        goto label_271dc8;
    }
    ctx->pc = 0x271DC0u;
    SET_GPR_U32(ctx, 31, 0x271DC8u);
    ctx->pc = 0x271DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DC0u;
    // 0x271dc4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x271DC0u, 0x271DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DC8u;
label_271dc8:
    // 0x271dc8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x271dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_271dcc:
    // 0x271dcc: 0xc05d4f6  jal         func_1753D8
label_271dd0:
    if (ctx->pc == 0x271DD0u) {
        ctx->pc = 0x271DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DCCu;
        // 0x271dd0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DD4u;
        goto label_271dd4;
    }
    ctx->pc = 0x271DCCu;
    SET_GPR_U32(ctx, 31, 0x271DD4u);
    ctx->pc = 0x271DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DCCu;
    // 0x271dd0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x271DCCu, 0x271DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DD4u;
label_271dd4:
    // 0x271dd4: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_271dd8:
    if (ctx->pc == 0x271DD8u) {
        ctx->pc = 0x271DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DD4u;
        // 0x271dd8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DDCu;
        goto label_271ddc;
    }
    ctx->pc = 0x271DD4u;
    {
        const bool branch_taken_0x271dd4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DD4u;
        // 0x271dd8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271dd4) {
            ctx->pc = 0x271DF8u;
            goto label_271df8;
        }
    }
    ctx->pc = 0x271DDCu;
label_271ddc:
    // 0x271ddc: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x271ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_271de0:
    // 0x271de0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x271de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_271de4:
    // 0x271de4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x271de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_271de8:
    // 0x271de8: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x271de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_271dec:
    // 0x271dec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x271decu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271df0:
    // 0x271df0: 0xc04159e  jal         func_105678
label_271df4:
    if (ctx->pc == 0x271DF4u) {
        ctx->pc = 0x271DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DF0u;
        // 0x271df4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DF8u;
        goto label_271df8;
    }
    ctx->pc = 0x271DF0u;
    SET_GPR_U32(ctx, 31, 0x271DF8u);
    ctx->pc = 0x271DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DF0u;
    // 0x271df4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x271DF0u, 0x271DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DF8u;
label_271df8:
    // 0x271df8: 0x13c0000f  beqz        $fp, . + 4 + (0xF << 2)
label_271dfc:
    if (ctx->pc == 0x271DFCu) {
        ctx->pc = 0x271E00u;
        goto label_271e00;
    }
    ctx->pc = 0x271DF8u;
    {
        const bool branch_taken_0x271df8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x271df8) {
            ctx->pc = 0x271E38u;
            goto label_271e38;
        }
    }
    ctx->pc = 0x271E00u;
label_271e00:
    // 0x271e00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x271e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271e04:
    // 0x271e04: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x271e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_271e08:
    // 0x271e08: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x271e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_271e0c:
    // 0x271e0c: 0x40f809  jalr        $v0
label_271e10:
    if (ctx->pc == 0x271E10u) {
        ctx->pc = 0x271E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E0Cu;
        // 0x271e10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E14u;
        goto label_271e14;
    }
    ctx->pc = 0x271E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x271E14u);
        ctx->pc = 0x271E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E0Cu;
        // 0x271e10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271E0Cu, 0x271E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271E14u;
label_271e14:
    // 0x271e14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x271e14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_271e18:
    // 0x271e18: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x271e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_271e1c:
    // 0x271e1c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x271e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_271e20:
    // 0x271e20: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x271e20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271e24:
    // 0x271e24: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x271e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_271e28:
    // 0x271e28: 0x240600f1  addiu       $a2, $zero, 0xF1
    ctx->pc = 0x271e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
label_271e2c:
    // 0x271e2c: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x271e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_271e30:
    // 0x271e30: 0xc041664  jal         func_105990
label_271e34:
    if (ctx->pc == 0x271E34u) {
        ctx->pc = 0x271E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E30u;
        // 0x271e34: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E38u;
        goto label_271e38;
    }
    ctx->pc = 0x271E30u;
    SET_GPR_U32(ctx, 31, 0x271E38u);
    ctx->pc = 0x271E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E30u;
    // 0x271e34: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x271E30u, 0x271E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E38u;
label_271e38:
    // 0x271e38: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_271e3c:
    if (ctx->pc == 0x271E3Cu) {
        ctx->pc = 0x271E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E38u;
        // 0x271e3c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E40u;
        goto label_271e40;
    }
    ctx->pc = 0x271E38u;
    {
        const bool branch_taken_0x271e38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E38u;
        // 0x271e3c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e38) {
            ctx->pc = 0x271E58u;
            goto label_271e58;
        }
    }
    ctx->pc = 0x271E40u;
label_271e40:
    // 0x271e40: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x271e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_271e44:
    // 0x271e44: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x271e44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_271e48:
    // 0x271e48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x271e48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_271e4c:
    // 0x271e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271e50:
    // 0x271e50: 0xc041b20  jal         func_106C80
label_271e54:
    if (ctx->pc == 0x271E54u) {
        ctx->pc = 0x271E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E50u;
        // 0x271e54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E58u;
        goto label_271e58;
    }
    ctx->pc = 0x271E50u;
    SET_GPR_U32(ctx, 31, 0x271E58u);
    ctx->pc = 0x271E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E50u;
    // 0x271e54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x271E50u, 0x271E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E58u;
label_271e58:
    // 0x271e58: 0xc05d484  jal         func_175210
label_271e5c:
    if (ctx->pc == 0x271E5Cu) {
        ctx->pc = 0x271E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E58u;
        // 0x271e5c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E60u;
        goto label_271e60;
    }
    ctx->pc = 0x271E58u;
    SET_GPR_U32(ctx, 31, 0x271E60u);
    ctx->pc = 0x271E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E58u;
    // 0x271e5c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x271E58u, 0x271E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E60u;
label_271e60:
    // 0x271e60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x271e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_271e64:
    // 0x271e64: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x271e64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_271e68:
    // 0x271e68: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x271e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_271e6c:
    // 0x271e6c: 0xa0f809  jalr        $a1
label_271e70:
    if (ctx->pc == 0x271E70u) {
        ctx->pc = 0x271E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E6Cu;
        // 0x271e70: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E74u;
        goto label_271e74;
    }
    ctx->pc = 0x271E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x271E74u);
        ctx->pc = 0x271E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E6Cu;
        // 0x271e70: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271E6Cu, 0x271E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271E74u;
label_271e74:
    // 0x271e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271e78:
    // 0x271e78: 0xc087016  jal         func_21C058
label_271e7c:
    if (ctx->pc == 0x271E7Cu) {
        ctx->pc = 0x271E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E78u;
        // 0x271e7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E80u;
        goto label_271e80;
    }
    ctx->pc = 0x271E78u;
    SET_GPR_U32(ctx, 31, 0x271E80u);
    ctx->pc = 0x271E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E78u;
    // 0x271e7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x271E78u, 0x271E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E80u;
label_271e80:
    // 0x271e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271e84:
    // 0x271e84: 0xc089990  jal         func_226640
label_271e88:
    if (ctx->pc == 0x271E88u) {
        ctx->pc = 0x271E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E84u;
        // 0x271e88: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E8Cu;
        goto label_271e8c;
    }
    ctx->pc = 0x271E84u;
    SET_GPR_U32(ctx, 31, 0x271E8Cu);
    ctx->pc = 0x271E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E84u;
    // 0x271e88: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x271E84u, 0x271E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E8Cu;
label_271e8c:
    // 0x271e8c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x271e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_271e90:
    // 0x271e90: 0xc05d53a  jal         func_1754E8
label_271e94:
    if (ctx->pc == 0x271E94u) {
        ctx->pc = 0x271E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E90u;
        // 0x271e94: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271E98u;
        goto label_271e98;
    }
    ctx->pc = 0x271E90u;
    SET_GPR_U32(ctx, 31, 0x271E98u);
    ctx->pc = 0x271E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E90u;
    // 0x271e94: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x271E90u, 0x271E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271E98u;
label_271e98:
    // 0x271e98: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x271e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_271e9c:
    // 0x271e9c: 0xc05d4f6  jal         func_1753D8
label_271ea0:
    if (ctx->pc == 0x271EA0u) {
        ctx->pc = 0x271EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E9Cu;
        // 0x271ea0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271EA4u;
        goto label_271ea4;
    }
    ctx->pc = 0x271E9Cu;
    SET_GPR_U32(ctx, 31, 0x271EA4u);
    ctx->pc = 0x271EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271E9Cu;
    // 0x271ea0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x271E9Cu, 0x271EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271EA4u;
label_271ea4:
    // 0x271ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271ea8:
    // 0x271ea8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x271ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271eac:
    // 0x271eac: 0xc087570  jal         func_21D5C0
label_271eb0:
    if (ctx->pc == 0x271EB0u) {
        ctx->pc = 0x271EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EACu;
        // 0x271eb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271EB4u;
        goto label_271eb4;
    }
    ctx->pc = 0x271EACu;
    SET_GPR_U32(ctx, 31, 0x271EB4u);
    ctx->pc = 0x271EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271EACu;
    // 0x271eb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x271EACu, 0x271EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271EB4u;
label_271eb4:
    // 0x271eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271eb8:
    // 0x271eb8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x271eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_271ebc:
    // 0x271ebc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x271ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_271ec0:
    // 0x271ec0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x271ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_271ec4:
    // 0x271ec4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x271ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_271ec8:
    // 0x271ec8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x271ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_271ecc:
    // 0x271ecc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x271eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_271ed0:
    // 0x271ed0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x271ed0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_271ed4:
    // 0x271ed4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x271ed4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_271ed8:
    // 0x271ed8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x271ed8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_271edc:
    // 0x271edc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x271edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_271ee0:
    // 0x271ee0: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x271ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_271ee4:
    // 0x271ee4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x271ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_271ee8:
    // 0x271ee8: 0x3e00008  jr          $ra
label_271eec:
    if (ctx->pc == 0x271EECu) {
        ctx->pc = 0x271EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EE8u;
        // 0x271eec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271EF0u;
        goto label_fallthrough_0x271ee8;
    }
    ctx->pc = 0x271EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271EE8u;
        // 0x271eec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x271ee8:
    ctx->pc = 0x271EF0u;
}
