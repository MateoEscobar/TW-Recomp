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

// Function: sub_0035D730
// Address: 0x35d730 - 0x35d808
void sub_0035D730_0x35d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D730_0x35d730");
#endif

    switch (ctx->pc) {
        case 0x35d758u: goto label_35d758;
        case 0x35d760u: goto label_35d760;
        case 0x35d770u: goto label_35d770;
        case 0x35d788u: goto label_35d788;
        case 0x35d790u: goto label_35d790;
        case 0x35d7acu: goto label_35d7ac;
        case 0x35d7b8u: goto label_35d7b8;
        case 0x35d7c8u: goto label_35d7c8;
        case 0x35d7dcu: goto label_35d7dc;
        default: break;
    }

    ctx->pc = 0x35d730u;

    // 0x35d730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35d730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35d734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d738: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35d738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x35d73c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d740: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x35d740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x35d744: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x35d744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x35d748: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x35d748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x35d74c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d750: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D750u;
    SET_GPR_U32(ctx, 31, 0x35D758u);
    ctx->pc = 0x35D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D750u;
    // 0x35d754: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D750u, 0x35D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D758u;
label_35d758:
    // 0x35d758: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D758u;
    SET_GPR_U32(ctx, 31, 0x35D760u);
    ctx->pc = 0x35D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D758u;
    // 0x35d75c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D758u, 0x35D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D760u;
label_35d760:
    // 0x35d760: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35d760u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d764: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35d764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d768: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x35d768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d76c: 0x0  nop
    ctx->pc = 0x35d76cu;
    // NOP
label_35d770:
    // 0x35d770: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35d770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35d774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35d774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d778: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35d778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d77c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d780: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x35D780u;
    SET_GPR_U32(ctx, 31, 0x35D788u);
    ctx->pc = 0x35D784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D780u;
    // 0x35d784: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x35D780u, 0x35D788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D788u;
label_35d788:
    // 0x35d788: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35D788u;
    SET_GPR_U32(ctx, 31, 0x35D790u);
    ctx->pc = 0x35D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D788u;
    // 0x35d78c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35D788u, 0x35D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D790u;
label_35d790:
    // 0x35d790: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x35d790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35d794: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x35d794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35d798: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35D798u;
    {
        const bool branch_taken_0x35d798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D798u;
        // 0x35d79c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d798) {
            ctx->pc = 0x35D770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d770;
        }
    }
    ctx->pc = 0x35D7A0u;
    // 0x35d7a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35d7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d7a4: 0xc08e440  jal         func_239100
    ctx->pc = 0x35D7A4u;
    SET_GPR_U32(ctx, 31, 0x35D7ACu);
    ctx->pc = 0x35D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D7A4u;
    // 0x35d7a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239100u, 0x35D7A4u, 0x35D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D7ACu;
label_35d7ac:
    // 0x35d7ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35d7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d7b0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x35d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35d7b4: 0x0  nop
    ctx->pc = 0x35d7b4u;
    // NOP
label_35d7b8:
    // 0x35d7b8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x35d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x35d7bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35d7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35d7c0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35D7C0u;
    SET_GPR_U32(ctx, 31, 0x35D7C8u);
    ctx->pc = 0x35D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D7C0u;
    // 0x35d7c4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35D7C0u, 0x35D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D7C8u;
label_35d7c8:
    // 0x35d7c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35d7c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d7cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35d7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d7d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35d7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d7d4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35D7D4u;
    SET_GPR_U32(ctx, 31, 0x35D7DCu);
    ctx->pc = 0x35D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D7D4u;
    // 0x35d7d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35D7D4u, 0x35D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D7DCu;
label_35d7dc:
    // 0x35d7dc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x35d7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35d7e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35D7E0u;
    {
        const bool branch_taken_0x35d7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D7E0u;
        // 0x35d7e4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d7e0) {
            ctx->pc = 0x35D7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d7b8;
        }
    }
    ctx->pc = 0x35D7E8u;
    // 0x35d7e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x35d7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35d7ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d7ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d7f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x35d7f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35d7f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35d7f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d7f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x35d7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d7fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d800: 0x3e00008  jr          $ra
    ctx->pc = 0x35D800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D800u;
        // 0x35d804: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D808u;
}
