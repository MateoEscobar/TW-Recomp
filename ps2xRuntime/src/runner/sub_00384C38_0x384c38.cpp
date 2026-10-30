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

// Function: sub_00384C38
// Address: 0x384c38 - 0x384ce0
void sub_00384C38_0x384c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384C38_0x384c38");
#endif

    switch (ctx->pc) {
        case 0x384c38u: goto label_384c38;
        case 0x384c3cu: goto label_384c3c;
        case 0x384c40u: goto label_384c40;
        case 0x384c44u: goto label_384c44;
        case 0x384c48u: goto label_384c48;
        case 0x384c4cu: goto label_384c4c;
        case 0x384c50u: goto label_384c50;
        case 0x384c54u: goto label_384c54;
        case 0x384c58u: goto label_384c58;
        case 0x384c5cu: goto label_384c5c;
        case 0x384c60u: goto label_384c60;
        case 0x384c64u: goto label_384c64;
        case 0x384c68u: goto label_384c68;
        case 0x384c6cu: goto label_384c6c;
        case 0x384c70u: goto label_384c70;
        case 0x384c74u: goto label_384c74;
        case 0x384c78u: goto label_384c78;
        case 0x384c7cu: goto label_384c7c;
        case 0x384c80u: goto label_384c80;
        case 0x384c84u: goto label_384c84;
        case 0x384c88u: goto label_384c88;
        case 0x384c8cu: goto label_384c8c;
        case 0x384c90u: goto label_384c90;
        case 0x384c94u: goto label_384c94;
        case 0x384c98u: goto label_384c98;
        case 0x384c9cu: goto label_384c9c;
        case 0x384ca0u: goto label_384ca0;
        case 0x384ca4u: goto label_384ca4;
        case 0x384ca8u: goto label_384ca8;
        case 0x384cacu: goto label_384cac;
        case 0x384cb0u: goto label_384cb0;
        case 0x384cb4u: goto label_384cb4;
        case 0x384cb8u: goto label_384cb8;
        case 0x384cbcu: goto label_384cbc;
        case 0x384cc0u: goto label_384cc0;
        case 0x384cc4u: goto label_384cc4;
        case 0x384cc8u: goto label_384cc8;
        case 0x384cccu: goto label_384ccc;
        case 0x384cd0u: goto label_384cd0;
        case 0x384cd4u: goto label_384cd4;
        case 0x384cd8u: goto label_384cd8;
        case 0x384cdcu: goto label_384cdc;
        default: break;
    }

    ctx->pc = 0x384c38u;

label_384c38:
    // 0x384c38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x384c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_384c3c:
    // 0x384c3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x384c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_384c40:
    // 0x384c40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x384c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_384c44:
    // 0x384c44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_384c48:
    // 0x384c48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x384c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_384c4c:
    // 0x384c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_384c50:
    // 0x384c50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x384c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_384c54:
    // 0x384c54: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_384c58:
    if (ctx->pc == 0x384C58u) {
        ctx->pc = 0x384C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C54u;
        // 0x384c58: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C5Cu;
        goto label_384c5c;
    }
    ctx->pc = 0x384C54u;
    {
        const bool branch_taken_0x384c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C54u;
        // 0x384c58: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c54) {
            ctx->pc = 0x384CC4u;
            goto label_384cc4;
        }
    }
    ctx->pc = 0x384C5Cu;
label_384c5c:
    // 0x384c5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x384c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_384c60:
    // 0x384c60: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x384c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_384c64:
    // 0x384c64: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x384c64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_384c68:
    // 0x384c68: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x384c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_384c6c:
    // 0x384c6c: 0x40f809  jalr        $v0
label_384c70:
    if (ctx->pc == 0x384C70u) {
        ctx->pc = 0x384C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C6Cu;
        // 0x384c70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C74u;
        goto label_384c74;
    }
    ctx->pc = 0x384C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384C74u);
        ctx->pc = 0x384C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C6Cu;
        // 0x384c70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384C6Cu, 0x384C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384C74u;
