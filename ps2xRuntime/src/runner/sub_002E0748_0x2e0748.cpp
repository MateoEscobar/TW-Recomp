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

// Function: sub_002E0748
// Address: 0x2e0748 - 0x2e07a8
void sub_002E0748_0x2e0748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0748_0x2e0748");
#endif

    ctx->pc = 0x2e0748u;

    // 0x2e0748: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2e0748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2e074c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e074cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e0750: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x2e0750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2e0754: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e0754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e0758: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x2e0758u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x2e075c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e075cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e0760: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x2e0760u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x2e0764: 0x24631bf0  addiu       $v1, $v1, 0x1BF0
    ctx->pc = 0x2e0764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7152));
    // 0x2e0768: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e0768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e076c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2e076cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2e0770: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e0770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0774: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2e0774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2e0778: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2e0778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2e077c: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x2e077cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x2e0780: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x2e0780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x2e0784: 0xac89001c  sw          $t1, 0x1C($a0)
    ctx->pc = 0x2e0784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 9));
    // 0x2e0788: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x2e0788u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2e078c: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x2e078cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x2e0790: 0xac8b002c  sw          $t3, 0x2C($a0)
    ctx->pc = 0x2e0790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 11));
    // 0x2e0794: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2e0794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0798: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2e0798u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e079c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E079Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E079Cu;
        // 0x2e07a0: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E079Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E07A4u;
    // 0x2e07a4: 0x0  nop
    ctx->pc = 0x2e07a4u;
    // NOP
    ctx->pc = 0x2e07a8u;
}
