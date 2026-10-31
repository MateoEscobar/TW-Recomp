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

// Function: sub_00341B20
// Address: 0x341b20 - 0x341b80
void sub_00341B20_0x341b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341B20_0x341b20");
#endif

    switch (ctx->pc) {
        case 0x341b48u: goto label_341b48;
        default: break;
    }

    ctx->pc = 0x341b20u;

    // 0x341b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x341b24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x341b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x341b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x341b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x341b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b34: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x341B34u;
    {
        const bool branch_taken_0x341b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x341B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B34u;
        // 0x341b38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b34) {
            ctx->pc = 0x341B68u;
            goto label_341b68;
        }
    }
    ctx->pc = 0x341B3Cu;
    // 0x341b3c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x341b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x341b40: 0xc0d0224  jal         func_340890
    ctx->pc = 0x341B40u;
    SET_GPR_U32(ctx, 31, 0x341B48u);
    ctx->pc = 0x341B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341B40u;
    // 0x341b44: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340890u, 0x341B40u, 0x341B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341B48u;
label_341b48:
    // 0x341b48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x341b48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b4c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x341B4Cu;
    {
        const bool branch_taken_0x341b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341b4c) {
            ctx->pc = 0x341B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341B4Cu;
            // 0x341b50: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341B6Cu;
            goto label_341b6c;
        }
    }
    ctx->pc = 0x341B54u;
    // 0x341b54: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x341b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x341b58: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x341b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x341b5c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x341b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x341b60: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x341b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x341b64: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x341b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_341b68:
    // 0x341b68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x341b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_341b6c:
    // 0x341b6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341b74: 0x3e00008  jr          $ra
    ctx->pc = 0x341B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B74u;
        // 0x341b78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341B7Cu;
    // 0x341b7c: 0x0  nop
    ctx->pc = 0x341b7cu;
    // NOP
    ctx->pc = 0x341b80u;
}
