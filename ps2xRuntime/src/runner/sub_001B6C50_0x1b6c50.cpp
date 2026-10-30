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

// Function: sub_001B6C50
// Address: 0x1b6c50 - 0x1b6df0
void sub_001B6C50_0x1b6c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6C50_0x1b6c50");
#endif

    switch (ctx->pc) {
        case 0x1b6c50u: goto label_1b6c50;
        case 0x1b6c54u: goto label_1b6c54;
        case 0x1b6c58u: goto label_1b6c58;
        case 0x1b6c5cu: goto label_1b6c5c;
        case 0x1b6c60u: goto label_1b6c60;
        case 0x1b6c64u: goto label_1b6c64;
        case 0x1b6c68u: goto label_1b6c68;
        case 0x1b6c6cu: goto label_1b6c6c;
        case 0x1b6c70u: goto label_1b6c70;
        case 0x1b6c74u: goto label_1b6c74;
        case 0x1b6c78u: goto label_1b6c78;
        case 0x1b6c7cu: goto label_1b6c7c;
        case 0x1b6c80u: goto label_1b6c80;
        case 0x1b6c84u: goto label_1b6c84;
        case 0x1b6c88u: goto label_1b6c88;
        case 0x1b6c8cu: goto label_1b6c8c;
        case 0x1b6c90u: goto label_1b6c90;
        case 0x1b6c94u: goto label_1b6c94;
        case 0x1b6c98u: goto label_1b6c98;
        case 0x1b6c9cu: goto label_1b6c9c;
        case 0x1b6ca0u: goto label_1b6ca0;
        case 0x1b6ca4u: goto label_1b6ca4;
        case 0x1b6ca8u: goto label_1b6ca8;
        case 0x1b6cacu: goto label_1b6cac;
        case 0x1b6cb0u: goto label_1b6cb0;
        case 0x1b6cb4u: goto label_1b6cb4;
        case 0x1b6cb8u: goto label_1b6cb8;
        case 0x1b6cbcu: goto label_1b6cbc;
        case 0x1b6cc0u: goto label_1b6cc0;
        case 0x1b6cc4u: goto label_1b6cc4;
        case 0x1b6cc8u: goto label_1b6cc8;
        case 0x1b6cccu: goto label_1b6ccc;
        case 0x1b6cd0u: goto label_1b6cd0;
        case 0x1b6cd4u: goto label_1b6cd4;
        case 0x1b6cd8u: goto label_1b6cd8;
        case 0x1b6cdcu: goto label_1b6cdc;
        case 0x1b6ce0u: goto label_1b6ce0;
        case 0x1b6ce4u: goto label_1b6ce4;
        case 0x1b6ce8u: goto label_1b6ce8;
        case 0x1b6cecu: goto label_1b6cec;
        case 0x1b6cf0u: goto label_1b6cf0;
        case 0x1b6cf4u: goto label_1b6cf4;
        case 0x1b6cf8u: goto label_1b6cf8;
        case 0x1b6cfcu: goto label_1b6cfc;
        case 0x1b6d00u: goto label_1b6d00;
        case 0x1b6d04u: goto label_1b6d04;
        case 0x1b6d08u: goto label_1b6d08;
        case 0x1b6d0cu: goto label_1b6d0c;
        case 0x1b6d10u: goto label_1b6d10;
        case 0x1b6d14u: goto label_1b6d14;
        case 0x1b6d18u: goto label_1b6d18;
        case 0x1b6d1cu: goto label_1b6d1c;
        case 0x1b6d20u: goto label_1b6d20;
        case 0x1b6d24u: goto label_1b6d24;
        case 0x1b6d28u: goto label_1b6d28;
        case 0x1b6d2cu: goto label_1b6d2c;
        case 0x1b6d30u: goto label_1b6d30;
        case 0x1b6d34u: goto label_1b6d34;
        case 0x1b6d38u: goto label_1b6d38;
        case 0x1b6d3cu: goto label_1b6d3c;
        case 0x1b6d40u: goto label_1b6d40;
        case 0x1b6d44u: goto label_1b6d44;
        case 0x1b6d48u: goto label_1b6d48;
        case 0x1b6d4cu: goto label_1b6d4c;
        case 0x1b6d50u: goto label_1b6d50;
        case 0x1b6d54u: goto label_1b6d54;
        case 0x1b6d58u: goto label_1b6d58;
        case 0x1b6d5cu: goto label_1b6d5c;
        case 0x1b6d60u: goto label_1b6d60;
        case 0x1b6d64u: goto label_1b6d64;
        case 0x1b6d68u: goto label_1b6d68;
        case 0x1b6d6cu: goto label_1b6d6c;
        case 0x1b6d70u: goto label_1b6d70;
        case 0x1b6d74u: goto label_1b6d74;
        case 0x1b6d78u: goto label_1b6d78;
        case 0x1b6d7cu: goto label_1b6d7c;
        case 0x1b6d80u: goto label_1b6d80;
        case 0x1b6d84u: goto label_1b6d84;
        case 0x1b6d88u: goto label_1b6d88;
        case 0x1b6d8cu: goto label_1b6d8c;
        case 0x1b6d90u: goto label_1b6d90;
        case 0x1b6d94u: goto label_1b6d94;
        case 0x1b6d98u: goto label_1b6d98;
        case 0x1b6d9cu: goto label_1b6d9c;
        case 0x1b6da0u: goto label_1b6da0;
        case 0x1b6da4u: goto label_1b6da4;
        case 0x1b6da8u: goto label_1b6da8;
        case 0x1b6dacu: goto label_1b6dac;
        case 0x1b6db0u: goto label_1b6db0;
        case 0x1b6db4u: goto label_1b6db4;
        case 0x1b6db8u: goto label_1b6db8;
        case 0x1b6dbcu: goto label_1b6dbc;
        case 0x1b6dc0u: goto label_1b6dc0;
        case 0x1b6dc4u: goto label_1b6dc4;
        case 0x1b6dc8u: goto label_1b6dc8;
        case 0x1b6dccu: goto label_1b6dcc;
        case 0x1b6dd0u: goto label_1b6dd0;
        case 0x1b6dd4u: goto label_1b6dd4;
        case 0x1b6dd8u: goto label_1b6dd8;
        case 0x1b6ddcu: goto label_1b6ddc;
        case 0x1b6de0u: goto label_1b6de0;
        case 0x1b6de4u: goto label_1b6de4;
        case 0x1b6de8u: goto label_1b6de8;
        case 0x1b6decu: goto label_1b6dec;
        default: break;
    }

    ctx->pc = 0x1b6c50u;

