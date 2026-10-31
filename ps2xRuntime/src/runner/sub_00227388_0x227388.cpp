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

// Function: sub_00227388
// Address: 0x227388 - 0x227408
void sub_00227388_0x227388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227388_0x227388");
#endif

    switch (ctx->pc) {
        case 0x2273acu: goto label_2273ac;
        case 0x2273bcu: goto label_2273bc;
        case 0x2273ccu: goto label_2273cc;
        case 0x2273dcu: goto label_2273dc;
        case 0x2273e4u: goto label_2273e4;
        default: break;
    }

    ctx->pc = 0x227388u;

    // 0x227388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x227388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22738c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x227390: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x227390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x227394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x227394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22739c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22739cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273a0: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x2273a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2273a4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2273A4u;
    SET_GPR_U32(ctx, 31, 0x2273ACu);
    ctx->pc = 0x2273A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273A4u;
    // 0x2273a8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2273A4u, 0x2273ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273ACu;
label_2273ac:
    // 0x2273ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2273ACu;
    {
        const bool branch_taken_0x2273ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273ACu;
        // 0x2273b0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273ac) {
            ctx->pc = 0x2273F0u;
            goto label_2273f0;
        }
    }
    ctx->pc = 0x2273B4u;
    // 0x2273b4: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x2273B4u;
    SET_GPR_U32(ctx, 31, 0x2273BCu);
    ctx->pc = 0x2273B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273B4u;
    // 0x2273b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2273B4u, 0x2273BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273BCu;
label_2273bc:
    // 0x2273bc: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x2273bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x2273c0: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2273c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2273c4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2273C4u;
    SET_GPR_U32(ctx, 31, 0x2273CCu);
    ctx->pc = 0x2273C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273C4u;
    // 0x2273c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2273C4u, 0x2273CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273CCu;
label_2273cc:
    // 0x2273cc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2273ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2273d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2273d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273d4: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x2273D4u;
    SET_GPR_U32(ctx, 31, 0x2273DCu);
    ctx->pc = 0x2273D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273D4u;
    // 0x2273d8: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2273D4u, 0x2273DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273DCu;
label_2273dc:
    // 0x2273dc: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x2273DCu;
    SET_GPR_U32(ctx, 31, 0x2273E4u);
    ctx->pc = 0x2273E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273DCu;
    // 0x2273e0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2273DCu, 0x2273E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273E4u;
label_2273e4:
    // 0x2273e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2273e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2273e8: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2273e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2273ec: 0xae230360  sw          $v1, 0x360($s1)
    ctx->pc = 0x2273ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 3));
label_2273f0:
    // 0x2273f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2273f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2273f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2273f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2273f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2273f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2273fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2273FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273FCu;
        // 0x227400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2273FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227404u;
    // 0x227404: 0x0  nop
    ctx->pc = 0x227404u;
    // NOP
    ctx->pc = 0x227408u;
}