label_384c74:
    // 0x384c74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x384c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384c78:
    // 0x384c78: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_384c7c:
    if (ctx->pc == 0x384C7Cu) {
        ctx->pc = 0x384C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C78u;
        // 0x384c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C80u;
        goto label_384c80;
    }
    ctx->pc = 0x384C78u;
    {
        const bool branch_taken_0x384c78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x384C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C78u;
        // 0x384c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c78) {
            ctx->pc = 0x384CC8u;
            goto label_384cc8;
        }
    }
    ctx->pc = 0x384C80u;
label_384c80:
    // 0x384c80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x384c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_384c84:
    // 0x384c84: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x384c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_384c88:
    // 0x384c88: 0x8c64014c  lw          $a0, 0x14C($v1)
    ctx->pc = 0x384c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_384c8c:
    // 0x384c8c: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
label_384c90:
    if (ctx->pc == 0x384C90u) {
        ctx->pc = 0x384C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C8Cu;
        // 0x384c90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C94u;
        goto label_384c94;
    }
    ctx->pc = 0x384C8Cu;
    {
        const bool branch_taken_0x384c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x384C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C8Cu;
        // 0x384c90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c8c) {
            ctx->pc = 0x384CC8u;
            goto label_384cc8;
        }
    }
    ctx->pc = 0x384C94u;
label_384c94:
    // 0x384c94: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x384c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_384c98:
    // 0x384c98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x384c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_384c9c:
    // 0x384c9c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x384c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_384ca0:
    // 0x384ca0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x384ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_384ca4:
    // 0x384ca4: 0x40f809  jalr        $v0
label_384ca8:
    if (ctx->pc == 0x384CA8u) {
        ctx->pc = 0x384CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CA4u;
        // 0x384ca8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384CACu;
        goto label_384cac;
    }
    ctx->pc = 0x384CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384CACu);
        ctx->pc = 0x384CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CA4u;
        // 0x384ca8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384CA4u, 0x384CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384CACu;
label_384cac:
    // 0x384cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x384cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_384cb0:
    // 0x384cb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x384cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384cb4:
    // 0x384cb4: 0xc0e1338  jal         func_384CE0
label_384cb8:
    if (ctx->pc == 0x384CB8u) {
        ctx->pc = 0x384CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CB4u;
        // 0x384cb8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384CBCu;
        goto label_384cbc;
    }
    ctx->pc = 0x384CB4u;
    SET_GPR_U32(ctx, 31, 0x384CBCu);
    ctx->pc = 0x384CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384CB4u;
    // 0x384cb8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384CE0u, 0x384CB4u, 0x384CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384CBCu;
label_384cbc:
    // 0x384cbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_384cc0:
    if (ctx->pc == 0x384CC0u) {
        ctx->pc = 0x384CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CBCu;
        // 0x384cc0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384CC4u;
        goto label_384cc4;
    }
    ctx->pc = 0x384CBCu;
    {
        const bool branch_taken_0x384cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CBCu;
        // 0x384cc0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384cbc) {
            ctx->pc = 0x384CCCu;
            goto label_384ccc;
        }
    }
    ctx->pc = 0x384CC4u;
label_384cc4:
    // 0x384cc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x384cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384cc8:
    // 0x384cc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x384cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_384ccc:
    // 0x384ccc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x384cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_384cd0:
    // 0x384cd0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x384cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384cd4:
    // 0x384cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_384cd8:
    // 0x384cd8: 0x3e00008  jr          $ra
label_384cdc:
    if (ctx->pc == 0x384CDCu) {
        ctx->pc = 0x384CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CD8u;
        // 0x384cdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384CE0u;
        goto label_fallthrough_0x384cd8;
    }
    ctx->pc = 0x384CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CD8u;
        // 0x384cdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x384cd8:
    ctx->pc = 0x384CE0u;
}
