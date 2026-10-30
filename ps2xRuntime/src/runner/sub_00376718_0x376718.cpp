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

// Function: sub_00376718
// Address: 0x376718 - 0x3767f8
void sub_00376718_0x376718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376718_0x376718");
#endif

    switch (ctx->pc) {
        case 0x376748u: goto label_376748;
        case 0x376750u: goto label_376750;
        case 0x376764u: goto label_376764;
        case 0x376778u: goto label_376778;
        case 0x37678cu: goto label_37678c;
        case 0x3767a0u: goto label_3767a0;
        case 0x3767b4u: goto label_3767b4;
        case 0x3767d0u: goto label_3767d0;
        default: break;
    }

    ctx->pc = 0x376718u;

    // 0x376718: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x376718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x37671c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37671cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376720: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x376720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x376724: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376728: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x376728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x37672c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x37672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x376730: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x376730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x376734: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x376734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x376738: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x376738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x37673c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376740: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376740u;
    SET_GPR_U32(ctx, 31, 0x376748u);
    ctx->pc = 0x376744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376740u;
    // 0x376744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376740u, 0x376748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376748u;
label_376748:
    // 0x376748: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376748u;
    SET_GPR_U32(ctx, 31, 0x376750u);
    ctx->pc = 0x37674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376748u;
    // 0x37674c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376748u, 0x376750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376750u;
label_376750:
    // 0x376750: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x376750u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376758: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x376758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37675c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37675Cu;
    SET_GPR_U32(ctx, 31, 0x376764u);
    ctx->pc = 0x376760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37675Cu;
    // 0x376760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37675Cu, 0x376764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376764u;
label_376764:
    // 0x376764: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x376764u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x376768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37676c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37676cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x376770: 0xc1024c6  jal         func_409318
    ctx->pc = 0x376770u;
    SET_GPR_U32(ctx, 31, 0x376778u);
    ctx->pc = 0x376774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376770u;
    // 0x376774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x376770u, 0x376778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376778u;
label_376778:
    // 0x376778: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x376778u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37677c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37677cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376780: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x376780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376784: 0xc1024c6  jal         func_409318
    ctx->pc = 0x376784u;
    SET_GPR_U32(ctx, 31, 0x37678Cu);
    ctx->pc = 0x376788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376784u;
    // 0x376788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x376784u, 0x37678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37678Cu;
label_37678c:
    // 0x37678c: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x37678cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x376790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376794: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x376794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x376798: 0xc102488  jal         func_409220
    ctx->pc = 0x376798u;
    SET_GPR_U32(ctx, 31, 0x3767A0u);
    ctx->pc = 0x37679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376798u;
    // 0x37679c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376798u, 0x3767A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3767A0u;
label_3767a0:
    // 0x3767a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3767a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3767a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3767a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3767a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3767a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3767ac: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3767ACu;
    SET_GPR_U32(ctx, 31, 0x3767B4u);
    ctx->pc = 0x3767B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3767ACu;
    // 0x3767b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3767ACu, 0x3767B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3767B4u;
label_3767b4:
    // 0x3767b4: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x3767b4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3767b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3767b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3767bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3767bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3767c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3767c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3767c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3767c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3767c8: 0xc0c5bba  jal         func_316EE8
    ctx->pc = 0x3767C8u;
    SET_GPR_U32(ctx, 31, 0x3767D0u);
    ctx->pc = 0x3767CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3767C8u;
    // 0x3767cc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316EE8u, 0x3767C8u, 0x3767D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3767D0u;
label_3767d0:
    // 0x3767d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3767d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3767d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3767d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3767d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3767d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3767dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3767dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3767e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3767e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3767e4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3767e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3767e8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3767e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3767ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3767ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3767f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3767F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3767F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767F0u;
        // 0x3767f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3767F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3767F8u;
}
