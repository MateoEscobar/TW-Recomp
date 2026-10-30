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

// Function: sub_0035F128
// Address: 0x35f128 - 0x35f1c0
void sub_0035F128_0x35f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F128_0x35f128");
#endif

    switch (ctx->pc) {
        case 0x35f154u: goto label_35f154;
        case 0x35f15cu: goto label_35f15c;
        case 0x35f174u: goto label_35f174;
        case 0x35f188u: goto label_35f188;
        case 0x35f190u: goto label_35f190;
        case 0x35f1a0u: goto label_35f1a0;
        default: break;
    }

    ctx->pc = 0x35f128u;

    // 0x35f128: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35f128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35f12c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f130: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x35f130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x35f134: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x35f134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x35f138: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35f138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f13c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35f13cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f140: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x35f140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x35f144: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35f144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35f148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f14c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F14Cu;
    SET_GPR_U32(ctx, 31, 0x35F154u);
    ctx->pc = 0x35F150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F14Cu;
    // 0x35f150: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F14Cu, 0x35F154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F154u;
label_35f154:
    // 0x35f154: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F154u;
    SET_GPR_U32(ctx, 31, 0x35F15Cu);
    ctx->pc = 0x35F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F154u;
    // 0x35f158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F154u, 0x35F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F15Cu;
label_35f15c:
    // 0x35f15c: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f15cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f164: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f164u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f168: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35f168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f16c: 0xc102488  jal         func_409220
    ctx->pc = 0x35F16Cu;
    SET_GPR_U32(ctx, 31, 0x35F174u);
    ctx->pc = 0x35F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F16Cu;
    // 0x35f170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35F16Cu, 0x35F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F174u;
label_35f174:
    // 0x35f174: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35f174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f178: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35f178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f17c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f180: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F180u;
    SET_GPR_U32(ctx, 31, 0x35F188u);
    ctx->pc = 0x35F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F180u;
    // 0x35f184: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F180u, 0x35F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F188u;
label_35f188:
    // 0x35f188: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F188u;
    SET_GPR_U32(ctx, 31, 0x35F190u);
    ctx->pc = 0x35F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F188u;
    // 0x35f18c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F188u, 0x35F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F190u;
label_35f190:
    // 0x35f190: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35f190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f198: 0xc05acb2  jal         func_16B2C8
    ctx->pc = 0x35F198u;
    SET_GPR_U32(ctx, 31, 0x35F1A0u);
    ctx->pc = 0x35F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F198u;
    // 0x35f19c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B2C8u, 0x35F198u, 0x35F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F1A0u;
label_35f1a0:
    // 0x35f1a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35f1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35f1a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f1a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x35f1a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f1ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35f1acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f1b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x35f1b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x35F1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F1B8u;
        // 0x35f1bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F1C0u;
}
