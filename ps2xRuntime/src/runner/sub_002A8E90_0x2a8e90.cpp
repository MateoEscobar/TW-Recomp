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

// Function: sub_002A8E90
// Address: 0x2a8e90 - 0x2a8ef0
void sub_002A8E90_0x2a8e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8E90_0x2a8e90");
#endif

    switch (ctx->pc) {
        case 0x2a8eb0u: goto label_2a8eb0;
        case 0x2a8ec8u: goto label_2a8ec8;
        case 0x2a8ed4u: goto label_2a8ed4;
        default: break;
    }

    ctx->pc = 0x2a8e90u;

    // 0x2a8e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a8e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a8e94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a8e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a8e98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2a8e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2a8e9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ea0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a8ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a8ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8ea8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A8EA8u;
    SET_GPR_U32(ctx, 31, 0x2A8EB0u);
    ctx->pc = 0x2A8EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8EA8u;
    // 0x2a8eac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A8EA8u, 0x2A8EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8EB0u;
label_2a8eb0:
    // 0x2a8eb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a8eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8eb4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8EB4u;
    {
        const bool branch_taken_0x2a8eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8EB4u;
        // 0x2a8eb8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8eb4) {
            ctx->pc = 0x2A8EC8u;
            goto label_2a8ec8;
        }
    }
    ctx->pc = 0x2A8EBCu;
    // 0x2a8ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ec0: 0xc0aa3bc  jal         func_2A8EF0
    ctx->pc = 0x2A8EC0u;
    SET_GPR_U32(ctx, 31, 0x2A8EC8u);
    ctx->pc = 0x2A8EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8EC0u;
    // 0x2a8ec4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8EF0u, 0x2A8EC0u, 0x2A8EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8EC8u;
label_2a8ec8:
    // 0x2a8ec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a8ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ecc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A8ECCu;
    SET_GPR_U32(ctx, 31, 0x2A8ED4u);
    ctx->pc = 0x2A8ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8ECCu;
    // 0x2a8ed0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A8ECCu, 0x2A8ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8ED4u;
label_2a8ed4:
    // 0x2a8ed4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a8ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8ed8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a8ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8edc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2a8edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8EE4u;
        // 0x2a8ee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8EECu;
    // 0x2a8eec: 0x0  nop
    ctx->pc = 0x2a8eecu;
    // NOP
    ctx->pc = 0x2a8ef0u;
}
