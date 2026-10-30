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

// Function: sub_00451010
// Address: 0x451010 - 0x4510e0
void sub_00451010_0x451010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451010_0x451010");
#endif

    switch (ctx->pc) {
        case 0x451010u: goto label_451010;
        case 0x451014u: goto label_451014;
        case 0x451018u: goto label_451018;
        case 0x45101cu: goto label_45101c;
        case 0x451020u: goto label_451020;
        case 0x451024u: goto label_451024;
        case 0x451028u: goto label_451028;
        case 0x45102cu: goto label_45102c;
        case 0x451030u: goto label_451030;
        case 0x451034u: goto label_451034;
        case 0x451038u: goto label_451038;
        case 0x45103cu: goto label_45103c;
        case 0x451040u: goto label_451040;
        case 0x451044u: goto label_451044;
        case 0x451048u: goto label_451048;
        case 0x45104cu: goto label_45104c;
        case 0x451050u: goto label_451050;
        case 0x451054u: goto label_451054;
        case 0x451058u: goto label_451058;
        case 0x45105cu: goto label_45105c;
        case 0x451060u: goto label_451060;
        case 0x451064u: goto label_451064;
        case 0x451068u: goto label_451068;
        case 0x45106cu: goto label_45106c;
        case 0x451070u: goto label_451070;
        case 0x451074u: goto label_451074;
        case 0x451078u: goto label_451078;
        case 0x45107cu: goto label_45107c;
        case 0x451080u: goto label_451080;
        case 0x451084u: goto label_451084;
        case 0x451088u: goto label_451088;
        case 0x45108cu: goto label_45108c;
        case 0x451090u: goto label_451090;
        case 0x451094u: goto label_451094;
        case 0x451098u: goto label_451098;
        case 0x45109cu: goto label_45109c;
        case 0x4510a0u: goto label_4510a0;
        case 0x4510a4u: goto label_4510a4;
        case 0x4510a8u: goto label_4510a8;
        case 0x4510acu: goto label_4510ac;
        case 0x4510b0u: goto label_4510b0;
        case 0x4510b4u: goto label_4510b4;
        case 0x4510b8u: goto label_4510b8;
        case 0x4510bcu: goto label_4510bc;
        case 0x4510c0u: goto label_4510c0;
        case 0x4510c4u: goto label_4510c4;
        case 0x4510c8u: goto label_4510c8;
        case 0x4510ccu: goto label_4510cc;
        case 0x4510d0u: goto label_4510d0;
        case 0x4510d4u: goto label_4510d4;
        case 0x4510d8u: goto label_4510d8;
        case 0x4510dcu: goto label_4510dc;
        default: break;
    }

    ctx->pc = 0x451010u;

label_451010:
    // 0x451010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x451010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_451014:
    // 0x451014: 0x8f83841c  lw          $v1, -0x7BE4($gp)
    ctx->pc = 0x451014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935580)));
label_451018:
    // 0x451018: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x451018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_45101c:
    // 0x45101c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x45101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_451020:
    // 0x451020: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x451020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_451024:
    // 0x451024: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x451024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_451028:
    // 0x451028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x451028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_45102c:
    // 0x45102c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x45102cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_451030:
    // 0x451030: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x451030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_451034:
    // 0x451034: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x451034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_451038:
    // 0x451038: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_45103c:
    if (ctx->pc == 0x45103Cu) {
        ctx->pc = 0x45103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451038u;
        // 0x45103c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x451040u;
        goto label_451040;
    }
    ctx->pc = 0x451038u;
    {
        const bool branch_taken_0x451038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x45103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451038u;
        // 0x45103c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451038) {
            ctx->pc = 0x4510C4u;
            goto label_4510c4;
        }
    }
    ctx->pc = 0x451040u;
label_451040:
    // 0x451040: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x451040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_451044:
    // 0x451044: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_451048:
    if (ctx->pc == 0x451048u) {
        ctx->pc = 0x451048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451044u;
        // 0x451048: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x45104Cu;
        goto label_45104c;
    }
    ctx->pc = 0x451044u;
    {
        const bool branch_taken_0x451044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x451044) {
            ctx->pc = 0x451048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x451044u;
            // 0x451048: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x451058u;
            goto label_451058;
        }
    }
    ctx->pc = 0x45104Cu;
label_45104c:
    // 0x45104c: 0xc1295f2  jal         func_4A57C8
label_451050:
    if (ctx->pc == 0x451050u) {
        ctx->pc = 0x451054u;
        goto label_451054;
    }
    ctx->pc = 0x45104Cu;
    SET_GPR_U32(ctx, 31, 0x451054u);
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x45104Cu, 0x451054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451054u;
label_451054:
    // 0x451054: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x451054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_451058:
    // 0x451058: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_45105c:
    if (ctx->pc == 0x45105Cu) {
        ctx->pc = 0x45105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451058u;
        // 0x45105c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x451060u;
        goto label_451060;
    }
    ctx->pc = 0x451058u;
    {
        const bool branch_taken_0x451058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x451058) {
            ctx->pc = 0x45105Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x451058u;
            // 0x45105c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45106Cu;
            goto label_45106c;
        }
    }
    ctx->pc = 0x451060u;
label_451060:
    // 0x451060: 0xc1295f2  jal         func_4A57C8
