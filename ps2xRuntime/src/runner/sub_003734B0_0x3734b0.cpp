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

// Function: sub_003734B0
// Address: 0x3734b0 - 0x373528
void sub_003734B0_0x3734b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003734B0_0x3734b0");
#endif

    switch (ctx->pc) {
        case 0x3734d8u: goto label_3734d8;
        case 0x3734e0u: goto label_3734e0;
        case 0x3734f8u: goto label_3734f8;
        case 0x373500u: goto label_373500;
        case 0x37350cu: goto label_37350c;
        default: break;
    }

    ctx->pc = 0x3734b0u;

    // 0x3734b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3734b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3734b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3734b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3734b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3734b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3734bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3734bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3734c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3734c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3734c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3734c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3734cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3734ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3734d0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3734D0u;
    SET_GPR_U32(ctx, 31, 0x3734D8u);
    ctx->pc = 0x3734D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734D0u;
    // 0x3734d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3734D0u, 0x3734D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734D8u;
label_3734d8:
    // 0x3734d8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3734D8u;
    SET_GPR_U32(ctx, 31, 0x3734E0u);
    ctx->pc = 0x3734DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734D8u;
    // 0x3734dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3734D8u, 0x3734E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734E0u;
label_3734e0:
    // 0x3734e0: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x3734e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3734e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3734e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734e8: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3734e8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3734ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3734ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3734f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3734F0u;
    SET_GPR_U32(ctx, 31, 0x3734F8u);
    ctx->pc = 0x3734F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734F0u;
    // 0x3734f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3734F0u, 0x3734F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734F8u;
label_3734f8:
    // 0x3734f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3734F8u;
    SET_GPR_U32(ctx, 31, 0x373500u);
    ctx->pc = 0x3734FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734F8u;
    // 0x3734fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3734F8u, 0x373500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373500u;
label_373500:
    // 0x373500: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373504: 0xc05a8ea  jal         func_16A3A8
    ctx->pc = 0x373504u;
    SET_GPR_U32(ctx, 31, 0x37350Cu);
    ctx->pc = 0x373508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373504u;
    // 0x373508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A3A8u, 0x373504u, 0x37350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37350Cu;
label_37350c:
    // 0x37350c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37350cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373514: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373518: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37351c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37351cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373520: 0x3e00008  jr          $ra
    ctx->pc = 0x373520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373520u;
        // 0x373524: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373528u;
}
