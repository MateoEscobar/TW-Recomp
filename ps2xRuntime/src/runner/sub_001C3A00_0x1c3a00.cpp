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

// Function: sub_001C3A00
// Address: 0x1c3a00 - 0x1c3a60
void sub_001C3A00_0x1c3a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3A00_0x1c3a00");
#endif

    switch (ctx->pc) {
        case 0x1c3a14u: goto label_1c3a14;
        case 0x1c3a28u: goto label_1c3a28;
        case 0x1c3a30u: goto label_1c3a30;
        case 0x1c3a38u: goto label_1c3a38;
        default: break;
    }

    ctx->pc = 0x1c3a00u;

    // 0x1c3a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c3a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3a04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c3a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c3a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3a0c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1C3A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C3A14u);
    ctx->pc = 0x1C3A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A0Cu;
    // 0x1c3a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1C3A0Cu, 0x1C3A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A14u;
label_1c3a14:
    // 0x1c3a14: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1c3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1c3a18: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c3a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c3a1c: 0x24639fd0  addiu       $v1, $v1, -0x6030
    ctx->pc = 0x1c3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942672));
    // 0x1c3a20: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1C3A20u;
    SET_GPR_U32(ctx, 31, 0x1C3A28u);
    ctx->pc = 0x1C3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A20u;
    // 0x1c3a24: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1C3A20u, 0x1C3A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A28u;
label_1c3a28:
    // 0x1c3a28: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1C3A28u;
    SET_GPR_U32(ctx, 31, 0x1C3A30u);
    ctx->pc = 0x1C3A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A28u;
    // 0x1c3a2c: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1C3A28u, 0x1C3A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A30u;
label_1c3a30:
    // 0x1c3a30: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1C3A30u;
    SET_GPR_U32(ctx, 31, 0x1C3A38u);
    ctx->pc = 0x1C3A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A30u;
    // 0x1c3a34: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C3A30u, 0x1C3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A38u;
label_1c3a38:
    // 0x1c3a38: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1c3a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1c3a3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c3a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a40: 0x2463a7c0  addiu       $v1, $v1, -0x5840
    ctx->pc = 0x1c3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944704));
    // 0x1c3a44: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c3a48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c3a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c3a4c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c3a50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c3a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3a58: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A58u;
        // 0x1c3a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3A60u;
}
