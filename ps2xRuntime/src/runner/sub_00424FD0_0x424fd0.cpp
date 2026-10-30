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

// Function: sub_00424FD0
// Address: 0x424fd0 - 0x4250a0
void sub_00424FD0_0x424fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424FD0_0x424fd0");
#endif

    switch (ctx->pc) {
        case 0x42501cu: goto label_42501c;
        case 0x425074u: goto label_425074;
        case 0x425080u: goto label_425080;
        default: break;
    }

    ctx->pc = 0x424fd0u;

    // 0x424fd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x424fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x424fd4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x424fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x424fd8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x424fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x424fdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x424fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424fe0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x424fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x424fe4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x424fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x424fe8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x424FE8u;
    {
        const bool branch_taken_0x424fe8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x424FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424FE8u;
        // 0x424fec: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424fe8) {
            ctx->pc = 0x424FF8u;
            goto label_424ff8;
        }
    }
    ctx->pc = 0x424FF0u;
    // 0x424ff0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x424FF0u;
    {
        const bool branch_taken_0x424ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x424FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424FF0u;
        // 0x424ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424ff0) {
            ctx->pc = 0x425080u;
            goto label_425080;
        }
    }
    ctx->pc = 0x424FF8u;
label_424ff8:
    // 0x424ff8: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x424ff8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x424ffc: 0x8e62e9b4  lw          $v0, -0x164C($s3)
    ctx->pc = 0x424ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6FE9B4u));
    // 0x425000: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x425000u;
    {
        const bool branch_taken_0x425000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x425004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425000u;
        // 0x425004: 0x3c110070  lui         $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425000) {
            ctx->pc = 0x425048u;
            goto label_425048;
        }
    }
    ctx->pc = 0x425008u;
    // 0x425008: 0x2630e9a0  addiu       $s0, $s1, -0x1660
    ctx->pc = 0x425008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961568));
    // 0x42500c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42500cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x425010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425014: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x425014u;
    SET_GPR_U32(ctx, 31, 0x42501Cu);
    ctx->pc = 0x425018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425014u;
    // 0x425018: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x425014u, 0x42501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42501Cu;
label_42501c:
    // 0x42501c: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x42501cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x425020: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x425020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x425024: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x425024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x425028: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x425028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x42502c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x425030: 0xae25e9a0  sw          $a1, -0x1660($s1)
    ctx->pc = 0x425030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294961568), GPR_U32(ctx, 5));
    // 0x425034: 0xae62e9b4  sw          $v0, -0x164C($s3)
    ctx->pc = 0x425034u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294961588), GPR_U32(ctx, 2));
    // 0x425038: 0x24845d78  addiu       $a0, $a0, 0x5D78
    ctx->pc = 0x425038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23928));
    // 0x42503c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x42503cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x425040: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x425040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x425044: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x425044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_425048:
    // 0x425048: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x425048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x42504c: 0x2623e9a0  addiu       $v1, $s1, -0x1660
    ctx->pc = 0x42504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961568));
    // 0x425050: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x425050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x425054: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x425054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x425058: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x425058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x42505c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42505cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425060: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x425060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x425064: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x425064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x425068: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x425068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x42506c: 0xc118508  jal         func_461420
    ctx->pc = 0x42506Cu;
    SET_GPR_U32(ctx, 31, 0x425074u);
    ctx->pc = 0x425070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42506Cu;
    // 0x425070: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x42506Cu, 0x425074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425074u;
label_425074:
    // 0x425074: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x425074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x425078: 0xc11851c  jal         func_461470
    ctx->pc = 0x425078u;
    SET_GPR_U32(ctx, 31, 0x425080u);
    ctx->pc = 0x42507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425078u;
    // 0x42507c: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x425078u, 0x425080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425080u;
label_425080:
    // 0x425080: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x425080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x425084: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x425084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x425088: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x425088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42508c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42508cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x425090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x425090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x425094: 0x3e00008  jr          $ra
    ctx->pc = 0x425094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425094u;
        // 0x425098: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x425094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42509Cu;
    // 0x42509c: 0x0  nop
    ctx->pc = 0x42509cu;
    // NOP
    ctx->pc = 0x4250a0u;
}
