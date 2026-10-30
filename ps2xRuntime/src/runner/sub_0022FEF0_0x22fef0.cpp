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

// Function: sub_0022FEF0
// Address: 0x22fef0 - 0x22ff88
void sub_0022FEF0_0x22fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FEF0_0x22fef0");
#endif

    switch (ctx->pc) {
        case 0x22ff08u: goto label_22ff08;
        case 0x22ff10u: goto label_22ff10;
        case 0x22ff70u: goto label_22ff70;
        case 0x22ff78u: goto label_22ff78;
        default: break;
    }

    ctx->pc = 0x22fef0u;

    // 0x22fef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22fef4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22fef8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22fef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22fefc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ff00: 0xc089988  jal         func_226620
    ctx->pc = 0x22FF00u;
    SET_GPR_U32(ctx, 31, 0x22FF08u);
    ctx->pc = 0x22FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF00u;
    // 0x22ff04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22FF00u, 0x22FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF08u;
label_22ff08:
    // 0x22ff08: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x22FF08u;
    SET_GPR_U32(ctx, 31, 0x22FF10u);
    ctx->pc = 0x22FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF08u;
    // 0x22ff0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22FF08u, 0x22FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF10u;
label_22ff10:
    // 0x22ff10: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x22ff10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x22ff14: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x22FF14u;
    {
        const bool branch_taken_0x22ff14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF14u;
        // 0x22ff18: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff14) {
            ctx->pc = 0x22FF78u;
            goto label_22ff78;
        }
    }
    ctx->pc = 0x22FF1Cu;
    // 0x22ff1c: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x22ff1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x22ff20: 0x2444bf50  addiu       $a0, $v0, -0x40B0
    ctx->pc = 0x22ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950736));
    // 0x22ff24: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x22ff24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22ff28: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22FF28u;
    {
        const bool branch_taken_0x22ff28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF28u;
        // 0x22ff2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff28) {
            ctx->pc = 0x22FF60u;
            goto label_22ff60;
        }
    }
    ctx->pc = 0x22FF30u;
    // 0x22ff30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22ff34: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FF34u;
    {
        const bool branch_taken_0x22ff34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF34u;
        // 0x22ff38: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff34) {
            ctx->pc = 0x22FF4Cu;
            goto label_22ff4c;
        }
    }
    ctx->pc = 0x22FF3Cu;
    // 0x22ff3c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x22ff3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22ff40: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x22ff40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x22ff44: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FF44u;
    {
        const bool branch_taken_0x22ff44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF44u;
        // 0x22ff48: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff44) {
            ctx->pc = 0x22FF5Cu;
            goto label_22ff5c;
        }
    }
    ctx->pc = 0x22FF4Cu;
label_22ff4c:
    // 0x22ff4c: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x22ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x22ff50: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x22ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
    // 0x22ff54: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22FF54u;
    {
        const bool branch_taken_0x22ff54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22ff54) {
            ctx->pc = 0x22FF60u;
            goto label_22ff60;
        }
    }
    ctx->pc = 0x22FF5Cu;
label_22ff5c:
    // 0x22ff5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ff60:
    // 0x22ff60: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FF60u;
    {
        const bool branch_taken_0x22ff60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ff60) {
            ctx->pc = 0x22FF70u;
            goto label_22ff70;
        }
    }
    ctx->pc = 0x22FF68u;
    // 0x22ff68: 0xc0a007a  jal         func_2801E8
    ctx->pc = 0x22FF68u;
    SET_GPR_U32(ctx, 31, 0x22FF70u);
    ctx->pc = 0x22FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF68u;
    // 0x22ff6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2801E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2801E8u, 0x22FF68u, 0x22FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF70u;
label_22ff70:
    // 0x22ff70: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x22FF70u;
    SET_GPR_U32(ctx, 31, 0x22FF78u);
    ctx->pc = 0x22FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF70u;
    // 0x22ff74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x22FF70u, 0x22FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF78u;
label_22ff78:
    // 0x22ff78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22ff78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ff7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ff7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ff80: 0x3e00008  jr          $ra
    ctx->pc = 0x22FF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF80u;
        // 0x22ff84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FF88u;
}
