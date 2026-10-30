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

// Function: sub_00340668
// Address: 0x340668 - 0x340700
void sub_00340668_0x340668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340668_0x340668");
#endif

    switch (ctx->pc) {
        case 0x3406b8u: goto label_3406b8;
        case 0x3406f0u: goto label_3406f0;
        default: break;
    }

    ctx->pc = 0x340668u;

    // 0x340668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34066c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x34066cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x340670: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x340670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x340674: 0x3442f450  ori         $v0, $v0, 0xF450
    ctx->pc = 0x340674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62544);
    // 0x340678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34067c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34067cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340680: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x340680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x340684: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x340684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x340688: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x340688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34068c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x34068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x340690: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x340690u;
    {
        const bool branch_taken_0x340690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x340690) {
            ctx->pc = 0x340694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340690u;
            // 0x340694: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3406B0u;
            goto label_3406b0;
        }
    }
    ctx->pc = 0x340698u;
    // 0x340698: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x340698u;
    {
        const bool branch_taken_0x340698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340698) {
            ctx->pc = 0x34069Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340698u;
            // 0x34069c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3406A0u;
            goto label_3406a0;
        }
    }
    ctx->pc = 0x3406A0u;
label_3406a0:
    // 0x3406a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3406a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3406a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3406a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3406a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3406A8u;
    {
        const bool branch_taken_0x3406a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3406ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3406A8u;
        // 0x3406ac: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3406a8) {
            ctx->pc = 0x3406B8u;
            goto label_3406b8;
        }
    }
    ctx->pc = 0x3406B0u;
label_3406b0:
    // 0x3406b0: 0xc13c3ea  jal         func_4F0FA8
    ctx->pc = 0x3406B0u;
    SET_GPR_U32(ctx, 31, 0x3406B8u);
    ctx->pc = 0x3406B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3406B0u;
    // 0x3406b4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F0FA8u, 0x3406B0u, 0x3406B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406B8u;
label_3406b8:
    // 0x3406b8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3406b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3406bc: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3406bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3406c0: 0x3463f450  ori         $v1, $v1, 0xF450
    ctx->pc = 0x3406c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62544);
    // 0x3406c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3406c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3406c8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3406c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3406cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3406ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3406d0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x3406d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3406d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3406d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3406d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3406d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3406dc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3406dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3406e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3406e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3406e4: 0xace20020  sw          $v0, 0x20($a3)
    ctx->pc = 0x3406e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 2));
    // 0x3406e8: 0xc0d012a  jal         func_3404A8
    ctx->pc = 0x3406E8u;
    SET_GPR_U32(ctx, 31, 0x3406F0u);
    ctx->pc = 0x3406ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3406E8u;
    // 0x3406ec: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3404A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3404A8u, 0x3406E8u, 0x3406F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406F0u;
label_3406f0:
    // 0x3406f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3406f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3406f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3406f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3406f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3406F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3406FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3406F8u;
        // 0x3406fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3406F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340700u;
}
