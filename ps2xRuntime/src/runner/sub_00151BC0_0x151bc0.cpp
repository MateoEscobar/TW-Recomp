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

// Function: sub_00151BC0
// Address: 0x151bc0 - 0x151c70
void sub_00151BC0_0x151bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151BC0_0x151bc0");
#endif

    switch (ctx->pc) {
        case 0x151bf0u: goto label_151bf0;
        case 0x151bfcu: goto label_151bfc;
        case 0x151c20u: goto label_151c20;
        case 0x151c40u: goto label_151c40;
        case 0x151c48u: goto label_151c48;
        default: break;
    }

    ctx->pc = 0x151bc0u;

    // 0x151bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x151bc4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x151bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x151bc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x151bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x151bcc: 0x8c62c540  lw          $v0, -0x3AC0($v1)
    ctx->pc = 0x151bccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C540u));
    // 0x151bd0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x151bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151bd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x151bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x151bd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x151bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x151bdc: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151BDCu;
    {
        const bool branch_taken_0x151bdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x151BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BDCu;
        // 0x151be0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151bdc) {
            ctx->pc = 0x151C04u;
            goto label_151c04;
        }
    }
    ctx->pc = 0x151BE4u;
    // 0x151be4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151be8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151BE8u;
    SET_GPR_U32(ctx, 31, 0x151BF0u);
    ctx->pc = 0x151BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BE8u;
    // 0x151bec: 0x2484d460  addiu       $a0, $a0, -0x2BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151BE8u, 0x151BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BF0u;
label_151bf0:
    // 0x151bf0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151bf4: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151BF4u;
    SET_GPR_U32(ctx, 31, 0x151BFCu);
    ctx->pc = 0x151BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BF4u;
    // 0x151bf8: 0x2484d488  addiu       $a0, $a0, -0x2B78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151BF4u, 0x151BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BFCu;
label_151bfc:
    // 0x151bfc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x151BFCu;
    {
        const bool branch_taken_0x151bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BFCu;
        // 0x151c00: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151bfc) {
            ctx->pc = 0x151C58u;
            goto label_151c58;
        }
    }
    ctx->pc = 0x151C04u;
label_151c04:
    // 0x151c04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x151c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x151c08: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x151c08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x151c0c: 0x8c62c538  lw          $v0, -0x3AC8($v1)
    ctx->pc = 0x151c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C538u));
    // 0x151c10: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151C10u;
    {
        const bool branch_taken_0x151c10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x151C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C10u;
        // 0x151c14: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c10) {
            ctx->pc = 0x151C38u;
            goto label_151c38;
        }
    }
    ctx->pc = 0x151C18u;
    // 0x151c18: 0xc10f3e4  jal         func_43CF90
    ctx->pc = 0x151C18u;
    SET_GPR_U32(ctx, 31, 0x151C20u);
    ctx->pc = 0x43CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CF90u, 0x151C18u, 0x151C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C20u;
label_151c20:
    // 0x151c20: 0x8e23c53c  lw          $v1, -0x3AC4($s1)
    ctx->pc = 0x151c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952252)));
    // 0x151c24: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151C24u;
    {
        const bool branch_taken_0x151c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x151C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C24u;
        // 0x151c28: 0x8e02c538  lw          $v0, -0x3AC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c24) {
            ctx->pc = 0x151C38u;
            goto label_151c38;
        }
    }
    ctx->pc = 0x151C2Cu;
    // 0x151c2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151c30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151C30u;
    {
        const bool branch_taken_0x151c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C30u;
        // 0x151c34: 0xae02c538  sw          $v0, -0x3AC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294952248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c30) {
            ctx->pc = 0x151C54u;
            goto label_151c54;
        }
    }
    ctx->pc = 0x151C38u;
label_151c38:
    // 0x151c38: 0xc10f438  jal         func_43D0E0
    ctx->pc = 0x151C38u;
    SET_GPR_U32(ctx, 31, 0x151C40u);
    ctx->pc = 0x151C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C38u;
    // 0x151c3c: 0x8e44c540  lw          $a0, -0x3AC0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0E0u, 0x151C38u, 0x151C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C40u;
label_151c40:
    // 0x151c40: 0xc10f3e4  jal         func_43CF90
    ctx->pc = 0x151C40u;
    SET_GPR_U32(ctx, 31, 0x151C48u);
    ctx->pc = 0x43CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CF90u, 0x151C40u, 0x151C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C48u;
label_151c48:
    // 0x151c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151c4c: 0xae22c53c  sw          $v0, -0x3AC4($s1)
    ctx->pc = 0x151c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952252), GPR_U32(ctx, 2));
    // 0x151c50: 0xae03c538  sw          $v1, -0x3AC8($s0)
    ctx->pc = 0x151c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952248), GPR_U32(ctx, 3));
label_151c54:
    // 0x151c54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x151c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_151c58:
    // 0x151c58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x151c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151c5c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x151c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151c64: 0x3e00008  jr          $ra
    ctx->pc = 0x151C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C64u;
        // 0x151c68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151C6Cu;
    // 0x151c6c: 0x0  nop
    ctx->pc = 0x151c6cu;
    // NOP
    ctx->pc = 0x151c70u;
}
