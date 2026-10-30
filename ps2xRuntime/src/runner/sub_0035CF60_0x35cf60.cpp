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

// Function: sub_0035CF60
// Address: 0x35cf60 - 0x35cff0
void sub_0035CF60_0x35cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CF60_0x35cf60");
#endif

    switch (ctx->pc) {
        case 0x35cf80u: goto label_35cf80;
        case 0x35cf88u: goto label_35cf88;
        case 0x35cf9cu: goto label_35cf9c;
        case 0x35cfa8u: goto label_35cfa8;
        case 0x35cfb4u: goto label_35cfb4;
        case 0x35cfccu: goto label_35cfcc;
        case 0x35cfd8u: goto label_35cfd8;
        default: break;
    }

    ctx->pc = 0x35cf60u;

    // 0x35cf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35cf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35cf64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35cf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cf68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35cf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35cf6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35cf6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35cf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35cf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35cf78: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CF78u;
    SET_GPR_U32(ctx, 31, 0x35CF80u);
    ctx->pc = 0x35CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF78u;
    // 0x35cf7c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CF78u, 0x35CF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF80u;
label_35cf80:
    // 0x35cf80: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35CF80u;
    SET_GPR_U32(ctx, 31, 0x35CF88u);
    ctx->pc = 0x35CF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF80u;
    // 0x35cf84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35CF80u, 0x35CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF88u;
label_35cf88:
    // 0x35cf88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35cf88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35cf8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35cf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf94: 0xc102488  jal         func_409220
    ctx->pc = 0x35CF94u;
    SET_GPR_U32(ctx, 31, 0x35CF9Cu);
    ctx->pc = 0x35CF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF94u;
    // 0x35cf98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35CF94u, 0x35CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF9Cu;
label_35cf9c:
    // 0x35cf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35cf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cfa0: 0xc08e150  jal         func_238540
    ctx->pc = 0x35CFA0u;
    SET_GPR_U32(ctx, 31, 0x35CFA8u);
    ctx->pc = 0x35CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CFA0u;
    // 0x35cfa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x35CFA0u, 0x35CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CFA8u;
label_35cfa8:
    // 0x35cfa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35cfa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cfac: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35CFACu;
    SET_GPR_U32(ctx, 31, 0x35CFB4u);
    ctx->pc = 0x35CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CFACu;
    // 0x35cfb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35CFACu, 0x35CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CFB4u;
label_35cfb4:
    // 0x35cfb4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35CFB4u;
    {
        const bool branch_taken_0x35cfb4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x35CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CFB4u;
        // 0x35cfb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cfb4) {
            ctx->pc = 0x35CFD0u;
            goto label_35cfd0;
        }
    }
    ctx->pc = 0x35CFBCu;
    // 0x35cfbc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x35cfbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x35cfc0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x35cfc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x35cfc4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x35CFC4u;
    SET_GPR_U32(ctx, 31, 0x35CFCCu);
    ctx->pc = 0x35CFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CFC4u;
    // 0x35cfc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x35CFC4u, 0x35CFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CFCCu;
label_35cfcc:
    // 0x35cfcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35cfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35cfd0:
    // 0x35cfd0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35CFD0u;
    SET_GPR_U32(ctx, 31, 0x35CFD8u);
    ctx->pc = 0x35CFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CFD0u;
    // 0x35cfd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35CFD0u, 0x35CFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CFD8u;
label_35cfd8:
    // 0x35cfd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35cfd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cfdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cfe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35cfe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cfe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35cfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x35CFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CFE8u;
        // 0x35cfec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CFF0u;
}
