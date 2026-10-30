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

// Function: sub_001BC100
// Address: 0x1bc100 - 0x1bc168
void sub_001BC100_0x1bc100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC100_0x1bc100");
#endif

    switch (ctx->pc) {
        case 0x1bc154u: goto label_1bc154;
        default: break;
    }

    ctx->pc = 0x1bc100u;

    // 0x1bc100: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x1bc100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1bc104: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1bc104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1bc108: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1bc108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bc10c: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x1bc10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
    // 0x1bc110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc118: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bc118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bc11c: 0x8c6514d8  lw          $a1, 0x14D8($v1)
    ctx->pc = 0x1bc11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5336)));
    // 0x1bc120: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x1bc120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x1bc124: 0x2c420062  sltiu       $v0, $v0, 0x62
    ctx->pc = 0x1bc124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)98) ? 1 : 0);
    // 0x1bc128: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC128u;
    {
        const bool branch_taken_0x1bc128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC128u;
        // 0x1bc12c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc128) {
            ctx->pc = 0x1BC158u;
            goto label_1bc158;
        }
    }
    ctx->pc = 0x1BC130u;
    // 0x1bc130: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x1bc130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1bc134: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC134u;
    {
        const bool branch_taken_0x1bc134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC134u;
        // 0x1bc138: 0x24a2ffc4  addiu       $v0, $a1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc134) {
            ctx->pc = 0x1BC158u;
            goto label_1bc158;
        }
    }
    ctx->pc = 0x1BC13Cu;
    // 0x1bc13c: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x1bc13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1bc140: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC140u;
    {
        const bool branch_taken_0x1bc140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC140u;
        // 0x1bc144: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc140) {
            ctx->pc = 0x1BC15Cu;
            goto label_1bc15c;
        }
    }
    ctx->pc = 0x1BC148u;
    // 0x1bc148: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bc148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bc14c: 0xc109076  jal         func_4241D8
    ctx->pc = 0x1BC14Cu;
    SET_GPR_U32(ctx, 31, 0x1BC154u);
    ctx->pc = 0x1BC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC14Cu;
    // 0x1bc150: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x1BC14Cu, 0x1BC154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC154u;
label_1bc154:
    // 0x1bc154: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x1bc154u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bc158:
    // 0x1bc158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc15c:
    // 0x1bc15c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1bc15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc160: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC160u;
        // 0x1bc164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC168u;
}
