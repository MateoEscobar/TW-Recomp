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

// Function: sub_002DB6B0
// Address: 0x2db6b0 - 0x2db768
void sub_002DB6B0_0x2db6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB6B0_0x2db6b0");
#endif

    switch (ctx->pc) {
        case 0x2db6e8u: goto label_2db6e8;
        case 0x2db6f0u: goto label_2db6f0;
        case 0x2db700u: goto label_2db700;
        case 0x2db708u: goto label_2db708;
        case 0x2db71cu: goto label_2db71c;
        case 0x2db738u: goto label_2db738;
        case 0x2db744u: goto label_2db744;
        default: break;
    }

    ctx->pc = 0x2db6b0u;

    // 0x2db6b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2db6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2db6b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2db6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2db6b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2db6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2db6bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2db6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2db6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2db6c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2db6c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6c8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2db6c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2db6cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2db6ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6d0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2db6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2db6d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2db6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2db6d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2db6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2db6dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2db6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2db6e0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DB6E0u;
    SET_GPR_U32(ctx, 31, 0x2DB6E8u);
    ctx->pc = 0x2DB6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB6E0u;
    // 0x2db6e4: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DB6E0u, 0x2DB6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6E8u;
label_2db6e8:
    // 0x2db6e8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DB6E8u;
    SET_GPR_U32(ctx, 31, 0x2DB6F0u);
    ctx->pc = 0x2DB6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB6E8u;
    // 0x2db6ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DB6E8u, 0x2DB6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6F0u;
label_2db6f0:
    // 0x2db6f0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB6F0u;
    {
        const bool branch_taken_0x2db6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB6F0u;
        // 0x2db6f4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db6f0) {
            ctx->pc = 0x2DB748u;
            goto label_2db748;
        }
    }
    ctx->pc = 0x2DB6F8u;
    // 0x2db6f8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DB6F8u;
    SET_GPR_U32(ctx, 31, 0x2DB700u);
    ctx->pc = 0x2DB6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB6F8u;
    // 0x2db6fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DB6F8u, 0x2DB700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB700u;
label_2db700:
    // 0x2db700: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DB700u;
    SET_GPR_U32(ctx, 31, 0x2DB708u);
    ctx->pc = 0x2DB704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB700u;
    // 0x2db704: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DB700u, 0x2DB708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB708u;
label_2db708:
    // 0x2db708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2db708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db70c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DB70Cu;
    {
        const bool branch_taken_0x2db70c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB70Cu;
        // 0x2db710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db70c) {
            ctx->pc = 0x2DB73Cu;
            goto label_2db73c;
        }
    }
    ctx->pc = 0x2DB714u;
    // 0x2db714: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2DB714u;
    SET_GPR_U32(ctx, 31, 0x2DB71Cu);
    ctx->pc = 0x2DB718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB714u;
    // 0x2db718: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2DB714u, 0x2DB71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB71Cu;
label_2db71c:
    // 0x2db71c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2db71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db720: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2db720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db724: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2db724u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2db728: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2db728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db730: 0xc0b6dda  jal         func_2DB768
    ctx->pc = 0x2DB730u;
    SET_GPR_U32(ctx, 31, 0x2DB738u);
    ctx->pc = 0x2DB734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB730u;
    // 0x2db734: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB768u, 0x2DB730u, 0x2DB738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB738u;
label_2db738:
    // 0x2db738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2db738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db73c:
    // 0x2db73c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DB73Cu;
    SET_GPR_U32(ctx, 31, 0x2DB744u);
    ctx->pc = 0x2DB740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB73Cu;
    // 0x2db740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DB73Cu, 0x2DB744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB744u;
label_2db744:
    // 0x2db744: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2db744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2db748:
    // 0x2db748: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2db748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db74c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2db74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db750: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2db750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2db754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db758: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2db758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2db75c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB75Cu;
        // 0x2db760: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB764u;
    // 0x2db764: 0x0  nop
    ctx->pc = 0x2db764u;
    // NOP
    ctx->pc = 0x2db768u;
}
