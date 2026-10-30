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

// Function: sub_001E0C90
// Address: 0x1e0c90 - 0x1e0e48
void sub_001E0C90_0x1e0c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0C90_0x1e0c90");
#endif

    switch (ctx->pc) {
        case 0x1e0c90u: goto label_1e0c90;
        case 0x1e0c94u: goto label_1e0c94;
        case 0x1e0c98u: goto label_1e0c98;
        case 0x1e0c9cu: goto label_1e0c9c;
        case 0x1e0ca0u: goto label_1e0ca0;
        case 0x1e0ca4u: goto label_1e0ca4;
        case 0x1e0ca8u: goto label_1e0ca8;
        case 0x1e0cacu: goto label_1e0cac;
        case 0x1e0cb0u: goto label_1e0cb0;
        case 0x1e0cb4u: goto label_1e0cb4;
        case 0x1e0cb8u: goto label_1e0cb8;
        case 0x1e0cbcu: goto label_1e0cbc;
        case 0x1e0cc0u: goto label_1e0cc0;
        case 0x1e0cc4u: goto label_1e0cc4;
        case 0x1e0cc8u: goto label_1e0cc8;
        case 0x1e0cccu: goto label_1e0ccc;
        case 0x1e0cd0u: goto label_1e0cd0;
        case 0x1e0cd4u: goto label_1e0cd4;
        case 0x1e0cd8u: goto label_1e0cd8;
        case 0x1e0cdcu: goto label_1e0cdc;
        case 0x1e0ce0u: goto label_1e0ce0;
        case 0x1e0ce4u: goto label_1e0ce4;
        case 0x1e0ce8u: goto label_1e0ce8;
        case 0x1e0cecu: goto label_1e0cec;
        case 0x1e0cf0u: goto label_1e0cf0;
        case 0x1e0cf4u: goto label_1e0cf4;
        case 0x1e0cf8u: goto label_1e0cf8;
        case 0x1e0cfcu: goto label_1e0cfc;
        case 0x1e0d00u: goto label_1e0d00;
        case 0x1e0d04u: goto label_1e0d04;
        case 0x1e0d08u: goto label_1e0d08;
        case 0x1e0d0cu: goto label_1e0d0c;
        case 0x1e0d10u: goto label_1e0d10;
        case 0x1e0d14u: goto label_1e0d14;
        case 0x1e0d18u: goto label_1e0d18;
        case 0x1e0d1cu: goto label_1e0d1c;
        case 0x1e0d20u: goto label_1e0d20;
        case 0x1e0d24u: goto label_1e0d24;
        case 0x1e0d28u: goto label_1e0d28;
        case 0x1e0d2cu: goto label_1e0d2c;
        case 0x1e0d30u: goto label_1e0d30;
        case 0x1e0d34u: goto label_1e0d34;
        case 0x1e0d38u: goto label_1e0d38;
        case 0x1e0d3cu: goto label_1e0d3c;
        case 0x1e0d40u: goto label_1e0d40;
        case 0x1e0d44u: goto label_1e0d44;
        case 0x1e0d48u: goto label_1e0d48;
        case 0x1e0d4cu: goto label_1e0d4c;
        case 0x1e0d50u: goto label_1e0d50;
        case 0x1e0d54u: goto label_1e0d54;
        case 0x1e0d58u: goto label_1e0d58;
        case 0x1e0d5cu: goto label_1e0d5c;
        case 0x1e0d60u: goto label_1e0d60;
        case 0x1e0d64u: goto label_1e0d64;
        case 0x1e0d68u: goto label_1e0d68;
        case 0x1e0d6cu: goto label_1e0d6c;
        case 0x1e0d70u: goto label_1e0d70;
        case 0x1e0d74u: goto label_1e0d74;
        case 0x1e0d78u: goto label_1e0d78;
        case 0x1e0d7cu: goto label_1e0d7c;
        case 0x1e0d80u: goto label_1e0d80;
        case 0x1e0d84u: goto label_1e0d84;
        case 0x1e0d88u: goto label_1e0d88;
        case 0x1e0d8cu: goto label_1e0d8c;
        case 0x1e0d90u: goto label_1e0d90;
        case 0x1e0d94u: goto label_1e0d94;
        case 0x1e0d98u: goto label_1e0d98;
        case 0x1e0d9cu: goto label_1e0d9c;
        case 0x1e0da0u: goto label_1e0da0;
        case 0x1e0da4u: goto label_1e0da4;
        case 0x1e0da8u: goto label_1e0da8;
        case 0x1e0dacu: goto label_1e0dac;
        case 0x1e0db0u: goto label_1e0db0;
        case 0x1e0db4u: goto label_1e0db4;
        case 0x1e0db8u: goto label_1e0db8;
        case 0x1e0dbcu: goto label_1e0dbc;
        case 0x1e0dc0u: goto label_1e0dc0;
        case 0x1e0dc4u: goto label_1e0dc4;
        case 0x1e0dc8u: goto label_1e0dc8;
        case 0x1e0dccu: goto label_1e0dcc;
        case 0x1e0dd0u: goto label_1e0dd0;
        case 0x1e0dd4u: goto label_1e0dd4;
        case 0x1e0dd8u: goto label_1e0dd8;
        case 0x1e0ddcu: goto label_1e0ddc;
        case 0x1e0de0u: goto label_1e0de0;
        case 0x1e0de4u: goto label_1e0de4;
        case 0x1e0de8u: goto label_1e0de8;
        case 0x1e0decu: goto label_1e0dec;
        case 0x1e0df0u: goto label_1e0df0;
        case 0x1e0df4u: goto label_1e0df4;
        case 0x1e0df8u: goto label_1e0df8;
        case 0x1e0dfcu: goto label_1e0dfc;
        case 0x1e0e00u: goto label_1e0e00;
        case 0x1e0e04u: goto label_1e0e04;
        case 0x1e0e08u: goto label_1e0e08;
        case 0x1e0e0cu: goto label_1e0e0c;
        case 0x1e0e10u: goto label_1e0e10;
        case 0x1e0e14u: goto label_1e0e14;
        case 0x1e0e18u: goto label_1e0e18;
        case 0x1e0e1cu: goto label_1e0e1c;
        case 0x1e0e20u: goto label_1e0e20;
        case 0x1e0e24u: goto label_1e0e24;
        case 0x1e0e28u: goto label_1e0e28;
        case 0x1e0e2cu: goto label_1e0e2c;
        case 0x1e0e30u: goto label_1e0e30;
        case 0x1e0e34u: goto label_1e0e34;
        case 0x1e0e38u: goto label_1e0e38;
        case 0x1e0e3cu: goto label_1e0e3c;
        case 0x1e0e40u: goto label_1e0e40;
        case 0x1e0e44u: goto label_1e0e44;
        default: break;
    }

    ctx->pc = 0x1e0c90u;

