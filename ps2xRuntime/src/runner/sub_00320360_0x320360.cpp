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

// Function: sub_00320360
// Address: 0x320360 - 0x320410
void sub_00320360_0x320360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320360_0x320360");
#endif

    switch (ctx->pc) {
        case 0x3203a4u: goto label_3203a4;
        case 0x3203c4u: goto label_3203c4;
        case 0x3203d8u: goto label_3203d8;
        case 0x3203ecu: goto label_3203ec;
        case 0x3203f4u: goto label_3203f4;
        default: break;
    }

    ctx->pc = 0x320360u;

    // 0x320360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x320360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x320364: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x320364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x320368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x320368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32036c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32036cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320374: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x320374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x320378: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x320378u;
    {
        const bool branch_taken_0x320378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320378u;
        // 0x32037c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320378) {
            ctx->pc = 0x3203ECu;
            goto label_3203ec;
        }
    }
    ctx->pc = 0x320380u;
    // 0x320380: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x320380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x320384: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x320384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x320388: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x320388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32038c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x32038Cu;
    {
        const bool branch_taken_0x32038c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32038Cu;
        // 0x320390: 0x24620bb8  addiu       $v0, $v1, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32038c) {
            ctx->pc = 0x3203ECu;
            goto label_3203ec;
        }
    }
    ctx->pc = 0x320394u;
    // 0x320394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320398: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x320398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x32039c: 0xc0c7de8  jal         func_31F7A0
    ctx->pc = 0x32039Cu;
    SET_GPR_U32(ctx, 31, 0x3203A4u);
    ctx->pc = 0x3203A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32039Cu;
    // 0x3203a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F7A0u, 0x32039Cu, 0x3203A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203A4u;
label_3203a4:
    // 0x3203a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3203a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3203a8: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x3203A8u;
    {
        const bool branch_taken_0x3203a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x3203a8) {
            ctx->pc = 0x3203ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3203A8u;
            // 0x3203ac: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3203B0u;
            goto label_3203b0;
        }
    }
    ctx->pc = 0x3203B0u;
label_3203b0:
    // 0x3203b0: 0x92020041  lbu         $v0, 0x41($s0)
    ctx->pc = 0x3203b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x3203b4: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3203B4u;
    {
        const bool branch_taken_0x3203b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3203b4) {
            ctx->pc = 0x3203B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3203B4u;
            // 0x3203b8: 0x92020042  lbu         $v0, 0x42($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3203C8u;
            goto label_3203c8;
        }
    }
    ctx->pc = 0x3203BCu;
    // 0x3203bc: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x3203BCu;
    SET_GPR_U32(ctx, 31, 0x3203C4u);
    ctx->pc = 0x3203C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203BCu;
    // 0x3203c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x3203BCu, 0x3203C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203C4u;
label_3203c4:
    // 0x3203c4: 0x92020042  lbu         $v0, 0x42($s0)
    ctx->pc = 0x3203c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
label_3203c8:
    // 0x3203c8: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3203C8u;
    {
        const bool branch_taken_0x3203c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3203c8) {
            ctx->pc = 0x3203CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3203C8u;
            // 0x3203cc: 0x92020043  lbu         $v0, 0x43($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3203DCu;
            goto label_3203dc;
        }
    }
    ctx->pc = 0x3203D0u;
    // 0x3203d0: 0xc0c7f70  jal         func_31FDC0
    ctx->pc = 0x3203D0u;
    SET_GPR_U32(ctx, 31, 0x3203D8u);
    ctx->pc = 0x3203D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203D0u;
    // 0x3203d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FDC0u, 0x3203D0u, 0x3203D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203D8u;
label_3203d8:
    // 0x3203d8: 0x92020043  lbu         $v0, 0x43($s0)
    ctx->pc = 0x3203d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
label_3203dc:
    // 0x3203dc: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3203DCu;
    {
        const bool branch_taken_0x3203dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3203dc) {
            ctx->pc = 0x3203ECu;
            goto label_3203ec;
        }
    }
    ctx->pc = 0x3203E4u;
    // 0x3203e4: 0xc0c8032  jal         func_3200C8
    ctx->pc = 0x3203E4u;
    SET_GPR_U32(ctx, 31, 0x3203ECu);
    ctx->pc = 0x3203E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203E4u;
    // 0x3203e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3200C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3200C8u, 0x3203E4u, 0x3203ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203ECu;
label_3203ec:
    // 0x3203ec: 0xc0c7e84  jal         func_31FA10
    ctx->pc = 0x3203ECu;
    SET_GPR_U32(ctx, 31, 0x3203F4u);
    ctx->pc = 0x3203F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203ECu;
    // 0x3203f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FA10u, 0x3203ECu, 0x3203F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203F4u;
label_3203f4:
    // 0x3203f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3203f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3203f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3203f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3203fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3203fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320404: 0x3e00008  jr          $ra
    ctx->pc = 0x320404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320404u;
        // 0x320408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32040Cu;
    // 0x32040c: 0x0  nop
    ctx->pc = 0x32040cu;
    // NOP
    ctx->pc = 0x320410u;
}
