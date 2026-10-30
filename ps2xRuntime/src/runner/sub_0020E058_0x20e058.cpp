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

// Function: sub_0020E058
// Address: 0x20e058 - 0x20e0f8
void sub_0020E058_0x20e058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E058_0x20e058");
#endif

    switch (ctx->pc) {
        case 0x20e080u: goto label_20e080;
        case 0x20e0a4u: goto label_20e0a4;
        default: break;
    }

    ctx->pc = 0x20e058u;

    // 0x20e058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20e058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20e05c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20e05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20e060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e06c: 0x8e024100  lw          $v0, 0x4100($s0)
    ctx->pc = 0x20e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16640)));
    // 0x20e070: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20E070u;
    {
        const bool branch_taken_0x20e070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E070u;
        // 0x20e074: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e070) {
            ctx->pc = 0x20E0E4u;
            goto label_20e0e4;
        }
    }
    ctx->pc = 0x20E078u;
    // 0x20e078: 0xc107444  jal         func_41D110
    ctx->pc = 0x20E078u;
    SET_GPR_U32(ctx, 31, 0x20E080u);
    ctx->pc = 0x20E07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E078u;
    // 0x20e07c: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x20E078u, 0x20E080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E080u;
label_20e080:
    // 0x20e080: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E080u;
    {
        const bool branch_taken_0x20e080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E080u;
        // 0x20e084: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e080) {
            ctx->pc = 0x20E098u;
            goto label_20e098;
        }
    }
    ctx->pc = 0x20E088u;
    // 0x20e088: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20e088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e08c: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x20e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x20e090: 0x50640015  beql        $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20E090u;
    {
        const bool branch_taken_0x20e090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x20e090) {
            ctx->pc = 0x20E094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E090u;
            // 0x20e094: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E0E8u;
            goto label_20e0e8;
        }
    }
    ctx->pc = 0x20E098u;
label_20e098:
    // 0x20e098: 0xae003ce8  sw          $zero, 0x3CE8($s0)
    ctx->pc = 0x20e098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15592), GPR_U32(ctx, 0));
    // 0x20e09c: 0xc06fb0e  jal         func_1BEC38
    ctx->pc = 0x20E09Cu;
    SET_GPR_U32(ctx, 31, 0x20E0A4u);
    ctx->pc = 0x20E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E09Cu;
    // 0x20e0a0: 0x26040400  addiu       $a0, $s0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC38u, 0x20E09Cu, 0x20E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E0A4u;
label_20e0a4:
    // 0x20e0a4: 0xae0040fc  sw          $zero, 0x40FC($s0)
    ctx->pc = 0x20e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16636), GPR_U32(ctx, 0));
    // 0x20e0a8: 0x26031ef0  addiu       $v1, $s0, 0x1EF0
    ctx->pc = 0x20e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x20e0ac: 0xac601564  sw          $zero, 0x1564($v1)
    ctx->pc = 0x20e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5476), GPR_U32(ctx, 0));
    // 0x20e0b0: 0x8c621554  lw          $v0, 0x1554($v1)
    ctx->pc = 0x20e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5460)));
    // 0x20e0b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20E0B4u;
    {
        const bool branch_taken_0x20e0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0B4u;
        // 0x20e0b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0b4) {
            ctx->pc = 0x20E0E8u;
            goto label_20e0e8;
        }
    }
    ctx->pc = 0x20E0BCu;
    // 0x20e0bc: 0x8c621574  lw          $v0, 0x1574($v1)
    ctx->pc = 0x20e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5492)));
    // 0x20e0c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x20e0c4: 0x2463b1b0  addiu       $v1, $v1, -0x4E50
    ctx->pc = 0x20e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947248));
    // 0x20e0c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e0cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e0d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20e0d4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E0D4u;
    {
        const bool branch_taken_0x20e0d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0D4u;
        // 0x20e0d8: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0d4) {
            ctx->pc = 0x20E0ECu;
            goto label_20e0ec;
        }
    }
    ctx->pc = 0x20E0DCu;
    // 0x20e0dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e0e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_20e0e4:
    // 0x20e0e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20e0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20e0e8:
    // 0x20e0e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e0e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20e0ec:
    // 0x20e0ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x20E0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0F0u;
        // 0x20e0f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E0F8u;
}
