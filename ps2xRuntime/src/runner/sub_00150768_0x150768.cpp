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

// Function: sub_00150768
// Address: 0x150768 - 0x1507d0
void sub_00150768_0x150768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150768_0x150768");
#endif

    switch (ctx->pc) {
        case 0x150790u: goto label_150790;
        case 0x150798u: goto label_150798;
        case 0x1507a4u: goto label_1507a4;
        case 0x1507acu: goto label_1507ac;
        case 0x1507b4u: goto label_1507b4;
        default: break;
    }

    ctx->pc = 0x150768u;

    // 0x150768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15076c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15076cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x150770: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150774: 0x8c62c20c  lw          $v0, -0x3DF4($v1)
    ctx->pc = 0x150774u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x150778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15077c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15077cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x150780: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x150780u;
    {
        const bool branch_taken_0x150780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150780u;
        // 0x150784: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150780) {
            ctx->pc = 0x1507BCu;
            goto label_1507bc;
        }
    }
    ctx->pc = 0x150788u;
    // 0x150788: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150788u;
    SET_GPR_U32(ctx, 31, 0x150790u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150788u, 0x150790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150790u;
label_150790:
    // 0x150790: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x150790u;
    SET_GPR_U32(ctx, 31, 0x150798u);
    ctx->pc = 0x150794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150790u;
    // 0x150794: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x150790u, 0x150798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150798u;
label_150798:
    // 0x150798: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x150798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x15079c: 0xc053722  jal         func_14DC88
    ctx->pc = 0x15079Cu;
    SET_GPR_U32(ctx, 31, 0x1507A4u);
    ctx->pc = 0x1507A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15079Cu;
    // 0x1507a0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x15079Cu, 0x1507A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507A4u;
label_1507a4:
    // 0x1507a4: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x1507A4u;
    SET_GPR_U32(ctx, 31, 0x1507ACu);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x1507A4u, 0x1507ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507ACu;
label_1507ac:
    // 0x1507ac: 0xc05471c  jal         func_151C70
    ctx->pc = 0x1507ACu;
    SET_GPR_U32(ctx, 31, 0x1507B4u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x1507ACu, 0x1507B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507B4u;
label_1507b4:
    // 0x1507b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1507B4u;
    {
        const bool branch_taken_0x1507b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1507B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507B4u;
        // 0x1507b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507b4) {
            ctx->pc = 0x1507C0u;
            goto label_1507c0;
        }
    }
    ctx->pc = 0x1507BCu;
label_1507bc:
    // 0x1507bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1507bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1507c0:
    // 0x1507c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1507c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1507c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1507c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1507c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1507C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1507CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507C8u;
        // 0x1507cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1507C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1507D0u;
}
