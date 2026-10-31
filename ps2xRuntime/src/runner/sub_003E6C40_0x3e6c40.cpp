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

// Function: sub_003E6C40
// Address: 0x3e6c40 - 0x3e6db8
void sub_003E6C40_0x3e6c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6C40_0x3e6c40");
#endif

    switch (ctx->pc) {
        case 0x3e6c40u: goto label_3e6c40;
        case 0x3e6c44u: goto label_3e6c44;
        case 0x3e6c48u: goto label_3e6c48;
        case 0x3e6c4cu: goto label_3e6c4c;
        case 0x3e6c50u: goto label_3e6c50;
        case 0x3e6c54u: goto label_3e6c54;
        case 0x3e6c58u: goto label_3e6c58;
        case 0x3e6c5cu: goto label_3e6c5c;
        case 0x3e6c60u: goto label_3e6c60;
        case 0x3e6c64u: goto label_3e6c64;
        case 0x3e6c68u: goto label_3e6c68;
        case 0x3e6c6cu: goto label_3e6c6c;
        case 0x3e6c70u: goto label_3e6c70;
        case 0x3e6c74u: goto label_3e6c74;
        case 0x3e6c78u: goto label_3e6c78;
        case 0x3e6c7cu: goto label_3e6c7c;
        case 0x3e6c80u: goto label_3e6c80;
        case 0x3e6c84u: goto label_3e6c84;
        case 0x3e6c88u: goto label_3e6c88;
        case 0x3e6c8cu: goto label_3e6c8c;
        case 0x3e6c90u: goto label_3e6c90;
        case 0x3e6c94u: goto label_3e6c94;
        case 0x3e6c98u: goto label_3e6c98;
        case 0x3e6c9cu: goto label_3e6c9c;
        case 0x3e6ca0u: goto label_3e6ca0;
        case 0x3e6ca4u: goto label_3e6ca4;
        case 0x3e6ca8u: goto label_3e6ca8;
        case 0x3e6cacu: goto label_3e6cac;
        case 0x3e6cb0u: goto label_3e6cb0;
        case 0x3e6cb4u: goto label_3e6cb4;
        case 0x3e6cb8u: goto label_3e6cb8;
        case 0x3e6cbcu: goto label_3e6cbc;
        case 0x3e6cc0u: goto label_3e6cc0;
        case 0x3e6cc4u: goto label_3e6cc4;
        case 0x3e6cc8u: goto label_3e6cc8;
        case 0x3e6cccu: goto label_3e6ccc;
        case 0x3e6cd0u: goto label_3e6cd0;
        case 0x3e6cd4u: goto label_3e6cd4;
        case 0x3e6cd8u: goto label_3e6cd8;
        case 0x3e6cdcu: goto label_3e6cdc;
        case 0x3e6ce0u: goto label_3e6ce0;
        case 0x3e6ce4u: goto label_3e6ce4;
        case 0x3e6ce8u: goto label_3e6ce8;
        case 0x3e6cecu: goto label_3e6cec;
        case 0x3e6cf0u: goto label_3e6cf0;
        case 0x3e6cf4u: goto label_3e6cf4;
        case 0x3e6cf8u: goto label_3e6cf8;
        case 0x3e6cfcu: goto label_3e6cfc;
        case 0x3e6d00u: goto label_3e6d00;
        case 0x3e6d04u: goto label_3e6d04;
        case 0x3e6d08u: goto label_3e6d08;
        case 0x3e6d0cu: goto label_3e6d0c;
        case 0x3e6d10u: goto label_3e6d10;
        case 0x3e6d14u: goto label_3e6d14;
        case 0x3e6d18u: goto label_3e6d18;
        case 0x3e6d1cu: goto label_3e6d1c;
        case 0x3e6d20u: goto label_3e6d20;
        case 0x3e6d24u: goto label_3e6d24;
        case 0x3e6d28u: goto label_3e6d28;
        case 0x3e6d2cu: goto label_3e6d2c;
        case 0x3e6d30u: goto label_3e6d30;
        case 0x3e6d34u: goto label_3e6d34;
        case 0x3e6d38u: goto label_3e6d38;
        case 0x3e6d3cu: goto label_3e6d3c;
        case 0x3e6d40u: goto label_3e6d40;
        case 0x3e6d44u: goto label_3e6d44;
        case 0x3e6d48u: goto label_3e6d48;
        case 0x3e6d4cu: goto label_3e6d4c;
        case 0x3e6d50u: goto label_3e6d50;
        case 0x3e6d54u: goto label_3e6d54;
        case 0x3e6d58u: goto label_3e6d58;
        case 0x3e6d5cu: goto label_3e6d5c;
        case 0x3e6d60u: goto label_3e6d60;
        case 0x3e6d64u: goto label_3e6d64;
        case 0x3e6d68u: goto label_3e6d68;
        case 0x3e6d6cu: goto label_3e6d6c;
        case 0x3e6d70u: goto label_3e6d70;
        case 0x3e6d74u: goto label_3e6d74;
        case 0x3e6d78u: goto label_3e6d78;
        case 0x3e6d7cu: goto label_3e6d7c;
        case 0x3e6d80u: goto label_3e6d80;
        case 0x3e6d84u: goto label_3e6d84;
        case 0x3e6d88u: goto label_3e6d88;
        case 0x3e6d8cu: goto label_3e6d8c;
        case 0x3e6d90u: goto label_3e6d90;
        case 0x3e6d94u: goto label_3e6d94;
        case 0x3e6d98u: goto label_3e6d98;
        case 0x3e6d9cu: goto label_3e6d9c;
        case 0x3e6da0u: goto label_3e6da0;
        case 0x3e6da4u: goto label_3e6da4;
        case 0x3e6da8u: goto label_3e6da8;
        case 0x3e6dacu: goto label_3e6dac;
        case 0x3e6db0u: goto label_3e6db0;
        case 0x3e6db4u: goto label_3e6db4;
        default: break;
    }

    ctx->pc = 0x3e6c40u;

