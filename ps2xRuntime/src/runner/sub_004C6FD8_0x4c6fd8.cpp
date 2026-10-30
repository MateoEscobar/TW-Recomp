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

// Function: sub_004C6FD8
// Address: 0x4c6fd8 - 0x4c7068
void sub_004C6FD8_0x4c6fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6FD8_0x4c6fd8");
#endif

    ctx->pc = 0x4c6fd8u;

    // 0x4c6fd8: 0x530c2  srl         $a2, $a1, 3
    ctx->pc = 0x4c6fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x4c6fdc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4c6fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4c6fe0: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x4c6fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4c6fe4: 0x63a40  sll         $a3, $a2, 9
    ctx->pc = 0x4c6fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x4c6fe8: 0x64180  sll         $t0, $a2, 6
    ctx->pc = 0x4c6fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x4c6fec: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x4c6fecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4c6ff0: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4c6ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4c6ff4: 0x738c2  srl         $a3, $a3, 3
    ctx->pc = 0x4c6ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
    // 0x4c6ff8: 0x840c2  srl         $t0, $t0, 3
    ctx->pc = 0x4c6ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
    // 0x4c6ffc: 0x948c2  srl         $t1, $t1, 3
    ctx->pc = 0x4c6ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
    // 0x4c7000: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4c7000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4c7004: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c7004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c7008: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x4c7008u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x4c700c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x4c700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x4c7010: 0x24a50203  addiu       $a1, $a1, 0x203
    ctx->pc = 0x4c7010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 515));
    // 0x4c7014: 0x24e70203  addiu       $a3, $a3, 0x203
    ctx->pc = 0x4c7014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 515));
    // 0x4c7018: 0x25080203  addiu       $t0, $t0, 0x203
    ctx->pc = 0x4c7018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 515));
    // 0x4c701c: 0x25290403  addiu       $t1, $t1, 0x403
    ctx->pc = 0x4c701cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1027));
    // 0x4c7020: 0x24630203  addiu       $v1, $v1, 0x203
    ctx->pc = 0x4c7020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 515));
    // 0x4c7024: 0x24c60203  addiu       $a2, $a2, 0x203
    ctx->pc = 0x4c7024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 515));
    // 0x4c7028: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c7028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c702c: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4c702cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4c7030: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c7030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c7034: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4c7034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4c7038: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c7038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c703c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4c703cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4c7040: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x4c7040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x4c7044: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4c7044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x4c7048: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x4c7048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x4c704c: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x4c704cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x4c7050: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x4c7050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x4c7054: 0xac89001c  sw          $t1, 0x1C($a0)
    ctx->pc = 0x4c7054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 9));
    // 0x4c7058: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4c7058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4c705c: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x4c705cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x4c7060: 0x3e00008  jr          $ra
    ctx->pc = 0x4C7060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C7060u;
        // 0x4c7064: 0xac890018  sw          $t1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C7060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C7068u;
}
