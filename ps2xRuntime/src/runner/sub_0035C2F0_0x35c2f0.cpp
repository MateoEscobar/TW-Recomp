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

// Function: sub_0035C2F0
// Address: 0x35c2f0 - 0x35c368
void sub_0035C2F0_0x35c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C2F0_0x35c2f0");
#endif

    switch (ctx->pc) {
        case 0x35c318u: goto label_35c318;
        case 0x35c320u: goto label_35c320;
        case 0x35c334u: goto label_35c334;
        case 0x35c33cu: goto label_35c33c;
        case 0x35c348u: goto label_35c348;
        default: break;
    }

    ctx->pc = 0x35c2f0u;

    // 0x35c2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35c2f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c2f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35c2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35c2fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35c2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35c300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c304: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35c304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c308: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35c30c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c310: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C310u;
    SET_GPR_U32(ctx, 31, 0x35C318u);
    ctx->pc = 0x35C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C310u;
    // 0x35c314: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C310u, 0x35C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C318u;
label_35c318:
    // 0x35c318: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C318u;
    SET_GPR_U32(ctx, 31, 0x35C320u);
    ctx->pc = 0x35C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C318u;
    // 0x35c31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C318u, 0x35C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C320u;
label_35c320:
    // 0x35c320: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35c320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c324: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c328: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c32c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C32Cu;
    SET_GPR_U32(ctx, 31, 0x35C334u);
    ctx->pc = 0x35C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C32Cu;
    // 0x35c330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C32Cu, 0x35C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C334u;
label_35c334:
    // 0x35c334: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35C334u;
    SET_GPR_U32(ctx, 31, 0x35C33Cu);
    ctx->pc = 0x35C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C334u;
    // 0x35c338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35C334u, 0x35C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C33Cu;
label_35c33c:
    // 0x35c33c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c340: 0xc08e10c  jal         func_238430
    ctx->pc = 0x35C340u;
    SET_GPR_U32(ctx, 31, 0x35C348u);
    ctx->pc = 0x35C344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C340u;
    // 0x35c344: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x238430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238430u, 0x35C340u, 0x35C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C348u;
label_35c348:
    // 0x35c348: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35c348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c34c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c350: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35c350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c354: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35c354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c35c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C35Cu;
        // 0x35c360: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C364u;
    // 0x35c364: 0x0  nop
    ctx->pc = 0x35c364u;
    // NOP
    ctx->pc = 0x35c368u;
}
