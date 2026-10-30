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

// Function: sub_0041C028
// Address: 0x41c028 - 0x41c1f8
void sub_0041C028_0x41c028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C028_0x41c028");
#endif

    switch (ctx->pc) {
        case 0x41c028u: goto label_41c028;
        case 0x41c02cu: goto label_41c02c;
        case 0x41c030u: goto label_41c030;
        case 0x41c034u: goto label_41c034;
        case 0x41c038u: goto label_41c038;
        case 0x41c03cu: goto label_41c03c;
        case 0x41c040u: goto label_41c040;
        case 0x41c044u: goto label_41c044;
        case 0x41c048u: goto label_41c048;
        case 0x41c04cu: goto label_41c04c;
        case 0x41c050u: goto label_41c050;
        case 0x41c054u: goto label_41c054;
        case 0x41c058u: goto label_41c058;
        case 0x41c05cu: goto label_41c05c;
        case 0x41c060u: goto label_41c060;
        case 0x41c064u: goto label_41c064;
        case 0x41c068u: goto label_41c068;
        case 0x41c06cu: goto label_41c06c;
        case 0x41c070u: goto label_41c070;
        case 0x41c074u: goto label_41c074;
        case 0x41c078u: goto label_41c078;
        case 0x41c07cu: goto label_41c07c;
        case 0x41c080u: goto label_41c080;
        case 0x41c084u: goto label_41c084;
        case 0x41c088u: goto label_41c088;
        case 0x41c08cu: goto label_41c08c;
        case 0x41c090u: goto label_41c090;
        case 0x41c094u: goto label_41c094;
        case 0x41c098u: goto label_41c098;
        case 0x41c09cu: goto label_41c09c;
        case 0x41c0a0u: goto label_41c0a0;
        case 0x41c0a4u: goto label_41c0a4;
        case 0x41c0a8u: goto label_41c0a8;
        case 0x41c0acu: goto label_41c0ac;
        case 0x41c0b0u: goto label_41c0b0;
        case 0x41c0b4u: goto label_41c0b4;
        case 0x41c0b8u: goto label_41c0b8;
        case 0x41c0bcu: goto label_41c0bc;
        case 0x41c0c0u: goto label_41c0c0;
        case 0x41c0c4u: goto label_41c0c4;
        case 0x41c0c8u: goto label_41c0c8;
        case 0x41c0ccu: goto label_41c0cc;
        case 0x41c0d0u: goto label_41c0d0;
        case 0x41c0d4u: goto label_41c0d4;
        case 0x41c0d8u: goto label_41c0d8;
        case 0x41c0dcu: goto label_41c0dc;
        case 0x41c0e0u: goto label_41c0e0;
        case 0x41c0e4u: goto label_41c0e4;
        case 0x41c0e8u: goto label_41c0e8;
        case 0x41c0ecu: goto label_41c0ec;
        case 0x41c0f0u: goto label_41c0f0;
        case 0x41c0f4u: goto label_41c0f4;
        case 0x41c0f8u: goto label_41c0f8;
        case 0x41c0fcu: goto label_41c0fc;
        case 0x41c100u: goto label_41c100;
        case 0x41c104u: goto label_41c104;
        case 0x41c108u: goto label_41c108;
        case 0x41c10cu: goto label_41c10c;
        case 0x41c110u: goto label_41c110;
        case 0x41c114u: goto label_41c114;
        case 0x41c118u: goto label_41c118;
        case 0x41c11cu: goto label_41c11c;
        case 0x41c120u: goto label_41c120;
        case 0x41c124u: goto label_41c124;
        case 0x41c128u: goto label_41c128;
        case 0x41c12cu: goto label_41c12c;
        case 0x41c130u: goto label_41c130;
        case 0x41c134u: goto label_41c134;
        case 0x41c138u: goto label_41c138;
        case 0x41c13cu: goto label_41c13c;
        case 0x41c140u: goto label_41c140;
        case 0x41c144u: goto label_41c144;
        case 0x41c148u: goto label_41c148;
        case 0x41c14cu: goto label_41c14c;
        case 0x41c150u: goto label_41c150;
        case 0x41c154u: goto label_41c154;
        case 0x41c158u: goto label_41c158;
        case 0x41c15cu: goto label_41c15c;
        case 0x41c160u: goto label_41c160;
        case 0x41c164u: goto label_41c164;
        case 0x41c168u: goto label_41c168;
        case 0x41c16cu: goto label_41c16c;
        case 0x41c170u: goto label_41c170;
        case 0x41c174u: goto label_41c174;
        case 0x41c178u: goto label_41c178;
        case 0x41c17cu: goto label_41c17c;
        case 0x41c180u: goto label_41c180;
        case 0x41c184u: goto label_41c184;
        case 0x41c188u: goto label_41c188;
        case 0x41c18cu: goto label_41c18c;
        case 0x41c190u: goto label_41c190;
        case 0x41c194u: goto label_41c194;
        case 0x41c198u: goto label_41c198;
        case 0x41c19cu: goto label_41c19c;
        case 0x41c1a0u: goto label_41c1a0;
        case 0x41c1a4u: goto label_41c1a4;
        case 0x41c1a8u: goto label_41c1a8;
        case 0x41c1acu: goto label_41c1ac;
        case 0x41c1b0u: goto label_41c1b0;
        case 0x41c1b4u: goto label_41c1b4;
        case 0x41c1b8u: goto label_41c1b8;
        case 0x41c1bcu: goto label_41c1bc;
        case 0x41c1c0u: goto label_41c1c0;
        case 0x41c1c4u: goto label_41c1c4;
        case 0x41c1c8u: goto label_41c1c8;
        case 0x41c1ccu: goto label_41c1cc;
        case 0x41c1d0u: goto label_41c1d0;
        case 0x41c1d4u: goto label_41c1d4;
        case 0x41c1d8u: goto label_41c1d8;
        case 0x41c1dcu: goto label_41c1dc;
        case 0x41c1e0u: goto label_41c1e0;
        case 0x41c1e4u: goto label_41c1e4;
        case 0x41c1e8u: goto label_41c1e8;
        case 0x41c1ecu: goto label_41c1ec;
        case 0x41c1f0u: goto label_41c1f0;
        case 0x41c1f4u: goto label_41c1f4;
        default: break;
    }

    ctx->pc = 0x41c028u;

