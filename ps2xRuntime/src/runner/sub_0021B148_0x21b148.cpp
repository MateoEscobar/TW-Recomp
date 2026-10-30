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

// Function: sub_0021B148
// Address: 0x21b148 - 0x21b1f0
void sub_0021B148_0x21b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B148_0x21b148");
#endif

    switch (ctx->pc) {
        case 0x21b178u: goto label_21b178;
        case 0x21b190u: goto label_21b190;
        case 0x21b1b4u: goto label_21b1b4;
        case 0x21b1d4u: goto label_21b1d4;
        default: break;
    }

    ctx->pc = 0x21b148u;

    // 0x21b148: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21b148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21b14c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21b14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x21b150: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x21b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x21b154: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21b154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b158: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21b158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x21b15c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x21B15Cu;
    {
        const bool branch_taken_0x21b15c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B15Cu;
        // 0x21b160: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b15c) {
            ctx->pc = 0x21B1D8u;
            goto label_21b1d8;
        }
    }
    ctx->pc = 0x21B164u;
    // 0x21b164: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21b168: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21B168u;
    {
        const bool branch_taken_0x21b168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B168u;
        // 0x21b16c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b168) {
            ctx->pc = 0x21B1DCu;
            goto label_21b1dc;
        }
    }
    ctx->pc = 0x21B170u;
    // 0x21b170: 0xc08a61a  jal         func_229868
    ctx->pc = 0x21B170u;
    SET_GPR_U32(ctx, 31, 0x21B178u);
    ctx->pc = 0x21B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B170u;
    // 0x21b174: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x21B170u, 0x21B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B178u;
label_21b178:
    // 0x21b178: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21b178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b17c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x21B17Cu;
    {
        const bool branch_taken_0x21b17c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B17Cu;
        // 0x21b180: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b17c) {
            ctx->pc = 0x21B1D8u;
            goto label_21b1d8;
        }
    }
    ctx->pc = 0x21B184u;
    // 0x21b184: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x21b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x21b188: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x21B188u;
    SET_GPR_U32(ctx, 31, 0x21B190u);
    ctx->pc = 0x21B18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B188u;
    // 0x21b18c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21B188u, 0x21B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B190u;
label_21b190:
    // 0x21b190: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21B190u;
    {
        const bool branch_taken_0x21b190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B190u;
        // 0x21b194: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b190) {
            ctx->pc = 0x21B1DCu;
            goto label_21b1dc;
        }
    }
    ctx->pc = 0x21B198u;
    // 0x21b198: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x21b198u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x21b19c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21b19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1a0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x21b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x21b1a4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x21b1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21b1a8: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x21b1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21b1ac: 0xc045200  jal         func_114800
    ctx->pc = 0x21B1ACu;
    SET_GPR_U32(ctx, 31, 0x21B1B4u);
    ctx->pc = 0x21B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B1ACu;
    // 0x21b1b0: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x21B1ACu, 0x21B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B1B4u;
label_21b1b4:
    // 0x21b1b4: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x21b1b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x21b1b8: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x21b1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x21b1bc: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x21b1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x21b1c0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x21b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x21b1c4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x21b1c8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x21b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b1cc: 0xc04406e  jal         func_1101B8
    ctx->pc = 0x21B1CCu;
    SET_GPR_U32(ctx, 31, 0x21B1D4u);
    ctx->pc = 0x21B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B1CCu;
    // 0x21b1d0: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1101B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1101B8u, 0x21B1CCu, 0x21B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B1D4u;
label_21b1d4:
    // 0x21b1d4: 0xae220180  sw          $v0, 0x180($s1)
    ctx->pc = 0x21b1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 2));
label_21b1d8:
    // 0x21b1d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21b1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21b1dc:
    // 0x21b1dc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x21b1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b1e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21b1e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b1e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21b1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x21B1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1E8u;
        // 0x21b1ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B1F0u;
}
