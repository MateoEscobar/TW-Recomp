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

// Function: sub_00319048
// Address: 0x319048 - 0x3190e0
void sub_00319048_0x319048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319048_0x319048");
#endif

    switch (ctx->pc) {
        case 0x319098u: goto label_319098;
        default: break;
    }

    ctx->pc = 0x319048u;

    // 0x319048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x319048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31904c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31904cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x319050: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x319050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x319054: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x319054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x319058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x319058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31905c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x319060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319064: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x319064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x319068: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x319068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31906c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31906cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x319070: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x319070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x319074: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x319074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319078: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x319078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31907c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x31907cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319080: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x319080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x319084: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x319084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x319088: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x319088u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31908c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31908cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x319090: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x319090u;
    SET_GPR_U32(ctx, 31, 0x319098u);
    ctx->pc = 0x319094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319090u;
    // 0x319094: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x319090u, 0x319098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319098u;
label_319098:
    // 0x319098: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x319098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x31909c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x31909cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3190a0: 0x24633ce0  addiu       $v1, $v1, 0x3CE0
    ctx->pc = 0x3190a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15584));
    // 0x3190a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3190a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3190a8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3190a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3190ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3190acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3190b0: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x3190b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3190b4: 0xa6050038  sh          $a1, 0x38($s0)
    ctx->pc = 0x3190b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x3190b8: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x3190b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x3190bc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3190bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x3190c0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3190c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x3190c4: 0xa200003a  sb          $zero, 0x3A($s0)
    ctx->pc = 0x3190c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x3190c8: 0xa200003b  sb          $zero, 0x3B($s0)
    ctx->pc = 0x3190c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x3190cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3190ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3190d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3190d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3190d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3190D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3190D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190D4u;
        // 0x3190d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3190D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3190DCu;
    // 0x3190dc: 0x0  nop
    ctx->pc = 0x3190dcu;
    // NOP
    ctx->pc = 0x3190e0u;
}
