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

// Function: sub_0015B528
// Address: 0x15b528 - 0x15b598
void sub_0015B528_0x15b528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B528_0x15b528");
#endif

    switch (ctx->pc) {
        case 0x15b528u: goto label_15b528;
        case 0x15b52cu: goto label_15b52c;
        case 0x15b530u: goto label_15b530;
        case 0x15b534u: goto label_15b534;
        case 0x15b538u: goto label_15b538;
        case 0x15b53cu: goto label_15b53c;
        case 0x15b540u: goto label_15b540;
        case 0x15b544u: goto label_15b544;
        case 0x15b548u: goto label_15b548;
        case 0x15b54cu: goto label_15b54c;
        case 0x15b550u: goto label_15b550;
        case 0x15b554u: goto label_15b554;
        case 0x15b558u: goto label_15b558;
        case 0x15b55cu: goto label_15b55c;
        case 0x15b560u: goto label_15b560;
        case 0x15b564u: goto label_15b564;
        case 0x15b568u: goto label_15b568;
        case 0x15b56cu: goto label_15b56c;
        case 0x15b570u: goto label_15b570;
        case 0x15b574u: goto label_15b574;
        case 0x15b578u: goto label_15b578;
        case 0x15b57cu: goto label_15b57c;
        case 0x15b580u: goto label_15b580;
        case 0x15b584u: goto label_15b584;
        case 0x15b588u: goto label_15b588;
        case 0x15b58cu: goto label_15b58c;
        case 0x15b590u: goto label_15b590;
        case 0x15b594u: goto label_15b594;
        default: break;
    }

    ctx->pc = 0x15b528u;

label_15b528:
    // 0x15b528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15b52c:
    // 0x15b52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15b530:
    // 0x15b530: 0xc067b9c  jal         func_19EE70
label_15b534:
    if (ctx->pc == 0x15B534u) {
        ctx->pc = 0x15B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B530u;
        // 0x15b534: 0x240400b7  addiu       $a0, $zero, 0xB7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B538u;
        goto label_15b538;
    }
    ctx->pc = 0x15B530u;
    SET_GPR_U32(ctx, 31, 0x15B538u);
    ctx->pc = 0x15B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B530u;
    // 0x15b534: 0x240400b7  addiu       $a0, $zero, 0xB7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B530u, 0x15B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B538u;
label_15b538:
    // 0x15b538: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b53c:
    // 0x15b53c: 0x240400a9  addiu       $a0, $zero, 0xA9
    ctx->pc = 0x15b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
label_15b540:
    // 0x15b540: 0xc067b9c  jal         func_19EE70
label_15b544:
    if (ctx->pc == 0x15B544u) {
        ctx->pc = 0x15B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B540u;
        // 0x15b544: 0xac62c730  sw          $v0, -0x38D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B548u;
        goto label_15b548;
    }
    ctx->pc = 0x15B540u;
    SET_GPR_U32(ctx, 31, 0x15B548u);
    ctx->pc = 0x15B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B540u;
    // 0x15b544: 0xac62c730  sw          $v0, -0x38D0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B540u, 0x15B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B548u;
label_15b548:
    // 0x15b548: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15b548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15b54c:
    // 0x15b54c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15b54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b550:
    // 0x15b550: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x15b550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_15b554:
    // 0x15b554: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15b554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b558:
    // 0x15b558: 0xc071bf2  jal         func_1C6FC8
label_15b55c:
    if (ctx->pc == 0x15B55Cu) {
        ctx->pc = 0x15B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B558u;
        // 0x15b55c: 0x24845840  addiu       $a0, $a0, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B560u;
        goto label_15b560;
    }
    ctx->pc = 0x15B558u;
    SET_GPR_U32(ctx, 31, 0x15B560u);
    ctx->pc = 0x15B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B558u;
    // 0x15b55c: 0x24845840  addiu       $a0, $a0, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FC8u, 0x15B558u, 0x15B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B560u;
label_15b560:
    // 0x15b560: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b564:
    // 0x15b564: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15b564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15b568:
    // 0x15b568: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15b56c:
    // 0x15b56c: 0x84640178  lh          $a0, 0x178($v1)
    ctx->pc = 0x15b56cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 376)));
label_15b570:
    // 0x15b570: 0x8c62017c  lw          $v0, 0x17C($v1)
    ctx->pc = 0x15b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
label_15b574:
    // 0x15b574: 0x40f809  jalr        $v0
label_15b578:
    if (ctx->pc == 0x15B578u) {
        ctx->pc = 0x15B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B574u;
        // 0x15b578: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B57Cu;
        goto label_15b57c;
    }
    ctx->pc = 0x15B574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B57Cu);
        ctx->pc = 0x15B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B574u;
        // 0x15b578: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B574u, 0x15B57Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B57Cu;
label_15b57c:
    // 0x15b57c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x15b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_15b580:
    // 0x15b580: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b584:
    // 0x15b584: 0x2463b598  addiu       $v1, $v1, -0x4A68
    ctx->pc = 0x15b584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948248));
label_15b588:
    // 0x15b588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b58c:
    // 0x15b58c: 0xac43c734  sw          $v1, -0x38CC($v0)
    ctx->pc = 0x15b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 3));
label_15b590:
    // 0x15b590: 0x3e00008  jr          $ra
label_15b594:
    if (ctx->pc == 0x15B594u) {
        ctx->pc = 0x15B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B590u;
        // 0x15b594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B598u;
        goto label_fallthrough_0x15b590;
    }
    ctx->pc = 0x15B590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B590u;
        // 0x15b594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b590:
    ctx->pc = 0x15B598u;
}
