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

// Function: sub_003A7E10
// Address: 0x3a7e10 - 0x3a7e98
void sub_003A7E10_0x3a7e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7E10_0x3a7e10");
#endif

    switch (ctx->pc) {
        case 0x3a7e48u: goto label_3a7e48;
        case 0x3a7e74u: goto label_3a7e74;
        case 0x3a7e80u: goto label_3a7e80;
        default: break;
    }

    ctx->pc = 0x3a7e10u;

    // 0x3a7e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a7e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a7e14: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3a7e14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a7e18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a7e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a7e1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a7e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a7e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a7e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a7e28: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3a7e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a7e2c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a7e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a7e30: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3a7e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x3a7e34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a7e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e38: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3a7e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3a7e3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a7e40: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3a7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3a7e44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a7e48:
    // 0x3a7e48: 0x0  nop
    ctx->pc = 0x3a7e48u;
    // NOP
    // 0x3a7e4c: 0x0  nop
    ctx->pc = 0x3a7e4cu;
    // NOP
    // 0x3a7e50: 0x0  nop
    ctx->pc = 0x3a7e50u;
    // NOP
    // 0x3a7e54: 0x0  nop
    ctx->pc = 0x3a7e54u;
    // NOP
    // 0x3a7e58: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A7E58u;
    {
        const bool branch_taken_0x3a7e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E58u;
        // 0x3a7e5c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e58) {
            ctx->pc = 0x3A7E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7e48;
        }
    }
    ctx->pc = 0x3A7E60u;
    // 0x3a7e60: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x3a7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3a7e64: 0xae100404  sw          $s0, 0x404($s0)
    ctx->pc = 0x3a7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 16));
    // 0x3a7e68: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x3a7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x3a7e6c: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A7E6Cu;
    SET_GPR_U32(ctx, 31, 0x3A7E74u);
    ctx->pc = 0x3A7E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7E6Cu;
    // 0x3a7e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A7E6Cu, 0x3A7E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E74u;
label_3a7e74:
    // 0x3a7e74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a7e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e78: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A7E78u;
    SET_GPR_U32(ctx, 31, 0x3A7E80u);
    ctx->pc = 0x3A7E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7E78u;
    // 0x3a7e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A7E78u, 0x3A7E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E80u;
label_3a7e80:
    // 0x3a7e80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a7e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e84: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a7e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a7e88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a7e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a7e8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a7e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7e90: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E90u;
        // 0x3a7e94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7E98u;
}
