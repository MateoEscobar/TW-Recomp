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

// Function: sub_001E1FE0
// Address: 0x1e1fe0 - 0x1e2090
void sub_001E1FE0_0x1e1fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1FE0_0x1e1fe0");
#endif

    switch (ctx->pc) {
        case 0x1e1fe0u: goto label_1e1fe0;
        case 0x1e1fe4u: goto label_1e1fe4;
        case 0x1e1fe8u: goto label_1e1fe8;
        case 0x1e1fecu: goto label_1e1fec;
        case 0x1e1ff0u: goto label_1e1ff0;
        case 0x1e1ff4u: goto label_1e1ff4;
        case 0x1e1ff8u: goto label_1e1ff8;
        case 0x1e1ffcu: goto label_1e1ffc;
        case 0x1e2000u: goto label_1e2000;
        case 0x1e2004u: goto label_1e2004;
        case 0x1e2008u: goto label_1e2008;
        case 0x1e200cu: goto label_1e200c;
        case 0x1e2010u: goto label_1e2010;
        case 0x1e2014u: goto label_1e2014;
        case 0x1e2018u: goto label_1e2018;
        case 0x1e201cu: goto label_1e201c;
        case 0x1e2020u: goto label_1e2020;
        case 0x1e2024u: goto label_1e2024;
        case 0x1e2028u: goto label_1e2028;
        case 0x1e202cu: goto label_1e202c;
        case 0x1e2030u: goto label_1e2030;
        case 0x1e2034u: goto label_1e2034;
        case 0x1e2038u: goto label_1e2038;
        case 0x1e203cu: goto label_1e203c;
        case 0x1e2040u: goto label_1e2040;
        case 0x1e2044u: goto label_1e2044;
        case 0x1e2048u: goto label_1e2048;
        case 0x1e204cu: goto label_1e204c;
        case 0x1e2050u: goto label_1e2050;
        case 0x1e2054u: goto label_1e2054;
        case 0x1e2058u: goto label_1e2058;
        case 0x1e205cu: goto label_1e205c;
        case 0x1e2060u: goto label_1e2060;
        case 0x1e2064u: goto label_1e2064;
        case 0x1e2068u: goto label_1e2068;
        case 0x1e206cu: goto label_1e206c;
        case 0x1e2070u: goto label_1e2070;
        case 0x1e2074u: goto label_1e2074;
        case 0x1e2078u: goto label_1e2078;
        case 0x1e207cu: goto label_1e207c;
        case 0x1e2080u: goto label_1e2080;
        case 0x1e2084u: goto label_1e2084;
        case 0x1e2088u: goto label_1e2088;
        case 0x1e208cu: goto label_1e208c;
        default: break;
    }

    ctx->pc = 0x1e1fe0u;

label_1e1fe0:
    // 0x1e1fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e1fe4:
    // 0x1e1fe4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e1fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e1fe8:
    // 0x1e1fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1fec:
    // 0x1e1fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1ff0:
    // 0x1e1ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ff4:
    // 0x1e1ff4: 0x8e2600cc  lw          $a2, 0xCC($s1)
    ctx->pc = 0x1e1ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_1e1ff8:
    // 0x1e1ff8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1e1ffc:
    if (ctx->pc == 0x1E1FFCu) {
        ctx->pc = 0x1E1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FF8u;
        // 0x1e1ffc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2000u;
        goto label_1e2000;
    }
    ctx->pc = 0x1E1FF8u;
    {
        const bool branch_taken_0x1e1ff8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FF8u;
        // 0x1e1ffc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ff8) {
            ctx->pc = 0x1E201Cu;
            goto label_1e201c;
        }
    }
    ctx->pc = 0x1E2000u;
label_1e2000:
    // 0x1e2000: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x1e2000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_1e2004:
    // 0x1e2004: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1e2004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1e2008:
    // 0x1e2008: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e2008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e200c:
    // 0x1e200c: 0x40f809  jalr        $v0
label_1e2010:
    if (ctx->pc == 0x1E2010u) {
        ctx->pc = 0x1E2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E200Cu;
        // 0x1e2010: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2014u;
        goto label_1e2014;
    }
    ctx->pc = 0x1E200Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2014u);
        ctx->pc = 0x1E2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E200Cu;
        // 0x1e2010: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E200Cu, 0x1E2014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2014u;
label_1e2014:
    // 0x1e2014: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1e2018:
    if (ctx->pc == 0x1E2018u) {
        ctx->pc = 0x1E2018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2014u;
        // 0x1e2018: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E201Cu;
        goto label_1e201c;
    }
    ctx->pc = 0x1E2014u;
    {
        const bool branch_taken_0x1e2014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2014u;
        // 0x1e2018: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2014) {
            ctx->pc = 0x1E205Cu;
            goto label_1e205c;
        }
    }
    ctx->pc = 0x1E201Cu;
