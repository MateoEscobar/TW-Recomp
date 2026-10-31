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

// Function: sub_003248F0
// Address: 0x3248f0 - 0x324958
void sub_003248F0_0x3248f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003248F0_0x3248f0");
#endif

    switch (ctx->pc) {
        case 0x324924u: goto label_324924;
        default: break;
    }

    ctx->pc = 0x3248f0u;

    // 0x3248f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3248f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3248f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3248f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3248f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3248f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3248fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3248fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324904: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x324904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x324908: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x324908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x32490c: 0x513023  subu        $a2, $v0, $s1
    ctx->pc = 0x32490cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x324910: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x324910u;
    {
        const bool branch_taken_0x324910 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x324914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324910u;
        // 0x324914: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324910) {
            ctx->pc = 0x32493Cu;
            goto label_32493c;
        }
    }
    ctx->pc = 0x324918u;
    // 0x324918: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x324918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32491c: 0xc0c8e50  jal         func_323940
    ctx->pc = 0x32491Cu;
    SET_GPR_U32(ctx, 31, 0x324924u);
    ctx->pc = 0x324920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32491Cu;
    // 0x324920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323940u, 0x32491Cu, 0x324924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324924u;
label_324924:
    // 0x324924: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x324924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x324928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32492c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x32492cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x324930: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x324930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x324934: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x324934u;
    {
        const bool branch_taken_0x324934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324934u;
        // 0x324938: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324934) {
            ctx->pc = 0x324940u;
            goto label_324940;
        }
    }
    ctx->pc = 0x32493Cu;
label_32493c:
    // 0x32493c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32493cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324940:
    // 0x324940: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x324940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32494c: 0x3e00008  jr          $ra
    ctx->pc = 0x32494Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32494Cu;
        // 0x324950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32494Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324954u;
    // 0x324954: 0x0  nop
    ctx->pc = 0x324954u;
    // NOP
    ctx->pc = 0x324958u;
}
