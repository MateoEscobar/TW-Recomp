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

// Function: sub_0035D050
// Address: 0x35d050 - 0x35d0c8
void sub_0035D050_0x35d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D050_0x35d050");
#endif

    switch (ctx->pc) {
        case 0x35d078u: goto label_35d078;
        case 0x35d080u: goto label_35d080;
        case 0x35d094u: goto label_35d094;
        case 0x35d09cu: goto label_35d09c;
        case 0x35d0acu: goto label_35d0ac;
        default: break;
    }

    ctx->pc = 0x35d050u;

    // 0x35d050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35d054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d058: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35d058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35d05c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35d05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35d060: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35d060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35d064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d068: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35d068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35d06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d070: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D070u;
    SET_GPR_U32(ctx, 31, 0x35D078u);
    ctx->pc = 0x35D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D070u;
    // 0x35d074: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D070u, 0x35D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D078u;
label_35d078:
    // 0x35d078: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D078u;
    SET_GPR_U32(ctx, 31, 0x35D080u);
    ctx->pc = 0x35D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D078u;
    // 0x35d07c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D078u, 0x35D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D080u;
label_35d080:
    // 0x35d080: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d084: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35d084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d08c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D08Cu;
    SET_GPR_U32(ctx, 31, 0x35D094u);
    ctx->pc = 0x35D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D08Cu;
    // 0x35d090: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D08Cu, 0x35D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D094u;
label_35d094:
    // 0x35d094: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35D094u;
    SET_GPR_U32(ctx, 31, 0x35D09Cu);
    ctx->pc = 0x35D098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D094u;
    // 0x35d098: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35D094u, 0x35D09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D09Cu;
label_35d09c:
    // 0x35d09c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35d0a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35d0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d0a4: 0xc08e190  jal         func_238640
    ctx->pc = 0x35D0A4u;
    SET_GPR_U32(ctx, 31, 0x35D0ACu);
    ctx->pc = 0x35D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D0A4u;
    // 0x35d0a8: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238640u, 0x35D0A4u, 0x35D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D0ACu;
label_35d0ac:
    // 0x35d0ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35d0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d0b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d0b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35d0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d0b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35d0b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x35D0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D0C0u;
        // 0x35d0c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D0C8u;
}
