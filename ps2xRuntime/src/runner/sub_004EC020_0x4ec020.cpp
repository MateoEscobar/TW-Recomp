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

// Function: sub_004EC020
// Address: 0x4ec020 - 0x4ec0a0
void sub_004EC020_0x4ec020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC020_0x4ec020");
#endif

    switch (ctx->pc) {
        case 0x4ec020u: goto label_4ec020;
        case 0x4ec024u: goto label_4ec024;
        case 0x4ec028u: goto label_4ec028;
        case 0x4ec02cu: goto label_4ec02c;
        case 0x4ec030u: goto label_4ec030;
        case 0x4ec034u: goto label_4ec034;
        case 0x4ec038u: goto label_4ec038;
        case 0x4ec03cu: goto label_4ec03c;
        case 0x4ec040u: goto label_4ec040;
        case 0x4ec044u: goto label_4ec044;
        case 0x4ec048u: goto label_4ec048;
        case 0x4ec04cu: goto label_4ec04c;
        case 0x4ec050u: goto label_4ec050;
        case 0x4ec054u: goto label_4ec054;
        case 0x4ec058u: goto label_4ec058;
        case 0x4ec05cu: goto label_4ec05c;
        case 0x4ec060u: goto label_4ec060;
        case 0x4ec064u: goto label_4ec064;
        case 0x4ec068u: goto label_4ec068;
        case 0x4ec06cu: goto label_4ec06c;
        case 0x4ec070u: goto label_4ec070;
        case 0x4ec074u: goto label_4ec074;
        case 0x4ec078u: goto label_4ec078;
        case 0x4ec07cu: goto label_4ec07c;
        case 0x4ec080u: goto label_4ec080;
        case 0x4ec084u: goto label_4ec084;
        case 0x4ec088u: goto label_4ec088;
        case 0x4ec08cu: goto label_4ec08c;
        case 0x4ec090u: goto label_4ec090;
        case 0x4ec094u: goto label_4ec094;
        case 0x4ec098u: goto label_4ec098;
        case 0x4ec09cu: goto label_4ec09c;
        default: break;
    }

    ctx->pc = 0x4ec020u;

label_4ec020:
    // 0x4ec020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ec020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ec024:
    // 0x4ec024: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ec024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ec028:
    // 0x4ec028: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ec028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ec02c:
    // 0x4ec02c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ec02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ec030:
    // 0x4ec030: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ec030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ec034:
    // 0x4ec034: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ec034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ec038:
    // 0x4ec038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ec038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ec03c:
    // 0x4ec03c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ec040:
    if (ctx->pc == 0x4EC040u) {
        ctx->pc = 0x4EC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC03Cu;
        // 0x4ec040: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC044u;
        goto label_4ec044;
    }
    ctx->pc = 0x4EC03Cu;
    {
        const bool branch_taken_0x4ec03c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC03Cu;
        // 0x4ec040: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec03c) {
            ctx->pc = 0x4EC084u;
            goto label_4ec084;
        }
    }
    ctx->pc = 0x4EC044u;
label_4ec044:
    // 0x4ec044: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ec044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ec048:
    // 0x4ec048: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec04c:
    // 0x4ec04c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ec04cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ec050:
    // 0x4ec050: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ec050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ec054:
    // 0x4ec054: 0x60f809  jalr        $v1
label_4ec058:
    if (ctx->pc == 0x4EC058u) {
        ctx->pc = 0x4EC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC054u;
        // 0x4ec058: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC05Cu;
        goto label_4ec05c;
    }
    ctx->pc = 0x4EC054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EC05Cu);
        ctx->pc = 0x4EC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC054u;
        // 0x4ec058: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC054u, 0x4EC05Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EC05Cu;
label_4ec05c:
    // 0x4ec05c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ec05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ec060:
    // 0x4ec060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ec060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ec064:
    // 0x4ec064: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ec064u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ec068:
    // 0x4ec068: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ec068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ec06c:
    // 0x4ec06c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ec06cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ec070:
    // 0x4ec070: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ec070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ec074:
    // 0x4ec074: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ec074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ec078:
    // 0x4ec078: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ec078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ec07c:
    // 0x4ec07c: 0x60f809  jalr        $v1
label_4ec080:
    if (ctx->pc == 0x4EC080u) {
        ctx->pc = 0x4EC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC07Cu;
        // 0x4ec080: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC084u;
        goto label_4ec084;
    }
    ctx->pc = 0x4EC07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EC084u);
        ctx->pc = 0x4EC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC07Cu;
        // 0x4ec080: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC07Cu, 0x4EC084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EC084u;
label_4ec084:
    // 0x4ec084: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ec084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ec088:
    // 0x4ec088: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ec088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ec08c:
    // 0x4ec08c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ec08cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ec090:
    // 0x4ec090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ec090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ec094:
    // 0x4ec094: 0x3e00008  jr          $ra
label_4ec098:
    if (ctx->pc == 0x4EC098u) {
        ctx->pc = 0x4EC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC094u;
        // 0x4ec098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC09Cu;
        goto label_4ec09c;
    }
    ctx->pc = 0x4EC094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC094u;
        // 0x4ec098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EC09Cu;
label_4ec09c:
    // 0x4ec09c: 0x0  nop
    ctx->pc = 0x4ec09cu;
    // NOP
    ctx->pc = 0x4ec0a0u;
}
