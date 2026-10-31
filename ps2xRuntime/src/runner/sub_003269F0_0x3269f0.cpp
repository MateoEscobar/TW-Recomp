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

// Function: sub_003269F0
// Address: 0x3269f0 - 0x326a38
void sub_003269F0_0x3269f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003269F0_0x3269f0");
#endif

    switch (ctx->pc) {
        case 0x326a00u: goto label_326a00;
        default: break;
    }

    ctx->pc = 0x3269f0u;

    // 0x3269f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3269f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3269f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3269f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3269f8: 0xc0c9970  jal         func_3265C0
    ctx->pc = 0x3269F8u;
    SET_GPR_U32(ctx, 31, 0x326A00u);
    ctx->pc = 0x3265C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265C0u, 0x3269F8u, 0x326A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A00u;
label_326a00:
    // 0x326a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x326a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326a04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x326a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326a08: 0x3082003f  andi        $v0, $a0, 0x3F
    ctx->pc = 0x326a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x326a0c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x326A0Cu;
    {
        const bool branch_taken_0x326a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x326A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A0Cu;
        // 0x326a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a0c) {
            ctx->pc = 0x326A2Cu;
            goto label_326a2c;
        }
    }
    ctx->pc = 0x326A14u;
    // 0x326a14: 0x41982  srl         $v1, $a0, 6
    ctx->pc = 0x326a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x326a18: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x326a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x326a1c: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x326a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x326a20: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x326A20u;
    {
        const bool branch_taken_0x326a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x326A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A20u;
        // 0x326a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a20) {
            ctx->pc = 0x326A2Cu;
            goto label_326a2c;
        }
    }
    ctx->pc = 0x326A28u;
    // 0x326a28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326a2c:
    // 0x326a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326a30: 0x3e00008  jr          $ra
    ctx->pc = 0x326A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A30u;
        // 0x326a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326A38u;
}
