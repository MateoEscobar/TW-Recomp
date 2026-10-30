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

// Function: sub_002ABD38
// Address: 0x2abd38 - 0x2abe08
void sub_002ABD38_0x2abd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABD38_0x2abd38");
#endif

    switch (ctx->pc) {
        case 0x2abd84u: goto label_2abd84;
        case 0x2abd8cu: goto label_2abd8c;
        case 0x2abd9cu: goto label_2abd9c;
        case 0x2abda4u: goto label_2abda4;
        case 0x2abdd0u: goto label_2abdd0;
        case 0x2abddcu: goto label_2abddc;
        default: break;
    }

    ctx->pc = 0x2abd38u;

    // 0x2abd38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2abd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2abd3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2abd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2abd40: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2abd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2abd44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2abd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd48: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2abd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2abd4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2abd4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd50: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2abd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2abd54: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2abd54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd58: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2abd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2abd5c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2abd5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd60: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2abd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2abd64: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2abd64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd68: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2abd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2abd6c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2abd6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd70: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2abd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2abd74: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2abd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2abd78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2abd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2abd7c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2ABD7Cu;
    SET_GPR_U32(ctx, 31, 0x2ABD84u);
    ctx->pc = 0x2ABD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD7Cu;
    // 0x2abd80: 0x140b82d  daddu       $s7, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2ABD7Cu, 0x2ABD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD84u;
label_2abd84:
    // 0x2abd84: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2ABD84u;
    SET_GPR_U32(ctx, 31, 0x2ABD8Cu);
    ctx->pc = 0x2ABD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD84u;
    // 0x2abd88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2ABD84u, 0x2ABD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD8Cu;
label_2abd8c:
    // 0x2abd8c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ABD8Cu;
    {
        const bool branch_taken_0x2abd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD8Cu;
        // 0x2abd90: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd8c) {
            ctx->pc = 0x2ABDE0u;
            goto label_2abde0;
        }
    }
    ctx->pc = 0x2ABD94u;
    // 0x2abd94: 0xc087502  jal         func_21D408
    ctx->pc = 0x2ABD94u;
    SET_GPR_U32(ctx, 31, 0x2ABD9Cu);
    ctx->pc = 0x2ABD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD94u;
    // 0x2abd98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2ABD94u, 0x2ABD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD9Cu;
label_2abd9c:
    // 0x2abd9c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2ABD9Cu;
    SET_GPR_U32(ctx, 31, 0x2ABDA4u);
    ctx->pc = 0x2ABDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD9Cu;
    // 0x2abda0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2ABD9Cu, 0x2ABDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABDA4u;
label_2abda4:
    // 0x2abda4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2abda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abda8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ABDA8u;
    {
        const bool branch_taken_0x2abda8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDA8u;
        // 0x2abdac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abda8) {
            ctx->pc = 0x2ABDD0u;
            goto label_2abdd0;
        }
    }
    ctx->pc = 0x2ABDB0u;
    // 0x2abdb0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2abdb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdb4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2abdb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdb8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2abdb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdbc: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2abdbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdc0: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x2abdc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2abdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdc8: 0xc0aafbe  jal         func_2ABEF8
    ctx->pc = 0x2ABDC8u;
    SET_GPR_U32(ctx, 31, 0x2ABDD0u);
    ctx->pc = 0x2ABDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABDC8u;
    // 0x2abdcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEF8u, 0x2ABDC8u, 0x2ABDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABDD0u;
label_2abdd0:
    // 0x2abdd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2abdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abdd4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2ABDD4u;
    SET_GPR_U32(ctx, 31, 0x2ABDDCu);
    ctx->pc = 0x2ABDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABDD4u;
    // 0x2abdd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2ABDD4u, 0x2ABDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABDDCu;
label_2abddc:
    // 0x2abddc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2abddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2abde0:
    // 0x2abde0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2abde0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2abde4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2abde4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2abde8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2abde8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2abdec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2abdecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2abdf0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2abdf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2abdf4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2abdf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2abdf8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2abdf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2abdfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2abdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abe00: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE00u;
        // 0x2abe04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABE08u;
}
