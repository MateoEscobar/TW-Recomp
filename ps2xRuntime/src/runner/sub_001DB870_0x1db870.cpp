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

// Function: sub_001DB870
// Address: 0x1db870 - 0x1db8e8
void sub_001DB870_0x1db870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB870_0x1db870");
#endif

    switch (ctx->pc) {
        case 0x1db870u: goto label_1db870;
        case 0x1db874u: goto label_1db874;
        case 0x1db878u: goto label_1db878;
        case 0x1db87cu: goto label_1db87c;
        case 0x1db880u: goto label_1db880;
        case 0x1db884u: goto label_1db884;
        case 0x1db888u: goto label_1db888;
        case 0x1db88cu: goto label_1db88c;
        case 0x1db890u: goto label_1db890;
        case 0x1db894u: goto label_1db894;
        case 0x1db898u: goto label_1db898;
        case 0x1db89cu: goto label_1db89c;
        case 0x1db8a0u: goto label_1db8a0;
        case 0x1db8a4u: goto label_1db8a4;
        case 0x1db8a8u: goto label_1db8a8;
        case 0x1db8acu: goto label_1db8ac;
        case 0x1db8b0u: goto label_1db8b0;
        case 0x1db8b4u: goto label_1db8b4;
        case 0x1db8b8u: goto label_1db8b8;
        case 0x1db8bcu: goto label_1db8bc;
        case 0x1db8c0u: goto label_1db8c0;
        case 0x1db8c4u: goto label_1db8c4;
        case 0x1db8c8u: goto label_1db8c8;
        case 0x1db8ccu: goto label_1db8cc;
        case 0x1db8d0u: goto label_1db8d0;
        case 0x1db8d4u: goto label_1db8d4;
        case 0x1db8d8u: goto label_1db8d8;
        case 0x1db8dcu: goto label_1db8dc;
        case 0x1db8e0u: goto label_1db8e0;
        case 0x1db8e4u: goto label_1db8e4;
        default: break;
    }

    ctx->pc = 0x1db870u;

label_1db870:
    // 0x1db870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1db870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1db874:
    // 0x1db874: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1db874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1db878:
    // 0x1db878: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1db878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1db87c:
    // 0x1db87c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1db87cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db880:
    // 0x1db880: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1db880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1db884:
    // 0x1db884: 0x26502af0  addiu       $s0, $s2, 0x2AF0
    ctx->pc = 0x1db884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 10992));
label_1db888:
    // 0x1db888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1db88c:
    // 0x1db88c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1db88cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db890:
    // 0x1db890: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1db890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1db894:
    // 0x1db894: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1db898:
    if (ctx->pc == 0x1DB898u) {
        ctx->pc = 0x1DB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB894u;
        // 0x1db898: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB89Cu;
        goto label_1db89c;
    }
    ctx->pc = 0x1DB894u;
    {
        const bool branch_taken_0x1db894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db894) {
            ctx->pc = 0x1DB898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB894u;
            // 0x1db898: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB8B4u;
            goto label_1db8b4;
        }
    }
    ctx->pc = 0x1DB89Cu;
label_1db89c:
    // 0x1db89c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1db89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1db8a0:
    // 0x1db8a0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1db8a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1db8a4:
    // 0x1db8a4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1db8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1db8a8:
    // 0x1db8a8: 0x60f809  jalr        $v1
label_1db8ac:
    if (ctx->pc == 0x1DB8ACu) {
        ctx->pc = 0x1DB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8A8u;
        // 0x1db8ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8B0u;
        goto label_1db8b0;
    }
    ctx->pc = 0x1DB8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB8B0u);
        ctx->pc = 0x1DB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8A8u;
        // 0x1db8ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB8A8u, 0x1DB8B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB8B0u;
label_1db8b0:
    // 0x1db8b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1db8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1db8b4:
    // 0x1db8b4: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x1db8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1db8b8:
    // 0x1db8b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1db8bc:
    if (ctx->pc == 0x1DB8BCu) {
        ctx->pc = 0x1DB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8B8u;
        // 0x1db8bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8C0u;
        goto label_1db8c0;
    }
    ctx->pc = 0x1DB8B8u;
    {
        const bool branch_taken_0x1db8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8B8u;
        // 0x1db8bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8b8) {
            ctx->pc = 0x1DB890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db890;
        }
    }
    ctx->pc = 0x1DB8C0u;
label_1db8c0:
    // 0x1db8c0: 0xc073ac0  jal         func_1CEB00
label_1db8c4:
    if (ctx->pc == 0x1DB8C4u) {
        ctx->pc = 0x1DB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8C0u;
        // 0x1db8c4: 0x26442dd0  addiu       $a0, $s2, 0x2DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8C8u;
        goto label_1db8c8;
    }
    ctx->pc = 0x1DB8C0u;
    SET_GPR_U32(ctx, 31, 0x1DB8C8u);
    ctx->pc = 0x1DB8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB8C0u;
    // 0x1db8c4: 0x26442dd0  addiu       $a0, $s2, 0x2DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB00u, 0x1DB8C0u, 0x1DB8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB8C8u;
label_1db8c8:
    // 0x1db8c8: 0xc0687c4  jal         func_1A1F10
label_1db8cc:
    if (ctx->pc == 0x1DB8CCu) {
        ctx->pc = 0x1DB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8C8u;
        // 0x1db8cc: 0x26443a90  addiu       $a0, $s2, 0x3A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8D0u;
        goto label_1db8d0;
    }
    ctx->pc = 0x1DB8C8u;
    SET_GPR_U32(ctx, 31, 0x1DB8D0u);
    ctx->pc = 0x1DB8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB8C8u;
    // 0x1db8cc: 0x26443a90  addiu       $a0, $s2, 0x3A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1DB8C8u, 0x1DB8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB8D0u;
label_1db8d0:
    // 0x1db8d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1db8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1db8d4:
    // 0x1db8d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1db8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db8d8:
    // 0x1db8d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1db8d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db8dc:
    // 0x1db8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db8e0:
    // 0x1db8e0: 0x3e00008  jr          $ra
label_1db8e4:
    if (ctx->pc == 0x1DB8E4u) {
        ctx->pc = 0x1DB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8E0u;
        // 0x1db8e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB8E8u;
        goto label_fallthrough_0x1db8e0;
    }
    ctx->pc = 0x1DB8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8E0u;
        // 0x1db8e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db8e0:
    ctx->pc = 0x1DB8E8u;
}
