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

// Function: sub_00197D00
// Address: 0x197d00 - 0x197d58
void sub_00197D00_0x197d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197D00_0x197d00");
#endif

    switch (ctx->pc) {
        case 0x197d28u: goto label_197d28;
        case 0x197d3cu: goto label_197d3c;
        case 0x197d44u: goto label_197d44;
        default: break;
    }

    ctx->pc = 0x197d00u;

    // 0x197d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197d04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x197d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x197d08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x197d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d0c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x197D0Cu;
    {
        const bool branch_taken_0x197d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D0Cu;
        // 0x197d10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d0c) {
            ctx->pc = 0x197D44u;
            goto label_197d44;
        }
    }
    ctx->pc = 0x197D14u;
    // 0x197d14: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x197d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x197d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d1c: 0x24a57cc8  addiu       $a1, $a1, 0x7CC8
    ctx->pc = 0x197d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31944));
    // 0x197d20: 0xc11c6b8  jal         func_471AE0
    ctx->pc = 0x197D20u;
    SET_GPR_U32(ctx, 31, 0x197D28u);
    ctx->pc = 0x197D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D20u;
    // 0x197d24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471AE0u, 0x197D20u, 0x197D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D28u;
label_197d28:
    // 0x197d28: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x197d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x197d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d30: 0x24a57cd0  addiu       $a1, $a1, 0x7CD0
    ctx->pc = 0x197d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31952));
    // 0x197d34: 0xc11c6fc  jal         func_471BF0
    ctx->pc = 0x197D34u;
    SET_GPR_U32(ctx, 31, 0x197D3Cu);
    ctx->pc = 0x197D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D34u;
    // 0x197d38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471BF0u, 0x197D34u, 0x197D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D3Cu;
label_197d3c:
    // 0x197d3c: 0xc11c384  jal         func_470E10
    ctx->pc = 0x197D3Cu;
    SET_GPR_U32(ctx, 31, 0x197D44u);
    ctx->pc = 0x197D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D3Cu;
    // 0x197d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470E10u, 0x197D3Cu, 0x197D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D44u;
label_197d44:
    // 0x197d44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x197d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x197D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D4Cu;
        // 0x197d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197D54u;
    // 0x197d54: 0x0  nop
    ctx->pc = 0x197d54u;
    // NOP
    ctx->pc = 0x197d58u;
}
