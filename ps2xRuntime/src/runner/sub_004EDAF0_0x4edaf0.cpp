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

// Function: sub_004EDAF0
// Address: 0x4edaf0 - 0x4edb38
void sub_004EDAF0_0x4edaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDAF0_0x4edaf0");
#endif

    switch (ctx->pc) {
        case 0x4edb04u: goto label_4edb04;
        default: break;
    }

    ctx->pc = 0x4edaf0u;

    // 0x4edaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4edaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4edaf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4edaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4edaf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4edaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4edafc: 0xc137882  jal         func_4DE208
    ctx->pc = 0x4EDAFCu;
    SET_GPR_U32(ctx, 31, 0x4EDB04u);
    ctx->pc = 0x4EDB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDAFCu;
    // 0x4edb00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x4EDAFCu, 0x4EDB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDB04u;
label_4edb04:
    // 0x4edb04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4edb04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edb08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4edb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4edb0c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EDB0Cu;
    {
        const bool branch_taken_0x4edb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4EDB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDB0Cu;
        // 0x4edb10: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edb0c) {
            ctx->pc = 0x4EDB24u;
            goto label_4edb24;
        }
    }
    ctx->pc = 0x4EDB14u;
    // 0x4edb14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4edb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4edb18: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x4edb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x4edb1c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4edb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4edb20: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4edb20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4edb24:
    // 0x4edb24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4edb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4edb28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4edb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4edb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EDB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDB2Cu;
        // 0x4edb30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EDB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EDB34u;
    // 0x4edb34: 0x0  nop
    ctx->pc = 0x4edb34u;
    // NOP
    ctx->pc = 0x4edb38u;
}
