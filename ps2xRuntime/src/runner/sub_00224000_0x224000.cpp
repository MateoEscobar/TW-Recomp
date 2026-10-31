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

// Function: sub_00224000
// Address: 0x224000 - 0x224060
void sub_00224000_0x224000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224000_0x224000");
#endif

    switch (ctx->pc) {
        case 0x224010u: goto label_224010;
        case 0x224018u: goto label_224018;
        case 0x224034u: goto label_224034;
        default: break;
    }

    ctx->pc = 0x224000u;

    // 0x224000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224008: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x224008u;
    SET_GPR_U32(ctx, 31, 0x224010u);
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x224008u, 0x224010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224010u;
label_224010:
    // 0x224010: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x224010u;
    SET_GPR_U32(ctx, 31, 0x224018u);
    ctx->pc = 0x224014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224010u;
    // 0x224014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x224010u, 0x224018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224018u;
label_224018:
    // 0x224018: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x224018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22401c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x22401Cu;
    {
        const bool branch_taken_0x22401c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x224020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22401Cu;
        // 0x224020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22401c) {
            ctx->pc = 0x224050u;
            goto label_224050;
        }
    }
    ctx->pc = 0x224024u;
    // 0x224024: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x224024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x224028: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x224028u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x22402c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x22402Cu;
    SET_GPR_U32(ctx, 31, 0x224034u);
    ctx->pc = 0x224030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22402Cu;
    // 0x224030: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x22402Cu, 0x224034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224034u;
label_224034:
    // 0x224034: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x224034u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
    // 0x224038: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x224038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22403c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22403Cu;
    {
        const bool branch_taken_0x22403c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22403Cu;
        // 0x224040: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22403c) {
            ctx->pc = 0x22404Cu;
            goto label_22404c;
        }
    }
    ctx->pc = 0x224044u;
    // 0x224044: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x224044u;
    {
        const bool branch_taken_0x224044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x224048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224044u;
        // 0x224048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224044) {
            ctx->pc = 0x224050u;
            goto label_224050;
        }
    }
    ctx->pc = 0x22404Cu;
label_22404c:
    // 0x22404c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224050:
    // 0x224050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224054: 0x3e00008  jr          $ra
    ctx->pc = 0x224054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224054u;
        // 0x224058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22405Cu;
    // 0x22405c: 0x0  nop
    ctx->pc = 0x22405cu;
    // NOP
    ctx->pc = 0x224060u;
}
