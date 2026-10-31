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

// Function: sub_0036CCC0
// Address: 0x36ccc0 - 0x36cdc0
void sub_0036CCC0_0x36ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CCC0_0x36ccc0");
#endif

    switch (ctx->pc) {
        case 0x36ccf0u: goto label_36ccf0;
        case 0x36ccf8u: goto label_36ccf8;
        case 0x36cd0cu: goto label_36cd0c;
        case 0x36cd14u: goto label_36cd14;
        case 0x36cd20u: goto label_36cd20;
        case 0x36cd38u: goto label_36cd38;
        case 0x36cd40u: goto label_36cd40;
        case 0x36cd60u: goto label_36cd60;
        case 0x36cd68u: goto label_36cd68;
        case 0x36cd78u: goto label_36cd78;
        case 0x36cd8cu: goto label_36cd8c;
        default: break;
    }

    ctx->pc = 0x36ccc0u;

    // 0x36ccc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36ccc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ccc8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36cccc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36ccd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36ccd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ccd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36ccd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ccd8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36ccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36ccdc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36ccdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x36cce0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x36cce0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x36cce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36cce8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CCE8u;
    SET_GPR_U32(ctx, 31, 0x36CCF0u);
    ctx->pc = 0x36CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CCE8u;
    // 0x36ccec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CCE8u, 0x36CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CCF0u;
label_36ccf0:
    // 0x36ccf0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CCF0u;
    SET_GPR_U32(ctx, 31, 0x36CCF8u);
    ctx->pc = 0x36CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CCF0u;
    // 0x36ccf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CCF0u, 0x36CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CCF8u;
label_36ccf8:
    // 0x36ccf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ccf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ccfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ccfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cd00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36cd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36cd04: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CD04u;
    SET_GPR_U32(ctx, 31, 0x36CD0Cu);
    ctx->pc = 0x36CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CD04u;
    // 0x36cd08: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CD04u, 0x36CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD0Cu;
label_36cd0c:
    // 0x36cd0c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36CD0Cu;
    SET_GPR_U32(ctx, 31, 0x36CD14u);
    ctx->pc = 0x36CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CD0Cu;
    // 0x36cd10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36CD0Cu, 0x36CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD14u;
label_36cd14:
    // 0x36cd14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36cd14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36cd18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36cd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cd1c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36cd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36cd20:
    // 0x36cd20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36cd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36cd24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36cd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cd28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36cd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36cd2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36cd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cd30: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36CD30u;
    SET_GPR_U32(ctx, 31, 0x36CD38u);
    ctx->pc = 0x36CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CD30u;
    // 0x36cd34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36CD30u, 0x36CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD38u;
label_36cd38:
    // 0x36cd38: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36CD38u;
    SET_GPR_U32(ctx, 31, 0x36CD40u);
    ctx->pc = 0x36CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CD38u;
    // 0x36cd3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36CD38u, 0x36CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD40u;
label_36cd40:
    // 0x36cd40: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36cd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36cd44: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36cd44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36cd48: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36CD48u;
    {
        const bool branch_taken_0x36cd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD48u;
        // 0x36cd4c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cd48) {
            ctx->pc = 0x36CD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36cd20;
        }
    }
    ctx->pc = 0x36CD50u;
    // 0x36cd50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36cd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cd54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36cd54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36cd58: 0xc0e1724  jal         func_385C90
    ctx->pc = 0x36CD58u;
    SET_GPR_U32(ctx, 31, 0x36CD60u);
    ctx->pc = 0x36CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CD58u;
    // 0x36cd5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385C90u, 0x36CD58u, 0x36CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD60u;
label_36cd60:
    // 0x36cd60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36cd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cd64: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36cd68:
    // 0x36cd68: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x36cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x36cd6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36cd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36cd70: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36CD70u;
    SET_GPR_U32(ctx, 31, 0x36CD78u);
    ctx->pc = 0x36CD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CD70u;
    // 0x36cd74: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36CD70u, 0x36CD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD78u;
label_36cd78:
    // 0x36cd78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36cd78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cd7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36cd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cd80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36cd84: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36CD84u;
    SET_GPR_U32(ctx, 31, 0x36CD8Cu);
    ctx->pc = 0x36CD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CD84u;
    // 0x36cd88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36CD84u, 0x36CD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CD8Cu;
label_36cd8c:
    // 0x36cd8c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36cd8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36cd90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36CD90u;
    {
        const bool branch_taken_0x36cd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD90u;
        // 0x36cd94: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cd90) {
            ctx->pc = 0x36CD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36cd68;
        }
    }
    ctx->pc = 0x36CD98u;
    // 0x36cd98: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x36cd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36cd9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36cd9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cda0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36cda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36cda4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36cda4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36cda8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x36cda8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36cdac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36cdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cdb0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x36cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36cdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x36CDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDB4u;
        // 0x36cdb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CDBCu;
    // 0x36cdbc: 0x0  nop
    ctx->pc = 0x36cdbcu;
    // NOP
    ctx->pc = 0x36cdc0u;
}
