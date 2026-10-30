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

// Function: sub_001C1B10
// Address: 0x1c1b10 - 0x1c1b58
void sub_001C1B10_0x1c1b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1B10_0x1c1b10");
#endif

    switch (ctx->pc) {
        case 0x1c1b10u: goto label_1c1b10;
        case 0x1c1b14u: goto label_1c1b14;
        case 0x1c1b18u: goto label_1c1b18;
        case 0x1c1b1cu: goto label_1c1b1c;
        case 0x1c1b20u: goto label_1c1b20;
        case 0x1c1b24u: goto label_1c1b24;
        case 0x1c1b28u: goto label_1c1b28;
        case 0x1c1b2cu: goto label_1c1b2c;
        case 0x1c1b30u: goto label_1c1b30;
        case 0x1c1b34u: goto label_1c1b34;
        case 0x1c1b38u: goto label_1c1b38;
        case 0x1c1b3cu: goto label_1c1b3c;
        case 0x1c1b40u: goto label_1c1b40;
        case 0x1c1b44u: goto label_1c1b44;
        case 0x1c1b48u: goto label_1c1b48;
        case 0x1c1b4cu: goto label_1c1b4c;
        case 0x1c1b50u: goto label_1c1b50;
        case 0x1c1b54u: goto label_1c1b54;
        default: break;
    }

    ctx->pc = 0x1c1b10u;

label_1c1b10:
    // 0x1c1b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1b14:
    // 0x1c1b14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c1b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c1b18:
    // 0x1c1b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c1b1c:
    // 0x1c1b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b20:
    // 0x1c1b20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c1b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c1b24:
    // 0x1c1b24: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1c1b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1c1b28:
    // 0x1c1b28: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1c1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1c1b2c:
    // 0x1c1b2c: 0x40f809  jalr        $v0
label_1c1b30:
    if (ctx->pc == 0x1C1B30u) {
        ctx->pc = 0x1C1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B2Cu;
        // 0x1c1b30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B34u;
        goto label_1c1b34;
    }
    ctx->pc = 0x1C1B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1B34u);
        ctx->pc = 0x1C1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B2Cu;
        // 0x1c1b30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1B2Cu, 0x1C1B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1B34u;
label_1c1b34:
    // 0x1c1b34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1c1b38:
    if (ctx->pc == 0x1C1B38u) {
        ctx->pc = 0x1C1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B34u;
        // 0x1c1b38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B3Cu;
        goto label_1c1b3c;
    }
    ctx->pc = 0x1C1B34u;
    {
        const bool branch_taken_0x1c1b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b34) {
            ctx->pc = 0x1C1B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1B34u;
            // 0x1c1b38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1B48u;
            goto label_1c1b48;
        }
    }
    ctx->pc = 0x1C1B3Cu;
label_1c1b3c:
    // 0x1c1b3c: 0xc070640  jal         func_1C1900
label_1c1b40:
    if (ctx->pc == 0x1C1B40u) {
        ctx->pc = 0x1C1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B3Cu;
        // 0x1c1b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B44u;
        goto label_1c1b44;
    }
    ctx->pc = 0x1C1B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B44u);
    ctx->pc = 0x1C1B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B3Cu;
    // 0x1c1b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1900u, 0x1C1B3Cu, 0x1C1B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B44u;
label_1c1b44:
    // 0x1c1b44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c1b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1b48:
    // 0x1c1b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1b4c:
    // 0x1c1b4c: 0x3e00008  jr          $ra
label_1c1b50:
    if (ctx->pc == 0x1C1B50u) {
        ctx->pc = 0x1C1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B4Cu;
        // 0x1c1b50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B54u;
        goto label_1c1b54;
    }
    ctx->pc = 0x1C1B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B4Cu;
        // 0x1c1b50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1B54u;
label_1c1b54:
    // 0x1c1b54: 0x0  nop
    ctx->pc = 0x1c1b54u;
    // NOP
    ctx->pc = 0x1c1b58u;
}