label_3e6c40:
    // 0x3e6c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e6c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e6c44:
    // 0x3e6c44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e6c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3e6c48:
    // 0x3e6c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e6c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e6c4c:
    // 0x3e6c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e6c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e6c50:
    // 0x3e6c50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e6c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e6c54:
    // 0x3e6c54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e6c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e6c58:
    // 0x3e6c58: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e6c58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e6c5c:
    // 0x3e6c5c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e6c60:
    // 0x3e6c60: 0x40f809  jalr        $v0
label_3e6c64:
    if (ctx->pc == 0x3E6C64u) {
        ctx->pc = 0x3E6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C60u;
        // 0x3e6c64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6C68u;
        goto label_3e6c68;
    }
    ctx->pc = 0x3E6C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E6C68u);
        ctx->pc = 0x3E6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C60u;
        // 0x3e6c64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6C60u, 0x3E6C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E6C68u;
label_3e6c68:
    // 0x3e6c68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e6c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6c6c:
    // 0x3e6c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e6c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6c70:
    // 0x3e6c70: 0xc0e858c  jal         func_3A1630
label_3e6c74:
    if (ctx->pc == 0x3E6C74u) {
        ctx->pc = 0x3E6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C70u;
        // 0x3e6c74: 0x9205000c  lbu         $a1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6C78u;
        goto label_3e6c78;
    }
    ctx->pc = 0x3E6C70u;
    SET_GPR_U32(ctx, 31, 0x3E6C78u);
    ctx->pc = 0x3E6C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C70u;
    // 0x3e6c74: 0x9205000c  lbu         $a1, 0xC($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E6C70u, 0x3E6C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C78u;
label_3e6c78:
    // 0x3e6c78: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6c7c:
    // 0x3e6c7c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3e6c80:
    if (ctx->pc == 0x3E6C80u) {
        ctx->pc = 0x3E6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C7Cu;
        // 0x3e6c80: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6C84u;
        goto label_3e6c84;
    }
    ctx->pc = 0x3E6C7Cu;
    {
        const bool branch_taken_0x3e6c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6c7c) {
            ctx->pc = 0x3E6C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6C7Cu;
            // 0x3e6c80: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6C9Cu;
            goto label_3e6c9c;
        }
    }
    ctx->pc = 0x3E6C84u;
label_3e6c84:
    // 0x3e6c84: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e6c88:
    // 0x3e6c88: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3e6c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3e6c8c:
    // 0x3e6c8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6c90:
    // 0x3e6c90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e6c94:
    // 0x3e6c94: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e6c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e6c98:
    // 0x3e6c98: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6c9c:
    // 0x3e6c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e6ca0:
    // 0x3e6ca0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3e6ca4:
    if (ctx->pc == 0x3E6CA4u) {
        ctx->pc = 0x3E6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6CA0u;
        // 0x3e6ca4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6CA8u;
        goto label_3e6ca8;
    }
    ctx->pc = 0x3E6CA0u;
    {
        const bool branch_taken_0x3e6ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e6ca0) {
            ctx->pc = 0x3E6CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6CA0u;
            // 0x3e6ca4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6CB4u;
            goto label_3e6cb4;
        }
    }
    ctx->pc = 0x3E6CA8u;
