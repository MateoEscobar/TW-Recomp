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

// Function: sub_0032BBE0
// Address: 0x32bbe0 - 0x32bc48
void sub_0032BBE0_0x32bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BBE0_0x32bbe0");
#endif

    switch (ctx->pc) {
        case 0x32bbf8u: goto label_32bbf8;
        case 0x32bc10u: goto label_32bc10;
        case 0x32bc18u: goto label_32bc18;
        case 0x32bc20u: goto label_32bc20;
        case 0x32bc28u: goto label_32bc28;
        case 0x32bc34u: goto label_32bc34;
        default: break;
    }

    ctx->pc = 0x32bbe0u;

    // 0x32bbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bbe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32bbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bbe8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32bbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32bbec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32bbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bbf0: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32BBF0u;
    SET_GPR_U32(ctx, 31, 0x32BBF8u);
    ctx->pc = 0x32BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBF0u;
    // 0x32bbf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32BBF0u, 0x32BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBF8u;
label_32bbf8:
    // 0x32bbf8: 0x3405fe47  ori         $a1, $zero, 0xFE47
    ctx->pc = 0x32bbf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65095);
    // 0x32bbfc: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x32bbfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x32bc00: 0x34a5fa36  ori         $a1, $a1, 0xFA36
    ctx->pc = 0x32bc00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64054);
    // 0x32bc04: 0x52f78  dsll        $a1, $a1, 29
    ctx->pc = 0x32bc04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 29);
    // 0x32bc08: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x32BC08u;
    SET_GPR_U32(ctx, 31, 0x32BC10u);
    ctx->pc = 0x32BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC08u;
    // 0x32bc0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x32BC08u, 0x32BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC10u;
label_32bc10:
    // 0x32bc10: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32BC10u;
    SET_GPR_U32(ctx, 31, 0x32BC18u);
    ctx->pc = 0x32BC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC10u;
    // 0x32bc14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32BC10u, 0x32BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC18u;
label_32bc18:
    // 0x32bc18: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x32BC18u;
    SET_GPR_U32(ctx, 31, 0x32BC20u);
    ctx->pc = 0x32BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC18u;
    // 0x32bc1c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x32BC18u, 0x32BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC20u;
label_32bc20:
    // 0x32bc20: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32BC20u;
    SET_GPR_U32(ctx, 31, 0x32BC28u);
    ctx->pc = 0x32BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC20u;
    // 0x32bc24: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32BC20u, 0x32BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC28u;
label_32bc28:
    // 0x32bc28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc2c: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32BC2Cu;
    SET_GPR_U32(ctx, 31, 0x32BC34u);
    ctx->pc = 0x32BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC2Cu;
    // 0x32bc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32BC2Cu, 0x32BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC34u;
label_32bc34:
    // 0x32bc34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32bc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bc3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bc40: 0x3e00008  jr          $ra
    ctx->pc = 0x32BC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC40u;
        // 0x32bc44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BC48u;
}
