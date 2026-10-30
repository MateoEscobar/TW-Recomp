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

// Function: sub_004DB928
// Address: 0x4db928 - 0x4db988
void sub_004DB928_0x4db928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB928_0x4db928");
#endif

    switch (ctx->pc) {
        case 0x4db948u: goto label_4db948;
        case 0x4db950u: goto label_4db950;
        default: break;
    }

    ctx->pc = 0x4db928u;

    // 0x4db928: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4db928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4db92c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4db92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4db930: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4db930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4db934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db938: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4db938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4db93c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4db93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db944: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4db944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4db948:
    // 0x4db948: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4DB948u;
    SET_GPR_U32(ctx, 31, 0x4DB950u);
    ctx->pc = 0x4DB94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB948u;
    // 0x4db94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DB948u, 0x4DB950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB950u;
label_4db950:
    // 0x4db950: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DB950u;
    {
        const bool branch_taken_0x4db950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB950u;
        // 0x4db954: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db950) {
            ctx->pc = 0x4DB964u;
            goto label_4db964;
        }
    }
    ctx->pc = 0x4DB958u;
    // 0x4db958: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4db958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4db95c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DB95Cu;
    {
        const bool branch_taken_0x4db95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB95Cu;
        // 0x4db960: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db95c) {
            ctx->pc = 0x4DB970u;
            goto label_4db970;
        }
    }
    ctx->pc = 0x4DB964u;
label_4db964:
    // 0x4db964: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x4db964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4db968: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4DB968u;
    {
        const bool branch_taken_0x4db968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB968u;
        // 0x4db96c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db968) {
            ctx->pc = 0x4DB948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4db948;
        }
    }
    ctx->pc = 0x4DB970u;
label_4db970:
    // 0x4db970: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4db970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4db974: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4db974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4db978: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4db978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db97c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db980: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB980u;
        // 0x4db984: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB988u;
}
