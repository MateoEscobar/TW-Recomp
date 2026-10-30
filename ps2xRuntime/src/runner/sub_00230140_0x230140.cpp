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

// Function: sub_00230140
// Address: 0x230140 - 0x2301f0
void sub_00230140_0x230140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230140_0x230140");
#endif

    switch (ctx->pc) {
        case 0x230158u: goto label_230158;
        case 0x230168u: goto label_230168;
        case 0x230170u: goto label_230170;
        case 0x230180u: goto label_230180;
        case 0x230190u: goto label_230190;
        case 0x2301a0u: goto label_2301a0;
        case 0x2301b0u: goto label_2301b0;
        case 0x2301c0u: goto label_2301c0;
        case 0x2301ccu: goto label_2301cc;
        case 0x2301dcu: goto label_2301dc;
        default: break;
    }

    ctx->pc = 0x230140u;

    // 0x230140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230144: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x230144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x230148: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x230148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23014c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230150: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x230150u;
    SET_GPR_U32(ctx, 31, 0x230158u);
    ctx->pc = 0x230154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230150u;
    // 0x230154: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x230150u, 0x230158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230158u;
label_230158:
    // 0x230158: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x230158u;
    {
        const bool branch_taken_0x230158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230158u;
        // 0x23015c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230158) {
            ctx->pc = 0x2301CCu;
            goto label_2301cc;
        }
    }
    ctx->pc = 0x230160u;
    // 0x230160: 0xc089988  jal         func_226620
    ctx->pc = 0x230160u;
    SET_GPR_U32(ctx, 31, 0x230168u);
    ctx->pc = 0x230164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230160u;
    // 0x230164: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x230160u, 0x230168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230168u;
label_230168:
    // 0x230168: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x230168u;
    SET_GPR_U32(ctx, 31, 0x230170u);
    ctx->pc = 0x23016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230168u;
    // 0x23016c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x230168u, 0x230170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230170u;
label_230170:
    // 0x230170: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x230170u;
    {
        const bool branch_taken_0x230170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230170u;
        // 0x230174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230170) {
            ctx->pc = 0x2301C4u;
            goto label_2301c4;
        }
    }
    ctx->pc = 0x230178u;
    // 0x230178: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x230178u;
    SET_GPR_U32(ctx, 31, 0x230180u);
    ctx->pc = 0x23017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230178u;
    // 0x23017c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x230178u, 0x230180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230180u;
label_230180:
    // 0x230180: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x230180u;
    {
        const bool branch_taken_0x230180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230180u;
        // 0x230184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230180) {
            ctx->pc = 0x2301C4u;
            goto label_2301c4;
        }
    }
    ctx->pc = 0x230188u;
    // 0x230188: 0xc088e98  jal         func_223A60
    ctx->pc = 0x230188u;
    SET_GPR_U32(ctx, 31, 0x230190u);
    ctx->pc = 0x23018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230188u;
    // 0x23018c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x230188u, 0x230190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230190u;
label_230190:
    // 0x230190: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x230190u;
    {
        const bool branch_taken_0x230190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230190u;
        // 0x230194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230190) {
            ctx->pc = 0x2301C4u;
            goto label_2301c4;
        }
    }
    ctx->pc = 0x230198u;
    // 0x230198: 0xc088e94  jal         func_223A50
    ctx->pc = 0x230198u;
    SET_GPR_U32(ctx, 31, 0x2301A0u);
    ctx->pc = 0x23019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230198u;
    // 0x23019c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A50u, 0x230198u, 0x2301A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301A0u;
label_2301a0:
    // 0x2301a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2301A0u;
    {
        const bool branch_taken_0x2301a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2301A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301A0u;
        // 0x2301a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301a0) {
            ctx->pc = 0x2301C4u;
            goto label_2301c4;
        }
    }
    ctx->pc = 0x2301A8u;
    // 0x2301a8: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2301A8u;
    SET_GPR_U32(ctx, 31, 0x2301B0u);
    ctx->pc = 0x2301ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301A8u;
    // 0x2301ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2301A8u, 0x2301B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301B0u;
label_2301b0:
    // 0x2301b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2301B0u;
    {
        const bool branch_taken_0x2301b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2301B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301B0u;
        // 0x2301b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301b0) {
            ctx->pc = 0x2301C4u;
            goto label_2301c4;
        }
    }
    ctx->pc = 0x2301B8u;
    // 0x2301b8: 0xc089974  jal         func_2265D0
    ctx->pc = 0x2301B8u;
    SET_GPR_U32(ctx, 31, 0x2301C0u);
    ctx->pc = 0x2301BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301B8u;
    // 0x2301bc: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2301B8u, 0x2301C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301C0u;
label_2301c0:
    // 0x2301c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2301c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2301c4:
    // 0x2301c4: 0xc094fde  jal         func_253F78
    ctx->pc = 0x2301C4u;
    SET_GPR_U32(ctx, 31, 0x2301CCu);
    ctx->pc = 0x2301C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301C4u;
    // 0x2301c8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x2301C4u, 0x2301CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301CCu;
label_2301cc:
    // 0x2301cc: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2301ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2301d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2301d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2301d4: 0xc08c07c  jal         func_2301F0
    ctx->pc = 0x2301D4u;
    SET_GPR_U32(ctx, 31, 0x2301DCu);
    ctx->pc = 0x2301D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301D4u;
    // 0x2301d8: 0xac400114  sw          $zero, 0x114($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301F0u, 0x2301D4u, 0x2301DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301DCu;
label_2301dc:
    // 0x2301dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2301dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2301e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2301e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2301e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2301E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2301E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301E4u;
        // 0x2301e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2301E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2301ECu;
    // 0x2301ec: 0x0  nop
    ctx->pc = 0x2301ecu;
    // NOP
    ctx->pc = 0x2301f0u;
}
