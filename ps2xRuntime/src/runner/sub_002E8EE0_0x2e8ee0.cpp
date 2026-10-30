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

// Function: sub_002E8EE0
// Address: 0x2e8ee0 - 0x2e8f38
void sub_002E8EE0_0x2e8ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8EE0_0x2e8ee0");
#endif

    switch (ctx->pc) {
        case 0x2e8f0cu: goto label_2e8f0c;
        case 0x2e8f24u: goto label_2e8f24;
        default: break;
    }

    ctx->pc = 0x2e8ee0u;

    // 0x2e8ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e8ee4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e8ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ee8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e8ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e8eec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e8eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e8ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8ef4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2e8ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e8ef8: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x2e8ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2e8efc: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8EFCu;
    {
        const bool branch_taken_0x2e8efc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EFCu;
        // 0x2e8f00: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8efc) {
            ctx->pc = 0x2E8F24u;
            goto label_2e8f24;
        }
    }
    ctx->pc = 0x2E8F04u;
    // 0x2e8f04: 0xc0ba36a  jal         func_2E8DA8
    ctx->pc = 0x2E8F04u;
    SET_GPR_U32(ctx, 31, 0x2E8F0Cu);
    ctx->pc = 0x2E8F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F04u;
    // 0x2e8f08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8DA8u, 0x2E8F04u, 0x2E8F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F0Cu;
label_2e8f0c:
    // 0x2e8f0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8F0Cu;
    {
        const bool branch_taken_0x2e8f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F0Cu;
        // 0x2e8f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f0c) {
            ctx->pc = 0x2E8F24u;
            goto label_2e8f24;
        }
    }
    ctx->pc = 0x2E8F14u;
    // 0x2e8f14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e8f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e8f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8f1c: 0xc0930a0  jal         func_24C280
    ctx->pc = 0x2E8F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E8F24u);
    ctx->pc = 0x2E8F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F1Cu;
    // 0x2e8f20: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x2E8F1Cu, 0x2E8F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F24u;
label_2e8f24:
    // 0x2e8f24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F2Cu;
        // 0x2e8f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8F34u;
    // 0x2e8f34: 0x0  nop
    ctx->pc = 0x2e8f34u;
    // NOP
    ctx->pc = 0x2e8f38u;
}
