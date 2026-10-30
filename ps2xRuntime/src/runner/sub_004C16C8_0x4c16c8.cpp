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

// Function: sub_004C16C8
// Address: 0x4c16c8 - 0x4c1720
void sub_004C16C8_0x4c16c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C16C8_0x4c16c8");
#endif

    switch (ctx->pc) {
        case 0x4c16c8u: goto label_4c16c8;
        case 0x4c16ccu: goto label_4c16cc;
        case 0x4c16d0u: goto label_4c16d0;
        case 0x4c16d4u: goto label_4c16d4;
        case 0x4c16d8u: goto label_4c16d8;
        case 0x4c16dcu: goto label_4c16dc;
        case 0x4c16e0u: goto label_4c16e0;
        case 0x4c16e4u: goto label_4c16e4;
        case 0x4c16e8u: goto label_4c16e8;
        case 0x4c16ecu: goto label_4c16ec;
        case 0x4c16f0u: goto label_4c16f0;
        case 0x4c16f4u: goto label_4c16f4;
        case 0x4c16f8u: goto label_4c16f8;
        case 0x4c16fcu: goto label_4c16fc;
        case 0x4c1700u: goto label_4c1700;
        case 0x4c1704u: goto label_4c1704;
        case 0x4c1708u: goto label_4c1708;
        case 0x4c170cu: goto label_4c170c;
        case 0x4c1710u: goto label_4c1710;
        case 0x4c1714u: goto label_4c1714;
        case 0x4c1718u: goto label_4c1718;
        case 0x4c171cu: goto label_4c171c;
        default: break;
    }

    ctx->pc = 0x4c16c8u;

label_4c16c8:
    // 0x4c16c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c16c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c16cc:
    // 0x4c16cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4c16ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4c16d0:
    // 0x4c16d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c16d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4c16d4:
    // 0x4c16d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c16d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c16d8:
    // 0x4c16d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c16d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c16dc:
    // 0x4c16dc: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4c16dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4c16e0:
    // 0x4c16e0: 0x8f848aa0  lw          $a0, -0x7560($gp)
    ctx->pc = 0x4c16e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937248)));
label_4c16e4:
    // 0x4c16e4: 0xc10f438  jal         func_43D0E0
label_4c16e8:
    if (ctx->pc == 0x4C16E8u) {
        ctx->pc = 0x4C16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C16E4u;
        // 0x4c16e8: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C16ECu;
        goto label_4c16ec;
    }
    ctx->pc = 0x4C16E4u;
    SET_GPR_U32(ctx, 31, 0x4C16ECu);
    ctx->pc = 0x4C16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C16E4u;
    // 0x4c16e8: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0E0u, 0x4C16E4u, 0x4C16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C16ECu;
label_4c16ec:
    // 0x4c16ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c16ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c16f0:
    // 0x4c16f0: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x4c16f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_4c16f4:
    // 0x4c16f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4c16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4c16f8:
    // 0x4c16f8: 0x40f809  jalr        $v0
label_4c16fc:
    if (ctx->pc == 0x4C16FCu) {
        ctx->pc = 0x4C16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C16F8u;
        // 0x4c16fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1700u;
        goto label_4c1700;
    }
    ctx->pc = 0x4C16F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C1700u);
        ctx->pc = 0x4C16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C16F8u;
        // 0x4c16fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C16F8u, 0x4C1700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1700u;
label_4c1700:
    // 0x4c1700: 0xc10f430  jal         func_43D0C0
label_4c1704:
    if (ctx->pc == 0x4C1704u) {
        ctx->pc = 0x4C1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1700u;
        // 0x4c1704: 0x8f848aa0  lw          $a0, -0x7560($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1708u;
        goto label_4c1708;
    }
    ctx->pc = 0x4C1700u;
    SET_GPR_U32(ctx, 31, 0x4C1708u);
    ctx->pc = 0x4C1704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1700u;
    // 0x4c1704: 0x8f848aa0  lw          $a0, -0x7560($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0C0u, 0x4C1700u, 0x4C1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1708u;
label_4c1708:
    // 0x4c1708: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4c1708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c170c:
    // 0x4c170c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4c170cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1710:
    // 0x4c1710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c1710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c1714:
    // 0x4c1714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c1714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c1718:
    // 0x4c1718: 0x3e00008  jr          $ra
label_4c171c:
    if (ctx->pc == 0x4C171Cu) {
        ctx->pc = 0x4C171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1718u;
        // 0x4c171c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1720u;
        goto label_fallthrough_0x4c1718;
    }
    ctx->pc = 0x4C1718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1718u;
        // 0x4c171c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4c1718:
    ctx->pc = 0x4C1720u;
}
