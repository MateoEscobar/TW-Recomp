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

// Function: sub_0028ABC0
// Address: 0x28abc0 - 0x28ac18
void sub_0028ABC0_0x28abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ABC0_0x28abc0");
#endif

    switch (ctx->pc) {
        case 0x28abe8u: goto label_28abe8;
        case 0x28abf8u: goto label_28abf8;
        default: break;
    }

    ctx->pc = 0x28abc0u;

    // 0x28abc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28abc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28abc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28abcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28abccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28abd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28abd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28abd4: 0x9202011e  lbu         $v0, 0x11E($s0)
    ctx->pc = 0x28abd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 286)));
    // 0x28abd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28ABD8u;
    {
        const bool branch_taken_0x28abd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABD8u;
        // 0x28abdc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abd8) {
            ctx->pc = 0x28ABFCu;
            goto label_28abfc;
        }
    }
    ctx->pc = 0x28ABE0u;
    // 0x28abe0: 0xc0a2acc  jal         func_28AB30
    ctx->pc = 0x28ABE0u;
    SET_GPR_U32(ctx, 31, 0x28ABE8u);
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x28ABE0u, 0x28ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABE8u;
label_28abe8:
    // 0x28abe8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28ABE8u;
    {
        const bool branch_taken_0x28abe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABE8u;
        // 0x28abec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abe8) {
            ctx->pc = 0x28AC00u;
            goto label_28ac00;
        }
    }
    ctx->pc = 0x28ABF0u;
    // 0x28abf0: 0xc089fee  jal         func_227FB8
    ctx->pc = 0x28ABF0u;
    SET_GPR_U32(ctx, 31, 0x28ABF8u);
    ctx->pc = 0x28ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABF0u;
    // 0x28abf4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x28ABF0u, 0x28ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABF8u;
label_28abf8:
    // 0x28abf8: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x28abf8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28abfc:
    // 0x28abfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28abfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28ac00:
    // 0x28ac00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28ac00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ac04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ac04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ac08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ac08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ac0c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC0Cu;
        // 0x28ac10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AC14u;
    // 0x28ac14: 0x0  nop
    ctx->pc = 0x28ac14u;
    // NOP
    ctx->pc = 0x28ac18u;
}
