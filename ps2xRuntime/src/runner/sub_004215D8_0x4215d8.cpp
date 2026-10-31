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

// Function: sub_004215D8
// Address: 0x4215d8 - 0x421638
void sub_004215D8_0x4215d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004215D8_0x4215d8");
#endif

    switch (ctx->pc) {
        case 0x421600u: goto label_421600;
        case 0x42160cu: goto label_42160c;
        default: break;
    }

    ctx->pc = 0x4215d8u;

    // 0x4215d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4215d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4215dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4215dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4215e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4215e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4215e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4215e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4215e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4215e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4215ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4215ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4215f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4215f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4215f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4215f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4215f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4215f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4215fc: 0x0  nop
    ctx->pc = 0x4215fcu;
    // NOP
label_421600:
    // 0x421600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x421600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421604: 0xc108674  jal         func_4219D0
    ctx->pc = 0x421604u;
    SET_GPR_U32(ctx, 31, 0x42160Cu);
    ctx->pc = 0x421608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421604u;
    // 0x421608: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4219D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4219D0u, 0x421604u, 0x42160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42160Cu;
label_42160c:
    // 0x42160c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x42160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x421610: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x421610u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x421614: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x421614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x421618: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x421618u;
    {
        const bool branch_taken_0x421618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421618u;
        // 0x42161c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421618) {
            ctx->pc = 0x421600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421600;
        }
    }
    ctx->pc = 0x421620u;
    // 0x421620: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x421620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x421624: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x421624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x421628: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x421628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42162c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42162cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x421630: 0x3e00008  jr          $ra
    ctx->pc = 0x421630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421630u;
        // 0x421634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421638u;
}
