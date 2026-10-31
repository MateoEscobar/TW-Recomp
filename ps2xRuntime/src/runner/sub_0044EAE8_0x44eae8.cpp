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

// Function: sub_0044EAE8
// Address: 0x44eae8 - 0x44eb58
void sub_0044EAE8_0x44eae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EAE8_0x44eae8");
#endif

    switch (ctx->pc) {
        case 0x44eb0cu: goto label_44eb0c;
        case 0x44eb3cu: goto label_44eb3c;
        default: break;
    }

    ctx->pc = 0x44eae8u;

    // 0x44eae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44eae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44eaec: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x44eaecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x44eaf0: 0x3c070045  lui         $a3, 0x45
    ctx->pc = 0x44eaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)69 << 16));
    // 0x44eaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44eaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44eaf8: 0x24c60f70  addiu       $a2, $a2, 0xF70
    ctx->pc = 0x44eaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3952));
    // 0x44eafc: 0x24e71010  addiu       $a3, $a3, 0x1010
    ctx->pc = 0x44eafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4112));
    // 0x44eb00: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x44eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44eb04: 0xc120d9a  jal         func_483668
    ctx->pc = 0x44EB04u;
    SET_GPR_U32(ctx, 31, 0x44EB0Cu);
    ctx->pc = 0x44EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44EB04u;
    // 0x44eb08: 0x2405012f  addiu       $a1, $zero, 0x12F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x44EB04u, 0x44EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EB0Cu;
label_44eb0c:
    // 0x44eb0c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44EB0Cu;
    {
        const bool branch_taken_0x44eb0c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x44EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EB0Cu;
        // 0x44eb10: 0xaf82841c  sw          $v0, -0x7BE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44eb0c) {
            ctx->pc = 0x44EB1Cu;
            goto label_44eb1c;
        }
    }
    ctx->pc = 0x44EB14u;
    // 0x44eb14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x44EB14u;
    {
        const bool branch_taken_0x44eb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EB14u;
        // 0x44eb18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44eb14) {
            ctx->pc = 0x44EB48u;
            goto label_44eb48;
        }
    }
    ctx->pc = 0x44EB1Cu;
label_44eb1c:
    // 0x44eb1c: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x44eb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x44eb20: 0x3c070045  lui         $a3, 0x45
    ctx->pc = 0x44eb20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)69 << 16));
    // 0x44eb24: 0x24c6ec20  addiu       $a2, $a2, -0x13E0
    ctx->pc = 0x44eb24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962208));
    // 0x44eb28: 0x24e7ec38  addiu       $a3, $a3, -0x13C8
    ctx->pc = 0x44eb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962232));
    // 0x44eb2c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x44eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44eb30: 0x2405012f  addiu       $a1, $zero, 0x12F
    ctx->pc = 0x44eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x44eb34: 0xc11a9d2  jal         func_46A748
    ctx->pc = 0x44EB34u;
    SET_GPR_U32(ctx, 31, 0x44EB3Cu);
    ctx->pc = 0x44EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44EB34u;
    // 0x44eb38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A748u, 0x44EB34u, 0x44EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EB3Cu;
label_44eb3c:
    // 0x44eb3c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x44eb3cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x44eb40: 0xaf828418  sw          $v0, -0x7BE8($gp)
    ctx->pc = 0x44eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935576), GPR_U32(ctx, 2));
    // 0x44eb44: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x44eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_44eb48:
    // 0x44eb48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44eb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44eb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x44EB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EB4Cu;
        // 0x44eb50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EB54u;
    // 0x44eb54: 0x0  nop
    ctx->pc = 0x44eb54u;
    // NOP
    ctx->pc = 0x44eb58u;
}
