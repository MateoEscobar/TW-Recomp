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

// Function: sub_001AB038
// Address: 0x1ab038 - 0x1ab108
void sub_001AB038_0x1ab038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB038_0x1ab038");
#endif

    switch (ctx->pc) {
        case 0x1ab038u: goto label_1ab038;
        case 0x1ab03cu: goto label_1ab03c;
        case 0x1ab040u: goto label_1ab040;
        case 0x1ab044u: goto label_1ab044;
        case 0x1ab048u: goto label_1ab048;
        case 0x1ab04cu: goto label_1ab04c;
        case 0x1ab050u: goto label_1ab050;
        case 0x1ab054u: goto label_1ab054;
        case 0x1ab058u: goto label_1ab058;
        case 0x1ab05cu: goto label_1ab05c;
        case 0x1ab060u: goto label_1ab060;
        case 0x1ab064u: goto label_1ab064;
        case 0x1ab068u: goto label_1ab068;
        case 0x1ab06cu: goto label_1ab06c;
        case 0x1ab070u: goto label_1ab070;
        case 0x1ab074u: goto label_1ab074;
        case 0x1ab078u: goto label_1ab078;
        case 0x1ab07cu: goto label_1ab07c;
        case 0x1ab080u: goto label_1ab080;
        case 0x1ab084u: goto label_1ab084;
        case 0x1ab088u: goto label_1ab088;
        case 0x1ab08cu: goto label_1ab08c;
        case 0x1ab090u: goto label_1ab090;
        case 0x1ab094u: goto label_1ab094;
        case 0x1ab098u: goto label_1ab098;
        case 0x1ab09cu: goto label_1ab09c;
        case 0x1ab0a0u: goto label_1ab0a0;
        case 0x1ab0a4u: goto label_1ab0a4;
        case 0x1ab0a8u: goto label_1ab0a8;
        case 0x1ab0acu: goto label_1ab0ac;
        case 0x1ab0b0u: goto label_1ab0b0;
        case 0x1ab0b4u: goto label_1ab0b4;
        case 0x1ab0b8u: goto label_1ab0b8;
        case 0x1ab0bcu: goto label_1ab0bc;
        case 0x1ab0c0u: goto label_1ab0c0;
        case 0x1ab0c4u: goto label_1ab0c4;
        case 0x1ab0c8u: goto label_1ab0c8;
        case 0x1ab0ccu: goto label_1ab0cc;
        case 0x1ab0d0u: goto label_1ab0d0;
        case 0x1ab0d4u: goto label_1ab0d4;
        case 0x1ab0d8u: goto label_1ab0d8;
        case 0x1ab0dcu: goto label_1ab0dc;
        case 0x1ab0e0u: goto label_1ab0e0;
        case 0x1ab0e4u: goto label_1ab0e4;
        case 0x1ab0e8u: goto label_1ab0e8;
        case 0x1ab0ecu: goto label_1ab0ec;
        case 0x1ab0f0u: goto label_1ab0f0;
        case 0x1ab0f4u: goto label_1ab0f4;
        case 0x1ab0f8u: goto label_1ab0f8;
        case 0x1ab0fcu: goto label_1ab0fc;
        case 0x1ab100u: goto label_1ab100;
        case 0x1ab104u: goto label_1ab104;
        default: break;
    }

    ctx->pc = 0x1ab038u;

label_1ab038:
    // 0x1ab038: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1ab038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1ab03c:
    // 0x1ab03c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1ab03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_1ab040:
    // 0x1ab040: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1ab040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_1ab044:
    // 0x1ab044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab048:
    // 0x1ab048: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1ab048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_1ab04c:
    // 0x1ab04c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1ab04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_1ab050:
    // 0x1ab050: 0xc06abe2  jal         func_1AAF88
label_1ab054:
    if (ctx->pc == 0x1AB054u) {
        ctx->pc = 0x1AB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB050u;
        // 0x1ab054: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB058u;
        goto label_1ab058;
    }
    ctx->pc = 0x1AB050u;
    SET_GPR_U32(ctx, 31, 0x1AB058u);
    ctx->pc = 0x1AB054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB050u;
    // 0x1ab054: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAF88u, 0x1AB050u, 0x1AB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB058u;
label_1ab058:
    // 0x1ab058: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ab058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab05c:
    // 0x1ab05c: 0x8e020420  lw          $v0, 0x420($s0)
    ctx->pc = 0x1ab05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1056)));
label_1ab060:
    // 0x1ab060: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_1ab064:
    if (ctx->pc == 0x1AB064u) {
        ctx->pc = 0x1AB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB060u;
        // 0x1ab064: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB068u;
        goto label_1ab068;
    }
    ctx->pc = 0x1AB060u;
    {
        const bool branch_taken_0x1ab060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1AB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB060u;
        // 0x1ab064: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab060) {
            ctx->pc = 0x1AB07Cu;
            goto label_1ab07c;
        }
    }
    ctx->pc = 0x1AB068u;
label_1ab068:
    // 0x1ab068: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1ab068u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1ab06c:
    // 0x1ab06c: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1ab06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1ab070:
    // 0x1ab070: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ab070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ab074:
    // 0x1ab074: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ab074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ab078:
    // 0x1ab078: 0xac60411c  sw          $zero, 0x411C($v1)
    ctx->pc = 0x1ab078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16668), GPR_U32(ctx, 0));
label_1ab07c:
    // 0x1ab07c: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
label_1ab080:
    if (ctx->pc == 0x1AB080u) {
        ctx->pc = 0x1AB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB07Cu;
        // 0x1ab080: 0xae110420  sw          $s1, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB084u;
        goto label_1ab084;
    }
    ctx->pc = 0x1AB07Cu;
    {
        const bool branch_taken_0x1ab07c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1AB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB07Cu;
        // 0x1ab080: 0xae110420  sw          $s1, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab07c) {
            ctx->pc = 0x1AB0A4u;
            goto label_1ab0a4;
        }
    }
    ctx->pc = 0x1AB084u;
