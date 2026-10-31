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

// Function: sub_00365058
// Address: 0x365058 - 0x3650d0
void sub_00365058_0x365058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365058_0x365058");
#endif

    switch (ctx->pc) {
        case 0x365080u: goto label_365080;
        case 0x365088u: goto label_365088;
        case 0x36509cu: goto label_36509c;
        case 0x3650a4u: goto label_3650a4;
        case 0x3650b4u: goto label_3650b4;
        default: break;
    }

    ctx->pc = 0x365058u;

    // 0x365058: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x365058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36505c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36505cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365060: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x365060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x365064: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x365064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x365068: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x365068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36506c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36506cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365070: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x365070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x365074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365078: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365078u;
    SET_GPR_U32(ctx, 31, 0x365080u);
    ctx->pc = 0x36507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365078u;
    // 0x36507c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365078u, 0x365080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365080u;
label_365080:
    // 0x365080: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365080u;
    SET_GPR_U32(ctx, 31, 0x365088u);
    ctx->pc = 0x365084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365080u;
    // 0x365084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365080u, 0x365088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365088u;
label_365088:
    // 0x365088: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36508c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36508cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365094: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365094u;
    SET_GPR_U32(ctx, 31, 0x36509Cu);
    ctx->pc = 0x365098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365094u;
    // 0x365098: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365094u, 0x36509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36509Cu;
label_36509c:
    // 0x36509c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36509Cu;
    SET_GPR_U32(ctx, 31, 0x3650A4u);
    ctx->pc = 0x3650A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36509Cu;
    // 0x3650a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36509Cu, 0x3650A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650A4u;
label_3650a4:
    // 0x3650a4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3650a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3650a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3650a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3650ac: 0xc08e470  jal         func_2391C0
    ctx->pc = 0x3650ACu;
    SET_GPR_U32(ctx, 31, 0x3650B4u);
    ctx->pc = 0x3650B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3650ACu;
    // 0x3650b0: 0x22e03  sra         $a1, $v0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2391C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2391C0u, 0x3650ACu, 0x3650B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650B4u;
label_3650b4:
    // 0x3650b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3650b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3650b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3650b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3650bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3650bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3650c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3650c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3650c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3650c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3650c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3650C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3650CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3650C8u;
        // 0x3650cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3650C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3650D0u;
}