label_1e0c90:
    // 0x1e0c90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e0c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e0c94:
    // 0x1e0c94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e0c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e0c98:
    // 0x1e0c98: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1e0c98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1e0c9c:
    // 0x1e0c9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e0c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ca0:
    // 0x1e0ca0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e0ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e0ca4:
    // 0x1e0ca4: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1e0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1e0ca8:
    // 0x1e0ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0cac:
    // 0x1e0cac: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1e0cacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1e0cb0:
    // 0x1e0cb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e0cb4:
    // 0x1e0cb4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1e0cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1e0cb8:
    // 0x1e0cb8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1e0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1e0cbc:
    // 0x1e0cbc: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x1e0cbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1e0cc0:
    // 0x1e0cc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e0cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1e0cc4:
    // 0x1e0cc4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e0cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1e0cc8:
    // 0x1e0cc8: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1e0cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e0ccc:
    // 0x1e0ccc: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_1e0cd0:
    if (ctx->pc == 0x1E0CD0u) {
        ctx->pc = 0x1E0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CCCu;
        // 0x1e0cd0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CD4u;
        goto label_1e0cd4;
    }
    ctx->pc = 0x1E0CCCu;
    {
        const bool branch_taken_0x1e0ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CCCu;
        // 0x1e0cd0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ccc) {
            ctx->pc = 0x1E0D58u;
            goto label_1e0d58;
        }
    }
    ctx->pc = 0x1E0CD4u;
label_1e0cd4:
    // 0x1e0cd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0cd8:
    // 0x1e0cd8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e0cd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e0cdc:
    // 0x1e0cdc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e0ce0:
    // 0x1e0ce0: 0x60f809  jalr        $v1
label_1e0ce4:
    if (ctx->pc == 0x1E0CE4u) {
        ctx->pc = 0x1E0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CE0u;
        // 0x1e0ce4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CE8u;
        goto label_1e0ce8;
    }
    ctx->pc = 0x1E0CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0CE8u);
        ctx->pc = 0x1E0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CE0u;
        // 0x1e0ce4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0CE0u, 0x1E0CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0CE8u;
label_1e0ce8:
    // 0x1e0ce8: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1e0ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e0cec:
    // 0x1e0cec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e0cecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e0cf0:
    // 0x1e0cf0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e0cf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e0cf4:
    // 0x1e0cf4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0cf8:
    // 0x1e0cf8: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e0cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e0cfc:
    // 0x1e0cfc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e0cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e0d00:
    // 0x1e0d00: 0x60f809  jalr        $v1