label_41c028:
    // 0x41c028: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41c028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41c02c:
    // 0x41c02c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41c02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41c030:
    // 0x41c030: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41c030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_41c034:
    // 0x41c034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41c034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41c038:
    // 0x41c038: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41c038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_41c03c:
    // 0x41c03c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41c040:
    // 0x41c040: 0x8e2502b4  lw          $a1, 0x2B4($s1)
    ctx->pc = 0x41c040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
label_41c044:
    // 0x41c044: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_41c048:
    if (ctx->pc == 0x41C048u) {
        ctx->pc = 0x41C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C044u;
        // 0x41c048: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C04Cu;
        goto label_41c04c;
    }
    ctx->pc = 0x41C044u;
    {
        const bool branch_taken_0x41c044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C044u;
        // 0x41c048: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c044) {
            ctx->pc = 0x41C074u;
            goto label_41c074;
        }
    }
    ctx->pc = 0x41C04Cu;
label_41c04c:
    // 0x41c04c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x41c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_41c050:
    // 0x41c050: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x41c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_41c054:
    // 0x41c054: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x41c054u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_41c058:
    // 0x41c058: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_41c05c:
    if (ctx->pc == 0x41C05Cu) {
        ctx->pc = 0x41C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C058u;
        // 0x41c05c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C060u;
        goto label_41c060;
    }
    ctx->pc = 0x41C058u;
    {
        const bool branch_taken_0x41c058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C058u;
        // 0x41c05c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c058) {
            ctx->pc = 0x41C074u;
            goto label_41c074;
        }
    }
    ctx->pc = 0x41C060u;
label_41c060:
    // 0x41c060: 0x8e2502b8  lw          $a1, 0x2B8($s1)
    ctx->pc = 0x41c060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_41c064:
    // 0x41c064: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x41c064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_41c068:
    // 0x41c068: 0xc0440c6  jal         func_110318
label_41c06c:
    if (ctx->pc == 0x41C06Cu) {
        ctx->pc = 0x41C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C068u;
        // 0x41c06c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C070u;
        goto label_41c070;
    }
    ctx->pc = 0x41C068u;
    SET_GPR_U32(ctx, 31, 0x41C070u);
    ctx->pc = 0x41C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C068u;
    // 0x41c06c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x41C068u, 0x41C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C070u;
