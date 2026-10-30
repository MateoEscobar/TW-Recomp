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

// Function: sub_001E9130
// Address: 0x1e9130 - 0x1e91e0
void sub_001E9130_0x1e9130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9130_0x1e9130");
#endif

    switch (ctx->pc) {
        case 0x1e9168u: goto label_1e9168;
        case 0x1e9198u: goto label_1e9198;
        case 0x1e91a4u: goto label_1e91a4;
        case 0x1e91bcu: goto label_1e91bc;
        default: break;
    }

    ctx->pc = 0x1e9130u;

    // 0x1e9130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e9130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e9134: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e9134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e9138: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e9138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e913c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e913cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9140: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e9140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e9144: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e9144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9148: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e914c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e9150: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e9150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9154: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1e9154u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e9158: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x1e9158u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
    // 0x1e915c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1e915cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9160: 0xc05e602  jal         func_179808
    ctx->pc = 0x1E9160u;
    SET_GPR_U32(ctx, 31, 0x1E9168u);
    ctx->pc = 0x1E9164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9160u;
    // 0x1e9164: 0x7e0200f0  sq          $v0, 0xF0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1E9160u, 0x1E9168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9168u;
label_1e9168:
    // 0x1e9168: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e9168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1e916c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1e916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9170: 0x8c47d310  lw          $a3, -0x2CF0($v0)
    ctx->pc = 0x1e9170u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1e9174: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1e9174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e9178: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e9178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e917c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e917cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9180: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e9180u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9184: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1e9184u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9188: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1e9188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1e918c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e918cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9190: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1E9190u;
    SET_GPR_U32(ctx, 31, 0x1E9198u);
    ctx->pc = 0x1E9194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9190u;
    // 0x1e9194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1E9190u, 0x1E9198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9198u;
label_1e9198:
    // 0x1e9198: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e919c: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1E919Cu;
    SET_GPR_U32(ctx, 31, 0x1E91A4u);
    ctx->pc = 0x1E91A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E919Cu;
    // 0x1e91a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1E919Cu, 0x1E91A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91A4u;
label_1e91a4:
    // 0x1e91a4: 0x7a0200f0  lq          $v0, 0xF0($s0)
    ctx->pc = 0x1e91a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1e91a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e91a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91ac: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1e91acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e91b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e91b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91b4: 0xc073464  jal         func_1CD190
    ctx->pc = 0x1E91B4u;
    SET_GPR_U32(ctx, 31, 0x1E91BCu);
    ctx->pc = 0x1E91B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E91B4u;
    // 0x1e91b8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1E91B4u, 0x1E91BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91BCu;
label_1e91bc:
    // 0x1e91bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e91c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e91c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e91c4: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x1e91c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x1e91c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e91c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e91cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e91ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e91d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e91d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e91d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E91D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E91D4u;
        // 0x1e91d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E91D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E91DCu;
    // 0x1e91dc: 0x0  nop
    ctx->pc = 0x1e91dcu;
    // NOP
    ctx->pc = 0x1e91e0u;
}
