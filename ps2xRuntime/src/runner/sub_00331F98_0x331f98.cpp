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

// Function: sub_00331F98
// Address: 0x331f98 - 0x332020
void sub_00331F98_0x331f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331F98_0x331f98");
#endif

    switch (ctx->pc) {
        case 0x331fc0u: goto label_331fc0;
        case 0x332004u: goto label_332004;
        default: break;
    }

    ctx->pc = 0x331f98u;

    // 0x331f98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x331f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x331f9c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x331f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x331fa0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x331fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x331fa4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x331fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x331fa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x331fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331fac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x331facu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331fb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x331fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x331fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331fb8: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x331FB8u;
    SET_GPR_U32(ctx, 31, 0x331FC0u);
    ctx->pc = 0x331FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331FB8u;
    // 0x331fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x331FB8u, 0x331FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331FC0u;
label_331fc0:
    // 0x331fc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331fc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x331fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331fc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x331fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x331fcc: 0x252300b  movn        $a2, $s2, $s2
    ctx->pc = 0x331fccu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
    // 0x331fd0: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x331fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x331fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x331fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331fd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x331fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331fdc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x331fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x331fe0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x331fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x331fe4: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x331fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
    // 0x331fe8: 0xae100010  sw          $s0, 0x10($s0)
    ctx->pc = 0x331fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 16));
    // 0x331fec: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x331fecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x331ff0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x331ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x331ff4: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x331ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x331ff8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x331ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x331ffc: 0xc0cc7b6  jal         func_331ED8
    ctx->pc = 0x331FFCu;
    SET_GPR_U32(ctx, 31, 0x332004u);
    ctx->pc = 0x332000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331FFCu;
    // 0x332000: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331ED8u, 0x331FFCu, 0x332004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332004u;
label_332004:
    // 0x332004: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x332004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332008: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x332008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33200c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33200cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332010: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x332010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332018: 0x3e00008  jr          $ra
    ctx->pc = 0x332018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332018u;
        // 0x33201c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332020u;
}