label_41c070:
    // 0x41c070: 0xae2002b4  sw          $zero, 0x2B4($s1)
    ctx->pc = 0x41c070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
label_41c074:
    // 0x41c074: 0x8e2502a8  lw          $a1, 0x2A8($s1)
    ctx->pc = 0x41c074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_41c078:
    // 0x41c078: 0x10a00059  beqz        $a1, . + 4 + (0x59 << 2)
label_41c07c:
    if (ctx->pc == 0x41C07Cu) {
        ctx->pc = 0x41C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C078u;
        // 0x41c07c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C080u;
        goto label_41c080;
    }
    ctx->pc = 0x41C078u;
    {
        const bool branch_taken_0x41c078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C078u;
        // 0x41c07c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c078) {
            ctx->pc = 0x41C1E0u;
            goto label_41c1e0;
        }
    }
    ctx->pc = 0x41C080u;
label_41c080:
    // 0x41c080: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x41c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_41c084:
    // 0x41c084: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x41c084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_41c088:
    // 0x41c088: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x41c088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41c08c:
    // 0x41c08c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_41c090:
    if (ctx->pc == 0x41C090u) {
        ctx->pc = 0x41C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C08Cu;
        // 0x41c090: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C094u;
        goto label_41c094;
    }
    ctx->pc = 0x41C08Cu;
    {
        const bool branch_taken_0x41c08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C08Cu;
        // 0x41c090: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c08c) {
            ctx->pc = 0x41C1E0u;
            goto label_41c1e0;
        }
    }
    ctx->pc = 0x41C094u;
label_41c094:
    // 0x41c094: 0x92300291  lbu         $s0, 0x291($s1)
    ctx->pc = 0x41c094u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 657)));
label_41c098:
    // 0x41c098: 0x5a000005  blezl       $s0, . + 4 + (0x5 << 2)
label_41c09c:
    if (ctx->pc == 0x41C09Cu) {
        ctx->pc = 0x41C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C098u;
        // 0x41c09c: 0x86220322  lh          $v0, 0x322($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 802)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C0A0u;
        goto label_41c0a0;
    }
    ctx->pc = 0x41C098u;
    {
        const bool branch_taken_0x41c098 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x41c098) {
            ctx->pc = 0x41C09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C098u;
            // 0x41c09c: 0x86220322  lh          $v0, 0x322($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 802)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C0B0u;
            goto label_41c0b0;
        }
    }
    ctx->pc = 0x41C0A0u;
label_41c0a0:
    // 0x41c0a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x41c0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_41c0a4:
    // 0x41c0a4: 0x1e000008  bgtz        $s0, . + 4 + (0x8 << 2)
label_41c0a8:
    if (ctx->pc == 0x41C0A8u) {
        ctx->pc = 0x41C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0A4u;
        // 0x41c0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C0ACu;
        goto label_41c0ac;
    }
    ctx->pc = 0x41C0A4u;
    {
        const bool branch_taken_0x41c0a4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x41C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0A4u;
        // 0x41c0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c0a4) {
            ctx->pc = 0x41C0C8u;
            goto label_41c0c8;
        }
    }
    ctx->pc = 0x41C0ACu;
label_41c0ac:
    // 0x41c0ac: 0x86220322  lh          $v0, 0x322($s1)
    ctx->pc = 0x41c0acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 802)));
label_41c0b0:
    // 0x41c0b0: 0x5c40004c  bgtzl       $v0, . + 4 + (0x4C << 2)
label_41c0b4:
    if (ctx->pc == 0x41C0B4u) {
        ctx->pc = 0x41C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0B0u;
        // 0x41c0b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C0B8u;
        goto label_41c0b8;
    }
    ctx->pc = 0x41C0B0u;
    {
        const bool branch_taken_0x41c0b0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x41c0b0) {
            ctx->pc = 0x41C0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C0B0u;
            // 0x41c0b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C1E4u;
            goto label_41c1e4;
        }
    }
    ctx->pc = 0x41C0B8u;
label_41c0b8:
    // 0x41c0b8: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x41c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
