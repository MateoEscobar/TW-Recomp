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

// Function: sub_0015F658
// Address: 0x15f658 - 0x15f6c8
void sub_0015F658_0x15f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F658_0x15f658");
#endif

    switch (ctx->pc) {
        case 0x15f658u: goto label_15f658;
        case 0x15f65cu: goto label_15f65c;
        case 0x15f660u: goto label_15f660;
        case 0x15f664u: goto label_15f664;
        case 0x15f668u: goto label_15f668;
        case 0x15f66cu: goto label_15f66c;
        case 0x15f670u: goto label_15f670;
        case 0x15f674u: goto label_15f674;
        case 0x15f678u: goto label_15f678;
        case 0x15f67cu: goto label_15f67c;
        case 0x15f680u: goto label_15f680;
        case 0x15f684u: goto label_15f684;
        case 0x15f688u: goto label_15f688;
        case 0x15f68cu: goto label_15f68c;
        case 0x15f690u: goto label_15f690;
        case 0x15f694u: goto label_15f694;
        case 0x15f698u: goto label_15f698;
        case 0x15f69cu: goto label_15f69c;
        case 0x15f6a0u: goto label_15f6a0;
        case 0x15f6a4u: goto label_15f6a4;
        case 0x15f6a8u: goto label_15f6a8;
        case 0x15f6acu: goto label_15f6ac;
        case 0x15f6b0u: goto label_15f6b0;
        case 0x15f6b4u: goto label_15f6b4;
        case 0x15f6b8u: goto label_15f6b8;
        case 0x15f6bcu: goto label_15f6bc;
        case 0x15f6c0u: goto label_15f6c0;
        case 0x15f6c4u: goto label_15f6c4;
        default: break;
    }

    ctx->pc = 0x15f658u;

label_15f658:
    // 0x15f658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15f658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15f65c:
    // 0x15f65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15f660:
    // 0x15f660: 0xc067b9c  jal         func_19EE70
label_15f664:
    if (ctx->pc == 0x15F664u) {
        ctx->pc = 0x15F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F660u;
        // 0x15f664: 0x240400cc  addiu       $a0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F668u;
        goto label_15f668;
    }
    ctx->pc = 0x15F660u;
    SET_GPR_U32(ctx, 31, 0x15F668u);
    ctx->pc = 0x15F664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F660u;
    // 0x15f664: 0x240400cc  addiu       $a0, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15F660u, 0x15F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F668u;
label_15f668:
    // 0x15f668: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15f66c:
    // 0x15f66c: 0x240400c2  addiu       $a0, $zero, 0xC2
    ctx->pc = 0x15f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
label_15f670:
    // 0x15f670: 0xc067b9c  jal         func_19EE70
label_15f674:
    if (ctx->pc == 0x15F674u) {
        ctx->pc = 0x15F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F670u;
        // 0x15f674: 0xac62c7a8  sw          $v0, -0x3858($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F678u;
        goto label_15f678;
    }
    ctx->pc = 0x15F670u;
    SET_GPR_U32(ctx, 31, 0x15F678u);
    ctx->pc = 0x15F674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F670u;
    // 0x15f674: 0xac62c7a8  sw          $v0, -0x3858($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952872), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15F670u, 0x15F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F678u;
label_15f678:
    // 0x15f678: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15f678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15f67c:
    // 0x15f67c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15f67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f680:
    // 0x15f680: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x15f680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_15f684:
    // 0x15f684: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15f684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f688:
    // 0x15f688: 0xc071bf2  jal         func_1C6FC8
label_15f68c:
    if (ctx->pc == 0x15F68Cu) {
        ctx->pc = 0x15F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F688u;
        // 0x15f68c: 0x24846830  addiu       $a0, $a0, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F690u;
        goto label_15f690;
    }
    ctx->pc = 0x15F688u;
    SET_GPR_U32(ctx, 31, 0x15F690u);
    ctx->pc = 0x15F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F688u;
    // 0x15f68c: 0x24846830  addiu       $a0, $a0, 0x6830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FC8u, 0x15F688u, 0x15F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F690u;
label_15f690:
    // 0x15f690: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f694:
    // 0x15f694: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15f694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15f698:
    // 0x15f698: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15f698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15f69c:
    // 0x15f69c: 0x84640190  lh          $a0, 0x190($v1)
    ctx->pc = 0x15f69cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 400)));
label_15f6a0:
    // 0x15f6a0: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x15f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_15f6a4:
    // 0x15f6a4: 0x40f809  jalr        $v0
label_15f6a8:
    if (ctx->pc == 0x15F6A8u) {
        ctx->pc = 0x15F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6A4u;
        // 0x15f6a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6ACu;
        goto label_15f6ac;
    }
    ctx->pc = 0x15F6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F6ACu);
        ctx->pc = 0x15F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6A4u;
        // 0x15f6a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6A4u, 0x15F6ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F6ACu;
label_15f6ac:
    // 0x15f6ac: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x15f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_15f6b0:
    // 0x15f6b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f6b4:
    // 0x15f6b4: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x15f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
label_15f6b8:
    // 0x15f6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f6bc:
    // 0x15f6bc: 0xac43c7ac  sw          $v1, -0x3854($v0)
    ctx->pc = 0x15f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952876), GPR_U32(ctx, 3));
label_15f6c0:
    // 0x15f6c0: 0x3e00008  jr          $ra
label_15f6c4:
    if (ctx->pc == 0x15F6C4u) {
        ctx->pc = 0x15F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6C0u;
        // 0x15f6c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6C8u;
        goto label_fallthrough_0x15f6c0;
    }
    ctx->pc = 0x15F6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6C0u;
        // 0x15f6c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15f6c0:
    ctx->pc = 0x15F6C8u;
}
