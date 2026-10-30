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

// Function: sub_0030E130
// Address: 0x30e130 - 0x30e1d8
void sub_0030E130_0x30e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E130_0x30e130");
#endif

    switch (ctx->pc) {
        case 0x30e160u: goto label_30e160;
        case 0x30e168u: goto label_30e168;
        case 0x30e178u: goto label_30e178;
        case 0x30e18cu: goto label_30e18c;
        case 0x30e19cu: goto label_30e19c;
        case 0x30e1acu: goto label_30e1ac;
        default: break;
    }

    ctx->pc = 0x30e130u;

    // 0x30e130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30e134: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30e134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30e138: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30e138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30e13c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30e13cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e140: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x30e140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x30e144: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30e144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e148: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30e148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30e14c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30e150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e154: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x30e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30e158: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x30e158u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30e15c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30e15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30e160:
    // 0x30e160: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30E160u;
    SET_GPR_U32(ctx, 31, 0x30E168u);
    ctx->pc = 0x30E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E160u;
    // 0x30e164: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30E160u, 0x30E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E168u;
label_30e168:
    // 0x30e168: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30e168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30e16c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30e16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e170: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30E170u;
    SET_GPR_U32(ctx, 31, 0x30E178u);
    ctx->pc = 0x30E174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E170u;
    // 0x30e174: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30E170u, 0x30E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E178u;
label_30e178:
    // 0x30e178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30e178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e17c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x30E17Cu;
    {
        const bool branch_taken_0x30e17c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E17Cu;
        // 0x30e180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e17c) {
            ctx->pc = 0x30E1ACu;
            goto label_30e1ac;
        }
    }
    ctx->pc = 0x30E184u;
    // 0x30e184: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x30E184u;
    SET_GPR_U32(ctx, 31, 0x30E18Cu);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x30E184u, 0x30E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E18Cu;
label_30e18c:
    // 0x30e18c: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E18Cu;
    {
        const bool branch_taken_0x30e18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E18Cu;
        // 0x30e190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e18c) {
            ctx->pc = 0x30E1ACu;
            goto label_30e1ac;
        }
    }
    ctx->pc = 0x30E194u;
    // 0x30e194: 0xc088edc  jal         func_223B70
    ctx->pc = 0x30E194u;
    SET_GPR_U32(ctx, 31, 0x30E19Cu);
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x30E194u, 0x30E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E19Cu;
label_30e19c:
    // 0x30e19c: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E19Cu;
    {
        const bool branch_taken_0x30e19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E19Cu;
        // 0x30e1a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e19c) {
            ctx->pc = 0x30E1ACu;
            goto label_30e1ac;
        }
    }
    ctx->pc = 0x30E1A4u;
    // 0x30e1a4: 0xc0c3876  jal         func_30E1D8
    ctx->pc = 0x30E1A4u;
    SET_GPR_U32(ctx, 31, 0x30E1ACu);
    ctx->pc = 0x30E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E1A4u;
    // 0x30e1a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E1D8u, 0x30E1A4u, 0x30E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1ACu;
label_30e1ac:
    // 0x30e1ac: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x30e1acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30e1b0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x30E1B0u;
    {
        const bool branch_taken_0x30e1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E1B0u;
        // 0x30e1b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e1b0) {
            ctx->pc = 0x30E160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e160;
        }
    }
    ctx->pc = 0x30E1B8u;
    // 0x30e1b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30e1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30e1bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30e1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30e1c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30e1c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e1c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30e1c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e1c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30e1c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x30E1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E1D0u;
        // 0x30e1d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E1D8u;
}