label_3e6ca8:
    // 0x3e6ca8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e6cac:
    // 0x3e6cac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e6cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e6cb0:
    // 0x3e6cb0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6cb4:
    // 0x3e6cb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3e6cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e6cb8:
    // 0x3e6cb8: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
label_3e6cbc:
    if (ctx->pc == 0x3E6CBCu) {
        ctx->pc = 0x3E6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6CB8u;
        // 0x3e6cbc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6CC0u;
        goto label_3e6cc0;
    }
    ctx->pc = 0x3E6CB8u;
    {
        const bool branch_taken_0x3e6cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e6cb8) {
            ctx->pc = 0x3E6CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6CB8u;
            // 0x3e6cbc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6CE0u;
            goto label_3e6ce0;
        }
    }
    ctx->pc = 0x3E6CC0u;
label_3e6cc0:
    // 0x3e6cc0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3e6cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e6cc4:
    // 0x3e6cc4: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3e6cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3e6cc8:
    // 0x3e6cc8: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3e6cc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3e6ccc:
    // 0x3e6ccc: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3e6cccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3e6cd0:
    // 0x3e6cd0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e6cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6cd4:
    // 0x3e6cd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e6cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e6cd8:
    // 0x3e6cd8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3e6cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_3e6cdc:
    // 0x3e6cdc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e6cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6ce0:
    // 0x3e6ce0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e6ce4:
    // 0x3e6ce4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3e6ce8:
    if (ctx->pc == 0x3E6CE8u) {
        ctx->pc = 0x3E6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6CE4u;
        // 0x3e6ce8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6CECu;
        goto label_3e6cec;
    }
    ctx->pc = 0x3E6CE4u;
    {
        const bool branch_taken_0x3e6ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e6ce4) {
            ctx->pc = 0x3E6CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6CE4u;
            // 0x3e6ce8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6CF8u;
            goto label_3e6cf8;
        }
    }
    ctx->pc = 0x3E6CECu;
label_3e6cec:
    // 0x3e6cec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3e6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e6cf0:
    // 0x3e6cf0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e6cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e6cf4:
    // 0x3e6cf4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e6cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6cf8:
    // 0x3e6cf8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e6cfc:
    // 0x3e6cfc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3e6d00:
    if (ctx->pc == 0x3E6D00u) {
        ctx->pc = 0x3E6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6CFCu;
        // 0x3e6d00: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6D04u;
        goto label_3e6d04;
    }
    ctx->pc = 0x3E6CFCu;
    {
        const bool branch_taken_0x3e6cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e6cfc) {
            ctx->pc = 0x3E6D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6CFCu;
            // 0x3e6d00: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6D10u;
            goto label_3e6d10;
        }
    }
    ctx->pc = 0x3E6D04u;
label_3e6d04:
    // 0x3e6d04: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x3e6d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_3e6d08:
    // 0x3e6d08: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3e6d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_3e6d0c:
    // 0x3e6d0c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e6d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6d10:
    // 0x3e6d10: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3e6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3e6d14:
    // 0x3e6d14: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_3e6d18:
    if (ctx->pc == 0x3E6D18u) {
        ctx->pc = 0x3E6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D14u;
        // 0x3e6d18: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6D1Cu;
        goto label_3e6d1c;
    }
    ctx->pc = 0x3E6D14u;
    {
        const bool branch_taken_0x3e6d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D14u;
        // 0x3e6d18: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6d14) {
            ctx->pc = 0x3E6D60u;
            goto label_3e6d60;
        }
    }
    ctx->pc = 0x3E6D1Cu;
label_3e6d1c:
    // 0x3e6d1c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3e6d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e6d20:
    // 0x3e6d20: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x3e6d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3e6d24:
    // 0x3e6d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e6d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6d28:
    // 0x3e6d28: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3e6d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e6d2c:
    // 0x3e6d2c: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x3e6d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_3e6d30:
    // 0x3e6d30: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6d34:
    // 0x3e6d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e6d38:
    // 0x3e6d38: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e6d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e6d3c:
    // 0x3e6d3c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3e6d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e6d40:
    // 0x3e6d40: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3e6d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_3e6d44:
    // 0x3e6d44: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3e6d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3e6d48:
    // 0x3e6d48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e6d4c:
    // 0x3e6d4c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3e6d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_3e6d50:
    // 0x3e6d50: 0xc0e858c  jal         func_3A1630
