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

// Function: sub_00325488
// Address: 0x325488 - 0x325518
void sub_00325488_0x325488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325488_0x325488");
#endif

    switch (ctx->pc) {
        case 0x3254a8u: goto label_3254a8;
        case 0x3254b0u: goto label_3254b0;
        case 0x3254c4u: goto label_3254c4;
        case 0x3254d8u: goto label_3254d8;
        case 0x3254ecu: goto label_3254ec;
        case 0x3254fcu: goto label_3254fc;
        default: break;
    }

    ctx->pc = 0x325488u;

    // 0x325488: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32548c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32548cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325490: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x325490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x325494: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x325494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x325498: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x325498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32549c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32549cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3254a0: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x3254A0u;
    SET_GPR_U32(ctx, 31, 0x3254A8u);
    ctx->pc = 0x3254A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3254A0u;
    // 0x3254a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x3254A0u, 0x3254A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3254A8u;
label_3254a8:
    // 0x3254a8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3254A8u;
    SET_GPR_U32(ctx, 31, 0x3254B0u);
    ctx->pc = 0x3254ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3254A8u;
    // 0x3254ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3254A8u, 0x3254B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3254B0u;
label_3254b0:
    // 0x3254b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3254b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3254b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3254b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3254b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3254b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3254bc: 0xc0c9192  jal         func_324648
    ctx->pc = 0x3254BCu;
    SET_GPR_U32(ctx, 31, 0x3254C4u);
    ctx->pc = 0x3254C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3254BCu;
    // 0x3254c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x3254BCu, 0x3254C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3254C4u;
label_3254c4:
    // 0x3254c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3254c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3254c8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3254c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3254cc: 0x24a54978  addiu       $a1, $a1, 0x4978
    ctx->pc = 0x3254ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18808));
    // 0x3254d0: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x3254D0u;
    SET_GPR_U32(ctx, 31, 0x3254D8u);
    ctx->pc = 0x3254D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3254D0u;
    // 0x3254d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3254D0u, 0x3254D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3254D8u;
label_3254d8:
    // 0x3254d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3254D8u;
    {
        const bool branch_taken_0x3254d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3254DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254D8u;
        // 0x3254dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3254d8) {
            ctx->pc = 0x3254F0u;
            goto label_3254f0;
        }
    }
    ctx->pc = 0x3254E0u;
    // 0x3254e0: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3254e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3254e4: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x3254E4u;
    SET_GPR_U32(ctx, 31, 0x3254ECu);
    ctx->pc = 0x3254E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3254E4u;
    // 0x3254e8: 0x24a549b8  addiu       $a1, $a1, 0x49B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x3254E4u, 0x3254ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3254ECu;
label_3254ec:
    // 0x3254ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3254ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3254f0:
    // 0x3254f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3254f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3254f4: 0xc0cc9f6  jal         func_3327D8
    ctx->pc = 0x3254F4u;
    SET_GPR_U32(ctx, 31, 0x3254FCu);
    ctx->pc = 0x3254F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3254F4u;
    // 0x3254f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3327D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3327D8u, 0x3254F4u, 0x3254FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3254FCu;
label_3254fc:
    // 0x3254fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3254fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325504: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x325504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325508: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x325508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32550c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32550cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325510: 0x3e00008  jr          $ra
    ctx->pc = 0x325510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325510u;
        // 0x325514: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325518u;
}
