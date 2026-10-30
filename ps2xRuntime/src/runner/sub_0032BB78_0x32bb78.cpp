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

// Function: sub_0032BB78
// Address: 0x32bb78 - 0x32bbe0
void sub_0032BB78_0x32bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BB78_0x32bb78");
#endif

    switch (ctx->pc) {
        case 0x32bb90u: goto label_32bb90;
        case 0x32bba8u: goto label_32bba8;
        case 0x32bbb0u: goto label_32bbb0;
        case 0x32bbb8u: goto label_32bbb8;
        case 0x32bbc0u: goto label_32bbc0;
        case 0x32bbccu: goto label_32bbcc;
        default: break;
    }

    ctx->pc = 0x32bb78u;

    // 0x32bb78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bb7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bb80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32bb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32bb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bb88: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BB88u;
    SET_GPR_U32(ctx, 31, 0x32BB90u);
    ctx->pc = 0x32BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB88u;
    // 0x32bb8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BB88u, 0x32BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB90u;
label_32bb90:
    // 0x32bb90: 0x3405fe47  ori         $a1, $zero, 0xFE47
    ctx->pc = 0x32bb90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65095);
    // 0x32bb94: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x32bb94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x32bb98: 0x34a5fa36  ori         $a1, $a1, 0xFA36
    ctx->pc = 0x32bb98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64054);
    // 0x32bb9c: 0x52f78  dsll        $a1, $a1, 29
    ctx->pc = 0x32bb9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 29);
    // 0x32bba0: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x32BBA0u;
    SET_GPR_U32(ctx, 31, 0x32BBA8u);
    ctx->pc = 0x32BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBA0u;
    // 0x32bba4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x32BBA0u, 0x32BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBA8u;
label_32bba8:
    // 0x32bba8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BBA8u;
    SET_GPR_U32(ctx, 31, 0x32BBB0u);
    ctx->pc = 0x32BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBA8u;
    // 0x32bbac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BBA8u, 0x32BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBB0u;
label_32bbb0:
    // 0x32bbb0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x32BBB0u;
    SET_GPR_U32(ctx, 31, 0x32BBB8u);
    ctx->pc = 0x32BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBB0u;
    // 0x32bbb4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x32BBB0u, 0x32BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBB8u;
label_32bbb8:
    // 0x32bbb8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32BBB8u;
    SET_GPR_U32(ctx, 31, 0x32BBC0u);
    ctx->pc = 0x32BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBB8u;
    // 0x32bbbc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32BBB8u, 0x32BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBC0u;
label_32bbc0:
    // 0x32bbc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bbc4: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32BBC4u;
    SET_GPR_U32(ctx, 31, 0x32BBCCu);
    ctx->pc = 0x32BBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBC4u;
    // 0x32bbc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32BBC4u, 0x32BBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBCCu;
label_32bbcc:
    // 0x32bbcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32bbccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bbd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bbd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x32BBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBD8u;
        // 0x32bbdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BBE0u;
}
