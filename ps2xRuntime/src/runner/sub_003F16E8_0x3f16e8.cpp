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

// Function: sub_003F16E8
// Address: 0x3f16e8 - 0x3f1760
void sub_003F16E8_0x3f16e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F16E8_0x3f16e8");
#endif

    switch (ctx->pc) {
        case 0x3f173cu: goto label_3f173c;
        case 0x3f1748u: goto label_3f1748;
        default: break;
    }

    ctx->pc = 0x3f16e8u;

    // 0x3f16e8: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x3f16e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x3f16ec: 0x7fb10440  sq          $s1, 0x440($sp)
    ctx->pc = 0x3f16ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 17));
    // 0x3f16f0: 0x7fb00450  sq          $s0, 0x450($sp)
    ctx->pc = 0x3f16f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 16));
    // 0x3f16f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f16f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f16f8: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x3f16f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x3f16fc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3f16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3f1700: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3F1700u;
    {
        const bool branch_taken_0x3f1700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1700u;
        // 0x3f1704: 0x7bb00450  lq          $s0, 0x450($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1700) {
            ctx->pc = 0x3F1750u;
            goto label_3f1750;
        }
    }
    ctx->pc = 0x3F1708u;
    // 0x3f1708: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3f1708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3f170c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F170Cu;
    {
        const bool branch_taken_0x3f170c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f170c) {
            ctx->pc = 0x3F1710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F170Cu;
            // 0x3f1710: 0x7bb10440  lq          $s1, 0x440($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1754u;
            goto label_3f1754;
        }
    }
    ctx->pc = 0x3F1714u;
    // 0x3f1714: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x3f1714u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3f1718: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f1718u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x3f171c: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x3f171cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3f1720: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3f1720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x3f1724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f1724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1728: 0x26105fc8  addiu       $s0, $s0, 0x5FC8
    ctx->pc = 0x3f1728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24520));
    // 0x3f172c: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3f172cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    // 0x3f1730: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3f1730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x3f1734: 0xc0e9f84  jal         func_3A7E10
    ctx->pc = 0x3F1734u;
    SET_GPR_U32(ctx, 31, 0x3F173Cu);
    ctx->pc = 0x3F1738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1734u;
    // 0x3f1738: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3F1734u, 0x3F173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F173Cu;
label_3f173c:
    // 0x3f173c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1740: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x3F1740u;
    SET_GPR_U32(ctx, 31, 0x3F1748u);
    ctx->pc = 0x3F1744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1740u;
    // 0x3f1744: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3F1740u, 0x3F1748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1748u;
label_3f1748:
    // 0x3f1748: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3f1748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x3f174c: 0x7bb00450  lq          $s0, 0x450($sp)
    ctx->pc = 0x3f174cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3f1750:
    // 0x3f1750: 0x7bb10440  lq          $s1, 0x440($sp)
    ctx->pc = 0x3f1750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3f1754:
    // 0x3f1754: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x3f1754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x3f1758: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1758u;
        // 0x3f175c: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1760u;
}
