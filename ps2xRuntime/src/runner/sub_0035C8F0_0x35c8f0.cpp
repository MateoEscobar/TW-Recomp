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

// Function: sub_0035C8F0
// Address: 0x35c8f0 - 0x35ca00
void sub_0035C8F0_0x35c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C8F0_0x35c8f0");
#endif

    switch (ctx->pc) {
        case 0x35c928u: goto label_35c928;
        case 0x35c930u: goto label_35c930;
        case 0x35c944u: goto label_35c944;
        case 0x35c94cu: goto label_35c94c;
        case 0x35c960u: goto label_35c960;
        case 0x35c974u: goto label_35c974;
        case 0x35c988u: goto label_35c988;
        case 0x35c99cu: goto label_35c99c;
        case 0x35c9b0u: goto label_35c9b0;
        case 0x35c9d0u: goto label_35c9d0;
        default: break;
    }

    ctx->pc = 0x35c8f0u;

    // 0x35c8f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35c8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35c8f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c8f8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x35c8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x35c8fc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x35c8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x35c900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c904: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35c904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c908: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x35c908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x35c90c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35c90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x35c910: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x35c910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x35c914: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x35c914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x35c918: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x35c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x35c91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c920: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C920u;
    SET_GPR_U32(ctx, 31, 0x35C928u);
    ctx->pc = 0x35C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C920u;
    // 0x35c924: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C920u, 0x35C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C928u;
label_35c928:
    // 0x35c928: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C928u;
    SET_GPR_U32(ctx, 31, 0x35C930u);
    ctx->pc = 0x35C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C928u;
    // 0x35c92c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C928u, 0x35C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C930u;
label_35c930:
    // 0x35c930: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35c930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c934: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x35c934u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c938: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c93c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C93Cu;
    SET_GPR_U32(ctx, 31, 0x35C944u);
    ctx->pc = 0x35C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C93Cu;
    // 0x35c940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C93Cu, 0x35C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C944u;
label_35c944:
    // 0x35c944: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C944u;
    SET_GPR_U32(ctx, 31, 0x35C94Cu);
    ctx->pc = 0x35C948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C944u;
    // 0x35c948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C944u, 0x35C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C94Cu;
label_35c94c:
    // 0x35c94c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35c94cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c954: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35c954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c958: 0xc102488  jal         func_409220
    ctx->pc = 0x35C958u;
    SET_GPR_U32(ctx, 31, 0x35C960u);
    ctx->pc = 0x35C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C958u;
    // 0x35c95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35C958u, 0x35C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C960u;
label_35c960:
    // 0x35c960: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35c960u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c968: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35c968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35c96c: 0xc102488  jal         func_409220
    ctx->pc = 0x35C96Cu;
    SET_GPR_U32(ctx, 31, 0x35C974u);
    ctx->pc = 0x35C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C96Cu;
    // 0x35c970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35C96Cu, 0x35C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C974u;
label_35c974:
    // 0x35c974: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35c974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c97c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35c97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35c980: 0xc102488  jal         func_409220
    ctx->pc = 0x35C980u;
    SET_GPR_U32(ctx, 31, 0x35C988u);
    ctx->pc = 0x35C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C980u;
    // 0x35c984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35C980u, 0x35C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C988u;
label_35c988:
    // 0x35c988: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c990: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35c990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35c994: 0xc102488  jal         func_409220
    ctx->pc = 0x35C994u;
    SET_GPR_U32(ctx, 31, 0x35C99Cu);
    ctx->pc = 0x35C998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C994u;
    // 0x35c998: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35C994u, 0x35C99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C99Cu;
label_35c99c:
    // 0x35c99c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35c99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35c9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35c9a8: 0xc102488  jal         func_409220
    ctx->pc = 0x35C9A8u;
    SET_GPR_U32(ctx, 31, 0x35C9B0u);
    ctx->pc = 0x35C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C9A8u;
    // 0x35c9ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35C9A8u, 0x35C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C9B0u;
label_35c9b0:
    // 0x35c9b0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x35c9b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x35c9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x35c9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x35c9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x35c9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9c4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x35c9c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9c8: 0xc08e2f6  jal         func_238BD8
    ctx->pc = 0x35C9C8u;
    SET_GPR_U32(ctx, 31, 0x35C9D0u);
    ctx->pc = 0x35C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C9C8u;
    // 0x35c9cc: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238BD8u, 0x35C9C8u, 0x35C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C9D0u;
label_35c9d0:
    // 0x35c9d0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x35c9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35c9d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9d8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x35c9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35c9dc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x35c9dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35c9e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35c9e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35c9e4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x35c9e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c9e8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x35c9e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c9ec: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x35c9ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c9f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x35C9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C9F4u;
        // 0x35c9f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C9FCu;
    // 0x35c9fc: 0x0  nop
    ctx->pc = 0x35c9fcu;
    // NOP
    ctx->pc = 0x35ca00u;
}
