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

// Function: sub_0016C298
// Address: 0x16c298 - 0x16c2f0
void sub_0016C298_0x16c298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C298_0x16c298");
#endif

    switch (ctx->pc) {
        case 0x16c2c8u: goto label_16c2c8;
        case 0x16c2d0u: goto label_16c2d0;
        default: break;
    }

    ctx->pc = 0x16c298u;

    // 0x16c298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16c29c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x16c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x16c2a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16c2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16c2a4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16c2a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x16c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x16c2ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16c2b0: 0x24706e30  addiu       $s0, $v1, 0x6E30
    ctx->pc = 0x16c2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 28208));
    // 0x16c2b4: 0x34426200  ori         $v0, $v0, 0x6200
    ctx->pc = 0x16c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25088);
    // 0x16c2b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c2bc: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x16c2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16c2c0: 0xac80cb7c  sw          $zero, -0x3484($a0)
    ctx->pc = 0x16c2c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50CB7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50CB7Cu, _value); } while (0);
    // 0x16c2c4: 0x0  nop
    ctx->pc = 0x16c2c4u;
    // NOP
label_16c2c8:
    // 0x16c2c8: 0xc059202  jal         func_164808
    ctx->pc = 0x16C2C8u;
    SET_GPR_U32(ctx, 31, 0x16C2D0u);
    ctx->pc = 0x16C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2C8u;
    // 0x16c2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164808u, 0x16C2C8u, 0x16C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2D0u;
label_16c2d0:
    // 0x16c2d0: 0x26100b10  addiu       $s0, $s0, 0xB10
    ctx->pc = 0x16c2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
    // 0x16c2d4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x16c2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x16c2d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16C2D8u;
    {
        const bool branch_taken_0x16c2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2D8u;
        // 0x16c2dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2d8) {
            ctx->pc = 0x16C2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c2c8;
        }
    }
    ctx->pc = 0x16C2E0u;
    // 0x16c2e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16c2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c2e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16C2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2E8u;
        // 0x16c2ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C2F0u;
}
