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

// Function: sub_00279C48
// Address: 0x279c48 - 0x279d38
void sub_00279C48_0x279c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279C48_0x279c48");
#endif

    switch (ctx->pc) {
        case 0x279c48u: goto label_279c48;
        case 0x279c4cu: goto label_279c4c;
        case 0x279c50u: goto label_279c50;
        case 0x279c54u: goto label_279c54;
        case 0x279c58u: goto label_279c58;
        case 0x279c5cu: goto label_279c5c;
        case 0x279c60u: goto label_279c60;
        case 0x279c64u: goto label_279c64;
        case 0x279c68u: goto label_279c68;
        case 0x279c6cu: goto label_279c6c;
        case 0x279c70u: goto label_279c70;
        case 0x279c74u: goto label_279c74;
        case 0x279c78u: goto label_279c78;
        case 0x279c7cu: goto label_279c7c;
        case 0x279c80u: goto label_279c80;
        case 0x279c84u: goto label_279c84;
        case 0x279c88u: goto label_279c88;
        case 0x279c8cu: goto label_279c8c;
        case 0x279c90u: goto label_279c90;
        case 0x279c94u: goto label_279c94;
        case 0x279c98u: goto label_279c98;
        case 0x279c9cu: goto label_279c9c;
        case 0x279ca0u: goto label_279ca0;
        case 0x279ca4u: goto label_279ca4;
        case 0x279ca8u: goto label_279ca8;
        case 0x279cacu: goto label_279cac;
        case 0x279cb0u: goto label_279cb0;
        case 0x279cb4u: goto label_279cb4;
        case 0x279cb8u: goto label_279cb8;
        case 0x279cbcu: goto label_279cbc;
        case 0x279cc0u: goto label_279cc0;
        case 0x279cc4u: goto label_279cc4;
        case 0x279cc8u: goto label_279cc8;
        case 0x279cccu: goto label_279ccc;
        case 0x279cd0u: goto label_279cd0;
        case 0x279cd4u: goto label_279cd4;
        case 0x279cd8u: goto label_279cd8;
        case 0x279cdcu: goto label_279cdc;
        case 0x279ce0u: goto label_279ce0;
        case 0x279ce4u: goto label_279ce4;
        case 0x279ce8u: goto label_279ce8;
        case 0x279cecu: goto label_279cec;
        case 0x279cf0u: goto label_279cf0;
        case 0x279cf4u: goto label_279cf4;
        case 0x279cf8u: goto label_279cf8;
        case 0x279cfcu: goto label_279cfc;
        case 0x279d00u: goto label_279d00;
        case 0x279d04u: goto label_279d04;
        case 0x279d08u: goto label_279d08;
        case 0x279d0cu: goto label_279d0c;
        case 0x279d10u: goto label_279d10;
        case 0x279d14u: goto label_279d14;
        case 0x279d18u: goto label_279d18;
        case 0x279d1cu: goto label_279d1c;
        case 0x279d20u: goto label_279d20;
        case 0x279d24u: goto label_279d24;
        case 0x279d28u: goto label_279d28;
        case 0x279d2cu: goto label_279d2c;
        case 0x279d30u: goto label_279d30;
        case 0x279d34u: goto label_279d34;
        default: break;
    }

    ctx->pc = 0x279c48u;

label_279c48:
    // 0x279c48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_279c4c:
    // 0x279c4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x279c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_279c50:
    // 0x279c50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x279c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_279c54:
    // 0x279c54: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x279c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_279c58:
    // 0x279c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_279c5c:
    // 0x279c5c: 0xc08a61a  jal         func_229868
label_279c60:
    if (ctx->pc == 0x279C60u) {
        ctx->pc = 0x279C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C5Cu;
        // 0x279c60: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C64u;
        goto label_279c64;
    }
    ctx->pc = 0x279C5Cu;
    SET_GPR_U32(ctx, 31, 0x279C64u);
    ctx->pc = 0x279C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279C5Cu;
    // 0x279c60: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279C5Cu, 0x279C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C64u;
label_279c64:
    // 0x279c64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x279c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279c68:
    // 0x279c68: 0xc08a61a  jal         func_229868
label_279c6c:
    if (ctx->pc == 0x279C6Cu) {
        ctx->pc = 0x279C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C68u;
        // 0x279c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C70u;
        goto label_279c70;
    }
    ctx->pc = 0x279C68u;
    SET_GPR_U32(ctx, 31, 0x279C70u);
    ctx->pc = 0x279C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279C68u;
    // 0x279c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279C68u, 0x279C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C70u;
