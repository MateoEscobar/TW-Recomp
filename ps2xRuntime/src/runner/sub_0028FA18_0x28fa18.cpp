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

// Function: sub_0028FA18
// Address: 0x28fa18 - 0x28fae8
void sub_0028FA18_0x28fa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FA18_0x28fa18");
#endif

    switch (ctx->pc) {
        case 0x28fa58u: goto label_28fa58;
        case 0x28faacu: goto label_28faac;
        case 0x28fac4u: goto label_28fac4;
        default: break;
    }

    ctx->pc = 0x28fa18u;

    // 0x28fa18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28fa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28fa1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x28fa20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28fa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28fa24: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28fa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28fa28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28fa28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28fa30: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x28fa34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fa38: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x28fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x28fa3c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x28fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28fa40: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x28fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x28fa44: 0x8c730048  lw          $s3, 0x48($v1)
    ctx->pc = 0x28fa44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x28fa48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28fa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa4c: 0x90b10333  lbu         $s1, 0x333($a1)
    ctx->pc = 0x28fa4cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 819)));
    // 0x28fa50: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x28FA50u;
    SET_GPR_U32(ctx, 31, 0x28FA58u);
    ctx->pc = 0x28FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA50u;
    // 0x28fa54: 0x8c520034  lw          $s2, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x28FA50u, 0x28FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA58u;
label_28fa58:
    // 0x28fa58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fa5c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FA5Cu;
    {
        const bool branch_taken_0x28fa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA5Cu;
        // 0x28fa60: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa5c) {
            ctx->pc = 0x28FA74u;
            goto label_28fa74;
        }
    }
    ctx->pc = 0x28FA64u;
    // 0x28fa64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FA64u;
    {
        const bool branch_taken_0x28fa64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA64u;
        // 0x28fa68: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa64) {
            ctx->pc = 0x28FA80u;
            goto label_28fa80;
        }
    }
    ctx->pc = 0x28FA6Cu;
    // 0x28fa6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28FA6Cu;
    {
        const bool branch_taken_0x28fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA6Cu;
        // 0x28fa70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa6c) {
            ctx->pc = 0x28FA80u;
            goto label_28fa80;
        }
    }
    ctx->pc = 0x28FA74u;
label_28fa74:
    // 0x28fa74: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28FA74u;
    {
        const bool branch_taken_0x28fa74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA74u;
        // 0x28fa78: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa74) {
            ctx->pc = 0x28FA80u;
            goto label_28fa80;
        }
    }
    ctx->pc = 0x28FA7Cu;
    // 0x28fa7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28fa80:
    // 0x28fa80: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x28fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x28fa84: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x28fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x28fa88: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x28fa88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28fa8c: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x28fa8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28fa90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FA90u;
    {
        const bool branch_taken_0x28fa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA90u;
        // 0x28fa94: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa90) {
            ctx->pc = 0x28FAA4u;
            goto label_28faa4;
        }
    }
    ctx->pc = 0x28FA98u;
    // 0x28fa98: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x28fa98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28fa9c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x28FA9Cu;
    {
        const bool branch_taken_0x28fa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fa9c) {
            ctx->pc = 0x28FAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FA9Cu;
            // 0x28faa0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FACCu;
            goto label_28facc;
        }
    }
    ctx->pc = 0x28FAA4u;
label_28faa4:
    // 0x28faa4: 0xc0a4f34  jal         func_293CD0
    ctx->pc = 0x28FAA4u;
    SET_GPR_U32(ctx, 31, 0x28FAACu);
    ctx->pc = 0x293CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293CD0u, 0x28FAA4u, 0x28FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAACu;
label_28faac:
    // 0x28faac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fab0: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FAB0u;
    {
        const bool branch_taken_0x28fab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28fab0) {
            ctx->pc = 0x28FAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FAB0u;
            // 0x28fab4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FACCu;
            goto label_28facc;
        }
    }
    ctx->pc = 0x28FAB8u;
    // 0x28fab8: 0x8e05015c  lw          $a1, 0x15C($s0)
    ctx->pc = 0x28fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x28fabc: 0xc0a2cd6  jal         func_28B358
    ctx->pc = 0x28FABCu;
    SET_GPR_U32(ctx, 31, 0x28FAC4u);
    ctx->pc = 0x28FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FABCu;
    // 0x28fac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B358u, 0x28FABCu, 0x28FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAC4u;
label_28fac4:
    // 0x28fac4: 0xae130160  sw          $s3, 0x160($s0)
    ctx->pc = 0x28fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 19));
    // 0x28fac8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28fac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28facc:
    // 0x28facc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28faccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fad0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28fad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fad4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28fad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fadc: 0x3e00008  jr          $ra
    ctx->pc = 0x28FADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FADCu;
        // 0x28fae0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FAE4u;
    // 0x28fae4: 0x0  nop
    ctx->pc = 0x28fae4u;
    // NOP
    ctx->pc = 0x28fae8u;
}
