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

// Function: sub_001774D0
// Address: 0x1774d0 - 0x1775d8
void sub_001774D0_0x1774d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001774D0_0x1774d0");
#endif

    switch (ctx->pc) {
        case 0x177510u: goto label_177510;
        case 0x177554u: goto label_177554;
        case 0x17758cu: goto label_17758c;
        default: break;
    }

    ctx->pc = 0x1774d0u;

    // 0x1774d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1774d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1774d4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1774d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1774d8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1774d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1774dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1774dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774e0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1774e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1774e4: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x1774e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1774e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1774e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1774ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1774ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1774f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1774f4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1774f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1774f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1774fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1774fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177500: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x177500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177504: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177508: 0xc137916  jal         func_4DE458
    ctx->pc = 0x177508u;
    SET_GPR_U32(ctx, 31, 0x177510u);
    ctx->pc = 0x17750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177508u;
    // 0x17750c: 0x26460004  addiu       $a2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE458u, 0x177508u, 0x177510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177510u;
label_177510:
    // 0x177510: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177514: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x177514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177518: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x177518u;
    {
        const bool branch_taken_0x177518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177518u;
        // 0x17751c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177518) {
            ctx->pc = 0x1775B4u;
            goto label_1775b4;
        }
    }
    ctx->pc = 0x177520u;
    // 0x177520: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x177520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x177524: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x177524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x177528: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177528u;
    {
        const bool branch_taken_0x177528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x177528) {
            ctx->pc = 0x177538u;
            goto label_177538;
        }
    }
    ctx->pc = 0x177530u;
    // 0x177530: 0x16600021  bnez        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x177530u;
    {
        const bool branch_taken_0x177530 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x177534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177530u;
        // 0x177534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177530) {
            ctx->pc = 0x1775B8u;
            goto label_1775b8;
        }
    }
    ctx->pc = 0x177538u;
label_177538:
    // 0x177538: 0x1680001f  bnez        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x177538u;
    {
        const bool branch_taken_0x177538 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x17753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177538u;
        // 0x17753c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177538) {
            ctx->pc = 0x1775B8u;
            goto label_1775b8;
        }
    }
    ctx->pc = 0x177540u;
    // 0x177540: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x177540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x177544: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x177544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x177548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17754c: 0xc137a34  jal         func_4DE8D0
    ctx->pc = 0x17754Cu;
    SET_GPR_U32(ctx, 31, 0x177554u);
    ctx->pc = 0x177550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17754Cu;
    // 0x177550: 0x2646000c  addiu       $a2, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x17754Cu, 0x177554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177554u;
label_177554:
    // 0x177554: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177558: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x177558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17755c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17755Cu;
    {
        const bool branch_taken_0x17755c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x177560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17755Cu;
        // 0x177560: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17755c) {
            ctx->pc = 0x1775B4u;
            goto label_1775b4;
        }
    }
    ctx->pc = 0x177564u;
    // 0x177564: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x177564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x177568: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x177568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17756c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17756Cu;
    {
        const bool branch_taken_0x17756c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17756c) {
            ctx->pc = 0x177570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17756Cu;
            // 0x177570: 0x26460008  addiu       $a2, $s2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177580u;
            goto label_177580;
        }
    }
    ctx->pc = 0x177574u;
    // 0x177574: 0x16600010  bnez        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x177574u;
    {
        const bool branch_taken_0x177574 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x177578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177574u;
        // 0x177578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177574) {
            ctx->pc = 0x1775B8u;
            goto label_1775b8;
        }
    }
    ctx->pc = 0x17757Cu;
    // 0x17757c: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x17757cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_177580:
    // 0x177580: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x177580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x177584: 0xc137afa  jal         func_4DEBE8
    ctx->pc = 0x177584u;
    SET_GPR_U32(ctx, 31, 0x17758Cu);
    ctx->pc = 0x177588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177584u;
    // 0x177588: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEBE8u, 0x177584u, 0x17758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17758Cu;
label_17758c:
    // 0x17758c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x177590: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x177590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177594: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x177594u;
    {
        const bool branch_taken_0x177594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x177598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177594u;
        // 0x177598: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177594) {
            ctx->pc = 0x1775B4u;
            goto label_1775b4;
        }
    }
    ctx->pc = 0x17759Cu;
    // 0x17759c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x17759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1775a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1775a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1775a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1775A4u;
    {
        const bool branch_taken_0x1775a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1775A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775A4u;
        // 0x1775a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775a4) {
            ctx->pc = 0x1775B8u;
            goto label_1775b8;
        }
    }
    ctx->pc = 0x1775ACu;
    // 0x1775ac: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1775ACu;
    {
        const bool branch_taken_0x1775ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1775B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775ACu;
        // 0x1775b0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775ac) {
            ctx->pc = 0x1775BCu;
            goto label_1775bc;
        }
    }
    ctx->pc = 0x1775B4u;
label_1775b4:
    // 0x1775b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1775b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1775b8:
    // 0x1775b8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1775b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1775bc:
    // 0x1775bc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1775bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1775c0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1775c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1775c4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1775c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1775c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1775c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1775cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1775ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1775d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1775D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1775D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775D0u;
        // 0x1775d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1775D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1775D8u;
}
