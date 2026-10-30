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

// Function: sub_0037A698
// Address: 0x37a698 - 0x37a770
void sub_0037A698_0x37a698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A698_0x37a698");
#endif

    switch (ctx->pc) {
        case 0x37a6c0u: goto label_37a6c0;
        case 0x37a6c8u: goto label_37a6c8;
        case 0x37a6d8u: goto label_37a6d8;
        case 0x37a6f0u: goto label_37a6f0;
        case 0x37a6f8u: goto label_37a6f8;
        case 0x37a714u: goto label_37a714;
        case 0x37a720u: goto label_37a720;
        case 0x37a730u: goto label_37a730;
        case 0x37a744u: goto label_37a744;
        default: break;
    }

    ctx->pc = 0x37a698u;

    // 0x37a698: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37a698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37a69c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a6a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x37a6a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37a6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a6a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x37a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37a6ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x37a6b0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x37a6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x37a6b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37a6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37a6b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A6B8u;
    SET_GPR_U32(ctx, 31, 0x37A6C0u);
    ctx->pc = 0x37A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A6B8u;
    // 0x37a6bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A6B8u, 0x37A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A6C0u;
label_37a6c0:
    // 0x37a6c0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37A6C0u;
    SET_GPR_U32(ctx, 31, 0x37A6C8u);
    ctx->pc = 0x37A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A6C0u;
    // 0x37a6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37A6C0u, 0x37A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A6C8u;
label_37a6c8:
    // 0x37a6c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a6cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a6d0: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x37a6d0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37a6d4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37a6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37a6d8:
    // 0x37a6d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37a6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37a6dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a6e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a6e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a6e8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37A6E8u;
    SET_GPR_U32(ctx, 31, 0x37A6F0u);
    ctx->pc = 0x37A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A6E8u;
    // 0x37a6ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37A6E8u, 0x37A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A6F0u;
label_37a6f0:
    // 0x37a6f0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37A6F0u;
    SET_GPR_U32(ctx, 31, 0x37A6F8u);
    ctx->pc = 0x37A6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A6F0u;
    // 0x37a6f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37A6F0u, 0x37A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A6F8u;
label_37a6f8:
    // 0x37a6f8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37a6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37a6fc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37a6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a700: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37A700u;
    {
        const bool branch_taken_0x37a700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A700u;
        // 0x37a704: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a700) {
            ctx->pc = 0x37A6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a6d8;
        }
    }
    ctx->pc = 0x37A708u;
    // 0x37a708: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37a708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a70c: 0xc105af8  jal         func_416BE0
    ctx->pc = 0x37A70Cu;
    SET_GPR_U32(ctx, 31, 0x37A714u);
    ctx->pc = 0x37A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A70Cu;
    // 0x37a710: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416BE0u, 0x37A70Cu, 0x37A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A714u;
label_37a714:
    // 0x37a714: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a718: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37a718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37a71c: 0x0  nop
    ctx->pc = 0x37a71cu;
    // NOP
label_37a720:
    // 0x37a720: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x37a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37a724: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37a724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37a728: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37A728u;
    SET_GPR_U32(ctx, 31, 0x37A730u);
    ctx->pc = 0x37A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A728u;
    // 0x37a72c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37A728u, 0x37A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A730u;
label_37a730:
    // 0x37a730: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37a730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37a734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a738: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37a738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a73c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37A73Cu;
    SET_GPR_U32(ctx, 31, 0x37A744u);
    ctx->pc = 0x37A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A73Cu;
    // 0x37a740: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37A73Cu, 0x37A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A744u;
label_37a744:
    // 0x37a744: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37a744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a748: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37A748u;
    {
        const bool branch_taken_0x37a748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A748u;
        // 0x37a74c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a748) {
            ctx->pc = 0x37A720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a720;
        }
    }
    ctx->pc = 0x37A750u;
    // 0x37a750: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x37a750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37a754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a758: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x37a758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37a75c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37a75cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a760: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x37a760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a768: 0x3e00008  jr          $ra
    ctx->pc = 0x37A768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A768u;
        // 0x37a76c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A770u;
}
