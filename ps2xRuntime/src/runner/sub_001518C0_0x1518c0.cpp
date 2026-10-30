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

// Function: sub_001518C0
// Address: 0x1518c0 - 0x151930
void sub_001518C0_0x1518c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001518C0_0x1518c0");
#endif

    switch (ctx->pc) {
        case 0x1518dcu: goto label_1518dc;
        case 0x1518e4u: goto label_1518e4;
        case 0x1518f0u: goto label_1518f0;
        case 0x1518fcu: goto label_1518fc;
        case 0x151904u: goto label_151904;
        case 0x15190cu: goto label_15190c;
        default: break;
    }

    ctx->pc = 0x1518c0u;

    // 0x1518c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1518c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1518c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1518c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1518c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1518c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1518cc: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1518ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1518d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1518d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1518d4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x1518D4u;
    SET_GPR_U32(ctx, 31, 0x1518DCu);
    ctx->pc = 0x1518D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518D4u;
    // 0x1518d8: 0x30b1ffff  andi        $s1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x1518D4u, 0x1518DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518DCu;
label_1518dc:
    // 0x1518dc: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x1518DCu;
    SET_GPR_U32(ctx, 31, 0x1518E4u);
    ctx->pc = 0x1518E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518DCu;
    // 0x1518e0: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x1518DCu, 0x1518E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518E4u;
label_1518e4:
    // 0x1518e4: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x1518e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1518e8: 0xc053722  jal         func_14DC88
    ctx->pc = 0x1518E8u;
    SET_GPR_U32(ctx, 31, 0x1518F0u);
    ctx->pc = 0x1518ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518E8u;
    // 0x1518ec: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x1518E8u, 0x1518F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518F0u;
label_1518f0:
    // 0x1518f0: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x1518f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x1518f4: 0xc053722  jal         func_14DC88
    ctx->pc = 0x1518F4u;
    SET_GPR_U32(ctx, 31, 0x1518FCu);
    ctx->pc = 0x1518F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518F4u;
    // 0x1518f8: 0x112403  sra         $a0, $s1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x1518F4u, 0x1518FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518FCu;
label_1518fc:
    // 0x1518fc: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x1518FCu;
    SET_GPR_U32(ctx, 31, 0x151904u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x1518FCu, 0x151904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151904u;
label_151904:
    // 0x151904: 0xc05471c  jal         func_151C70
    ctx->pc = 0x151904u;
    SET_GPR_U32(ctx, 31, 0x15190Cu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x151904u, 0x15190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15190Cu;
label_15190c:
    // 0x15190c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15190cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151918: 0x3e00008  jr          $ra
    ctx->pc = 0x151918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151918u;
        // 0x15191c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151920u;
    // 0x151920: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x151920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151924: 0x0  nop
    ctx->pc = 0x151924u;
    // NOP
    // 0x151928: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x151928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15192c: 0x0  nop
    ctx->pc = 0x15192cu;
    // NOP
    ctx->pc = 0x151930u;
}
