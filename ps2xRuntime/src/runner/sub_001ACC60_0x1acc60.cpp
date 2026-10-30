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

// Function: sub_001ACC60
// Address: 0x1acc60 - 0x1accf8
void sub_001ACC60_0x1acc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACC60_0x1acc60");
#endif

    switch (ctx->pc) {
        case 0x1acc88u: goto label_1acc88;
        case 0x1acce4u: goto label_1acce4;
        default: break;
    }

    ctx->pc = 0x1acc60u;

    // 0x1acc60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1acc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1acc64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc68: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1acc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1acc6c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1acc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1acc70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1acc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1acc74: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1acc74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1acc78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1acc78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1acc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1acc80: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1ACC80u;
    SET_GPR_U32(ctx, 31, 0x1ACC88u);
    ctx->pc = 0x1ACC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC80u;
    // 0x1acc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1ACC80u, 0x1ACC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC88u;
label_1acc88:
    // 0x1acc88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1acc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1acc8c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1acc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1acc90: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1acc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1acc94: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1acc94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1acc98: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1acc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1acc9c: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x1acc9cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1acca0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1acca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1acca4: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1acca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1acca8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1acca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1accac: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x1accacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1accb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1accb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1accb4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1accb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1accb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1accb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1accbc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1accbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1accc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1accc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1accc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1accc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1accc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1accc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acccc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1accccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1accd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1accd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1accd4: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1accd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1accd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1accd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1accdc: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1ACCDCu;
    SET_GPR_U32(ctx, 31, 0x1ACCE4u);
    ctx->pc = 0x1ACCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCDCu;
    // 0x1acce0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1ACCDCu, 0x1ACCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCE4u;
label_1acce4:
    // 0x1acce4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1acce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1acce8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1acce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1accec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1accecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1accf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCF0u;
        // 0x1accf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACCF8u;
}
