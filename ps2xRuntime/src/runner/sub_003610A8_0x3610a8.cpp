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

// Function: sub_003610A8
// Address: 0x3610a8 - 0x361150
void sub_003610A8_0x3610a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003610A8_0x3610a8");
#endif

    switch (ctx->pc) {
        case 0x3610d0u: goto label_3610d0;
        case 0x3610d8u: goto label_3610d8;
        case 0x3610ecu: goto label_3610ec;
        case 0x3610f4u: goto label_3610f4;
        case 0x36111cu: goto label_36111c;
        case 0x361124u: goto label_361124;
        case 0x361134u: goto label_361134;
        default: break;
    }

    ctx->pc = 0x3610a8u;

    // 0x3610a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3610a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3610ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3610acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3610b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3610b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3610b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3610b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3610b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3610b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3610bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3610c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3610c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3610c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3610c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3610C8u;
    SET_GPR_U32(ctx, 31, 0x3610D0u);
    ctx->pc = 0x3610CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3610C8u;
    // 0x3610cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3610C8u, 0x3610D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3610D0u;
label_3610d0:
    // 0x3610d0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3610D0u;
    SET_GPR_U32(ctx, 31, 0x3610D8u);
    ctx->pc = 0x3610D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3610D0u;
    // 0x3610d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3610D0u, 0x3610D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3610D8u;
label_3610d8:
    // 0x3610d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3610d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3610dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3610e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3610e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3610e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3610E4u;
    SET_GPR_U32(ctx, 31, 0x3610ECu);
    ctx->pc = 0x3610E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3610E4u;
    // 0x3610e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3610E4u, 0x3610ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3610ECu;
label_3610ec:
    // 0x3610ec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3610ECu;
    SET_GPR_U32(ctx, 31, 0x3610F4u);
    ctx->pc = 0x3610F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3610ECu;
    // 0x3610f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3610ECu, 0x3610F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3610F4u;
label_3610f4:
    // 0x3610f4: 0x340683df  ori         $a2, $zero, 0x83DF
    ctx->pc = 0x3610f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33759);
    // 0x3610f8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3610f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3610fc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3610fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x361100: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x361100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x361104: 0x34c6ffc0  ori         $a2, $a2, 0xFFC0
    ctx->pc = 0x361104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65472);
    // 0x361108: 0x633f8  dsll        $a2, $a2, 15
    ctx->pc = 0x361108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 15);
    // 0x36110c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36110cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361114: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361114u;
    SET_GPR_U32(ctx, 31, 0x36111Cu);
    ctx->pc = 0x361118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361114u;
    // 0x361118: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361114u, 0x36111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36111Cu;
label_36111c:
    // 0x36111c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36111Cu;
    SET_GPR_U32(ctx, 31, 0x361124u);
    ctx->pc = 0x361120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36111Cu;
    // 0x361120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36111Cu, 0x361124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361124u;
label_361124:
    // 0x361124: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x361124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x361128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36112c: 0xc0acae4  jal         func_2B2B90
    ctx->pc = 0x36112Cu;
    SET_GPR_U32(ctx, 31, 0x361134u);
    ctx->pc = 0x361130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36112Cu;
    // 0x361130: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2B90u, 0x36112Cu, 0x361134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361134u;
label_361134:
    // 0x361134: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x361134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36113c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36113cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361140: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x361140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361148: 0x3e00008  jr          $ra
    ctx->pc = 0x361148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361148u;
        // 0x36114c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361150u;
}
