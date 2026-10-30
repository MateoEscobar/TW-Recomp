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

// Function: sub_00332F80
// Address: 0x332f80 - 0x333010
void sub_00332F80_0x332f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332F80_0x332f80");
#endif

    switch (ctx->pc) {
        case 0x332fb8u: goto label_332fb8;
        case 0x332fd0u: goto label_332fd0;
        case 0x332ff0u: goto label_332ff0;
        default: break;
    }

    ctx->pc = 0x332f80u;

    // 0x332f80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x332f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x332f84: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x332f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x332f88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x332f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x332f8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x332f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f90: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x332f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x332f94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x332f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f98: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x332f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x332f9c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x332f9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fa0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x332fa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fa4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x332fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x332fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332fac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x332facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fb0: 0xc0ccb26  jal         func_332C98
    ctx->pc = 0x332FB0u;
    SET_GPR_U32(ctx, 31, 0x332FB8u);
    ctx->pc = 0x332FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332FB0u;
    // 0x332fb4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C98u, 0x332FB0u, 0x332FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332FB8u;
label_332fb8:
    // 0x332fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x332fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fc0: 0xa6500030  sh          $s0, 0x30($s2)
    ctx->pc = 0x332fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 16));
    // 0x332fc4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x332fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x332fc8: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x332FC8u;
    SET_GPR_U32(ctx, 31, 0x332FD0u);
    ctx->pc = 0x332FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332FC8u;
    // 0x332fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x332FC8u, 0x332FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332FD0u;
label_332fd0:
    // 0x332fd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fd4: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x332fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x332fd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x332fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fdc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x332fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fe0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x332fe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x332fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fe8: 0xc0ccaec  jal         func_332BB0
    ctx->pc = 0x332FE8u;
    SET_GPR_U32(ctx, 31, 0x332FF0u);
    ctx->pc = 0x332FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332FE8u;
    // 0x332fec: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332BB0u, 0x332FE8u, 0x332FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332FF0u;
label_332ff0:
    // 0x332ff0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x332ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x332ff4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x332ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332ff8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x332ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332ffc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x332ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333000: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x333000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333008: 0x3e00008  jr          $ra
    ctx->pc = 0x333008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333008u;
        // 0x33300c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333010u;
}