label_1e0d04:
    if (ctx->pc == 0x1E0D04u) {
        ctx->pc = 0x1E0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D00u;
        // 0x1e0d04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D08u;
        goto label_1e0d08;
    }
    ctx->pc = 0x1E0D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0D08u);
        ctx->pc = 0x1E0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D00u;
        // 0x1e0d04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0D00u, 0x1E0D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0D08u;
label_1e0d08:
    // 0x1e0d08: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x1e0d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e0d0c:
    // 0x1e0d0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e0d10:
    // 0x1e0d10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1e0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1e0d14:
    // 0x1e0d14: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e0d14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e0d18:
    // 0x1e0d18: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1e0d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e0d1c:
    // 0x1e0d1c: 0xc0f809  jalr        $a2
label_1e0d20:
    if (ctx->pc == 0x1E0D20u) {
        ctx->pc = 0x1E0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D1Cu;
        // 0x1e0d20: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D24u;
        goto label_1e0d24;
    }
    ctx->pc = 0x1E0D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1E0D24u);
        ctx->pc = 0x1E0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D1Cu;
        // 0x1e0d20: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0D1Cu, 0x1E0D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0D24u;
label_1e0d24:
    // 0x1e0d24: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1e0d24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0d28:
    // 0x1e0d28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e0d28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e0d2c:
    // 0x1e0d2c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1e0d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e0d30:
    // 0x1e0d30: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x1e0d30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
label_1e0d34:
    // 0x1e0d34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0d38:
    // 0x1e0d38: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e0d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e0d3c:
    // 0x1e0d3c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e0d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e0d40:
    // 0x1e0d40: 0x60f809  jalr        $v1
label_1e0d44:
    if (ctx->pc == 0x1E0D44u) {
        ctx->pc = 0x1E0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D40u;
        // 0x1e0d44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D48u;
        goto label_1e0d48;
    }
    ctx->pc = 0x1E0D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0D48u);
        ctx->pc = 0x1E0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D40u;
        // 0x1e0d44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0D40u, 0x1E0D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0D48u;
label_1e0d48:
    // 0x1e0d48: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1e0d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e0d4c:
    // 0x1e0d4c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x1e0d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e0d50:
    // 0x1e0d50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e0d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e0d54:
    // 0x1e0d54: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e0d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1e0d58:
    // 0x1e0d58: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1e0d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e0d5c:
    // 0x1e0d5c: 0x50c00027  beql        $a2, $zero, . + 4 + (0x27 << 2)
label_1e0d60:
    if (ctx->pc == 0x1E0D60u) {
        ctx->pc = 0x1E0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D5Cu;
        // 0x1e0d60: 0x7a020030  lq          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D64u;
        goto label_1e0d64;
    }
    ctx->pc = 0x1E0D5Cu;
    {
        const bool branch_taken_0x1e0d5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0d5c) {
            ctx->pc = 0x1E0D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0D5Cu;
            // 0x1e0d60: 0x7a020030  lq          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0DFCu;
            goto label_1e0dfc;
        }
    }
    ctx->pc = 0x1E0D64u;
label_1e0d64:
    // 0x1e0d64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e0d68:
    // 0x1e0d68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e0d6c:
    // 0x1e0d6c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1e0d6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1e0d70:
    // 0x1e0d70: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e0d70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e0d74:
    // 0x1e0d74: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e0d78:
    // 0x1e0d78: 0x60f809  jalr        $v1
label_1e0d7c:
    if (ctx->pc == 0x1E0D7Cu) {
        ctx->pc = 0x1E0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D78u;
        // 0x1e0d7c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D80u;
        goto label_1e0d80;
    }
    ctx->pc = 0x1E0D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0D80u);
        ctx->pc = 0x1E0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D78u;
        // 0x1e0d7c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0D78u, 0x1E0D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0D80u;
label_1e0d80:
    // 0x1e0d80: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x1e0d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e0d84:
    // 0x1e0d84: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x1e0d84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e0d88:
    // 0x1e0d88: 0x0  nop
    ctx->pc = 0x1e0d88u;
    // NOP
label_1e0d8c:
    // 0x1e0d8c: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
label_1e0d90:
    if (ctx->pc == 0x1E0D90u) {
        ctx->pc = 0x1E0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D8Cu;
        // 0x1e0d90: 0x7a020030  lq          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D94u;
        goto label_1e0d94;
    }
    ctx->pc = 0x1E0D8Cu;
    {
        const bool branch_taken_0x1e0d8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e0d8c) {
            ctx->pc = 0x1E0D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0D8Cu;
            // 0x1e0d90: 0x7a020030  lq          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0DFCu;
            goto label_1e0dfc;
        }
    }
    ctx->pc = 0x1E0D94u;
