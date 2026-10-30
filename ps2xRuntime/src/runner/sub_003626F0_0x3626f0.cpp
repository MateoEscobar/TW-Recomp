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

// Function: sub_003626F0
// Address: 0x3626f0 - 0x362768
void sub_003626F0_0x3626f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003626F0_0x3626f0");
#endif

    switch (ctx->pc) {
        case 0x362718u: goto label_362718;
        case 0x362720u: goto label_362720;
        case 0x362734u: goto label_362734;
        case 0x36273cu: goto label_36273c;
        case 0x362748u: goto label_362748;
        default: break;
    }

    ctx->pc = 0x3626f0u;

    // 0x3626f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3626f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3626f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3626f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3626f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3626f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3626fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3626fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x362700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362704: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x362704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362708: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x362708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36270c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36270cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x362710: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362710u;
    SET_GPR_U32(ctx, 31, 0x362718u);
    ctx->pc = 0x362714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362710u;
    // 0x362714: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362710u, 0x362718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362718u;
label_362718:
    // 0x362718: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362718u;
    SET_GPR_U32(ctx, 31, 0x362720u);
    ctx->pc = 0x36271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362718u;
    // 0x36271c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362718u, 0x362720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362720u;
label_362720:
    // 0x362720: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x362720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362724: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x362724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36272c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36272Cu;
    SET_GPR_U32(ctx, 31, 0x362734u);
    ctx->pc = 0x362730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36272Cu;
    // 0x362730: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36272Cu, 0x362734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362734u;
label_362734:
    // 0x362734: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362734u;
    SET_GPR_U32(ctx, 31, 0x36273Cu);
    ctx->pc = 0x362738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362734u;
    // 0x362738: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362734u, 0x36273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36273Cu;
label_36273c:
    // 0x36273c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x36273cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x362740: 0xc0a7eea  jal         func_29FBA8
    ctx->pc = 0x362740u;
    SET_GPR_U32(ctx, 31, 0x362748u);
    ctx->pc = 0x362744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362740u;
    // 0x362744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FBA8u, 0x362740u, 0x362748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362748u;
label_362748:
    // 0x362748: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x362748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36274c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36274cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362750: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x362750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362754: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x362754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36275c: 0x3e00008  jr          $ra
    ctx->pc = 0x36275Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36275Cu;
        // 0x362760: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36275Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362764u;
    // 0x362764: 0x0  nop
    ctx->pc = 0x362764u;
    // NOP
    ctx->pc = 0x362768u;
}