label_3e6d54:
    if (ctx->pc == 0x3E6D54u) {
        ctx->pc = 0x3E6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D50u;
        // 0x3e6d54: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6D58u;
        goto label_3e6d58;
    }
    ctx->pc = 0x3E6D50u;
    SET_GPR_U32(ctx, 31, 0x3E6D58u);
    ctx->pc = 0x3E6D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D50u;
    // 0x3e6d54: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E6D50u, 0x3E6D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D58u;
label_3e6d58:
    // 0x3e6d58: 0x10000006  b           . + 4 + (0x6 << 2)
label_3e6d5c:
    if (ctx->pc == 0x3E6D5Cu) {
        ctx->pc = 0x3E6D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D58u;
        // 0x3e6d5c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6D60u;
        goto label_3e6d60;
    }
    ctx->pc = 0x3E6D58u;
    {
        const bool branch_taken_0x3e6d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D58u;
        // 0x3e6d5c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6d58) {
            ctx->pc = 0x3E6D74u;
            goto label_3e6d74;
        }
    }
    ctx->pc = 0x3E6D60u;
label_3e6d60:
    // 0x3e6d60: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3e6d64:
    if (ctx->pc == 0x3E6D64u) {
        ctx->pc = 0x3E6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D60u;
        // 0x3e6d64: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6D68u;
        goto label_3e6d68;
    }
    ctx->pc = 0x3E6D60u;
    {
        const bool branch_taken_0x3e6d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e6d60) {
            ctx->pc = 0x3E6D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6D60u;
            // 0x3e6d64: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6D74u;
            goto label_3e6d74;
        }
    }
    ctx->pc = 0x3E6D68u;
label_3e6d68:
    // 0x3e6d68: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x3e6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3e6d6c:
    // 0x3e6d6c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e6d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e6d70:
    // 0x3e6d70: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3e6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3e6d74:
    // 0x3e6d74: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3e6d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3e6d78:
    // 0x3e6d78: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3e6d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_3e6d7c:
    // 0x3e6d7c: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_3e6d80:
    if (ctx->pc == 0x3E6D80u) {
        ctx->pc = 0x3E6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D7Cu;
        // 0x3e6d80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6D84u;
        goto label_3e6d84;
    }
    ctx->pc = 0x3E6D7Cu;
    {
        const bool branch_taken_0x3e6d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e6d7c) {
            ctx->pc = 0x3E6D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6D7Cu;
            // 0x3e6d80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6DA4u;
            goto label_3e6da4;
        }
    }
    ctx->pc = 0x3E6D84u;
label_3e6d84:
    // 0x3e6d84: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e6d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e6d88:
    // 0x3e6d88: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x3e6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3e6d8c:
    // 0x3e6d8c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3e6d90:
    if (ctx->pc == 0x3E6D90u) {
        ctx->pc = 0x3E6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6D8Cu;
        // 0x3e6d90: 0xae2300b4  sw          $v1, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6D94u;
        goto label_3e6d94;
    }
    ctx->pc = 0x3E6D8Cu;
    {
        const bool branch_taken_0x3e6d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e6d8c) {
            ctx->pc = 0x3E6D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6D8Cu;
            // 0x3e6d90: 0xae2300b4  sw          $v1, 0xB4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6DA0u;
            goto label_3e6da0;
        }
    }
    ctx->pc = 0x3E6D94u;
label_3e6d94:
    // 0x3e6d94: 0x3c022020  lui         $v0, 0x2020
    ctx->pc = 0x3e6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8224 << 16));
label_3e6d98:
    // 0x3e6d98: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3e6d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3e6d9c:
    // 0x3e6d9c: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3e6d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3e6da0:
    // 0x3e6da0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e6da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e6da4:
    // 0x3e6da4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e6da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e6da8:
    // 0x3e6da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e6da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6dac:
    // 0x3e6dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e6dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e6db0:
    // 0x3e6db0: 0x3e00008  jr          $ra
label_3e6db4:
    if (ctx->pc == 0x3E6DB4u) {
        ctx->pc = 0x3E6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6DB0u;
        // 0x3e6db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6DB8u;
        goto label_fallthrough_0x3e6db0;
    }
    ctx->pc = 0x3E6DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6DB0u;
        // 0x3e6db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e6db0:
    ctx->pc = 0x3E6DB8u;
}
