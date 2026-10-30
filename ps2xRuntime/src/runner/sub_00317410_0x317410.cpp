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

// Function: sub_00317410
// Address: 0x317410 - 0x3174e8
void sub_00317410_0x317410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317410_0x317410");
#endif

    switch (ctx->pc) {
        case 0x317478u: goto label_317478;
        default: break;
    }

    ctx->pc = 0x317410u;

    // 0x317410: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x317410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x317414: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x317414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x317418: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x317418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31741c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31741cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x317420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x317420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317424: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x317424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x317428: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x317428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31742c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x317430: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x317430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x317434: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x317434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x317438: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x317438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31743c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x31743cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x317444: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x317444u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317448: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x317448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31744c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x31744cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317450: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x317450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x317454: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x317454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317458: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x317458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31745c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x31745cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317460: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x317460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x317464: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x317464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x317468: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x317468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31746c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31746cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x317470: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x317470u;
    SET_GPR_U32(ctx, 31, 0x317478u);
    ctx->pc = 0x317474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317470u;
    // 0x317474: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x317470u, 0x317478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317478u;
label_317478:
    // 0x317478: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x317478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31747c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x31747cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x317480: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x317480u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x317484: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x317484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317488: 0x24633bc0  addiu       $v1, $v1, 0x3BC0
    ctx->pc = 0x317488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15296));
    // 0x31748c: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x31748cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
    // 0x317490: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x317490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
    // 0x317494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x317494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317498: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x317498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x31749c: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x31749cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
    // 0x3174a0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3174a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x3174a4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3174a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3174a8: 0xa6040040  sh          $a0, 0x40($s0)
    ctx->pc = 0x3174a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x3174ac: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3174acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x3174b0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x3174b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x3174b4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x3174b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x3174b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3174b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3174bc: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x3174bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x3174c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3174c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3174c4: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x3174c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    // 0x3174c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3174c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3174cc: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x3174ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x3174d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3174d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3174d4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3174d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3174d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3174d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3174dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3174DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3174E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3174DCu;
        // 0x3174e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3174DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3174E4u;
    // 0x3174e4: 0x0  nop
    ctx->pc = 0x3174e4u;
    // NOP
    ctx->pc = 0x3174e8u;
}