label_1b6c50:
    // 0x1b6c50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b6c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1b6c54:
    // 0x1b6c54: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1b6c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1b6c58:
    // 0x1b6c58: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b6c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1b6c5c:
    // 0x1b6c5c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b6c5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c60:
    // 0x1b6c60: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1b6c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1b6c64:
    // 0x1b6c64: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b6c64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c68:
    // 0x1b6c68: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1b6c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1b6c6c:
    // 0x1b6c6c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1b6c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c70:
    // 0x1b6c70: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1b6c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1b6c74:
    // 0x1b6c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c78:
    // 0x1b6c78: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1b6c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1b6c7c:
    // 0x1b6c7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c80:
    // 0x1b6c80: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1b6c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1b6c84:
    // 0x1b6c84: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1b6c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c88:
    // 0x1b6c88: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1b6c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1b6c8c:
    // 0x1b6c8c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x1b6c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c90:
    // 0x1b6c90: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1b6c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1b6c94:
    // 0x1b6c94: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x1b6c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c98:
    // 0x1b6c98: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1b6c98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1b6c9c:
    // 0x1b6c9c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b6c9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1b6ca0:
    // 0x1b6ca0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1b6ca0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_1b6ca4:
    // 0x1b6ca4: 0x8fb600f8  lw          $s6, 0xF8($sp)
    ctx->pc = 0x1b6ca4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1b6ca8:
    // 0x1b6ca8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b6ca8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1b6cac:
    // 0x1b6cac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b6cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b6cb0:
    // 0x1b6cb0: 0x8fbe00e8  lw          $fp, 0xE8($sp)
    ctx->pc = 0x1b6cb0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1b6cb4:
    // 0x1b6cb4: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
