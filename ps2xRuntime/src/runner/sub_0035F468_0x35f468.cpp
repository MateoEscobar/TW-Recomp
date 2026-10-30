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

// Function: sub_0035F468
// Address: 0x35f468 - 0x35f4e0
void sub_0035F468_0x35f468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F468_0x35f468");
#endif

    switch (ctx->pc) {
        case 0x35f490u: goto label_35f490;
        case 0x35f498u: goto label_35f498;
        case 0x35f4acu: goto label_35f4ac;
        case 0x35f4b4u: goto label_35f4b4;
        case 0x35f4c4u: goto label_35f4c4;
        default: break;
    }

    ctx->pc = 0x35f468u;

    // 0x35f468: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35f468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35f46c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f470: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35f470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35f474: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35f474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35f478: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35f478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f47c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35f47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f480: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35f480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35f484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f488: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F488u;
    SET_GPR_U32(ctx, 31, 0x35F490u);
    ctx->pc = 0x35F48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F488u;
    // 0x35f48c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F488u, 0x35F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F490u;
label_35f490:
    // 0x35f490: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35F490u;
    SET_GPR_U32(ctx, 31, 0x35F498u);
    ctx->pc = 0x35F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F490u;
    // 0x35f494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35F490u, 0x35F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F498u;
label_35f498:
    // 0x35f498: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35f498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f49c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35f49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f4a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f4a4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F4A4u;
    SET_GPR_U32(ctx, 31, 0x35F4ACu);
    ctx->pc = 0x35F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F4A4u;
    // 0x35f4a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F4A4u, 0x35F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F4ACu;
label_35f4ac:
    // 0x35f4ac: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F4ACu;
    SET_GPR_U32(ctx, 31, 0x35F4B4u);
    ctx->pc = 0x35F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F4ACu;
    // 0x35f4b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F4ACu, 0x35F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F4B4u;
label_35f4b4:
    // 0x35f4b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f4b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f4bc: 0xc0a49fe  jal         func_2927F8
    ctx->pc = 0x35F4BCu;
    SET_GPR_U32(ctx, 31, 0x35F4C4u);
    ctx->pc = 0x35F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F4BCu;
    // 0x35f4c0: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2927F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2927F8u, 0x35F4BCu, 0x35F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F4C4u;
label_35f4c4:
    // 0x35f4c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35f4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f4c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f4cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35f4ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f4d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35f4d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x35F4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4D8u;
        // 0x35f4dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F4E0u;
}
