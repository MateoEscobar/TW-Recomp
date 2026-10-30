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

// Function: sub_002CE808
// Address: 0x2ce808 - 0x2ce870
void sub_002CE808_0x2ce808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE808_0x2ce808");
#endif

    ctx->pc = 0x2ce808u;

    // 0x2ce808: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ce808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ce80c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ce80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ce810: 0x24631650  addiu       $v1, $v1, 0x1650
    ctx->pc = 0x2ce810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5712));
    // 0x2ce814: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ce814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ce818: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2ce818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2ce81c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x2ce81cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x2ce820: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2ce820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2ce824: 0x250816c0  addiu       $t0, $t0, 0x16C0
    ctx->pc = 0x2ce824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5824));
    // 0x2ce828: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2ce828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2ce82c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ce82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce830: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2ce830u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce834: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2ce834u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce838: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2ce838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ce83c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2ce83cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2ce840: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x2ce840u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5116C0u));
    // 0x2ce844: 0xe48c0030  swc1        $f12, 0x30($a0)
    ctx->pc = 0x2ce844u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2ce848: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x2ce848u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x2ce84c: 0xa0870049  sb          $a3, 0x49($a0)
    ctx->pc = 0x2ce84cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 7));
    // 0x2ce850: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2ce850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2ce854: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2ce854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2ce858: 0xa480003c  sh          $zero, 0x3C($a0)
    ctx->pc = 0x2ce858u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce85c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2ce85cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2ce860: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2ce860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2ce864: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE864u;
        // 0x2ce868: 0xa0800048  sb          $zero, 0x48($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE86Cu;
    // 0x2ce86c: 0x0  nop
    ctx->pc = 0x2ce86cu;
    // NOP
    ctx->pc = 0x2ce870u;
}