label_41c0bc:
    // 0x41c0bc: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_41c0c0:
    if (ctx->pc == 0x41C0C0u) {
        ctx->pc = 0x41C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0BCu;
        // 0x41c0c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C0C4u;
        goto label_41c0c4;
    }
    ctx->pc = 0x41C0BCu;
    {
        const bool branch_taken_0x41c0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c0bc) {
            ctx->pc = 0x41C0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C0BCu;
            // 0x41c0c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C1E4u;
            goto label_41c1e4;
        }
    }
    ctx->pc = 0x41C0C4u;
label_41c0c4:
    // 0x41c0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c0c8:
    // 0x41c0c8: 0xc106b64  jal         func_41AD90
label_41c0cc:
    if (ctx->pc == 0x41C0CCu) {
        ctx->pc = 0x41C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0C8u;
        // 0x41c0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C0D0u;
        goto label_41c0d0;
    }
    ctx->pc = 0x41C0C8u;
    SET_GPR_U32(ctx, 31, 0x41C0D0u);
    ctx->pc = 0x41C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C0C8u;
    // 0x41c0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AD90u, 0x41C0C8u, 0x41C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C0D0u;
label_41c0d0:
    // 0x41c0d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41c0d4:
    // 0x41c0d4: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
label_41c0d8:
    if (ctx->pc == 0x41C0D8u) {
        ctx->pc = 0x41C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0D4u;
        // 0x41c0d8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C0DCu;
        goto label_41c0dc;
    }
    ctx->pc = 0x41C0D4u;
    {
        const bool branch_taken_0x41c0d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x41C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0D4u;
        // 0x41c0d8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c0d4) {
            ctx->pc = 0x41C180u;
            goto label_41c180;
        }
    }
    ctx->pc = 0x41C0DCu;
label_41c0dc:
    // 0x41c0dc: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x41c0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_41c0e0:
    // 0x41c0e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_41c0e4:
    if (ctx->pc == 0x41C0E4u) {
        ctx->pc = 0x41C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0E0u;
        // 0x41c0e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C0E8u;
        goto label_41c0e8;
    }
    ctx->pc = 0x41C0E0u;
    {
        const bool branch_taken_0x41c0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c0e0) {
            ctx->pc = 0x41C0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C0E0u;
            // 0x41c0e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C0F8u;
            goto label_41c0f8;
        }
    }
    ctx->pc = 0x41C0E8u;
label_41c0e8:
    // 0x41c0e8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_41c0ec:
    if (ctx->pc == 0x41C0ECu) {
        ctx->pc = 0x41C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0E8u;
        // 0x41c0ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C0F0u;
        goto label_41c0f0;
    }
    ctx->pc = 0x41C0E8u;
    {
        const bool branch_taken_0x41c0e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0E8u;
        // 0x41c0ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c0e8) {
            ctx->pc = 0x41C108u;
            goto label_41c108;
        }
    }
    ctx->pc = 0x41C0F0u;
label_41c0f0:
    // 0x41c0f0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_41c0f4:
    if (ctx->pc == 0x41C0F4u) {
        ctx->pc = 0x41C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0F0u;
        // 0x41c0f4: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C0F8u;
        goto label_41c0f8;
    }
    ctx->pc = 0x41C0F0u;
    {
        const bool branch_taken_0x41c0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0F0u;
        // 0x41c0f4: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c0f0) {
            ctx->pc = 0x41C1E8u;
            goto label_41c1e8;
        }
    }
    ctx->pc = 0x41C0F8u;
label_41c0f8:
    // 0x41c0f8: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
label_41c0fc:
    if (ctx->pc == 0x41C0FCu) {
        ctx->pc = 0x41C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0F8u;
        // 0x41c0fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C100u;
        goto label_41c100;
    }
    ctx->pc = 0x41C0F8u;
    {
        const bool branch_taken_0x41c0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x41C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0F8u;
        // 0x41c0fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c0f8) {
            ctx->pc = 0x41C1A8u;
            goto label_41c1a8;
        }
    }
    ctx->pc = 0x41C100u;
label_41c100:
    // 0x41c100: 0x10000039  b           . + 4 + (0x39 << 2)
label_41c104:
    if (ctx->pc == 0x41C104u) {
        ctx->pc = 0x41C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C100u;
        // 0x41c104: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C108u;
        goto label_41c108;
    }
    ctx->pc = 0x41C100u;
    {
        const bool branch_taken_0x41c100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C100u;
        // 0x41c104: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c100) {
            ctx->pc = 0x41C1E8u;
            goto label_41c1e8;
        }
    }
    ctx->pc = 0x41C108u;
