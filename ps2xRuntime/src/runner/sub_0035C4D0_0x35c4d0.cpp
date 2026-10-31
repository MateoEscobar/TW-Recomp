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

// Function: sub_0035C4D0
// Address: 0x35c4d0 - 0x35c568
void sub_0035C4D0_0x35c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C4D0_0x35c4d0");
#endif

    switch (ctx->pc) {
        case 0x35c4f8u: goto label_35c4f8;
        case 0x35c500u: goto label_35c500;
        case 0x35c514u: goto label_35c514;
        case 0x35c51cu: goto label_35c51c;
        case 0x35c534u: goto label_35c534;
        case 0x35c53cu: goto label_35c53c;
        case 0x35c54cu: goto label_35c54c;
        default: break;
    }

    ctx->pc = 0x35c4d0u;

    // 0x35c4d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35c4d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c4d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35c4dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35c4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35c4e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c4e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35c4e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c4e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35c4ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c4f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C4F0u;
    SET_GPR_U32(ctx, 31, 0x35C4F8u);
    ctx->pc = 0x35C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C4F0u;
    // 0x35c4f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C4F0u, 0x35C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C4F8u;
label_35c4f8:
    // 0x35c4f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C4F8u;
    SET_GPR_U32(ctx, 31, 0x35C500u);
    ctx->pc = 0x35C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C4F8u;
    // 0x35c4fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C4F8u, 0x35C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C500u;
label_35c500:
    // 0x35c500: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35c500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c504: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c508: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c50c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C50Cu;
    SET_GPR_U32(ctx, 31, 0x35C514u);
    ctx->pc = 0x35C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C50Cu;
    // 0x35c510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C50Cu, 0x35C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C514u;
label_35c514:
    // 0x35c514: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35C514u;
    SET_GPR_U32(ctx, 31, 0x35C51Cu);
    ctx->pc = 0x35C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C514u;
    // 0x35c518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35C514u, 0x35C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C51Cu;
label_35c51c:
    // 0x35c51c: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x35c51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x35c520: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x35c520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x35c524: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35c524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c52c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C52Cu;
    SET_GPR_U32(ctx, 31, 0x35C534u);
    ctx->pc = 0x35C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C52Cu;
    // 0x35c530: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C52Cu, 0x35C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C534u;
label_35c534:
    // 0x35c534: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35C534u;
    SET_GPR_U32(ctx, 31, 0x35C53Cu);
    ctx->pc = 0x35C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C534u;
    // 0x35c538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35C534u, 0x35C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C53Cu;
label_35c53c:
    // 0x35c53c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35c53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c544: 0xc08e064  jal         func_238190
    ctx->pc = 0x35C544u;
    SET_GPR_U32(ctx, 31, 0x35C54Cu);
    ctx->pc = 0x35C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C544u;
    // 0x35c548: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238190u, 0x35C544u, 0x35C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C54Cu;
label_35c54c:
    // 0x35c54c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35c54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c554: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35c554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c558: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35c558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c55c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c560: 0x3e00008  jr          $ra
    ctx->pc = 0x35C560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C560u;
        // 0x35c564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C568u;
}
