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

// Function: sub_002E5A00
// Address: 0x2e5a00 - 0x2e5ae0
void sub_002E5A00_0x2e5a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5A00_0x2e5a00");
#endif

    switch (ctx->pc) {
        case 0x2e5a54u: goto label_2e5a54;
        case 0x2e5a5cu: goto label_2e5a5c;
        case 0x2e5a6cu: goto label_2e5a6c;
        case 0x2e5a74u: goto label_2e5a74;
        case 0x2e5aa4u: goto label_2e5aa4;
        case 0x2e5ab0u: goto label_2e5ab0;
        default: break;
    }

    ctx->pc = 0x2e5a00u;

    // 0x2e5a00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e5a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e5a04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e5a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e5a08: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e5a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2e5a0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a10: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2e5a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2e5a14: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2e5a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a18: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e5a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e5a1c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2e5a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a20: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2e5a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2e5a24: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e5a24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a28: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2e5a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2e5a2c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2e5a2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a30: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2e5a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2e5a34: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2e5a34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a38: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2e5a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e5a3c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2e5a3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a40: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e5a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e5a44: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e5a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2e5a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e5a4c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E5A4Cu;
    SET_GPR_U32(ctx, 31, 0x2E5A54u);
    ctx->pc = 0x2E5A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A4Cu;
    // 0x2e5a50: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E5A4Cu, 0x2E5A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A54u;
label_2e5a54:
    // 0x2e5a54: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E5A54u;
    SET_GPR_U32(ctx, 31, 0x2E5A5Cu);
    ctx->pc = 0x2E5A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A54u;
    // 0x2e5a58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E5A54u, 0x2E5A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A5Cu;
label_2e5a5c:
    // 0x2e5a5c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E5A5Cu;
    {
        const bool branch_taken_0x2e5a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A5Cu;
        // 0x2e5a60: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a5c) {
            ctx->pc = 0x2E5AB4u;
            goto label_2e5ab4;
        }
    }
    ctx->pc = 0x2E5A64u;
    // 0x2e5a64: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E5A64u;
    SET_GPR_U32(ctx, 31, 0x2E5A6Cu);
    ctx->pc = 0x2E5A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A64u;
    // 0x2e5a68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E5A64u, 0x2E5A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A6Cu;
label_2e5a6c:
    // 0x2e5a6c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E5A6Cu;
    SET_GPR_U32(ctx, 31, 0x2E5A74u);
    ctx->pc = 0x2E5A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A6Cu;
    // 0x2e5a70: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E5A6Cu, 0x2E5A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A74u;
label_2e5a74:
    // 0x2e5a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a78: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E5A78u;
    {
        const bool branch_taken_0x2e5a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A78u;
        // 0x2e5a7c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a78) {
            ctx->pc = 0x2E5AA4u;
            goto label_2e5aa4;
        }
    }
    ctx->pc = 0x2E5A80u;
    // 0x2e5a80: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2e5a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a84: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2e5a84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a88: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2e5a88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a8c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2e5a8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e5a90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e5a94: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2e5a94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a9c: 0xc0b96b8  jal         func_2E5AE0
    ctx->pc = 0x2E5A9Cu;
    SET_GPR_U32(ctx, 31, 0x2E5AA4u);
    ctx->pc = 0x2E5AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A9Cu;
    // 0x2e5aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5AE0u, 0x2E5A9Cu, 0x2E5AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5AA4u;
label_2e5aa4:
    // 0x2e5aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5aa8: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E5AA8u;
    SET_GPR_U32(ctx, 31, 0x2E5AB0u);
    ctx->pc = 0x2E5AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5AA8u;
    // 0x2e5aac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E5AA8u, 0x2E5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5AB0u;
label_2e5ab0:
    // 0x2e5ab0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e5ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e5ab4:
    // 0x2e5ab4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e5ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e5ab8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e5ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5abc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2e5abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5ac0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e5ac0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5ac4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2e5ac4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5ac8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2e5ac8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5acc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2e5accu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5ad4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2e5ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e5ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AD8u;
        // 0x2e5adc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5AE0u;
}
