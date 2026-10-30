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

// Function: sub_0015B7E0
// Address: 0x15b7e0 - 0x15b880
void sub_0015B7E0_0x15b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B7E0_0x15b7e0");
#endif

    switch (ctx->pc) {
        case 0x15b7e0u: goto label_15b7e0;
        case 0x15b7e4u: goto label_15b7e4;
        case 0x15b7e8u: goto label_15b7e8;
        case 0x15b7ecu: goto label_15b7ec;
        case 0x15b7f0u: goto label_15b7f0;
        case 0x15b7f4u: goto label_15b7f4;
        case 0x15b7f8u: goto label_15b7f8;
        case 0x15b7fcu: goto label_15b7fc;
        case 0x15b800u: goto label_15b800;
        case 0x15b804u: goto label_15b804;
        case 0x15b808u: goto label_15b808;
        case 0x15b80cu: goto label_15b80c;
        case 0x15b810u: goto label_15b810;
        case 0x15b814u: goto label_15b814;
        case 0x15b818u: goto label_15b818;
        case 0x15b81cu: goto label_15b81c;
        case 0x15b820u: goto label_15b820;
        case 0x15b824u: goto label_15b824;
        case 0x15b828u: goto label_15b828;
        case 0x15b82cu: goto label_15b82c;
        case 0x15b830u: goto label_15b830;
        case 0x15b834u: goto label_15b834;
        case 0x15b838u: goto label_15b838;
        case 0x15b83cu: goto label_15b83c;
        case 0x15b840u: goto label_15b840;
        case 0x15b844u: goto label_15b844;
        case 0x15b848u: goto label_15b848;
        case 0x15b84cu: goto label_15b84c;
        case 0x15b850u: goto label_15b850;
        case 0x15b854u: goto label_15b854;
        case 0x15b858u: goto label_15b858;
        case 0x15b85cu: goto label_15b85c;
        case 0x15b860u: goto label_15b860;
        case 0x15b864u: goto label_15b864;
        case 0x15b868u: goto label_15b868;
        case 0x15b86cu: goto label_15b86c;
        case 0x15b870u: goto label_15b870;
        case 0x15b874u: goto label_15b874;
        case 0x15b878u: goto label_15b878;
        case 0x15b87cu: goto label_15b87c;
        default: break;
    }

    ctx->pc = 0x15b7e0u;

label_15b7e0:
    // 0x15b7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15b7e4:
    // 0x15b7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15b7e8:
    // 0x15b7e8: 0xc067b9c  jal         func_19EE70
label_15b7ec:
    if (ctx->pc == 0x15B7ECu) {
        ctx->pc = 0x15B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7E8u;
        // 0x15b7ec: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B7F0u;
        goto label_15b7f0;
    }
    ctx->pc = 0x15B7E8u;
    SET_GPR_U32(ctx, 31, 0x15B7F0u);
    ctx->pc = 0x15B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B7E8u;
    // 0x15b7ec: 0x240400b8  addiu       $a0, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B7E8u, 0x15B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B7F0u;
label_15b7f0:
    // 0x15b7f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b7f4:
    // 0x15b7f4: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x15b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_15b7f8:
    // 0x15b7f8: 0xc067b9c  jal         func_19EE70
label_15b7fc:
    if (ctx->pc == 0x15B7FCu) {
        ctx->pc = 0x15B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7F8u;
        // 0x15b7fc: 0xac62c730  sw          $v0, -0x38D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B800u;
        goto label_15b800;
    }
    ctx->pc = 0x15B7F8u;
    SET_GPR_U32(ctx, 31, 0x15B800u);
    ctx->pc = 0x15B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B7F8u;
    // 0x15b7fc: 0xac62c730  sw          $v0, -0x38D0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B7F8u, 0x15B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B800u;
