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

// Function: sub_001CA898
// Address: 0x1ca898 - 0x1ca908
void sub_001CA898_0x1ca898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA898_0x1ca898");
#endif

    switch (ctx->pc) {
        case 0x1ca8b0u: goto label_1ca8b0;
        case 0x1ca8f0u: goto label_1ca8f0;
        default: break;
    }

    ctx->pc = 0x1ca898u;

    // 0x1ca898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca89c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ca89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ca8a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca8a8: 0xc0705aa  jal         func_1C16A8
    ctx->pc = 0x1CA8A8u;
    SET_GPR_U32(ctx, 31, 0x1CA8B0u);
    ctx->pc = 0x1CA8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8A8u;
    // 0x1ca8ac: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1CA8A8u, 0x1CA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8B0u;
label_1ca8b0:
    // 0x1ca8b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ca8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ca8b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ca8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ca8b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ca8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca8bc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1ca8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1ca8c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ca8c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ca8c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ca8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca8d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca8d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ca8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8d8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1ca8d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ca8dc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1ca8dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ca8e0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1ca8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ca8e4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1ca8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1ca8e8: 0xc072a42  jal         func_1CA908
    ctx->pc = 0x1CA8E8u;
    SET_GPR_U32(ctx, 31, 0x1CA8F0u);
    ctx->pc = 0x1CA8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA8E8u;
    // 0x1ca8ec: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA908u, 0x1CA8E8u, 0x1CA8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8F0u;
label_1ca8f0:
    // 0x1ca8f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ca8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca8f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ca8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8FCu;
        // 0x1ca900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA904u;
    // 0x1ca904: 0x0  nop
    ctx->pc = 0x1ca904u;
    // NOP
    ctx->pc = 0x1ca908u;
}
