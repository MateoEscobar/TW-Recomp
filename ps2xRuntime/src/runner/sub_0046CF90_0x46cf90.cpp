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

// Function: sub_0046CF90
// Address: 0x46cf90 - 0x46d010
void sub_0046CF90_0x46cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CF90_0x46cf90");
#endif

    switch (ctx->pc) {
        case 0x46cf90u: goto label_46cf90;
        case 0x46cf94u: goto label_46cf94;
        case 0x46cf98u: goto label_46cf98;
        case 0x46cf9cu: goto label_46cf9c;
        case 0x46cfa0u: goto label_46cfa0;
        case 0x46cfa4u: goto label_46cfa4;
        case 0x46cfa8u: goto label_46cfa8;
        case 0x46cfacu: goto label_46cfac;
        case 0x46cfb0u: goto label_46cfb0;
        case 0x46cfb4u: goto label_46cfb4;
        case 0x46cfb8u: goto label_46cfb8;
        case 0x46cfbcu: goto label_46cfbc;
        case 0x46cfc0u: goto label_46cfc0;
        case 0x46cfc4u: goto label_46cfc4;
        case 0x46cfc8u: goto label_46cfc8;
        case 0x46cfccu: goto label_46cfcc;
        case 0x46cfd0u: goto label_46cfd0;
        case 0x46cfd4u: goto label_46cfd4;
        case 0x46cfd8u: goto label_46cfd8;
        case 0x46cfdcu: goto label_46cfdc;
        case 0x46cfe0u: goto label_46cfe0;
        case 0x46cfe4u: goto label_46cfe4;
        case 0x46cfe8u: goto label_46cfe8;
        case 0x46cfecu: goto label_46cfec;
        case 0x46cff0u: goto label_46cff0;
        case 0x46cff4u: goto label_46cff4;
        case 0x46cff8u: goto label_46cff8;
        case 0x46cffcu: goto label_46cffc;
        case 0x46d000u: goto label_46d000;
        case 0x46d004u: goto label_46d004;
        case 0x46d008u: goto label_46d008;
        case 0x46d00cu: goto label_46d00c;
        default: break;
    }

    ctx->pc = 0x46cf90u;

label_46cf90:
    // 0x46cf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46cf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_46cf94:
    // 0x46cf94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46cf98:
    // 0x46cf98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_46cf9c:
    // 0x46cf9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46cf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46cfa0:
    // 0x46cfa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46cfa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46cfa4:
    // 0x46cfa4: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x46cfa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_46cfa8:
    // 0x46cfa8: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_46cfac:
    if (ctx->pc == 0x46CFACu) {
        ctx->pc = 0x46CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CFA8u;
        // 0x46cfac: 0x96040018  lhu         $a0, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CFB0u;
        goto label_46cfb0;
    }
    ctx->pc = 0x46CFA8u;
    {
        const bool branch_taken_0x46cfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x46CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CFA8u;
        // 0x46cfac: 0x96040018  lhu         $a0, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cfa8) {
            ctx->pc = 0x46CFF4u;
            goto label_46cff4;
        }
    }
    ctx->pc = 0x46CFB0u;
label_46cfb0:
    // 0x46cfb0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46cfb4:
    // 0x46cfb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46cfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46cfb8:
    // 0x46cfb8: 0xc11ffb4  jal         func_47FED0
label_46cfbc:
    if (ctx->pc == 0x46CFBCu) {
        ctx->pc = 0x46CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CFB8u;
        // 0x46cfbc: 0x2484e710  addiu       $a0, $a0, -0x18F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CFC0u;
        goto label_46cfc0;
    }
    ctx->pc = 0x46CFB8u;
    SET_GPR_U32(ctx, 31, 0x46CFC0u);
    ctx->pc = 0x46CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CFB8u;
    // 0x46cfbc: 0x2484e710  addiu       $a0, $a0, -0x18F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46CFB8u, 0x46CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CFC0u;
label_46cfc0:
    // 0x46cfc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46cfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46cfc4:
    // 0x46cfc4: 0xc11b404  jal         func_46D010
label_46cfc8:
    if (ctx->pc == 0x46CFC8u) {
        ctx->pc = 0x46CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CFC4u;
        // 0x46cfc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CFCCu;
        goto label_46cfcc;
    }
    ctx->pc = 0x46CFC4u;
    SET_GPR_U32(ctx, 31, 0x46CFCCu);
    ctx->pc = 0x46CFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46CFC4u;
    // 0x46cfc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x46CFC4u, 0x46CFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CFCCu;
label_46cfcc:
    // 0x46cfcc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46cfd0:
    // 0x46cfd0: 0x8f8688d8  lw          $a2, -0x7728($gp)
    ctx->pc = 0x46cfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
label_46cfd4:
    // 0x46cfd4: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x46cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_46cfd8:
    // 0x46cfd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46cfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46cfdc:
    // 0x46cfdc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x46cfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_46cfe0:
    // 0x46cfe0: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x46cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_46cfe4:
    // 0x46cfe4: 0x40f809  jalr        $v0
label_46cfe8:
    if (ctx->pc == 0x46CFE8u) {
        ctx->pc = 0x46CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CFE4u;
        // 0x46cfe8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CFECu;
        goto label_46cfec;
    }
    ctx->pc = 0x46CFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46CFECu);
        ctx->pc = 0x46CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CFE4u;
        // 0x46cfe8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CFE4u, 0x46CFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46CFECu;
label_46cfec:
    // 0x46cfec: 0x10000004  b           . + 4 + (0x4 << 2)
label_46cff0:
    if (ctx->pc == 0x46CFF0u) {
        ctx->pc = 0x46CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CFECu;
        // 0x46cff0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46CFF4u;
        goto label_46cff4;
    }
    ctx->pc = 0x46CFECu;
    {
        const bool branch_taken_0x46cfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CFECu;
        // 0x46cff0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cfec) {
            ctx->pc = 0x46D000u;
            goto label_46d000;
        }
    }
    ctx->pc = 0x46CFF4u;
label_46cff4:
    // 0x46cff4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x46cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_46cff8:
    // 0x46cff8: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x46cff8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
label_46cffc:
    // 0x46cffc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46cffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46d000:
    // 0x46d000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46d004:
    // 0x46d004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46d004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46d008:
    // 0x46d008: 0x3e00008  jr          $ra
label_46d00c:
    if (ctx->pc == 0x46D00Cu) {
        ctx->pc = 0x46D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D008u;
        // 0x46d00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D010u;
        goto label_fallthrough_0x46d008;
    }
    ctx->pc = 0x46D008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D008u;
        // 0x46d00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46d008:
    ctx->pc = 0x46D010u;
}
