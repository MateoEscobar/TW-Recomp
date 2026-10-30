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

// Function: sub_00215CA0
// Address: 0x215ca0 - 0x215ce8
void sub_00215CA0_0x215ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215CA0_0x215ca0");
#endif

    ctx->pc = 0x215ca0u;

    // 0x215ca0: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x215ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x215ca4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x215ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x215ca8: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x215ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x215cac: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x215cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
    // 0x215cb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x215cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215cb4: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x215cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x215cb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x215cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215cbc: 0x908314e0  lbu         $v1, 0x14E0($a0)
    ctx->pc = 0x215cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5344)));
    // 0x215cc0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x215CC0u;
    {
        const bool branch_taken_0x215cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CC0u;
        // 0x215cc4: 0x8c4514d8  lw          $a1, 0x14D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cc0) {
            ctx->pc = 0x215CE0u;
            goto label_215ce0;
        }
    }
    ctx->pc = 0x215CC8u;
    // 0x215cc8: 0x24a2ffc3  addiu       $v0, $a1, -0x3D
    ctx->pc = 0x215cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967235));
    // 0x215ccc: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x215cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x215cd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215CD0u;
    {
        const bool branch_taken_0x215cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CD0u;
        // 0x215cd4: 0x24a2ff9a  addiu       $v0, $a1, -0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cd0) {
            ctx->pc = 0x215CE0u;
            goto label_215ce0;
        }
    }
    ctx->pc = 0x215CD8u;
    // 0x215cd8: 0x2c420024  sltiu       $v0, $v0, 0x24
    ctx->pc = 0x215cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x215cdc: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x215cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_215ce0:
    // 0x215ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x215CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CE0u;
        // 0x215ce4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215CE8u;
}