label_451064:
    if (ctx->pc == 0x451064u) {
        ctx->pc = 0x451068u;
        goto label_451068;
    }
    ctx->pc = 0x451060u;
    SET_GPR_U32(ctx, 31, 0x451068u);
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x451060u, 0x451068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451068u;
label_451068:
    // 0x451068: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x451068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_45106c:
    // 0x45106c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_451070:
    if (ctx->pc == 0x451070u) {
        ctx->pc = 0x451070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45106Cu;
        // 0x451070: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x451074u;
        goto label_451074;
    }
    ctx->pc = 0x45106Cu;
    {
        const bool branch_taken_0x45106c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x45106c) {
            ctx->pc = 0x451070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45106Cu;
            // 0x451070: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x451080u;
            goto label_451080;
        }
    }
    ctx->pc = 0x451074u;
label_451074:
    // 0x451074: 0xc1295f2  jal         func_4A57C8
label_451078:
    if (ctx->pc == 0x451078u) {
        ctx->pc = 0x45107Cu;
        goto label_45107c;
    }
    ctx->pc = 0x451074u;
    SET_GPR_U32(ctx, 31, 0x45107Cu);
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x451074u, 0x45107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45107Cu;
label_45107c:
    // 0x45107c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x45107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_451080:
    // 0x451080: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_451084:
    if (ctx->pc == 0x451084u) {
        ctx->pc = 0x451084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451080u;
        // 0x451084: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x451088u;
        goto label_451088;
    }
    ctx->pc = 0x451080u;
    {
        const bool branch_taken_0x451080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x451080) {
            ctx->pc = 0x451084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x451080u;
            // 0x451084: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x451094u;
            goto label_451094;
        }
    }
    ctx->pc = 0x451088u;
label_451088:
    // 0x451088: 0xc1295f2  jal         func_4A57C8
label_45108c:
    if (ctx->pc == 0x45108Cu) {
        ctx->pc = 0x451090u;
        goto label_451090;
    }
    ctx->pc = 0x451088u;
    SET_GPR_U32(ctx, 31, 0x451090u);
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x451088u, 0x451090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451090u;
label_451090:
    // 0x451090: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x451090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_451094:
    // 0x451094: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_451098:
    if (ctx->pc == 0x451098u) {
        ctx->pc = 0x451098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451094u;
        // 0x451098: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x45109Cu;
        goto label_45109c;
    }
    ctx->pc = 0x451094u;
    {
        const bool branch_taken_0x451094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x451094) {
            ctx->pc = 0x451098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x451094u;
            // 0x451098: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4510A8u;
            goto label_4510a8;
        }
    }
    ctx->pc = 0x45109Cu;
label_45109c:
    // 0x45109c: 0xc1295f2  jal         func_4A57C8
label_4510a0:
    if (ctx->pc == 0x4510A0u) {
        ctx->pc = 0x4510A4u;
        goto label_4510a4;
    }
    ctx->pc = 0x45109Cu;
    SET_GPR_U32(ctx, 31, 0x4510A4u);
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x45109Cu, 0x4510A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4510A4u;
label_4510a4:
    // 0x4510a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4510a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4510a8:
    // 0x4510a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_4510ac:
    if (ctx->pc == 0x4510ACu) {
        ctx->pc = 0x4510ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4510A8u;
        // 0x4510ac: 0x8e42010c  lw          $v0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4510B0u;
        goto label_4510b0;
    }
    ctx->pc = 0x4510A8u;
    {
        const bool branch_taken_0x4510a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4510a8) {
            ctx->pc = 0x4510ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4510A8u;
            // 0x4510ac: 0x8e42010c  lw          $v0, 0x10C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4510BCu;
            goto label_4510bc;
        }
    }
    ctx->pc = 0x4510B0u;
label_4510b0:
    // 0x4510b0: 0xc1295f2  jal         func_4A57C8
label_4510b4:
    if (ctx->pc == 0x4510B4u) {
        ctx->pc = 0x4510B8u;
        goto label_4510b8;
    }
    ctx->pc = 0x4510B0u;
    SET_GPR_U32(ctx, 31, 0x4510B8u);
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x4510B0u, 0x4510B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4510B8u;
label_4510b8:
    // 0x4510b8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x4510b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_4510bc:
    // 0x4510bc: 0x40f809  jalr        $v0
label_4510c0:
    if (ctx->pc == 0x4510C0u) {
        ctx->pc = 0x4510C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4510BCu;
        // 0x4510c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4510C4u;
        goto label_4510c4;
    }
    ctx->pc = 0x4510BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4510C4u);
        ctx->pc = 0x4510C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4510BCu;
        // 0x4510c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4510BCu, 0x4510C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4510C4u;
label_4510c4:
    // 0x4510c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4510c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4510c8:
    // 0x4510c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4510c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4510cc:
    // 0x4510cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4510ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4510d0:
    // 0x4510d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4510d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4510d4:
    // 0x4510d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4510d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4510d8:
    // 0x4510d8: 0x3e00008  jr          $ra
label_4510dc:
    if (ctx->pc == 0x4510DCu) {
        ctx->pc = 0x4510DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4510D8u;
        // 0x4510dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4510E0u;
        goto label_fallthrough_0x4510d8;
    }
    ctx->pc = 0x4510D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4510DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4510D8u;
        // 0x4510dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4510D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4510d8:
    ctx->pc = 0x4510E0u;
}