label_41c108:
    // 0x41c108: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x41c108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_41c10c:
    // 0x41c10c: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x41c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_41c110:
    // 0x41c110: 0xc06c948  jal         func_1B2520
label_41c114:
    if (ctx->pc == 0x41C114u) {
        ctx->pc = 0x41C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C110u;
        // 0x41c114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C118u;
        goto label_41c118;
    }
    ctx->pc = 0x41C110u;
    SET_GPR_U32(ctx, 31, 0x41C118u);
    ctx->pc = 0x41C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C110u;
    // 0x41c114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2520u, 0x41C110u, 0x41C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C118u;
label_41c118:
    // 0x41c118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x41c118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41c11c:
    // 0x41c11c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41c11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41c120:
    // 0x41c120: 0xc05b16e  jal         func_16C5B8
label_41c124:
    if (ctx->pc == 0x41C124u) {
        ctx->pc = 0x41C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C120u;
        // 0x41c124: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C128u;
        goto label_41c128;
    }
    ctx->pc = 0x41C120u;
    SET_GPR_U32(ctx, 31, 0x41C128u);
    ctx->pc = 0x41C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C120u;
    // 0x41c124: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C5B8u, 0x41C120u, 0x41C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C128u;
label_41c128:
    // 0x41c128: 0x822202bc  lb          $v0, 0x2BC($s1)
    ctx->pc = 0x41c128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 700)));
label_41c12c:
    // 0x41c12c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_41c130:
    if (ctx->pc == 0x41C130u) {
        ctx->pc = 0x41C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C12Cu;
        // 0x41c130: 0xa6200292  sh          $zero, 0x292($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 658), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C134u;
        goto label_41c134;
    }
    ctx->pc = 0x41C12Cu;
    {
        const bool branch_taken_0x41c12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C12Cu;
        // 0x41c130: 0xa6200292  sh          $zero, 0x292($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 658), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c12c) {
            ctx->pc = 0x41C1E0u;
            goto label_41c1e0;
        }
    }
    ctx->pc = 0x41C134u;
label_41c134:
    // 0x41c134: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x41c134u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_41c138:
    // 0x41c138: 0x262502bc  addiu       $a1, $s1, 0x2BC
    ctx->pc = 0x41c138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_41c13c:
    // 0x41c13c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x41c13cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41c140:
    // 0x41c140: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x41c140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41c144:
    // 0x41c144: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x41c144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_41c148:
    // 0x41c148: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x41c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_41c14c:
    // 0x41c14c: 0x40f809  jalr        $v0
label_41c150:
    if (ctx->pc == 0x41C150u) {
        ctx->pc = 0x41C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C14Cu;
        // 0x41c150: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C154u;
        goto label_41c154;
    }
    ctx->pc = 0x41C14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C154u);
        ctx->pc = 0x41C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C14Cu;
        // 0x41c150: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C14Cu, 0x41C154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C154u;
label_41c154:
    // 0x41c154: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_41c158:
    if (ctx->pc == 0x41C158u) {
        ctx->pc = 0x41C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C154u;
        // 0x41c158: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C15Cu;
        goto label_41c15c;
    }
    ctx->pc = 0x41C154u;
    {
        const bool branch_taken_0x41c154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C154u;
        // 0x41c158: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c154) {
            ctx->pc = 0x41C1E0u;
            goto label_41c1e0;
        }
    }
    ctx->pc = 0x41C15Cu;
label_41c15c:
    // 0x41c15c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41c15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41c160:
    // 0x41c160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41c160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41c164:
    // 0x41c164: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41c168:
    // 0x41c168: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41c168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41c16c:
    // 0x41c16c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41c170:
    // 0x41c170: 0x60f809  jalr        $v1
label_41c174:
    if (ctx->pc == 0x41C174u) {
        ctx->pc = 0x41C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C170u;
        // 0x41c174: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C178u;
        goto label_41c178;
    }
    ctx->pc = 0x41C170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41C178u);
        ctx->pc = 0x41C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C170u;
        // 0x41c174: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C170u, 0x41C178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C178u;
label_41c178:
    // 0x41c178: 0x1000001a  b           . + 4 + (0x1A << 2)
