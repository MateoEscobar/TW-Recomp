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

// Function: sub_00419AC0
// Address: 0x419ac0 - 0x419b10
void sub_00419AC0_0x419ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419AC0_0x419ac0");
#endif

    switch (ctx->pc) {
        case 0x419ae8u: goto label_419ae8;
        default: break;
    }

    ctx->pc = 0x419ac0u;

    // 0x419ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x419ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x419ac4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x419ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x419ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x419ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x419acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x419accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419ad4: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x419ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x419ad8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x419AD8u;
    {
        const bool branch_taken_0x419ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x419ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419AD8u;
        // 0x419adc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419ad8) {
            ctx->pc = 0x419AF8u;
            goto label_419af8;
        }
    }
    ctx->pc = 0x419AE0u;
    // 0x419ae0: 0xc107444  jal         func_41D110
    ctx->pc = 0x419AE0u;
    SET_GPR_U32(ctx, 31, 0x419AE8u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x419AE0u, 0x419AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419AE8u;
label_419ae8:
    // 0x419ae8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x419AE8u;
    {
        const bool branch_taken_0x419ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419ae8) {
            ctx->pc = 0x419AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419AE8u;
            // 0x419aec: 0xae1156f4  sw          $s1, 0x56F4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 22260), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419AFCu;
            goto label_419afc;
        }
    }
    ctx->pc = 0x419AF0u;
    // 0x419af0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x419AF0u;
    {
        const bool branch_taken_0x419af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419AF0u;
        // 0x419af4: 0xae1156ec  sw          $s1, 0x56EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 22252), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419af0) {
            ctx->pc = 0x419AFCu;
            goto label_419afc;
        }
    }
    ctx->pc = 0x419AF8u;
label_419af8:
    // 0x419af8: 0xae1156f0  sw          $s1, 0x56F0($s0)
    ctx->pc = 0x419af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22256), GPR_U32(ctx, 17));
label_419afc:
    // 0x419afc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x419afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x419b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419b08: 0x3e00008  jr          $ra
    ctx->pc = 0x419B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B08u;
        // 0x419b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419B10u;
}