label_15b800:
    // 0x15b800: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15b800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15b804:
    // 0x15b804: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15b804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b808:
    // 0x15b808: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x15b808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_15b80c:
    // 0x15b80c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b810:
    // 0x15b810: 0xc071bf2  jal         func_1C6FC8
label_15b814:
    if (ctx->pc == 0x15B814u) {
        ctx->pc = 0x15B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B810u;
        // 0x15b814: 0x24845840  addiu       $a0, $a0, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B818u;
        goto label_15b818;
    }
    ctx->pc = 0x15B810u;
    SET_GPR_U32(ctx, 31, 0x15B818u);
    ctx->pc = 0x15B814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B810u;
    // 0x15b814: 0x24845840  addiu       $a0, $a0, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FC8u, 0x15B810u, 0x15B818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B818u;
label_15b818:
    // 0x15b818: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b81c:
    // 0x15b81c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b820:
    // 0x15b820: 0x8c465024  lw          $a2, 0x5024($v0)
    ctx->pc = 0x15b820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15b824:
    // 0x15b824: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x15b824u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_15b828:
    // 0x15b828: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b82c:
    // 0x15b82c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x15b82cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_15b830:
    // 0x15b830: 0x8cc30128  lw          $v1, 0x128($a2)
    ctx->pc = 0x15b830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
label_15b834:
    // 0x15b834: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x15b834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_15b838:
    // 0x15b838: 0xac45c704  sw          $a1, -0x38FC($v0)
    ctx->pc = 0x15b838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952708), GPR_U32(ctx, 5));
label_15b83c:
    // 0x15b83c: 0x84640160  lh          $a0, 0x160($v1)
    ctx->pc = 0x15b83cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 352)));
label_15b840:
    // 0x15b840: 0x8c620164  lw          $v0, 0x164($v1)
    ctx->pc = 0x15b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
label_15b844:
    // 0x15b844: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x15b844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_15b848:
    // 0x15b848: 0xad05c6f8  sw          $a1, -0x3908($t0)
    ctx->pc = 0x15b848u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294952696), GPR_U32(ctx, 5));
label_15b84c:
    // 0x15b84c: 0xad25c708  sw          $a1, -0x38F8($t1)
    ctx->pc = 0x15b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952712), GPR_U32(ctx, 5));
label_15b850:
    // 0x15b850: 0x40f809  jalr        $v0
label_15b854:
    if (ctx->pc == 0x15B854u) {
        ctx->pc = 0x15B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B850u;
        // 0x15b854: 0xace0c720  sw          $zero, -0x38E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294952736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B858u;
        goto label_15b858;
    }
    ctx->pc = 0x15B850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B858u);
        ctx->pc = 0x15B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B850u;
        // 0x15b854: 0xace0c720  sw          $zero, -0x38E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294952736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B850u, 0x15B858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B858u;
label_15b858:
    // 0x15b858: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x15b858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_15b85c:
    // 0x15b85c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b860:
    // 0x15b860: 0x2463b8c0  addiu       $v1, $v1, -0x4740
    ctx->pc = 0x15b860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949056));
label_15b864:
    // 0x15b864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b868:
    // 0x15b868: 0xac43c734  sw          $v1, -0x38CC($v0)
    ctx->pc = 0x15b868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 3));
label_15b86c:
    // 0x15b86c: 0x3e00008  jr          $ra
label_15b870:
    if (ctx->pc == 0x15B870u) {
        ctx->pc = 0x15B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B86Cu;
        // 0x15b870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B874u;
        goto label_15b874;
    }
    ctx->pc = 0x15B86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B86Cu;
        // 0x15b870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B874u;
label_15b874:
    // 0x15b874: 0x0  nop
    ctx->pc = 0x15b874u;
    // NOP
label_15b878:
    // 0x15b878: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15b878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_15b87c:
    // 0x15b87c: 0x0  nop
    ctx->pc = 0x15b87cu;
    // NOP
    ctx->pc = 0x15b880u;
}