label_41c17c:
    if (ctx->pc == 0x41C17Cu) {
        ctx->pc = 0x41C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C178u;
        // 0x41c17c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C180u;
        goto label_41c180;
    }
    ctx->pc = 0x41C178u;
    {
        const bool branch_taken_0x41c178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C178u;
        // 0x41c17c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c178) {
            ctx->pc = 0x41C1E4u;
            goto label_41c1e4;
        }
    }
    ctx->pc = 0x41C180u;
label_41c180:
    // 0x41c180: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x41c180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_41c184:
    // 0x41c184: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x41c184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_41c188:
    // 0x41c188: 0xc06c948  jal         func_1B2520
label_41c18c:
    if (ctx->pc == 0x41C18Cu) {
        ctx->pc = 0x41C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C188u;
        // 0x41c18c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C190u;
        goto label_41c190;
    }
    ctx->pc = 0x41C188u;
    SET_GPR_U32(ctx, 31, 0x41C190u);
    ctx->pc = 0x41C18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C188u;
    // 0x41c18c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2520u, 0x41C188u, 0x41C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C190u;
label_41c190:
    // 0x41c190: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41c190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_41c194:
    // 0x41c194: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x41c194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_41c198:
    // 0x41c198: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x41c198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_41c19c:
    // 0x41c19c: 0x8e43b734  lw          $v1, -0x48CC($s2)
    ctx->pc = 0x41c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
label_41c1a0:
    // 0x41c1a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_41c1a4:
    if (ctx->pc == 0x41C1A4u) {
        ctx->pc = 0x41C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C1A0u;
        // 0x41c1a4: 0x90a202a4  lbu         $v0, 0x2A4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C1A8u;
        goto label_41c1a8;
    }
    ctx->pc = 0x41C1A0u;
    {
        const bool branch_taken_0x41c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C1A0u;
        // 0x41c1a4: 0x90a202a4  lbu         $v0, 0x2A4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c1a0) {
            ctx->pc = 0x41C1D0u;
            goto label_41c1d0;
        }
    }
    ctx->pc = 0x41C1A8u;
label_41c1a8:
    // 0x41c1a8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x41c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_41c1ac:
    // 0x41c1ac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x41c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_41c1b0:
    // 0x41c1b0: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x41c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_41c1b4:
    // 0x41c1b4: 0xc06c948  jal         func_1B2520
label_41c1b8:
    if (ctx->pc == 0x41C1B8u) {
        ctx->pc = 0x41C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C1B4u;
        // 0x41c1b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C1BCu;
        goto label_41c1bc;
    }
    ctx->pc = 0x41C1B4u;
    SET_GPR_U32(ctx, 31, 0x41C1BCu);
    ctx->pc = 0x41C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C1B4u;
    // 0x41c1b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2520u, 0x41C1B4u, 0x41C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C1BCu;
label_41c1bc:
    // 0x41c1bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_41c1c0:
    // 0x41c1c0: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x41c1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_41c1c4:
    // 0x41c1c4: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x41c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_41c1c8:
    // 0x41c1c8: 0x8e43b734  lw          $v1, -0x48CC($s2)
    ctx->pc = 0x41c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
label_41c1cc:
    // 0x41c1cc: 0x90a202a5  lbu         $v0, 0x2A5($a1)
    ctx->pc = 0x41c1ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 677)));
label_41c1d0:
    // 0x41c1d0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x41c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_41c1d4:
    // 0x41c1d4: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x41c1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_41c1d8:
    // 0x41c1d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x41c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_41c1dc:
    // 0x41c1dc: 0xaca202a8  sw          $v0, 0x2A8($a1)
    ctx->pc = 0x41c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 680), GPR_U32(ctx, 2));
label_41c1e0:
    // 0x41c1e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41c1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41c1e4:
    // 0x41c1e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41c1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41c1e8:
    // 0x41c1e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41c1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41c1ec:
    // 0x41c1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41c1f0:
    // 0x41c1f0: 0x3e00008  jr          $ra
label_41c1f4:
    if (ctx->pc == 0x41C1F4u) {
        ctx->pc = 0x41C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C1F0u;
        // 0x41c1f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C1F8u;
        goto label_fallthrough_0x41c1f0;
    }
    ctx->pc = 0x41C1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C1F0u;
        // 0x41c1f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41c1f0:
    ctx->pc = 0x41C1F8u;
}