label_1e201c:
    // 0x1e201c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1e2020:
    if (ctx->pc == 0x1E2020u) {
        ctx->pc = 0x1E2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E201Cu;
        // 0x1e2020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2024u;
        goto label_1e2024;
    }
    ctx->pc = 0x1E201Cu;
    {
        const bool branch_taken_0x1e201c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E201Cu;
        // 0x1e2020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e201c) {
            ctx->pc = 0x1E2034u;
            goto label_1e2034;
        }
    }
    ctx->pc = 0x1E2024u;
label_1e2024:
    // 0x1e2024: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_1e2028:
    if (ctx->pc == 0x1E2028u) {
        ctx->pc = 0x1E2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2024u;
        // 0x1e2028: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E202Cu;
        goto label_1e202c;
    }
    ctx->pc = 0x1E2024u;
    {
        const bool branch_taken_0x1e2024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2024u;
        // 0x1e2028: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2024) {
            ctx->pc = 0x1E2044u;
            goto label_1e2044;
        }
    }
    ctx->pc = 0x1E202Cu;
label_1e202c:
    // 0x1e202c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e2030:
    if (ctx->pc == 0x1E2030u) {
        ctx->pc = 0x1E2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E202Cu;
        // 0x1e2030: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2034u;
        goto label_1e2034;
    }
    ctx->pc = 0x1E202Cu;
    {
        const bool branch_taken_0x1e202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E202Cu;
        // 0x1e2030: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e202c) {
            ctx->pc = 0x1E2084u;
            goto label_1e2084;
        }
    }
    ctx->pc = 0x1E2034u;
label_1e2034:
    // 0x1e2034: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2038:
    // 0x1e2038: 0x844401a8  lh          $a0, 0x1A8($v0)
    ctx->pc = 0x1e2038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
label_1e203c:
    // 0x1e203c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e2040:
    if (ctx->pc == 0x1E2040u) {
        ctx->pc = 0x1E2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E203Cu;
        // 0x1e2040: 0x8c4301ac  lw          $v1, 0x1AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2044u;
        goto label_1e2044;
    }
    ctx->pc = 0x1E203Cu;
    {
        const bool branch_taken_0x1e203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E203Cu;
        // 0x1e2040: 0x8c4301ac  lw          $v1, 0x1AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e203c) {
            ctx->pc = 0x1E2050u;
            goto label_1e2050;
        }
    }
    ctx->pc = 0x1E2044u;
label_1e2044:
    // 0x1e2044: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e2044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2048:
    // 0x1e2048: 0x844401b0  lh          $a0, 0x1B0($v0)
    ctx->pc = 0x1e2048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_1e204c:
    // 0x1e204c: 0x8c4301b4  lw          $v1, 0x1B4($v0)
    ctx->pc = 0x1e204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
label_1e2050:
    // 0x1e2050: 0x60f809  jalr        $v1
label_1e2054:
    if (ctx->pc == 0x1E2054u) {
        ctx->pc = 0x1E2054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2050u;
        // 0x1e2054: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2058u;
        goto label_1e2058;
    }
    ctx->pc = 0x1E2050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2058u);
        ctx->pc = 0x1E2054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2050u;
        // 0x1e2054: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2050u, 0x1E2058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2058u;
label_1e2058:
    // 0x1e2058: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e2058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e205c:
    // 0x1e205c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1e205cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1e2060:
    // 0x1e2060: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e2060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e2064:
    // 0x1e2064: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e2064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e2068:
    // 0x1e2068: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e2068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e206c:
    // 0x1e206c: 0x40f809  jalr        $v0
label_1e2070:
    if (ctx->pc == 0x1E2070u) {
        ctx->pc = 0x1E2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E206Cu;
        // 0x1e2070: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2074u;
        goto label_1e2074;
    }
    ctx->pc = 0x1E206Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2074u);
        ctx->pc = 0x1E2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E206Cu;
        // 0x1e2070: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E206Cu, 0x1E2074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2074u;
label_1e2074:
    // 0x1e2074: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x1e2074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_1e2078:
    // 0x1e2078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e207c:
    // 0x1e207c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e207cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2080:
    // 0x1e2080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2084:
    // 0x1e2084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2088:
    // 0x1e2088: 0x3e00008  jr          $ra
label_1e208c:
    if (ctx->pc == 0x1E208Cu) {
        ctx->pc = 0x1E208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2088u;
        // 0x1e208c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2090u;
        goto label_fallthrough_0x1e2088;
    }
    ctx->pc = 0x1E2088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2088u;
        // 0x1e208c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2088:
    ctx->pc = 0x1E2090u;
}
