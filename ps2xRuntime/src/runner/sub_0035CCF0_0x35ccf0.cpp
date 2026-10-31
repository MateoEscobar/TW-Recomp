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

// Function: sub_0035CCF0
// Address: 0x35ccf0 - 0x35cdc8
void sub_0035CCF0_0x35ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CCF0_0x35ccf0");
#endif

    switch (ctx->pc) {
        case 0x35cd18u: goto label_35cd18;
        case 0x35cd20u: goto label_35cd20;
        case 0x35cd30u: goto label_35cd30;
        case 0x35cd48u: goto label_35cd48;
        case 0x35cd50u: goto label_35cd50;
        case 0x35cd6cu: goto label_35cd6c;
        case 0x35cd78u: goto label_35cd78;
        case 0x35cd88u: goto label_35cd88;
        case 0x35cd9cu: goto label_35cd9c;
        default: break;
    }

    ctx->pc = 0x35ccf0u;

    // 0x35ccf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35ccf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ccf8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x35ccfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ccfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd00: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x35cd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x35cd04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x35cd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x35cd08: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x35cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x35cd0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35cd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35cd10: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CD10u;
    SET_GPR_U32(ctx, 31, 0x35CD18u);
    ctx->pc = 0x35CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD10u;
    // 0x35cd14: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CD10u, 0x35CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD18u;
label_35cd18:
    // 0x35cd18: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35CD18u;
    SET_GPR_U32(ctx, 31, 0x35CD20u);
    ctx->pc = 0x35CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD18u;
    // 0x35cd1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35CD18u, 0x35CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD20u;
label_35cd20:
    // 0x35cd20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35cd20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35cd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd28: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x35cd28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd2c: 0x0  nop
    ctx->pc = 0x35cd2cu;
    // NOP
label_35cd30:
    // 0x35cd30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35cd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35cd34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35cd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35cd3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35cd3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd40: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x35CD40u;
    SET_GPR_U32(ctx, 31, 0x35CD48u);
    ctx->pc = 0x35CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD40u;
    // 0x35cd44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x35CD40u, 0x35CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD48u;
label_35cd48:
    // 0x35cd48: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35CD48u;
    SET_GPR_U32(ctx, 31, 0x35CD50u);
    ctx->pc = 0x35CD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD48u;
    // 0x35cd4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35CD48u, 0x35CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD50u;
label_35cd50:
    // 0x35cd50: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x35cd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35cd54: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x35cd54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35cd58: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35CD58u;
    {
        const bool branch_taken_0x35cd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CD58u;
        // 0x35cd5c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cd58) {
            ctx->pc = 0x35CD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cd30;
        }
    }
    ctx->pc = 0x35CD60u;
    // 0x35cd60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35cd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd64: 0xc08e420  jal         func_239080
    ctx->pc = 0x35CD64u;
    SET_GPR_U32(ctx, 31, 0x35CD6Cu);
    ctx->pc = 0x35CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD64u;
    // 0x35cd68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239080u, 0x35CD64u, 0x35CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD6Cu;
label_35cd6c:
    // 0x35cd6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35cd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd70: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x35cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35cd74: 0x0  nop
    ctx->pc = 0x35cd74u;
    // NOP
label_35cd78:
    // 0x35cd78: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x35cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x35cd7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35cd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35cd80: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35CD80u;
    SET_GPR_U32(ctx, 31, 0x35CD88u);
    ctx->pc = 0x35CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD80u;
    // 0x35cd84: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35CD80u, 0x35CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD88u;
label_35cd88:
    // 0x35cd88: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35cd88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35cd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35cd94: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35CD94u;
    SET_GPR_U32(ctx, 31, 0x35CD9Cu);
    ctx->pc = 0x35CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CD94u;
    // 0x35cd98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35CD94u, 0x35CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD9Cu;
label_35cd9c:
    // 0x35cd9c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x35cd9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35cda0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35CDA0u;
    {
        const bool branch_taken_0x35cda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CDA0u;
        // 0x35cda4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cda0) {
            ctx->pc = 0x35CD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35cd78;
        }
    }
    ctx->pc = 0x35CDA8u;
    // 0x35cda8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x35cda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35cdac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35cdacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cdb0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x35cdb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35cdb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35cdb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cdb8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x35cdb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cdbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35cdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x35CDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CDC0u;
        // 0x35cdc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CDC8u;
}
