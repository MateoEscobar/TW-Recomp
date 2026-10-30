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

// Function: sub_0037B9E8
// Address: 0x37b9e8 - 0x37ba48
void sub_0037B9E8_0x37b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B9E8_0x37b9e8");
#endif

    switch (ctx->pc) {
        case 0x37ba00u: goto label_37ba00;
        case 0x37ba0cu: goto label_37ba0c;
        case 0x37ba24u: goto label_37ba24;
        case 0x37ba30u: goto label_37ba30;
        default: break;
    }

    ctx->pc = 0x37b9e8u;

    // 0x37b9e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b9ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b9f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b9f8: 0xc10614a  jal         func_418528
    ctx->pc = 0x37B9F8u;
    SET_GPR_U32(ctx, 31, 0x37BA00u);
    ctx->pc = 0x37B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B9F8u;
    // 0x37b9fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418528u, 0x37B9F8u, 0x37BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA00u;
label_37ba00:
    // 0x37ba00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37ba00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba04: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37BA04u;
    SET_GPR_U32(ctx, 31, 0x37BA0Cu);
    ctx->pc = 0x37BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA04u;
    // 0x37ba08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37BA04u, 0x37BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA0Cu;
label_37ba0c:
    // 0x37ba0c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37BA0Cu;
    {
        const bool branch_taken_0x37ba0c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA0Cu;
        // 0x37ba10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba0c) {
            ctx->pc = 0x37BA28u;
            goto label_37ba28;
        }
    }
    ctx->pc = 0x37BA14u;
    // 0x37ba14: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37ba14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37ba18: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37ba18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37ba1c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37BA1Cu;
    SET_GPR_U32(ctx, 31, 0x37BA24u);
    ctx->pc = 0x37BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA1Cu;
    // 0x37ba20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37BA1Cu, 0x37BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA24u;
label_37ba24:
    // 0x37ba24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37ba28:
    // 0x37ba28: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37BA28u;
    SET_GPR_U32(ctx, 31, 0x37BA30u);
    ctx->pc = 0x37BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA28u;
    // 0x37ba2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37BA28u, 0x37BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA30u;
label_37ba30:
    // 0x37ba30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37ba30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ba34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ba38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37ba38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ba3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ba3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ba40: 0x3e00008  jr          $ra
    ctx->pc = 0x37BA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA40u;
        // 0x37ba44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BA48u;
}
