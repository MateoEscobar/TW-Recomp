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

// Function: sub_003770A0
// Address: 0x3770a0 - 0x377130
void sub_003770A0_0x3770a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003770A0_0x3770a0");
#endif

    switch (ctx->pc) {
        case 0x3770c8u: goto label_3770c8;
        case 0x3770d0u: goto label_3770d0;
        case 0x3770e4u: goto label_3770e4;
        case 0x3770ecu: goto label_3770ec;
        case 0x377100u: goto label_377100;
        case 0x377110u: goto label_377110;
        default: break;
    }

    ctx->pc = 0x3770a0u;

    // 0x3770a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3770a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3770a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3770a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3770a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3770a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3770ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3770acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3770b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3770b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3770b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3770b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3770b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3770b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3770bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3770bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3770c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3770C0u;
    SET_GPR_U32(ctx, 31, 0x3770C8u);
    ctx->pc = 0x3770C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3770C0u;
    // 0x3770c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3770C0u, 0x3770C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3770C8u;
label_3770c8:
    // 0x3770c8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3770C8u;
    SET_GPR_U32(ctx, 31, 0x3770D0u);
    ctx->pc = 0x3770CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3770C8u;
    // 0x3770cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3770C8u, 0x3770D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3770D0u;
label_3770d0:
    // 0x3770d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3770d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3770d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3770d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3770d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3770d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3770dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3770DCu;
    SET_GPR_U32(ctx, 31, 0x3770E4u);
    ctx->pc = 0x3770E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3770DCu;
    // 0x3770e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3770DCu, 0x3770E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3770E4u;
label_3770e4:
    // 0x3770e4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3770E4u;
    SET_GPR_U32(ctx, 31, 0x3770ECu);
    ctx->pc = 0x3770E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3770E4u;
    // 0x3770e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3770E4u, 0x3770ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3770ECu;
label_3770ec:
    // 0x3770ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3770ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3770f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3770f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3770f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3770f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3770f8: 0xc102488  jal         func_409220
    ctx->pc = 0x3770F8u;
    SET_GPR_U32(ctx, 31, 0x377100u);
    ctx->pc = 0x3770FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3770F8u;
    // 0x3770fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3770F8u, 0x377100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377100u;
label_377100:
    // 0x377100: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x377100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377108: 0xc0c2ba6  jal         func_30AE98
    ctx->pc = 0x377108u;
    SET_GPR_U32(ctx, 31, 0x377110u);
    ctx->pc = 0x37710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377108u;
    // 0x37710c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AE98u, 0x377108u, 0x377110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377110u;
label_377110:
    // 0x377110: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x377110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377118: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x377118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37711c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37711cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377124: 0x3e00008  jr          $ra
    ctx->pc = 0x377124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377124u;
        // 0x377128: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37712Cu;
    // 0x37712c: 0x0  nop
    ctx->pc = 0x37712cu;
    // NOP
    ctx->pc = 0x377130u;
}
