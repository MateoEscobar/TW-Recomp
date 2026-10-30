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

// Function: sub_003CAFF0
// Address: 0x3caff0 - 0x3cb0a0
void sub_003CAFF0_0x3caff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CAFF0_0x3caff0");
#endif

    switch (ctx->pc) {
        case 0x3caff0u: goto label_3caff0;
        case 0x3caff4u: goto label_3caff4;
        case 0x3caff8u: goto label_3caff8;
        case 0x3caffcu: goto label_3caffc;
        case 0x3cb000u: goto label_3cb000;
        case 0x3cb004u: goto label_3cb004;
        case 0x3cb008u: goto label_3cb008;
        case 0x3cb00cu: goto label_3cb00c;
        case 0x3cb010u: goto label_3cb010;
        case 0x3cb014u: goto label_3cb014;
        case 0x3cb018u: goto label_3cb018;
        case 0x3cb01cu: goto label_3cb01c;
        case 0x3cb020u: goto label_3cb020;
        case 0x3cb024u: goto label_3cb024;
        case 0x3cb028u: goto label_3cb028;
        case 0x3cb02cu: goto label_3cb02c;
        case 0x3cb030u: goto label_3cb030;
        case 0x3cb034u: goto label_3cb034;
        case 0x3cb038u: goto label_3cb038;
        case 0x3cb03cu: goto label_3cb03c;
        case 0x3cb040u: goto label_3cb040;
        case 0x3cb044u: goto label_3cb044;
        case 0x3cb048u: goto label_3cb048;
        case 0x3cb04cu: goto label_3cb04c;
        case 0x3cb050u: goto label_3cb050;
        case 0x3cb054u: goto label_3cb054;
        case 0x3cb058u: goto label_3cb058;
        case 0x3cb05cu: goto label_3cb05c;
        case 0x3cb060u: goto label_3cb060;
        case 0x3cb064u: goto label_3cb064;
        case 0x3cb068u: goto label_3cb068;
        case 0x3cb06cu: goto label_3cb06c;
        case 0x3cb070u: goto label_3cb070;
        case 0x3cb074u: goto label_3cb074;
        case 0x3cb078u: goto label_3cb078;
        case 0x3cb07cu: goto label_3cb07c;
        case 0x3cb080u: goto label_3cb080;
        case 0x3cb084u: goto label_3cb084;
        case 0x3cb088u: goto label_3cb088;
        case 0x3cb08cu: goto label_3cb08c;
        case 0x3cb090u: goto label_3cb090;
        case 0x3cb094u: goto label_3cb094;
        case 0x3cb098u: goto label_3cb098;
        case 0x3cb09cu: goto label_3cb09c;
        default: break;
    }

    ctx->pc = 0x3caff0u;

label_3caff0:
    // 0x3caff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3caff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3caff4:
    // 0x3caff4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3caff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3caff8:
    // 0x3caff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3caff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3caffc:
    // 0x3caffc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3caffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cb000:
    // 0x3cb000: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3cb000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3cb004:
    // 0x3cb004: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3cb004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cb008:
    // 0x3cb008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cb008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3cb00c:
    // 0x3cb00c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cb00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cb010:
    // 0x3cb010: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3cb010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cb014:
    // 0x3cb014: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cb014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cb018:
    // 0x3cb018: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cb018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cb01c:
    // 0x3cb01c: 0x40f809  jalr        $v0
label_3cb020:
    if (ctx->pc == 0x3CB020u) {
        ctx->pc = 0x3CB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB01Cu;
        // 0x3cb020: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB024u;
        goto label_3cb024;
    }
    ctx->pc = 0x3CB01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CB024u);
        ctx->pc = 0x3CB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB01Cu;
        // 0x3cb020: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB01Cu, 0x3CB024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB024u;
label_3cb024:
    // 0x3cb024: 0x2603ffeb  addiu       $v1, $s0, -0x15
    ctx->pc = 0x3cb024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967275));
label_3cb028:
    // 0x3cb028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cb028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb02c:
    // 0x3cb02c: 0x2c62002d  sltiu       $v0, $v1, 0x2D
    ctx->pc = 0x3cb02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
label_3cb030:
    // 0x3cb030: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3cb034:
    if (ctx->pc == 0x3CB034u) {
        ctx->pc = 0x3CB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB030u;
        // 0x3cb034: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB038u;
        goto label_3cb038;
    }
    ctx->pc = 0x3CB030u;
    {
        const bool branch_taken_0x3cb030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB030u;
        // 0x3cb034: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb030) {
            ctx->pc = 0x3CB0ACu;
            return;
        }
    }
    ctx->pc = 0x3CB038u;
label_3cb038:
    // 0x3cb038: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cb038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3cb03c:
    // 0x3cb03c: 0x244246e0  addiu       $v0, $v0, 0x46E0
    ctx->pc = 0x3cb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18144));
label_3cb040:
    // 0x3cb040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3cb040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3cb044:
    // 0x3cb044: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3cb044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cb048:
    // 0x3cb048: 0x800008  jr          $a0
