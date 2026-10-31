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

// Function: sub_0020E0F8
// Address: 0x20e0f8 - 0x20e168
void sub_0020E0F8_0x20e0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E0F8_0x20e0f8");
#endif

    switch (ctx->pc) {
        case 0x20e11cu: goto label_20e11c;
        case 0x20e130u: goto label_20e130;
        case 0x20e144u: goto label_20e144;
        default: break;
    }

    ctx->pc = 0x20e0f8u;

    // 0x20e0f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20e0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20e0fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20e0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20e100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e10c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x20e10cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x20e110: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x20e110u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x20e114: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x20E114u;
    SET_GPR_U32(ctx, 31, 0x20E11Cu);
    ctx->pc = 0x20E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E114u;
    // 0x20e118: 0x8e053da4  lw          $a1, 0x3DA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x20E114u, 0x20E11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E11Cu;
label_20e11c:
    // 0x20e11c: 0x90430011  lbu         $v1, 0x11($v0)
    ctx->pc = 0x20e11cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x20e120: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20E120u;
    {
        const bool branch_taken_0x20e120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E120u;
        // 0x20e124: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e120) {
            ctx->pc = 0x20E150u;
            goto label_20e150;
        }
    }
    ctx->pc = 0x20E128u;
    // 0x20e128: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x20E128u;
    SET_GPR_U32(ctx, 31, 0x20E130u);
    ctx->pc = 0x20E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E128u;
    // 0x20e12c: 0x8e053ea4  lw          $a1, 0x3EA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16036)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x20E128u, 0x20E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E130u;
label_20e130:
    // 0x20e130: 0x90430011  lbu         $v1, 0x11($v0)
    ctx->pc = 0x20e130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x20e134: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E134u;
    {
        const bool branch_taken_0x20e134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E134u;
        // 0x20e138: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e134) {
            ctx->pc = 0x20E150u;
            goto label_20e150;
        }
    }
    ctx->pc = 0x20E13Cu;
    // 0x20e13c: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x20E13Cu;
    SET_GPR_U32(ctx, 31, 0x20E144u);
    ctx->pc = 0x20E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E13Cu;
    // 0x20e140: 0x8e053fa4  lw          $a1, 0x3FA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x20E13Cu, 0x20E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E144u;
label_20e144:
    // 0x20e144: 0x90420011  lbu         $v0, 0x11($v0)
    ctx->pc = 0x20e144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x20e148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20E148u;
    {
        const bool branch_taken_0x20e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E148u;
        // 0x20e14c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e148) {
            ctx->pc = 0x20E154u;
            goto label_20e154;
        }
    }
    ctx->pc = 0x20E150u;
label_20e150:
    // 0x20e150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e154:
    // 0x20e154: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20e154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e158: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e15c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e160: 0x3e00008  jr          $ra
    ctx->pc = 0x20E160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E160u;
        // 0x20e164: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E168u;
}