label_1b6cb8:
    if (ctx->pc == 0x1B6CB8u) {
        ctx->pc = 0x1B6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CB4u;
        // 0x1b6cb8: 0x8fb700f0  lw          $s7, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6CBCu;
        goto label_1b6cbc;
    }
    ctx->pc = 0x1B6CB4u;
    {
        const bool branch_taken_0x1b6cb4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CB4u;
        // 0x1b6cb8: 0x8fb700f0  lw          $s7, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cb4) {
            ctx->pc = 0x1B6CF4u;
            goto label_1b6cf4;
        }
    }
    ctx->pc = 0x1B6CBCu;
label_1b6cbc:
    // 0x1b6cbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b6cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b6cc0:
    // 0x1b6cc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b6cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b6cc4:
    // 0x1b6cc4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1b6cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b6cc8:
    // 0x1b6cc8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b6cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b6ccc:
    // 0x1b6ccc: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1b6cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_1b6cd0:
    // 0x1b6cd0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1b6cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b6cd4:
    // 0x1b6cd4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1b6cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b6cd8:
    // 0x1b6cd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b6cd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6cdc:
    // 0x1b6cdc: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1b6cdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b6ce0:
    // 0x1b6ce0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b6ce0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6ce4:
    // 0x1b6ce4: 0xc06e424  jal         func_1B9090
label_1b6ce8:
    if (ctx->pc == 0x1B6CE8u) {
        ctx->pc = 0x1B6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CE4u;
        // 0x1b6ce8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6CECu;
        goto label_1b6cec;
    }
    ctx->pc = 0x1B6CE4u;
    SET_GPR_U32(ctx, 31, 0x1B6CECu);
    ctx->pc = 0x1B6CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6CE4u;
    // 0x1b6ce8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1B6CE4u, 0x1B6CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6CECu;
label_1b6cec:
    // 0x1b6cec: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b6cf0:
    if (ctx->pc == 0x1B6CF0u) {
        ctx->pc = 0x1B6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CECu;
        // 0x1b6cf0: 0xae160410  sw          $s6, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6CF4u;
        goto label_1b6cf4;
    }
    ctx->pc = 0x1B6CECu;
    {
        const bool branch_taken_0x1b6cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CECu;
        // 0x1b6cf0: 0xae160410  sw          $s6, 0x410($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cec) {
            ctx->pc = 0x1B6D1Cu;
            goto label_1b6d1c;
        }
    }
    ctx->pc = 0x1B6CF4u;
label_1b6cf4:
    // 0x1b6cf4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b6cf8:
    // 0x1b6cf8: 0x8faa00d0  lw          $t2, 0xD0($sp)
    ctx->pc = 0x1b6cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b6cfc:
    // 0x1b6cfc: 0x8fab00e0  lw          $t3, 0xE0($sp)
    ctx->pc = 0x1b6cfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1b6d00:
    // 0x1b6d00: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1b6d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1b6d04:
    // 0x1b6d04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1b6d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1b6d08:
    // 0x1b6d08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d0c:
    // 0x1b6d0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b6d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6d10:
    // 0x1b6d10: 0xc073418  jal         func_1CD060
label_1b6d14:
    if (ctx->pc == 0x1B6D14u) {
        ctx->pc = 0x1B6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D10u;
        // 0x1b6d14: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6D18u;
        goto label_1b6d18;
    }
    ctx->pc = 0x1B6D10u;
    SET_GPR_U32(ctx, 31, 0x1B6D18u);
    ctx->pc = 0x1B6D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D10u;
    // 0x1b6d14: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1B6D10u, 0x1B6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D18u;
label_1b6d18:
    // 0x1b6d18: 0xae160410  sw          $s6, 0x410($s0)
    ctx->pc = 0x1b6d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 22));
label_1b6d1c:
    // 0x1b6d1c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b6d20:
    // 0x1b6d20: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1b6d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1b6d24:
    // 0x1b6d24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b6d24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b6d28:
    // 0x1b6d28: 0x8fab00d8  lw          $t3, 0xD8($sp)
    ctx->pc = 0x1b6d28u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1b6d2c:
    // 0x1b6d2c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1b6d2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d30:
    // 0x1b6d30: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1b6d30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d34:
    // 0x1b6d34: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1b6d34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1b6d38:
    // 0x1b6d38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b6d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b6d3c:
    // 0x1b6d3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6d40:
    // 0x1b6d40: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1b6d44:
    // 0x1b6d44: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b6d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6d48:
    // 0x1b6d48: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x1b6d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_1b6d4c:
    // 0x1b6d4c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b6d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d50:
    // 0x1b6d50: 0xc06876e  jal         func_1A1DB8
