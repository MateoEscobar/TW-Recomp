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

// Function: sub_0035B480
// Address: 0x35b480 - 0x35b4f8
void sub_0035B480_0x35b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B480_0x35b480");
#endif

    switch (ctx->pc) {
        case 0x35b4a8u: goto label_35b4a8;
        case 0x35b4b0u: goto label_35b4b0;
        case 0x35b4c4u: goto label_35b4c4;
        case 0x35b4ccu: goto label_35b4cc;
        case 0x35b4d8u: goto label_35b4d8;
        default: break;
    }

    ctx->pc = 0x35b480u;

    // 0x35b480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35b484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b488: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35b48c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35b48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35b490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35b490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b494: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35b494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b498: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35b498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35b49c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b4a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B4A0u;
    SET_GPR_U32(ctx, 31, 0x35B4A8u);
    ctx->pc = 0x35B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B4A0u;
    // 0x35b4a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B4A0u, 0x35B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B4A8u;
label_35b4a8:
    // 0x35b4a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B4A8u;
    SET_GPR_U32(ctx, 31, 0x35B4B0u);
    ctx->pc = 0x35B4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B4A8u;
    // 0x35b4ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B4A8u, 0x35B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B4B0u;
label_35b4b0:
    // 0x35b4b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35b4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35b4b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B4BCu;
    SET_GPR_U32(ctx, 31, 0x35B4C4u);
    ctx->pc = 0x35B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B4BCu;
    // 0x35b4c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B4BCu, 0x35B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B4C4u;
label_35b4c4:
    // 0x35b4c4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B4C4u;
    SET_GPR_U32(ctx, 31, 0x35B4CCu);
    ctx->pc = 0x35B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B4C4u;
    // 0x35b4c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B4C4u, 0x35B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B4CCu;
label_35b4cc:
    // 0x35b4cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4d0: 0xc08ec4e  jal         func_23B138
    ctx->pc = 0x35B4D0u;
    SET_GPR_U32(ctx, 31, 0x35B4D8u);
    ctx->pc = 0x35B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B4D0u;
    // 0x35b4d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B138u, 0x35B4D0u, 0x35B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B4D8u;
label_35b4d8:
    // 0x35b4d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35b4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b4dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b4e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35b4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b4e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35b4e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35B4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B4ECu;
        // 0x35b4f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B4F4u;
    // 0x35b4f4: 0x0  nop
    ctx->pc = 0x35b4f4u;
    // NOP
    ctx->pc = 0x35b4f8u;
}
