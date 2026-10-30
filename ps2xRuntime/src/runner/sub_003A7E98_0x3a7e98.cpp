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

// Function: sub_003A7E98
// Address: 0x3a7e98 - 0x3a7f40
void sub_003A7E98_0x3a7e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7E98_0x3a7e98");
#endif

    switch (ctx->pc) {
        case 0x3a7ee0u: goto label_3a7ee0;
        case 0x3a7f0cu: goto label_3a7f0c;
        case 0x3a7f18u: goto label_3a7f18;
        case 0x3a7f24u: goto label_3a7f24;
        default: break;
    }

    ctx->pc = 0x3a7e98u;

    // 0x3a7e98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a7e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a7e9c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3a7e9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a7ea0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3a7ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3a7ea4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3a7ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3a7ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7eac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3a7eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3a7eb0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3a7eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a7eb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a7eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3a7eb8: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3a7eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a7ebc: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x3a7ebcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a7ec0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a7ec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a7ec4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3a7ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x3a7ec8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a7ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7ecc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3a7eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3a7ed0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a7ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a7ed4: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3a7ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x3a7ed8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3a7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3a7edc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a7ee0:
    // 0x3a7ee0: 0x0  nop
    ctx->pc = 0x3a7ee0u;
    // NOP
    // 0x3a7ee4: 0x0  nop
    ctx->pc = 0x3a7ee4u;
    // NOP
    // 0x3a7ee8: 0x0  nop
    ctx->pc = 0x3a7ee8u;
    // NOP
    // 0x3a7eec: 0x0  nop
    ctx->pc = 0x3a7eecu;
    // NOP
    // 0x3a7ef0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A7EF0u;
    {
        const bool branch_taken_0x3a7ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EF0u;
        // 0x3a7ef4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ef0) {
            ctx->pc = 0x3A7EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7ee0;
        }
    }
    ctx->pc = 0x3A7EF8u;
    // 0x3a7ef8: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x3a7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3a7efc: 0xae100404  sw          $s0, 0x404($s0)
    ctx->pc = 0x3a7efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 16));
    // 0x3a7f00: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x3a7f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x3a7f04: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A7F04u;
    SET_GPR_U32(ctx, 31, 0x3A7F0Cu);
    ctx->pc = 0x3A7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7F04u;
    // 0x3a7f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A7F04u, 0x3A7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7F0Cu;
label_3a7f0c:
    // 0x3a7f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a7f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7f10: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A7F10u;
    SET_GPR_U32(ctx, 31, 0x3A7F18u);
    ctx->pc = 0x3A7F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7F10u;
    // 0x3a7f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A7F10u, 0x3A7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7F18u;
label_3a7f18:
    // 0x3a7f18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a7f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7f1c: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A7F1Cu;
    SET_GPR_U32(ctx, 31, 0x3A7F24u);
    ctx->pc = 0x3A7F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7F1Cu;
    // 0x3a7f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A7F1Cu, 0x3A7F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7F24u;
label_3a7f24:
    // 0x3a7f24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a7f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7f28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3a7f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a7f2c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3a7f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a7f30: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3a7f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a7f34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a7f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a7f38: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F38u;
        // 0x3a7f3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7F40u;
}