label_1ab084:
    // 0x1ab084: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ab084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab088:
    // 0x1ab088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab08c:
    // 0x1ab08c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ab08cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ab090:
    // 0x1ab090: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ab090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ab094:
    // 0x1ab094: 0x60f809  jalr        $v1
label_1ab098:
    if (ctx->pc == 0x1AB098u) {
        ctx->pc = 0x1AB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB094u;
        // 0x1ab098: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB09Cu;
        goto label_1ab09c;
    }
    ctx->pc = 0x1AB094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB09Cu);
        ctx->pc = 0x1AB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB094u;
        // 0x1ab098: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB094u, 0x1AB09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB09Cu;
label_1ab09c:
    // 0x1ab09c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ab0a0:
    if (ctx->pc == 0x1AB0A0u) {
        ctx->pc = 0x1AB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB09Cu;
        // 0x1ab0a0: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0A4u;
        goto label_1ab0a4;
    }
    ctx->pc = 0x1AB09Cu;
    {
        const bool branch_taken_0x1ab09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB09Cu;
        // 0x1ab0a0: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab09c) {
            ctx->pc = 0x1AB0C4u;
            goto label_1ab0c4;
        }
    }
    ctx->pc = 0x1AB0A4u;
label_1ab0a4:
    // 0x1ab0a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ab0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab0a8:
    // 0x1ab0a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab0ac:
    // 0x1ab0ac: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ab0acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ab0b0:
    // 0x1ab0b0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ab0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ab0b4:
    // 0x1ab0b4: 0x60f809  jalr        $v1
label_1ab0b8:
    if (ctx->pc == 0x1AB0B8u) {
        ctx->pc = 0x1AB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0B4u;
        // 0x1ab0b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0BCu;
        goto label_1ab0bc;
    }
    ctx->pc = 0x1AB0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB0BCu);
        ctx->pc = 0x1AB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0B4u;
        // 0x1ab0b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB0B4u, 0x1AB0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB0BCu;
label_1ab0bc:
    // 0x1ab0bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1ab0c0:
    if (ctx->pc == 0x1AB0C0u) {
        ctx->pc = 0x1AB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0BCu;
        // 0x1ab0c0: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0C4u;
        goto label_1ab0c4;
    }
    ctx->pc = 0x1AB0BCu;
    {
        const bool branch_taken_0x1ab0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0BCu;
        // 0x1ab0c0: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0bc) {
            ctx->pc = 0x1AB0F0u;
            goto label_1ab0f0;
        }
    }
    ctx->pc = 0x1AB0C4u;
label_1ab0c4:
    // 0x1ab0c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ab0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ab0c8:
    // 0x1ab0c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ab0c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ab0cc:
    // 0x1ab0cc: 0x24c64320  addiu       $a2, $a2, 0x4320
    ctx->pc = 0x1ab0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17184));
label_1ab0d0:
    // 0x1ab0d0: 0xc10ca04  jal         func_432810
label_1ab0d4:
    if (ctx->pc == 0x1AB0D4u) {
        ctx->pc = 0x1AB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0D0u;
        // 0x1ab0d4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0D8u;
        goto label_1ab0d8;
    }
    ctx->pc = 0x1AB0D0u;
    SET_GPR_U32(ctx, 31, 0x1AB0D8u);
    ctx->pc = 0x1AB0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0D0u;
    // 0x1ab0d4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1AB0D0u, 0x1AB0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0D8u;
label_1ab0d8:
    // 0x1ab0d8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1ab0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1ab0dc:
    // 0x1ab0dc: 0xc073478  jal         func_1CD1E0
label_1ab0e0:
    if (ctx->pc == 0x1AB0E0u) {
        ctx->pc = 0x1AB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0DCu;
        // 0x1ab0e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0E4u;
        goto label_1ab0e4;
    }
    ctx->pc = 0x1AB0DCu;
    SET_GPR_U32(ctx, 31, 0x1AB0E4u);
    ctx->pc = 0x1AB0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0DCu;
    // 0x1ab0e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1AB0DCu, 0x1AB0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0E4u;
label_1ab0e4:
    // 0x1ab0e4: 0xc06dbd8  jal         func_1B6F60
label_1ab0e8:
    if (ctx->pc == 0x1AB0E8u) {
        ctx->pc = 0x1AB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0E4u;
        // 0x1ab0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB0ECu;
        goto label_1ab0ec;
    }
    ctx->pc = 0x1AB0E4u;
    SET_GPR_U32(ctx, 31, 0x1AB0ECu);
    ctx->pc = 0x1AB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0E4u;
    // 0x1ab0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F60u, 0x1AB0E4u, 0x1AB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0ECu;
label_1ab0ec:
    // 0x1ab0ec: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1ab0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1ab0f0:
    // 0x1ab0f0: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1ab0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1ab0f4:
    // 0x1ab0f4: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1ab0f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1ab0f8:
    // 0x1ab0f8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1ab0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1ab0fc:
    // 0x1ab0fc: 0x3e00008  jr          $ra
label_1ab100:
    if (ctx->pc == 0x1AB100u) {
        ctx->pc = 0x1AB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0FCu;
        // 0x1ab100: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB104u;
        goto label_1ab104;
    }
    ctx->pc = 0x1AB0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0FCu;
        // 0x1ab100: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB104u;
label_1ab104:
    // 0x1ab104: 0x0  nop
    ctx->pc = 0x1ab104u;
    // NOP
    ctx->pc = 0x1ab108u;
}