label_3cb04c:
    if (ctx->pc == 0x3CB04Cu) {
        ctx->pc = 0x3CB050u;
        goto label_3cb050;
    }
    ctx->pc = 0x3CB048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CB050u: goto label_3cb050;
            case 0x3CB074u: goto label_3cb074;
            case 0x3CB084u: goto label_3cb084;
            case 0x3CB094u: goto label_3cb094;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB048u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3CB050u;
label_3cb050:
    // 0x3cb050: 0xc0e93de  jal         func_3A4F78
label_3cb054:
    if (ctx->pc == 0x3CB054u) {
        ctx->pc = 0x3CB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB050u;
        // 0x3cb054: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB058u;
        goto label_3cb058;
    }
    ctx->pc = 0x3CB050u;
    SET_GPR_U32(ctx, 31, 0x3CB058u);
    ctx->pc = 0x3CB054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB050u;
    // 0x3cb054: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3CB050u, 0x3CB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB058u;
label_3cb058:
    // 0x3cb058: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3cb058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cb05c:
    // 0x3cb05c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3cb05cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3cb060:
    // 0x3cb060: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3cb060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3cb064:
    // 0x3cb064: 0x40f809  jalr        $v0
label_3cb068:
    if (ctx->pc == 0x3CB068u) {
        ctx->pc = 0x3CB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB064u;
        // 0x3cb068: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB06Cu;
        goto label_3cb06c;
    }
    ctx->pc = 0x3CB064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CB06Cu);
        ctx->pc = 0x3CB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB064u;
        // 0x3cb068: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CB094u: goto label_3cb094;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB064u, 0x3CB06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB06Cu;
label_3cb06c:
    // 0x3cb06c: 0x10000010  b           . + 4 + (0x10 << 2)
label_3cb070:
    if (ctx->pc == 0x3CB070u) {
        ctx->pc = 0x3CB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB06Cu;
        // 0x3cb070: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB074u;
        goto label_3cb074;
    }
    ctx->pc = 0x3CB06Cu;
    {
        const bool branch_taken_0x3cb06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB06Cu;
        // 0x3cb070: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb06c) {
            ctx->pc = 0x3CB0B0u;
            return;
        }
    }
    ctx->pc = 0x3CB074u;
label_3cb074:
    // 0x3cb074: 0xc0ea146  jal         func_3A8518
label_3cb078:
    if (ctx->pc == 0x3CB078u) {
        ctx->pc = 0x3CB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB074u;
        // 0x3cb078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB07Cu;
        goto label_3cb07c;
    }
    ctx->pc = 0x3CB074u;
    SET_GPR_U32(ctx, 31, 0x3CB07Cu);
    ctx->pc = 0x3CB078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB074u;
    // 0x3cb078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CB074u, 0x3CB07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB07Cu;
label_3cb07c:
    // 0x3cb07c: 0x1000000b  b           . + 4 + (0xB << 2)
label_3cb080:
    if (ctx->pc == 0x3CB080u) {
        ctx->pc = 0x3CB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB07Cu;
        // 0x3cb080: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB084u;
        goto label_3cb084;
    }
    ctx->pc = 0x3CB07Cu;
    {
        const bool branch_taken_0x3cb07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB07Cu;
        // 0x3cb080: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb07c) {
            ctx->pc = 0x3CB0ACu;
            return;
        }
    }
    ctx->pc = 0x3CB084u;
label_3cb084:
    // 0x3cb084: 0xc0ea146  jal         func_3A8518
label_3cb088:
    if (ctx->pc == 0x3CB088u) {
        ctx->pc = 0x3CB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB084u;
        // 0x3cb088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB08Cu;
        goto label_3cb08c;
    }
    ctx->pc = 0x3CB084u;
    SET_GPR_U32(ctx, 31, 0x3CB08Cu);
    ctx->pc = 0x3CB088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB084u;
    // 0x3cb088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CB084u, 0x3CB08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB08Cu;
label_3cb08c:
    // 0x3cb08c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3cb090:
    if (ctx->pc == 0x3CB090u) {
        ctx->pc = 0x3CB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB08Cu;
        // 0x3cb090: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB094u;
        goto label_3cb094;
    }
    ctx->pc = 0x3CB08Cu;
    {
        const bool branch_taken_0x3cb08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB08Cu;
        // 0x3cb090: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb08c) {
            ctx->pc = 0x3CB0ACu;
            return;
        }
    }
    ctx->pc = 0x3CB094u;
label_3cb094:
    // 0x3cb094: 0xc0ea13a  jal         func_3A84E8
label_3cb098:
    if (ctx->pc == 0x3CB098u) {
        ctx->pc = 0x3CB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB094u;
        // 0x3cb098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB09Cu;
        goto label_3cb09c;
    }
    ctx->pc = 0x3CB094u;
    SET_GPR_U32(ctx, 31, 0x3CB09Cu);
    ctx->pc = 0x3CB098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB094u;
    // 0x3cb098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3CB094u, 0x3CB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB09Cu;
label_3cb09c:
    // 0x3cb09c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x3cb09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x3cb0a0u;
}