label_1e0d94:
    // 0x1e0d94: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x1e0d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e0d98:
    // 0x1e0d98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0d9c:
    // 0x1e0d9c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e0d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e0da0:
    // 0x1e0da0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e0da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e0da4:
    // 0x1e0da4: 0x60f809  jalr        $v1
label_1e0da8:
    if (ctx->pc == 0x1E0DA8u) {
        ctx->pc = 0x1E0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DA4u;
        // 0x1e0da8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DACu;
        goto label_1e0dac;
    }
    ctx->pc = 0x1E0DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0DACu);
        ctx->pc = 0x1E0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DA4u;
        // 0x1e0da8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0DA4u, 0x1E0DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0DACu;
label_1e0dac:
    // 0x1e0dac: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1e0dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e0db0:
    // 0x1e0db0: 0x0  nop
    ctx->pc = 0x1e0db0u;
    // NOP
label_1e0db4:
    // 0x1e0db4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1e0db8:
    if (ctx->pc == 0x1E0DB8u) {
        ctx->pc = 0x1E0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB4u;
        // 0x1e0db8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DBCu;
        goto label_1e0dbc;
    }
    ctx->pc = 0x1E0DB4u;
    {
        const bool branch_taken_0x1e0db4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB4u;
        // 0x1e0db8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0db4) {
            ctx->pc = 0x1E0DF8u;
            goto label_1e0df8;
        }
    }
    ctx->pc = 0x1E0DBCu;
label_1e0dbc:
    // 0x1e0dbc: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x1e0dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1e0dc0:
    // 0x1e0dc0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e0dc4:
    // 0x1e0dc4: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1e0dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1e0dc8:
    // 0x1e0dc8: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1e0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1e0dcc:
    // 0x1e0dcc: 0x40f809  jalr        $v0
label_1e0dd0:
    if (ctx->pc == 0x1E0DD0u) {
        ctx->pc = 0x1E0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DCCu;
        // 0x1e0dd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DD4u;
        goto label_1e0dd4;
    }
    ctx->pc = 0x1E0DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0DD4u);
        ctx->pc = 0x1E0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DCCu;
        // 0x1e0dd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0DCCu, 0x1E0DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0DD4u;
label_1e0dd4:
    // 0x1e0dd4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1e0dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1e0dd8:
    // 0x1e0dd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e0dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e0ddc:
    // 0x1e0ddc: 0xc602007c  lwc1        $f2, 0x7C($s0)
    ctx->pc = 0x1e0ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e0de0:
    // 0x1e0de0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e0de0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1e0de4:
    // 0x1e0de4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1e0de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e0de8:
    // 0x1e0de8: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x1e0de8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_1e0dec:
    // 0x1e0dec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e0decu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e0df0:
    // 0x1e0df0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e0df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e0df4:
    // 0x1e0df4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e0df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1e0df8:
    // 0x1e0df8: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1e0df8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_1e0dfc:
    // 0x1e0dfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0e00:
    // 0x1e0e00: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e0e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e0e04:
    // 0x1e0e04: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1e0e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1e0e08:
    // 0x1e0e08: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1e0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1e0e0c:
    // 0x1e0e0c: 0x40f809  jalr        $v0
label_1e0e10:
    if (ctx->pc == 0x1E0E10u) {
        ctx->pc = 0x1E0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E0Cu;
        // 0x1e0e10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0E14u;
        goto label_1e0e14;
    }
    ctx->pc = 0x1E0E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0E14u);
        ctx->pc = 0x1E0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E0Cu;
        // 0x1e0e10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E0Cu, 0x1E0E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0E14u;
label_1e0e14:
    // 0x1e0e14: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1e0e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e0e18:
    // 0x1e0e18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e0e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0e1c:
    // 0x1e0e1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e0e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e0e20:
    // 0x1e0e20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e0e20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e0e24:
    // 0x1e0e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0e28:
    // 0x1e0e28: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1e0e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e0e2c:
    // 0x1e0e2c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1e0e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e0e30:
    // 0x1e0e30: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e0e30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e0e34:
    // 0x1e0e34: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1e0e34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0e38:
    // 0x1e0e38: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x1e0e38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_1e0e3c:
    // 0x1e0e3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e0e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0e40:
    // 0x1e0e40: 0x3e00008  jr          $ra
label_1e0e44:
    if (ctx->pc == 0x1E0E44u) {
        ctx->pc = 0x1E0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E40u;
        // 0x1e0e44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0E48u;
        goto label_fallthrough_0x1e0e40;
    }
    ctx->pc = 0x1E0E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E40u;
        // 0x1e0e44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0e40:
    ctx->pc = 0x1E0E48u;
}
