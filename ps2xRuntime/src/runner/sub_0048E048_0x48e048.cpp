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

// Function: sub_0048E048
// Address: 0x48e048 - 0x48e130
void sub_0048E048_0x48e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E048_0x48e048");
#endif

    switch (ctx->pc) {
        case 0x48e0acu: goto label_48e0ac;
        case 0x48e0f0u: goto label_48e0f0;
        case 0x48e118u: goto label_48e118;
        default: break;
    }

    ctx->pc = 0x48e048u;

    // 0x48e048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48e048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48e04c: 0x93828a08  lbu         $v0, -0x75F8($gp)
    ctx->pc = 0x48e04cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937096)));
    // 0x48e050: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x48E050u;
    {
        const bool branch_taken_0x48e050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E050u;
        // 0x48e054: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e050) {
            ctx->pc = 0x48E118u;
            goto label_48e118;
        }
    }
    ctx->pc = 0x48E058u;
    // 0x48e058: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48e058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x48e05c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x48E05Cu;
    {
        const bool branch_taken_0x48e05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E05Cu;
        // 0x48e060: 0xa3808a08  sb          $zero, -0x75F8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937096), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e05c) {
            ctx->pc = 0x48E0B4u;
            goto label_48e0b4;
        }
    }
    ctx->pc = 0x48E064u;
    // 0x48e064: 0x9382899b  lbu         $v0, -0x7665($gp)
    ctx->pc = 0x48e064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936987)));
    // 0x48e068: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x48E068u;
    {
        const bool branch_taken_0x48e068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E068u;
        // 0x48e06c: 0x8f838a00  lw          $v1, -0x7600($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e068) {
            ctx->pc = 0x48E0B8u;
            goto label_48e0b8;
        }
    }
    ctx->pc = 0x48E070u;
    // 0x48e070: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48e070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x48e074: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x48E074u;
    {
        const bool branch_taken_0x48e074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E074u;
        // 0x48e078: 0x8f828a04  lw          $v0, -0x75FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e074) {
            ctx->pc = 0x48E0BCu;
            goto label_48e0bc;
        }
    }
    ctx->pc = 0x48E07Cu;
    // 0x48e07c: 0x8f838a00  lw          $v1, -0x7600($gp)
    ctx->pc = 0x48e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
    // 0x48e080: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x48E080u;
    {
        const bool branch_taken_0x48e080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x48E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E080u;
        // 0x48e084: 0x938289cc  lbu         $v0, -0x7634($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e080) {
            ctx->pc = 0x48E0C4u;
            goto label_48e0c4;
        }
    }
    ctx->pc = 0x48E088u;
    // 0x48e088: 0x278489c0  addiu       $a0, $gp, -0x7640
    ctx->pc = 0x48e088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937024));
    // 0x48e08c: 0x8f8589e4  lw          $a1, -0x761C($gp)
    ctx->pc = 0x48e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x48e090: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48e090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48e094: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48e094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48e098: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48e098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e09c: 0x1065001f  beq         $v1, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x48E09Cu;
    {
        const bool branch_taken_0x48e09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x48E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E09Cu;
        // 0x48e0a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e09c) {
            ctx->pc = 0x48E11Cu;
            goto label_48e11c;
        }
    }
    ctx->pc = 0x48E0A4u;
    // 0x48e0a4: 0xc123142  jal         func_48C508
    ctx->pc = 0x48E0A4u;
    SET_GPR_U32(ctx, 31, 0x48E0ACu);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x48E0A4u, 0x48E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E0ACu;
label_48e0ac:
    // 0x48e0ac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x48E0ACu;
    {
        const bool branch_taken_0x48e0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E0ACu;
        // 0x48e0b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e0ac) {
            ctx->pc = 0x48E11Cu;
            goto label_48e11c;
        }
    }
    ctx->pc = 0x48E0B4u;
label_48e0b4:
    // 0x48e0b4: 0x8f838a00  lw          $v1, -0x7600($gp)
    ctx->pc = 0x48e0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
label_48e0b8:
    // 0x48e0b8: 0x8f828a04  lw          $v0, -0x75FC($gp)
    ctx->pc = 0x48e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937092)));
label_48e0bc:
    // 0x48e0bc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48E0BCu;
    {
        const bool branch_taken_0x48e0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E0BCu;
        // 0x48e0c0: 0x938289cc  lbu         $v0, -0x7634($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e0bc) {
            ctx->pc = 0x48E0F4u;
            goto label_48e0f4;
        }
    }
    ctx->pc = 0x48E0C4u;
label_48e0c4:
    // 0x48e0c4: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48e0c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x48e0c8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x48E0C8u;
    {
        const bool branch_taken_0x48e0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E0C8u;
        // 0x48e0cc: 0x938289cc  lbu         $v0, -0x7634($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e0c8) {
            ctx->pc = 0x48E0F4u;
            goto label_48e0f4;
        }
    }
    ctx->pc = 0x48E0D0u;
    // 0x48e0d0: 0x9382899b  lbu         $v0, -0x7665($gp)
    ctx->pc = 0x48e0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936987)));
    // 0x48e0d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48E0D4u;
    {
        const bool branch_taken_0x48e0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E0D4u;
        // 0x48e0d8: 0x938289cc  lbu         $v0, -0x7634($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e0d4) {
            ctx->pc = 0x48E0F4u;
            goto label_48e0f4;
        }
    }
    ctx->pc = 0x48E0DCu;
    // 0x48e0dc: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48e0dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x48e0e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48E0E0u;
    {
        const bool branch_taken_0x48e0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E0E0u;
        // 0x48e0e4: 0x938289cc  lbu         $v0, -0x7634($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e0e0) {
            ctx->pc = 0x48E0F4u;
            goto label_48e0f4;
        }
    }
    ctx->pc = 0x48E0E8u;
    // 0x48e0e8: 0xc122dc2  jal         func_48B708
    ctx->pc = 0x48E0E8u;
    SET_GPR_U32(ctx, 31, 0x48E0F0u);
    ctx->pc = 0x48E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E0E8u;
    // 0x48e0ec: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B708u, 0x48E0E8u, 0x48E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E0F0u;
label_48e0f0:
    // 0x48e0f0: 0x938289cc  lbu         $v0, -0x7634($gp)
    ctx->pc = 0x48e0f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937036)));
label_48e0f4:
    // 0x48e0f4: 0x278489c0  addiu       $a0, $gp, -0x7640
    ctx->pc = 0x48e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937024));
    // 0x48e0f8: 0x8f8589e4  lw          $a1, -0x761C($gp)
    ctx->pc = 0x48e0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x48e0fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48e100: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48e104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48e104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e108: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48E108u;
    {
        const bool branch_taken_0x48e108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x48E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E108u;
        // 0x48e10c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e108) {
            ctx->pc = 0x48E11Cu;
            goto label_48e11c;
        }
    }
    ctx->pc = 0x48E110u;
    // 0x48e110: 0xc123142  jal         func_48C508
    ctx->pc = 0x48E110u;
    SET_GPR_U32(ctx, 31, 0x48E118u);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x48E110u, 0x48E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E118u;
label_48e118:
    // 0x48e118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48e11c:
    // 0x48e11c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E11Cu;
        // 0x48e120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E124u;
    // 0x48e124: 0x0  nop
    ctx->pc = 0x48e124u;
    // NOP
    // 0x48e128: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48e128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48e12c: 0x0  nop
    ctx->pc = 0x48e12cu;
    // NOP
    ctx->pc = 0x48e130u;
}
