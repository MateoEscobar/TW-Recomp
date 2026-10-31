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

// Function: sub_0015D480
// Address: 0x15d480 - 0x15d4c8
void sub_0015D480_0x15d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D480_0x15d480");
#endif

    switch (ctx->pc) {
        case 0x15d4a8u: goto label_15d4a8;
        default: break;
    }

    ctx->pc = 0x15d480u;

    // 0x15d480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d484: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15d484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15d488: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15d48c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D48Cu;
    {
        const bool branch_taken_0x15d48c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D48Cu;
        // 0x15d490: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d48c) {
            ctx->pc = 0x15D4B4u;
            goto label_15d4b4;
        }
    }
    ctx->pc = 0x15D494u;
    // 0x15d494: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D494u;
    {
        const bool branch_taken_0x15d494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D494u;
        // 0x15d498: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d494) {
            ctx->pc = 0x15D4B4u;
            goto label_15d4b4;
        }
    }
    ctx->pc = 0x15D49Cu;
    // 0x15d49c: 0x26105df8  addiu       $s0, $s0, 0x5DF8
    ctx->pc = 0x15d49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24056));
    // 0x15d4a0: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x15D4A0u;
    SET_GPR_U32(ctx, 31, 0x15D4A8u);
    ctx->pc = 0x15D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D4A0u;
    // 0x15d4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x15D4A0u, 0x15D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D4A8u;
label_15d4a8:
    // 0x15d4a8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15d4ac: 0x24638658  addiu       $v1, $v1, -0x79A8
    ctx->pc = 0x15d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936152));
    // 0x15d4b0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x15d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_15d4b4:
    // 0x15d4b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15d4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d4b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15D4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4BCu;
        // 0x15d4c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D4C4u;
    // 0x15d4c4: 0x0  nop
    ctx->pc = 0x15d4c4u;
    // NOP
    ctx->pc = 0x15d4c8u;
}
