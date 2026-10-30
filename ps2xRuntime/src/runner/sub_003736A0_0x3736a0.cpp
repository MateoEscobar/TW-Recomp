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

// Function: sub_003736A0
// Address: 0x3736a0 - 0x373710
void sub_003736A0_0x3736a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003736A0_0x3736a0");
#endif

    switch (ctx->pc) {
        case 0x3736c0u: goto label_3736c0;
        case 0x3736c8u: goto label_3736c8;
        case 0x3736e0u: goto label_3736e0;
        case 0x3736ecu: goto label_3736ec;
        case 0x3736f8u: goto label_3736f8;
        default: break;
    }

    ctx->pc = 0x3736a0u;

    // 0x3736a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3736a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3736a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3736a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3736a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3736a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3736ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3736acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3736b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3736b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3736b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3736b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3736B8u;
    SET_GPR_U32(ctx, 31, 0x3736C0u);
    ctx->pc = 0x3736BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736B8u;
    // 0x3736bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3736B8u, 0x3736C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736C0u;
label_3736c0:
    // 0x3736c0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3736C0u;
    SET_GPR_U32(ctx, 31, 0x3736C8u);
    ctx->pc = 0x3736C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736C0u;
    // 0x3736c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3736C0u, 0x3736C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736C8u;
label_3736c8:
    // 0x3736c8: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x3736c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3736cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3736ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736d0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3736d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3736d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3736d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736d8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3736D8u;
    SET_GPR_U32(ctx, 31, 0x3736E0u);
    ctx->pc = 0x3736DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736D8u;
    // 0x3736dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3736D8u, 0x3736E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736E0u;
label_3736e0:
    // 0x3736e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3736e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736e4: 0xc05a93a  jal         func_16A4E8
    ctx->pc = 0x3736E4u;
    SET_GPR_U32(ctx, 31, 0x3736ECu);
    ctx->pc = 0x3736E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736E4u;
    // 0x3736e8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A4E8u, 0x3736E4u, 0x3736ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736ECu;
label_3736ec:
    // 0x3736ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3736ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3736f0: 0xc102562  jal         func_409588
    ctx->pc = 0x3736F0u;
    SET_GPR_U32(ctx, 31, 0x3736F8u);
    ctx->pc = 0x3736F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736F0u;
    // 0x3736f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x3736F0u, 0x3736F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736F8u;
label_3736f8:
    // 0x3736f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3736f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3736fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3736fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373708: 0x3e00008  jr          $ra
    ctx->pc = 0x373708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373708u;
        // 0x37370c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373710u;
}
