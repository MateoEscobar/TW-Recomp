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

// Function: sub_001C8AA0
// Address: 0x1c8aa0 - 0x1c8b08
void sub_001C8AA0_0x1c8aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8AA0_0x1c8aa0");
#endif

    switch (ctx->pc) {
        case 0x1c8ab4u: goto label_1c8ab4;
        case 0x1c8accu: goto label_1c8acc;
        case 0x1c8ae8u: goto label_1c8ae8;
        default: break;
    }

    ctx->pc = 0x1c8aa0u;

    // 0x1c8aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8aa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8aac: 0xc079cb0  jal         func_1E72C0
    ctx->pc = 0x1C8AACu;
    SET_GPR_U32(ctx, 31, 0x1C8AB4u);
    ctx->pc = 0x1C8AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AACu;
    // 0x1c8ab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E72C0u, 0x1C8AACu, 0x1C8AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8AB4u;
label_1c8ab4:
    // 0x1c8ab4: 0x8e040544  lw          $a0, 0x544($s0)
    ctx->pc = 0x1c8ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
    // 0x1c8ab8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8AB8u;
    {
        const bool branch_taken_0x1c8ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AB8u;
        // 0x1c8abc: 0x24060057  addiu       $a2, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ab8) {
            ctx->pc = 0x1C8AD0u;
            goto label_1c8ad0;
        }
    }
    ctx->pc = 0x1C8AC0u;
    // 0x1c8ac0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c8ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1c8ac4: 0xc139f3a  jal         func_4E7CE8
    ctx->pc = 0x1C8AC4u;
    SET_GPR_U32(ctx, 31, 0x1C8ACCu);
    ctx->pc = 0x1C8AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AC4u;
    // 0x1c8ac8: 0x24a55548  addiu       $a1, $a1, 0x5548 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7CE8u, 0x1C8AC4u, 0x1C8ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ACCu;
label_1c8acc:
    // 0x1c8acc: 0xae000544  sw          $zero, 0x544($s0)
    ctx->pc = 0x1c8accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1348), GPR_U32(ctx, 0));
label_1c8ad0:
    // 0x1c8ad0: 0x8e040548  lw          $a0, 0x548($s0)
    ctx->pc = 0x1c8ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x1c8ad4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8AD4u;
    {
        const bool branch_taken_0x1c8ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AD4u;
        // 0x1c8ad8: 0x2406005d  addiu       $a2, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ad4) {
            ctx->pc = 0x1C8AECu;
            goto label_1c8aec;
        }
    }
    ctx->pc = 0x1C8ADCu;
    // 0x1c8adc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c8adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1c8ae0: 0xc139f62  jal         func_4E7D88
    ctx->pc = 0x1C8AE0u;
    SET_GPR_U32(ctx, 31, 0x1C8AE8u);
    ctx->pc = 0x1C8AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8AE0u;
    // 0x1c8ae4: 0x24a55548  addiu       $a1, $a1, 0x5548 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7D88u, 0x1C8AE0u, 0x1C8AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8AE8u;
label_1c8ae8:
    // 0x1c8ae8: 0xae000548  sw          $zero, 0x548($s0)
    ctx->pc = 0x1c8ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1352), GPR_U32(ctx, 0));
label_1c8aec:
    // 0x1c8aec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8af4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AF4u;
        // 0x1c8af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8AFCu;
    // 0x1c8afc: 0x0  nop
    ctx->pc = 0x1c8afcu;
    // NOP
    // 0x1c8b00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c8b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c8b04: 0x0  nop
    ctx->pc = 0x1c8b04u;
    // NOP
    ctx->pc = 0x1c8b08u;
}
