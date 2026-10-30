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

// Function: sub_003859F0
// Address: 0x3859f0 - 0x385a50
void sub_003859F0_0x3859f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003859F0_0x3859f0");
#endif

    switch (ctx->pc) {
        case 0x385a04u: goto label_385a04;
        case 0x385a14u: goto label_385a14;
        case 0x385a1cu: goto label_385a1c;
        case 0x385a34u: goto label_385a34;
        default: break;
    }

    ctx->pc = 0x3859f0u;

    // 0x3859f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3859f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3859f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3859f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3859f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3859f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3859fc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3859FCu;
    SET_GPR_U32(ctx, 31, 0x385A04u);
    ctx->pc = 0x385A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3859FCu;
    // 0x385a00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3859FCu, 0x385A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A04u;
label_385a04:
    // 0x385a04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x385A04u;
    {
        const bool branch_taken_0x385a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A04u;
        // 0x385a08: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a04) {
            ctx->pc = 0x385A40u;
            goto label_385a40;
        }
    }
    ctx->pc = 0x385A0Cu;
    // 0x385a0c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x385A0Cu;
    SET_GPR_U32(ctx, 31, 0x385A14u);
    ctx->pc = 0x385A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A0Cu;
    // 0x385a10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x385A0Cu, 0x385A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A14u;
label_385a14:
    // 0x385a14: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x385A14u;
    SET_GPR_U32(ctx, 31, 0x385A1Cu);
    ctx->pc = 0x385A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A14u;
    // 0x385a18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x385A14u, 0x385A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A1Cu;
label_385a1c:
    // 0x385a1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x385a1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385a20: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x385A20u;
    {
        const bool branch_taken_0x385a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A20u;
        // 0x385a24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a20) {
            ctx->pc = 0x385A3Cu;
            goto label_385a3c;
        }
    }
    ctx->pc = 0x385A28u;
    // 0x385a28: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x385a28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x385a2c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x385A2Cu;
    SET_GPR_U32(ctx, 31, 0x385A34u);
    ctx->pc = 0x385A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A2Cu;
    // 0x385a30: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x385A2Cu, 0x385A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A34u;
label_385a34:
    // 0x385a34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x385A34u;
    {
        const bool branch_taken_0x385a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A34u;
        // 0x385a38: 0x24420028  addiu       $v0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a34) {
            ctx->pc = 0x385A44u;
            goto label_385a44;
        }
    }
    ctx->pc = 0x385A3Cu;
label_385a3c:
    // 0x385a3c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x385a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_385a40:
    // 0x385a40: 0x2442de50  addiu       $v0, $v0, -0x21B0
    ctx->pc = 0x385a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958672));
label_385a44:
    // 0x385a44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385a48: 0x3e00008  jr          $ra
    ctx->pc = 0x385A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A48u;
        // 0x385a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385A50u;
}
