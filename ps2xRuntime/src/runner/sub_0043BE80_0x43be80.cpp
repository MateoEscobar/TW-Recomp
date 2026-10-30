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

// Function: sub_0043BE80
// Address: 0x43be80 - 0x43bf08
void sub_0043BE80_0x43be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043BE80_0x43be80");
#endif

    switch (ctx->pc) {
        case 0x43bea4u: goto label_43bea4;
        case 0x43bec0u: goto label_43bec0;
        case 0x43bed0u: goto label_43bed0;
        default: break;
    }

    ctx->pc = 0x43be80u;

    // 0x43be80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x43be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x43be84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x43be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x43be88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43be8c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x43be8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43be90: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x43be90u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x43be94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43be98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43be98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x43be9c: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43BE9Cu;
    SET_GPR_U32(ctx, 31, 0x43BEA4u);
    ctx->pc = 0x43BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BE9Cu;
    // 0x43bea0: 0xae327224  sw          $s2, 0x7224($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 29220), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43BE9Cu, 0x43BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BEA4u;
label_43bea4:
    // 0x43bea4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x43bea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x43bea8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x43bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x43beac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43beacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43beb0: 0x24a5be28  addiu       $a1, $a1, -0x41D8
    ctx->pc = 0x43beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950440));
    // 0x43beb4: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x43beb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x43beb8: 0xc10ff26  jal         func_43FC98
    ctx->pc = 0x43BEB8u;
    SET_GPR_U32(ctx, 31, 0x43BEC0u);
    ctx->pc = 0x43BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BEB8u;
    // 0x43bebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43FC98u, 0x43BEB8u, 0x43BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BEC0u;
label_43bec0:
    // 0x43bec0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43BEC0u;
    {
        const bool branch_taken_0x43bec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BEC0u;
        // 0x43bec4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bec0) {
            ctx->pc = 0x43BED4u;
            goto label_43bed4;
        }
    }
    ctx->pc = 0x43BEC8u;
    // 0x43bec8: 0xc110cc4  jal         func_443310
    ctx->pc = 0x43BEC8u;
    SET_GPR_U32(ctx, 31, 0x43BED0u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x43BEC8u, 0x43BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BED0u;
label_43bed0:
    // 0x43bed0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x43bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_43bed4:
    // 0x43bed4: 0xae207224  sw          $zero, 0x7224($s1)
    ctx->pc = 0x43bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29220), GPR_U32(ctx, 0));
    // 0x43bed8: 0xac527248  sw          $s2, 0x7248($v0)
    ctx->pc = 0x43bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29256), GPR_U32(ctx, 18));
    // 0x43bedc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43bedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43bee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43bee4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x43bee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43bee8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43bee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43beec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43beecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43bef0: 0x3e00008  jr          $ra
    ctx->pc = 0x43BEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BEF0u;
        // 0x43bef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43BEF8u;
    // 0x43bef8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x43bef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x43befc: 0x0  nop
    ctx->pc = 0x43befcu;
    // NOP
    // 0x43bf00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x43bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x43bf04: 0x0  nop
    ctx->pc = 0x43bf04u;
    // NOP
    ctx->pc = 0x43bf08u;
}