label_1b6d54:
    if (ctx->pc == 0x1B6D54u) {
        ctx->pc = 0x1B6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D50u;
        // 0x1b6d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6D58u;
        goto label_1b6d58;
    }
    ctx->pc = 0x1B6D50u;
    SET_GPR_U32(ctx, 31, 0x1B6D58u);
    ctx->pc = 0x1B6D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D50u;
    // 0x1b6d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1B6D50u, 0x1B6D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D58u;
label_1b6d58:
    // 0x1b6d58: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1b6d58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1b6d5c:
    // 0x1b6d5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b6d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6d60:
    // 0x1b6d60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6d64:
    // 0x1b6d64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d68:
    // 0x1b6d68: 0x7e020400  sq          $v0, 0x400($s0)
    ctx->pc = 0x1b6d68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1024), GPR_VEC(ctx, 2));
label_1b6d6c:
    // 0x1b6d6c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1b6d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1b6d70:
    // 0x1b6d70: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1b6d74:
    // 0x1b6d74: 0x40f809  jalr        $v0
label_1b6d78:
    if (ctx->pc == 0x1B6D78u) {
        ctx->pc = 0x1B6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D74u;
        // 0x1b6d78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6D7Cu;
        goto label_1b6d7c;
    }
    ctx->pc = 0x1B6D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B6D7Cu);
        ctx->pc = 0x1B6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D74u;
        // 0x1b6d78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6D74u, 0x1B6D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6D7Cu;
label_1b6d7c:
    // 0x1b6d7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b6d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6d80:
    // 0x1b6d80: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b6d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d84:
    // 0x1b6d84: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b6d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1b6d88:
    // 0x1b6d88: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1b6d8c:
    // 0x1b6d8c: 0x40f809  jalr        $v0
label_1b6d90:
    if (ctx->pc == 0x1B6D90u) {
        ctx->pc = 0x1B6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D8Cu;
        // 0x1b6d90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6D94u;
        goto label_1b6d94;
    }
    ctx->pc = 0x1B6D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B6D94u);
        ctx->pc = 0x1B6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D8Cu;
        // 0x1b6d90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6D8Cu, 0x1B6D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6D94u;
label_1b6d94:
    // 0x1b6d94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b6d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6d98:
    // 0x1b6d98: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b6d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d9c:
    // 0x1b6d9c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1b6d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1b6da0:
    // 0x1b6da0: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x1b6da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1b6da4:
    // 0x1b6da4: 0xc0f809  jalr        $a2
label_1b6da8:
    if (ctx->pc == 0x1B6DA8u) {
        ctx->pc = 0x1B6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DA4u;
        // 0x1b6da8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6DACu;
        goto label_1b6dac;
    }
    ctx->pc = 0x1B6DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B6DACu);
        ctx->pc = 0x1B6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DA4u;
        // 0x1b6da8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6DA4u, 0x1B6DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6DACu;
label_1b6dac:
    // 0x1b6dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6db0:
    // 0x1b6db0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1b6db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b6db4:
    // 0x1b6db4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1b6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1b6db8:
    // 0x1b6db8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1b6db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b6dbc:
    // 0x1b6dbc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1b6dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b6dc0:
    // 0x1b6dc0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1b6dc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b6dc4:
    // 0x1b6dc4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1b6dc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b6dc8:
    // 0x1b6dc8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b6dc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b6dcc:
    // 0x1b6dcc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1b6dccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b6dd0:
    // 0x1b6dd0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1b6dd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b6dd4:
    // 0x1b6dd4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1b6dd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b6dd8:
    // 0x1b6dd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b6dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6ddc:
    // 0x1b6ddc: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1b6ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b6de0:
    // 0x1b6de0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b6de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b6de4:
    // 0x1b6de4: 0x3e00008  jr          $ra
label_1b6de8:
    if (ctx->pc == 0x1B6DE8u) {
        ctx->pc = 0x1B6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DE4u;
        // 0x1b6de8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6DECu;
        goto label_1b6dec;
    }
    ctx->pc = 0x1B6DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DE4u;
        // 0x1b6de8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6DECu;
label_1b6dec:
    // 0x1b6dec: 0x0  nop
    ctx->pc = 0x1b6decu;
    // NOP
    ctx->pc = 0x1b6df0u;
}
