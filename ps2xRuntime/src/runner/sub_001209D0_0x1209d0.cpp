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

// Function: sub_001209D0
// Address: 0x1209d0 - 0x120a30
void sub_001209D0_0x1209d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001209D0_0x1209d0");
#endif

    switch (ctx->pc) {
        case 0x1209fcu: goto label_1209fc;
        case 0x120a18u: goto label_120a18;
        default: break;
    }

    ctx->pc = 0x1209d0u;

    // 0x1209d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1209d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1209d4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1209d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x1209d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1209d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1209dc: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x1209dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x1209e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1209e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1209e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1209e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1209e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1209ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1209ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1209f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1209f4: 0xc0e400e  jal         func_390038
    ctx->pc = 0x1209F4u;
    SET_GPR_U32(ctx, 31, 0x1209FCu);
    ctx->pc = 0x1209F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1209F4u;
    // 0x1209f8: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390038u, 0x1209F4u, 0x1209FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1209FCu;
label_1209fc:
    // 0x1209fc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1209fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x120a00: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x120a00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x120a04: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x120a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x120a08: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120A08u;
    {
        const bool branch_taken_0x120a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A08u;
        // 0x120a0c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a08) {
            ctx->pc = 0x120A18u;
            goto label_120a18;
        }
    }
    ctx->pc = 0x120A10u;
    // 0x120a10: 0xc10b208  jal         func_42C820
    ctx->pc = 0x120A10u;
    SET_GPR_U32(ctx, 31, 0x120A18u);
    ctx->pc = 0x120A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A10u;
    // 0x120a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x120A10u, 0x120A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A18u;
label_120a18:
    // 0x120a18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x120a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120a1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a24: 0x3e00008  jr          $ra
    ctx->pc = 0x120A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A24u;
        // 0x120a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120A2Cu;
    // 0x120a2c: 0x0  nop
    ctx->pc = 0x120a2cu;
    // NOP
    ctx->pc = 0x120a30u;
}
