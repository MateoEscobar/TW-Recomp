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

// Function: sub_004E5B08
// Address: 0x4e5b08 - 0x4e5b78
void sub_004E5B08_0x4e5b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5B08_0x4e5b08");
#endif

    switch (ctx->pc) {
        case 0x4e5b3cu: goto label_4e5b3c;
        case 0x4e5b50u: goto label_4e5b50;
        case 0x4e5b64u: goto label_4e5b64;
        default: break;
    }

    ctx->pc = 0x4e5b08u;

    // 0x4e5b08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e5b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e5b0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e5b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e5b10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e5b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5b14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e5b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e5b18: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x4e5b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x4e5b1c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e5b1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e5b20: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4e5b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4e5b24: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E5B24u;
    {
        const bool branch_taken_0x4e5b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5B24u;
        // 0x4e5b28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5b24) {
            ctx->pc = 0x4E5B58u;
            goto label_4e5b58;
        }
    }
    ctx->pc = 0x4E5B2Cu;
    // 0x4e5b2c: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x4e5b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4e5b30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e5b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5b34: 0xc13966c  jal         func_4E59B0
    ctx->pc = 0x4E5B34u;
    SET_GPR_U32(ctx, 31, 0x4E5B3Cu);
    ctx->pc = 0x4E5B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5B34u;
    // 0x4e5b38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E59B0u, 0x4E5B34u, 0x4E5B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5B3Cu;
label_4e5b3c:
    // 0x4e5b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4e5b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e5b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5b48: 0xc1396ae  jal         func_4E5AB8
    ctx->pc = 0x4E5B48u;
    SET_GPR_U32(ctx, 31, 0x4E5B50u);
    ctx->pc = 0x4E5B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5B48u;
    // 0x4e5b4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5AB8u, 0x4E5B48u, 0x4E5B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5B50u;
label_4e5b50:
    // 0x4e5b50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4E5B50u;
    {
        const bool branch_taken_0x4e5b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5B50u;
        // 0x4e5b54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5b50) {
            ctx->pc = 0x4E5B68u;
            goto label_4e5b68;
        }
    }
    ctx->pc = 0x4E5B58u;
label_4e5b58:
    // 0x4e5b58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4e5b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5b5c: 0xc13966c  jal         func_4E59B0
    ctx->pc = 0x4E5B5Cu;
    SET_GPR_U32(ctx, 31, 0x4E5B64u);
    ctx->pc = 0x4E5B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5B5Cu;
    // 0x4e5b60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E59B0u, 0x4E5B5Cu, 0x4E5B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5B64u;
label_4e5b64:
    // 0x4e5b64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e5b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e5b68:
    // 0x4e5b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e5b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5b70: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5B70u;
        // 0x4e5b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5B78u;
}
