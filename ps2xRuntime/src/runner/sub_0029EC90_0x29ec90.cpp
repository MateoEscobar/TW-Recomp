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

// Function: sub_0029EC90
// Address: 0x29ec90 - 0x29ecd8
void sub_0029EC90_0x29ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EC90_0x29ec90");
#endif

    ctx->pc = 0x29ec90u;

    // 0x29ec90: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x29ec90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29ec94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EC94u;
    {
        const bool branch_taken_0x29ec94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC94u;
        // 0x29ec98: 0x851823  subu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec94) {
            ctx->pc = 0x29ECB4u;
            goto label_29ecb4;
        }
    }
    ctx->pc = 0x29EC9Cu;
    // 0x29ec9c: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x29ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x29eca0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x29eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29eca4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29eca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29eca8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x29eca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29ecac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29ECACu;
    {
        const bool branch_taken_0x29ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECACu;
        // 0x29ecb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecac) {
            ctx->pc = 0x29ECCCu;
            goto label_29eccc;
        }
    }
    ctx->pc = 0x29ECB4u;
label_29ecb4:
    // 0x29ecb4: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x29ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x29ecb8: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x29ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x29ecbc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x29ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29ecc0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x29ecc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ecc4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x29ecc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29ecc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29eccc:
    // 0x29eccc: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x29ecccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x29ecd0: 0x3e00008  jr          $ra
    ctx->pc = 0x29ECD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECD0u;
        // 0x29ecd4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ECD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ECD8u;
}
