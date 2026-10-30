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

// Function: sub_002EE6E0
// Address: 0x2ee6e0 - 0x2ee758
void sub_002EE6E0_0x2ee6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE6E0_0x2ee6e0");
#endif

    switch (ctx->pc) {
        case 0x2ee700u: goto label_2ee700;
        case 0x2ee74cu: goto label_2ee74c;
        default: break;
    }

    ctx->pc = 0x2ee6e0u;

    // 0x2ee6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee6e4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2ee6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee6ec: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x2ee6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2ee6f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ee6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee6f4: 0x90850048  lbu         $a1, 0x48($a0)
    ctx->pc = 0x2ee6f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ee6f8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2ee6f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee6fc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2ee6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2ee700:
    // 0x2ee700: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x2ee700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2ee704: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2ee704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2ee708: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ee708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ee70c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2ee70cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee710: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2ee710u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2ee714: 0x10a70003  beq         $a1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE714u;
    {
        const bool branch_taken_0x2ee714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x2EE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE714u;
        // 0x2ee718: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee714) {
            ctx->pc = 0x2EE724u;
            goto label_2ee724;
        }
    }
    ctx->pc = 0x2EE71Cu;
    // 0x2ee71c: 0x5048fff8  beql        $v0, $t0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EE71Cu;
    {
        const bool branch_taken_0x2ee71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x2ee71c) {
            ctx->pc = 0x2EE720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE71Cu;
            // 0x2ee720: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee700;
        }
    }
    ctx->pc = 0x2EE724u;
label_2ee724:
    // 0x2ee724: 0xa0850048  sb          $a1, 0x48($a0)
    ctx->pc = 0x2ee724u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ee728: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2ee728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ee72c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ee72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ee730: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ee730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ee734: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2ee734u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee738: 0x10a90004  beq         $a1, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE738u;
    {
        const bool branch_taken_0x2ee738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        ctx->pc = 0x2EE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE738u;
        // 0x2ee73c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee738) {
            ctx->pc = 0x2EE74Cu;
            goto label_2ee74c;
        }
    }
    ctx->pc = 0x2EE740u;
    // 0x2ee740: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ee740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2ee744: 0xc0e4546  jal         func_391518
    ctx->pc = 0x2EE744u;
    SET_GPR_U32(ctx, 31, 0x2EE74Cu);
    ctx->pc = 0x2EE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE744u;
    // 0x2ee748: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391518u, 0x2EE744u, 0x2EE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE74Cu;
label_2ee74c:
    // 0x2ee74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee750: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE750u;
        // 0x2ee754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE758u;
}
