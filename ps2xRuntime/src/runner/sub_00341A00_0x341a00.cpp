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

// Function: sub_00341A00
// Address: 0x341a00 - 0x341a68
void sub_00341A00_0x341a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341A00_0x341a00");
#endif

    switch (ctx->pc) {
        case 0x341a3cu: goto label_341a3c;
        case 0x341a54u: goto label_341a54;
        default: break;
    }

    ctx->pc = 0x341a00u;

    // 0x341a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x341a04: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x341a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x341a08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x341a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x341a0c: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x341a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x341a10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x341a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341a1c: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x341a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x341a20: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x341a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x341a24: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x341A24u;
    {
        const bool branch_taken_0x341a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x341A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A24u;
        // 0x341a28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a24) {
            ctx->pc = 0x341A40u;
            goto label_341a40;
        }
    }
    ctx->pc = 0x341A2Cu;
    // 0x341a2c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x341a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x341a30: 0x24060ced  addiu       $a2, $zero, 0xCED
    ctx->pc = 0x341a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3309));
    // 0x341a34: 0xc13c452  jal         func_4F1148
    ctx->pc = 0x341A34u;
    SET_GPR_U32(ctx, 31, 0x341A3Cu);
    ctx->pc = 0x341A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341A34u;
    // 0x341a38: 0x24a571d0  addiu       $a1, $a1, 0x71D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1148u, 0x341A34u, 0x341A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341A3Cu;
label_341a3c:
    // 0x341a3c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x341a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_341a40:
    // 0x341a40: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x341a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x341a44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x341A44u;
    {
        const bool branch_taken_0x341a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341a44) {
            ctx->pc = 0x341A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341A44u;
            // 0x341a48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341A58u;
            goto label_341a58;
        }
    }
    ctx->pc = 0x341A4Cu;
    // 0x341a4c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x341A4Cu;
    SET_GPR_U32(ctx, 31, 0x341A54u);
    ctx->pc = 0x341A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341A4Cu;
    // 0x341a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x341A4Cu, 0x341A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341A54u;
label_341a54:
    // 0x341a54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x341a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_341a58:
    // 0x341a58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341a60: 0x3e00008  jr          $ra
    ctx->pc = 0x341A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A60u;
        // 0x341a64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341A68u;
}