label_279c70:
    // 0x279c70: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_279c74:
    if (ctx->pc == 0x279C74u) {
        ctx->pc = 0x279C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C70u;
        // 0x279c74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C78u;
        goto label_279c78;
    }
    ctx->pc = 0x279C70u;
    {
        const bool branch_taken_0x279c70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C70u;
        // 0x279c74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c70) {
            ctx->pc = 0x279CF4u;
            goto label_279cf4;
        }
    }
    ctx->pc = 0x279C78u;
label_279c78:
    // 0x279c78: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
label_279c7c:
    if (ctx->pc == 0x279C7Cu) {
        ctx->pc = 0x279C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C78u;
        // 0x279c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C80u;
        goto label_279c80;
    }
    ctx->pc = 0x279C78u;
    {
        const bool branch_taken_0x279c78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C78u;
        // 0x279c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c78) {
            ctx->pc = 0x279D1Cu;
            goto label_279d1c;
        }
    }
    ctx->pc = 0x279C80u;
label_279c80:
    // 0x279c80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x279c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_279c84:
    // 0x279c84: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x279c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_279c88:
    // 0x279c88: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x279c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_279c8c:
    // 0x279c8c: 0x40f809  jalr        $v0
label_279c90:
    if (ctx->pc == 0x279C90u) {
        ctx->pc = 0x279C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C8Cu;
        // 0x279c90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C94u;
        goto label_279c94;
    }
    ctx->pc = 0x279C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x279C94u);
        ctx->pc = 0x279C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C8Cu;
        // 0x279c90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279C8Cu, 0x279C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279C94u;
label_279c94:
    // 0x279c94: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_279c98:
    if (ctx->pc == 0x279C98u) {
        ctx->pc = 0x279C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C94u;
        // 0x279c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C9Cu;
        goto label_279c9c;
    }
    ctx->pc = 0x279C94u;
    {
        const bool branch_taken_0x279c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C94u;
        // 0x279c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c94) {
            ctx->pc = 0x279D1Cu;
            goto label_279d1c;
        }
    }
    ctx->pc = 0x279C9Cu;
label_279c9c:
    // 0x279c9c: 0xc089f5e  jal         func_227D78
label_279ca0:
    if (ctx->pc == 0x279CA0u) {
        ctx->pc = 0x279CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C9Cu;
        // 0x279ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279CA4u;
        goto label_279ca4;
    }
    ctx->pc = 0x279C9Cu;
    SET_GPR_U32(ctx, 31, 0x279CA4u);
    ctx->pc = 0x279CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279C9Cu;
    // 0x279ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x279C9Cu, 0x279CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CA4u;
label_279ca4:
    // 0x279ca4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_279ca8:
    if (ctx->pc == 0x279CA8u) {
        ctx->pc = 0x279CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CA4u;
        // 0x279ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279CACu;
        goto label_279cac;
    }
    ctx->pc = 0x279CA4u;
    {
        const bool branch_taken_0x279ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CA4u;
        // 0x279ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ca4) {
            ctx->pc = 0x279CF4u;
            goto label_279cf4;
        }
    }
    ctx->pc = 0x279CACu;
label_279cac:
    // 0x279cac: 0xc09e42a  jal         func_2790A8
label_279cb0:
    if (ctx->pc == 0x279CB0u) {
        ctx->pc = 0x279CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CACu;
        // 0x279cb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279CB4u;
        goto label_279cb4;
    }
    ctx->pc = 0x279CACu;
    SET_GPR_U32(ctx, 31, 0x279CB4u);
    ctx->pc = 0x279CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279CACu;
    // 0x279cb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2790A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2790A8u, 0x279CACu, 0x279CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CB4u;
label_279cb4:
    // 0x279cb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x279cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279cb8:
    // 0x279cb8: 0xc441096c  lwc1        $f1, 0x96C($v0)
    ctx->pc = 0x279cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279cbc:
    // 0x279cbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279cc0:
    // 0x279cc0: 0x0  nop
    ctx->pc = 0x279cc0u;
    // NOP
label_279cc4:
    // 0x279cc4: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_279cc8:
    if (ctx->pc == 0x279CC8u) {
        ctx->pc = 0x279CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CC4u;
        // 0x279cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279CCCu;
        goto label_279ccc;
    }
    ctx->pc = 0x279CC4u;
    {
        const bool branch_taken_0x279cc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CC4u;
        // 0x279cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cc4) {
            ctx->pc = 0x279D1Cu;
            goto label_279d1c;
        }
    }
    ctx->pc = 0x279CCCu;
