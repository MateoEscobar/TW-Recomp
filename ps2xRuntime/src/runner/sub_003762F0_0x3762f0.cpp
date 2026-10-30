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

// Function: sub_003762F0
// Address: 0x3762f0 - 0x376350
void sub_003762F0_0x3762f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003762F0_0x3762f0");
#endif

    switch (ctx->pc) {
        case 0x376310u: goto label_376310;
        case 0x376318u: goto label_376318;
        case 0x37632cu: goto label_37632c;
        case 0x376338u: goto label_376338;
        default: break;
    }

    ctx->pc = 0x3762f0u;

    // 0x3762f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3762f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3762f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3762f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3762f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3762f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3762fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3762fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x376304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376308: 0xc102472  jal         func_4091C8
    ctx->pc = 0x376308u;
    SET_GPR_U32(ctx, 31, 0x376310u);
    ctx->pc = 0x37630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376308u;
    // 0x37630c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x376308u, 0x376310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376310u;
label_376310:
    // 0x376310: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x376310u;
    SET_GPR_U32(ctx, 31, 0x376318u);
    ctx->pc = 0x376314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376310u;
    // 0x376314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x376310u, 0x376318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376318u;
label_376318:
    // 0x376318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x376318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37631c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37631cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376324: 0xc102488  jal         func_409220
    ctx->pc = 0x376324u;
    SET_GPR_U32(ctx, 31, 0x37632Cu);
    ctx->pc = 0x376328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376324u;
    // 0x376328: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x376324u, 0x37632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37632Cu;
label_37632c:
    // 0x37632c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37632cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376330: 0xc0c5b56  jal         func_316D58
    ctx->pc = 0x376330u;
    SET_GPR_U32(ctx, 31, 0x376338u);
    ctx->pc = 0x376334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376330u;
    // 0x376334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316D58u, 0x376330u, 0x376338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376338u;
label_376338:
    // 0x376338: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x376338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37633c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37633cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376348: 0x3e00008  jr          $ra
    ctx->pc = 0x376348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376348u;
        // 0x37634c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376350u;
}
