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

// Function: sub_003A7F40
// Address: 0x3a7f40 - 0x3a8010
void sub_003A7F40_0x3a7f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7F40_0x3a7f40");
#endif

    switch (ctx->pc) {
        case 0x3a7f98u: goto label_3a7f98;
        case 0x3a7fc8u: goto label_3a7fc8;
        case 0x3a7fd4u: goto label_3a7fd4;
        case 0x3a7fe0u: goto label_3a7fe0;
        case 0x3a7fecu: goto label_3a7fec;
        default: break;
    }

    ctx->pc = 0x3a7f40u;

    // 0x3a7f40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a7f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3a7f44: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3a7f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3a7f48: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3a7f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3a7f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7f50: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3a7f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3a7f54: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3a7f54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a7f58: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3a7f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3a7f5c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3a7f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a7f60: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a7f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3a7f64: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3a7f64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a7f68: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x3a7f68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a7f6c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a7f6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a7f70: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3a7f70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a7f74: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x3a7f74u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a7f78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3a7f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7f7c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3a7f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3a7f80: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3a7f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x3a7f84: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3a7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3a7f88: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3a7f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x3a7f8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a7f90: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x3a7f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x3a7f94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a7f98:
    // 0x3a7f98: 0x0  nop
    ctx->pc = 0x3a7f98u;
    // NOP
    // 0x3a7f9c: 0x0  nop
    ctx->pc = 0x3a7f9cu;
    // NOP
    // 0x3a7fa0: 0x0  nop
    ctx->pc = 0x3a7fa0u;
    // NOP
    // 0x3a7fa4: 0x0  nop
    ctx->pc = 0x3a7fa4u;
    // NOP
    // 0x3a7fa8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A7FA8u;
    {
        const bool branch_taken_0x3a7fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FA8u;
        // 0x3a7fac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fa8) {
            ctx->pc = 0x3A7F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7f98;
        }
    }
    ctx->pc = 0x3A7FB0u;
    // 0x3a7fb0: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x3a7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3a7fb4: 0xae100404  sw          $s0, 0x404($s0)
    ctx->pc = 0x3a7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 16));
    // 0x3a7fb8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3a7fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7fbc: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x3a7fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x3a7fc0: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A7FC0u;
    SET_GPR_U32(ctx, 31, 0x3A7FC8u);
    ctx->pc = 0x3A7FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7FC0u;
    // 0x3a7fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A7FC0u, 0x3A7FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7FC8u;
label_3a7fc8:
    // 0x3a7fc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a7fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7fcc: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A7FCCu;
    SET_GPR_U32(ctx, 31, 0x3A7FD4u);
    ctx->pc = 0x3A7FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7FCCu;
    // 0x3a7fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A7FCCu, 0x3A7FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7FD4u;
label_3a7fd4:
    // 0x3a7fd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a7fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7fd8: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A7FD8u;
    SET_GPR_U32(ctx, 31, 0x3A7FE0u);
    ctx->pc = 0x3A7FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7FD8u;
    // 0x3a7fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A7FD8u, 0x3A7FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7FE0u;
label_3a7fe0:
    // 0x3a7fe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a7fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7fe4: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A7FE4u;
    SET_GPR_U32(ctx, 31, 0x3A7FECu);
    ctx->pc = 0x3A7FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7FE4u;
    // 0x3a7fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A7FE4u, 0x3A7FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7FECu;
label_3a7fec:
    // 0x3a7fec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a7fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7ff0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3a7ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a7ff4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3a7ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a7ff8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3a7ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a7ffc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3a7ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a8000: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a8000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a8004: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8004u;
        // 0x3a8008: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A800Cu;
    // 0x3a800c: 0x0  nop
    ctx->pc = 0x3a800cu;
    // NOP
    ctx->pc = 0x3a8010u;
}