label_279ccc:
    // 0x279ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_279cd0:
    // 0x279cd0: 0xc08a684  jal         func_229A10
label_279cd4:
    if (ctx->pc == 0x279CD4u) {
        ctx->pc = 0x279CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CD0u;
        // 0x279cd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279CD8u;
        goto label_279cd8;
    }
    ctx->pc = 0x279CD0u;
    SET_GPR_U32(ctx, 31, 0x279CD8u);
    ctx->pc = 0x279CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279CD0u;
    // 0x279cd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x279CD0u, 0x279CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CD8u;
label_279cd8:
    // 0x279cd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x279cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279cdc:
    // 0x279cdc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x279cdcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_279ce0:
    // 0x279ce0: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x279ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279ce4:
    // 0x279ce4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279ce8:
    // 0x279ce8: 0x0  nop
    ctx->pc = 0x279ce8u;
    // NOP
label_279cec:
    // 0x279cec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_279cf0:
    if (ctx->pc == 0x279CF0u) {
        ctx->pc = 0x279CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CECu;
        // 0x279cf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279CF4u;
        goto label_279cf4;
    }
    ctx->pc = 0x279CECu;
    {
        const bool branch_taken_0x279cec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CECu;
        // 0x279cf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cec) {
            ctx->pc = 0x279CFCu;
            goto label_279cfc;
        }
    }
    ctx->pc = 0x279CF4u;
label_279cf4:
    // 0x279cf4: 0x10000009  b           . + 4 + (0x9 << 2)
label_279cf8:
    if (ctx->pc == 0x279CF8u) {
        ctx->pc = 0x279CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CF4u;
        // 0x279cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279CFCu;
        goto label_279cfc;
    }
    ctx->pc = 0x279CF4u;
    {
        const bool branch_taken_0x279cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CF4u;
        // 0x279cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cf4) {
            ctx->pc = 0x279D1Cu;
            goto label_279d1c;
        }
    }
    ctx->pc = 0x279CFCu;
label_279cfc:
    // 0x279cfc: 0xc089f98  jal         func_227E60
label_279d00:
    if (ctx->pc == 0x279D00u) {
        ctx->pc = 0x279D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CFCu;
        // 0x279d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D04u;
        goto label_279d04;
    }
    ctx->pc = 0x279CFCu;
    SET_GPR_U32(ctx, 31, 0x279D04u);
    ctx->pc = 0x279D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279CFCu;
    // 0x279d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x279CFCu, 0x279D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D04u;
label_279d04:
    // 0x279d04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_279d08:
    if (ctx->pc == 0x279D08u) {
        ctx->pc = 0x279D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D04u;
        // 0x279d08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D0Cu;
        goto label_279d0c;
    }
    ctx->pc = 0x279D04u;
    {
        const bool branch_taken_0x279d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D04u;
        // 0x279d08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d04) {
            ctx->pc = 0x279D1Cu;
            goto label_279d1c;
        }
    }
    ctx->pc = 0x279D0Cu;
label_279d0c:
    // 0x279d0c: 0xc088f04  jal         func_223C10
label_279d10:
    if (ctx->pc == 0x279D10u) {
        ctx->pc = 0x279D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D0Cu;
        // 0x279d10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D14u;
        goto label_279d14;
    }
    ctx->pc = 0x279D0Cu;
    SET_GPR_U32(ctx, 31, 0x279D14u);
    ctx->pc = 0x279D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D0Cu;
    // 0x279d10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x279D0Cu, 0x279D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D14u;
label_279d14:
    // 0x279d14: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x279d14u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_279d18:
    // 0x279d18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x279d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279d1c:
    // 0x279d1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x279d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_279d20:
    // 0x279d20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x279d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_279d24:
    // 0x279d24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x279d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279d28:
    // 0x279d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279d2c:
    // 0x279d2c: 0x3e00008  jr          $ra
label_279d30:
    if (ctx->pc == 0x279D30u) {
        ctx->pc = 0x279D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D2Cu;
        // 0x279d30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D34u;
        goto label_279d34;
    }
    ctx->pc = 0x279D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D2Cu;
        // 0x279d30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279D34u;
label_279d34:
    // 0x279d34: 0x0  nop
    ctx->pc = 0x279d34u;
    // NOP
    ctx->pc = 0x279d38u;
}
