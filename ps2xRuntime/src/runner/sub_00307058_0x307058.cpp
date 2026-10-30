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

// Function: sub_00307058
// Address: 0x307058 - 0x307248
void sub_00307058_0x307058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307058_0x307058");
#endif

    switch (ctx->pc) {
        case 0x307058u: goto label_307058;
        case 0x30705cu: goto label_30705c;
        case 0x307060u: goto label_307060;
        case 0x307064u: goto label_307064;
        case 0x307068u: goto label_307068;
        case 0x30706cu: goto label_30706c;
        case 0x307070u: goto label_307070;
        case 0x307074u: goto label_307074;
        case 0x307078u: goto label_307078;
        case 0x30707cu: goto label_30707c;
        case 0x307080u: goto label_307080;
        case 0x307084u: goto label_307084;
        case 0x307088u: goto label_307088;
        case 0x30708cu: goto label_30708c;
        case 0x307090u: goto label_307090;
        case 0x307094u: goto label_307094;
        case 0x307098u: goto label_307098;
        case 0x30709cu: goto label_30709c;
        case 0x3070a0u: goto label_3070a0;
        case 0x3070a4u: goto label_3070a4;
        case 0x3070a8u: goto label_3070a8;
        case 0x3070acu: goto label_3070ac;
        case 0x3070b0u: goto label_3070b0;
        case 0x3070b4u: goto label_3070b4;
        case 0x3070b8u: goto label_3070b8;
        case 0x3070bcu: goto label_3070bc;
        case 0x3070c0u: goto label_3070c0;
        case 0x3070c4u: goto label_3070c4;
        case 0x3070c8u: goto label_3070c8;
        case 0x3070ccu: goto label_3070cc;
        case 0x3070d0u: goto label_3070d0;
        case 0x3070d4u: goto label_3070d4;
        case 0x3070d8u: goto label_3070d8;
        case 0x3070dcu: goto label_3070dc;
        case 0x3070e0u: goto label_3070e0;
        case 0x3070e4u: goto label_3070e4;
        case 0x3070e8u: goto label_3070e8;
        case 0x3070ecu: goto label_3070ec;
        case 0x3070f0u: goto label_3070f0;
        case 0x3070f4u: goto label_3070f4;
        case 0x3070f8u: goto label_3070f8;
        case 0x3070fcu: goto label_3070fc;
        case 0x307100u: goto label_307100;
        case 0x307104u: goto label_307104;
        case 0x307108u: goto label_307108;
        case 0x30710cu: goto label_30710c;
        case 0x307110u: goto label_307110;
        case 0x307114u: goto label_307114;
        case 0x307118u: goto label_307118;
        case 0x30711cu: goto label_30711c;
        case 0x307120u: goto label_307120;
        case 0x307124u: goto label_307124;
        case 0x307128u: goto label_307128;
        case 0x30712cu: goto label_30712c;
        case 0x307130u: goto label_307130;
        case 0x307134u: goto label_307134;
        case 0x307138u: goto label_307138;
        case 0x30713cu: goto label_30713c;
        case 0x307140u: goto label_307140;
        case 0x307144u: goto label_307144;
        case 0x307148u: goto label_307148;
        case 0x30714cu: goto label_30714c;
        case 0x307150u: goto label_307150;
        case 0x307154u: goto label_307154;
        case 0x307158u: goto label_307158;
        case 0x30715cu: goto label_30715c;
        case 0x307160u: goto label_307160;
        case 0x307164u: goto label_307164;
        case 0x307168u: goto label_307168;
        case 0x30716cu: goto label_30716c;
        case 0x307170u: goto label_307170;
        case 0x307174u: goto label_307174;
        case 0x307178u: goto label_307178;
        case 0x30717cu: goto label_30717c;
        case 0x307180u: goto label_307180;
        case 0x307184u: goto label_307184;
        case 0x307188u: goto label_307188;
        case 0x30718cu: goto label_30718c;
        case 0x307190u: goto label_307190;
        case 0x307194u: goto label_307194;
        case 0x307198u: goto label_307198;
        case 0x30719cu: goto label_30719c;
        case 0x3071a0u: goto label_3071a0;
        case 0x3071a4u: goto label_3071a4;
        case 0x3071a8u: goto label_3071a8;
        case 0x3071acu: goto label_3071ac;
        case 0x3071b0u: goto label_3071b0;
        case 0x3071b4u: goto label_3071b4;
        case 0x3071b8u: goto label_3071b8;
        case 0x3071bcu: goto label_3071bc;
        case 0x3071c0u: goto label_3071c0;
        case 0x3071c4u: goto label_3071c4;
        case 0x3071c8u: goto label_3071c8;
        case 0x3071ccu: goto label_3071cc;
        case 0x3071d0u: goto label_3071d0;
        case 0x3071d4u: goto label_3071d4;
        case 0x3071d8u: goto label_3071d8;
        case 0x3071dcu: goto label_3071dc;
        case 0x3071e0u: goto label_3071e0;
        case 0x3071e4u: goto label_3071e4;
        case 0x3071e8u: goto label_3071e8;
        case 0x3071ecu: goto label_3071ec;
        case 0x3071f0u: goto label_3071f0;
        case 0x3071f4u: goto label_3071f4;
        case 0x3071f8u: goto label_3071f8;
        case 0x3071fcu: goto label_3071fc;
        case 0x307200u: goto label_307200;
        case 0x307204u: goto label_307204;
        case 0x307208u: goto label_307208;
        case 0x30720cu: goto label_30720c;
        case 0x307210u: goto label_307210;
        case 0x307214u: goto label_307214;
        case 0x307218u: goto label_307218;
        case 0x30721cu: goto label_30721c;
        case 0x307220u: goto label_307220;
        case 0x307224u: goto label_307224;
        case 0x307228u: goto label_307228;
        case 0x30722cu: goto label_30722c;
        case 0x307230u: goto label_307230;
        case 0x307234u: goto label_307234;
        case 0x307238u: goto label_307238;
        case 0x30723cu: goto label_30723c;
        case 0x307240u: goto label_307240;
        case 0x307244u: goto label_307244;
        default: break;
    }

    ctx->pc = 0x307058u;

label_307058:
    // 0x307058: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x307058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_30705c:
    // 0x30705c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_307060:
    // 0x307060: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x307060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_307064:
    // 0x307064: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x307064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_307068:
    // 0x307068: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x307068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30706c:
    // 0x30706c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_307070:
    // 0x307070: 0xc05959e  jal         func_165678
label_307074:
    if (ctx->pc == 0x307074u) {
        ctx->pc = 0x307074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307070u;
        // 0x307074: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307078u;
        goto label_307078;
    }
    ctx->pc = 0x307070u;
    SET_GPR_U32(ctx, 31, 0x307078u);
    ctx->pc = 0x307074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307070u;
    // 0x307074: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x307070u, 0x307078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307078u;
label_307078:
    // 0x307078: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x307078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_30707c:
    // 0x30707c: 0xc05959e  jal         func_165678
label_307080:
    if (ctx->pc == 0x307080u) {
        ctx->pc = 0x307080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30707Cu;
        // 0x307080: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307084u;
        goto label_307084;
    }
    ctx->pc = 0x30707Cu;
    SET_GPR_U32(ctx, 31, 0x307084u);
    ctx->pc = 0x307080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30707Cu;
    // 0x307080: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30707Cu, 0x307084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307084u;
label_307084:
    // 0x307084: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x307084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307088:
    // 0x307088: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x307088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_30708c:
    // 0x30708c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307090:
    // 0x307090: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_307094:
    if (ctx->pc == 0x307094u) {
        ctx->pc = 0x307094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307090u;
        // 0x307094: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307098u;
        goto label_307098;
    }
    ctx->pc = 0x307090u;
    {
        const bool branch_taken_0x307090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x307090) {
            ctx->pc = 0x307094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307090u;
            // 0x307094: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3070A8u;
            goto label_3070a8;
        }
    }
    ctx->pc = 0x307098u;
label_307098:
    // 0x307098: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
label_30709c:
    if (ctx->pc == 0x30709Cu) {
        ctx->pc = 0x30709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307098u;
        // 0x30709c: 0xa20001b2  sb          $zero, 0x1B2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070A0u;
        goto label_3070a0;
    }
    ctx->pc = 0x307098u;
    {
        const bool branch_taken_0x307098 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x307098) {
            ctx->pc = 0x30709Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307098u;
            // 0x30709c: 0xa20001b2  sb          $zero, 0x1B2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3070A0u;
            goto label_3070a0;
        }
    }
    ctx->pc = 0x3070A0u;
label_3070a0:
    // 0x3070a0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x3070a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3070a4:
    // 0x3070a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3070a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3070a8:
    // 0x3070a8: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
label_3070ac:
    if (ctx->pc == 0x3070ACu) {
        ctx->pc = 0x3070B0u;
        goto label_3070b0;
    }
    ctx->pc = 0x3070A8u;
    {
        const bool branch_taken_0x3070a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3070a8) {
            ctx->pc = 0x3071D4u;
            goto label_3071d4;
        }
    }
    ctx->pc = 0x3070B0u;
label_3070b0:
    // 0x3070b0: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_3070b4:
    if (ctx->pc == 0x3070B4u) {
        ctx->pc = 0x3070B8u;
        goto label_3070b8;
    }
    ctx->pc = 0x3070B0u;
    {
        const bool branch_taken_0x3070b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3070b0) {
            ctx->pc = 0x30713Cu;
            goto label_30713c;
        }
    }
    ctx->pc = 0x3070B8u;
label_3070b8:
    // 0x3070b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3070b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3070bc:
    // 0x3070bc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3070bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3070c0:
    // 0x3070c0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3070c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3070c4:
    // 0x3070c4: 0x40f809  jalr        $v0
label_3070c8:
    if (ctx->pc == 0x3070C8u) {
        ctx->pc = 0x3070C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070C4u;
        // 0x3070c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070CCu;
        goto label_3070cc;
    }
    ctx->pc = 0x3070C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3070CCu);
        ctx->pc = 0x3070C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070C4u;
        // 0x3070c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3070C4u, 0x3070CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3070CCu;
label_3070cc:
    // 0x3070cc: 0x92250044  lbu         $a1, 0x44($s1)
    ctx->pc = 0x3070ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
label_3070d0:
    // 0x3070d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3070d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3070d4:
    // 0x3070d4: 0xc0a48cc  jal         func_292330
label_3070d8:
    if (ctx->pc == 0x3070D8u) {
        ctx->pc = 0x3070D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070D4u;
        // 0x3070d8: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070DCu;
        goto label_3070dc;
    }
    ctx->pc = 0x3070D4u;
    SET_GPR_U32(ctx, 31, 0x3070DCu);
    ctx->pc = 0x3070D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070D4u;
    // 0x3070d8: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x3070D4u, 0x3070DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070DCu;
label_3070dc:
    // 0x3070dc: 0xc087502  jal         func_21D408
label_3070e0:
    if (ctx->pc == 0x3070E0u) {
        ctx->pc = 0x3070E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070DCu;
        // 0x3070e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070E4u;
        goto label_3070e4;
    }
    ctx->pc = 0x3070DCu;
    SET_GPR_U32(ctx, 31, 0x3070E4u);
    ctx->pc = 0x3070E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070DCu;
    // 0x3070e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3070DCu, 0x3070E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070E4u;
label_3070e4:
    // 0x3070e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3070e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3070e8:
    // 0x3070e8: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x3070e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_3070ec:
    // 0x3070ec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3070f0:
    if (ctx->pc == 0x3070F0u) {
        ctx->pc = 0x3070F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070ECu;
        // 0x3070f0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070F4u;
        goto label_3070f4;
    }
    ctx->pc = 0x3070ECu;
    {
        const bool branch_taken_0x3070ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3070F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070ECu;
        // 0x3070f0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3070ec) {
            ctx->pc = 0x307100u;
            goto label_307100;
        }
    }
    ctx->pc = 0x3070F4u;
label_3070f4:
    // 0x3070f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3070f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3070f8:
    // 0x3070f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3070fc:
    if (ctx->pc == 0x3070FCu) {
        ctx->pc = 0x3070FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070F8u;
        // 0x3070fc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307100u;
        goto label_307100;
    }
    ctx->pc = 0x3070F8u;
    {
        const bool branch_taken_0x3070f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3070FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070F8u;
        // 0x3070fc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3070f8) {
            ctx->pc = 0x307104u;
            goto label_307104;
        }
    }
    ctx->pc = 0x307100u;
label_307100:
    // 0x307100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307104:
    // 0x307104: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_307108:
    if (ctx->pc == 0x307108u) {
        ctx->pc = 0x30710Cu;
        goto label_30710c;
    }
    ctx->pc = 0x307104u;
    {
        const bool branch_taken_0x307104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x307104) {
            ctx->pc = 0x30713Cu;
            goto label_30713c;
        }
    }
    ctx->pc = 0x30710Cu;
label_30710c:
    // 0x30710c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x30710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_307110:
    // 0x307110: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x307110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_307114:
    // 0x307114: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x307114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_307118:
    // 0x307118: 0x40f809  jalr        $v0
label_30711c:
    if (ctx->pc == 0x30711Cu) {
        ctx->pc = 0x30711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307118u;
        // 0x30711c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307120u;
        goto label_307120;
    }
    ctx->pc = 0x307118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x307120u);
        ctx->pc = 0x30711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307118u;
        // 0x30711c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307118u, 0x307120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x307120u;
label_307120:
    // 0x307120: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x307120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_307124:
    // 0x307124: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_307128:
    if (ctx->pc == 0x307128u) {
        ctx->pc = 0x30712Cu;
        goto label_30712c;
    }
    ctx->pc = 0x307124u;
    {
        const bool branch_taken_0x307124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x307124) {
            ctx->pc = 0x30713Cu;
            goto label_30713c;
        }
    }
    ctx->pc = 0x30712Cu;
label_30712c:
    // 0x30712c: 0xc087502  jal         func_21D408
label_307130:
    if (ctx->pc == 0x307130u) {
        ctx->pc = 0x307130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30712Cu;
        // 0x307130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307134u;
        goto label_307134;
    }
    ctx->pc = 0x30712Cu;
    SET_GPR_U32(ctx, 31, 0x307134u);
    ctx->pc = 0x307130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30712Cu;
    // 0x307130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30712Cu, 0x307134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307134u;
label_307134:
    // 0x307134: 0xc0a35f6  jal         func_28D7D8
label_307138:
    if (ctx->pc == 0x307138u) {
        ctx->pc = 0x307138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307134u;
        // 0x307138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30713Cu;
        goto label_30713c;
    }
    ctx->pc = 0x307134u;
    SET_GPR_U32(ctx, 31, 0x30713Cu);
    ctx->pc = 0x307138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307134u;
    // 0x307138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x307134u, 0x30713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30713Cu;
label_30713c:
    // 0x30713c: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_307140:
    if (ctx->pc == 0x307140u) {
        ctx->pc = 0x307140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30713Cu;
        // 0x307140: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307144u;
        goto label_307144;
    }
    ctx->pc = 0x30713Cu;
    {
        const bool branch_taken_0x30713c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x307140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30713Cu;
        // 0x307140: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30713c) {
            ctx->pc = 0x3071CCu;
            goto label_3071cc;
        }
    }
    ctx->pc = 0x307144u;
label_307144:
    // 0x307144: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x307144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_307148:
    // 0x307148: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x307148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30714c:
    // 0x30714c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_307150:
    // 0x307150: 0x40f809  jalr        $v0
label_307154:
    if (ctx->pc == 0x307154u) {
        ctx->pc = 0x307154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307150u;
        // 0x307154: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307158u;
        goto label_307158;
    }
    ctx->pc = 0x307150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x307158u);
        ctx->pc = 0x307154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307150u;
        // 0x307154: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307150u, 0x307158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x307158u;
label_307158:
    // 0x307158: 0x92250045  lbu         $a1, 0x45($s1)
    ctx->pc = 0x307158u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
label_30715c:
    // 0x30715c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30715cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307160:
    // 0x307160: 0xc0a48cc  jal         func_292330
label_307164:
    if (ctx->pc == 0x307164u) {
        ctx->pc = 0x307164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307160u;
        // 0x307164: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307168u;
        goto label_307168;
    }
    ctx->pc = 0x307160u;
    SET_GPR_U32(ctx, 31, 0x307168u);
    ctx->pc = 0x307164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307160u;
    // 0x307164: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x307160u, 0x307168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307168u;
label_307168:
    // 0x307168: 0xc087502  jal         func_21D408
label_30716c:
    if (ctx->pc == 0x30716Cu) {
        ctx->pc = 0x30716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307168u;
        // 0x30716c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307170u;
        goto label_307170;
    }
    ctx->pc = 0x307168u;
    SET_GPR_U32(ctx, 31, 0x307170u);
    ctx->pc = 0x30716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307168u;
    // 0x30716c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x307168u, 0x307170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307170u;
label_307170:
    // 0x307170: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x307170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307174:
    // 0x307174: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x307174u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_307178:
    // 0x307178: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30717c:
    if (ctx->pc == 0x30717Cu) {
        ctx->pc = 0x30717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307178u;
        // 0x30717c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307180u;
        goto label_307180;
    }
    ctx->pc = 0x307178u;
    {
        const bool branch_taken_0x307178 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307178u;
        // 0x30717c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307178) {
            ctx->pc = 0x30718Cu;
            goto label_30718c;
        }
    }
    ctx->pc = 0x307180u;
label_307180:
    // 0x307180: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x307180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_307184:
    // 0x307184: 0x10000002  b           . + 4 + (0x2 << 2)
label_307188:
    if (ctx->pc == 0x307188u) {
        ctx->pc = 0x307188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307184u;
        // 0x307188: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30718Cu;
        goto label_30718c;
    }
    ctx->pc = 0x307184u;
    {
        const bool branch_taken_0x307184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307184u;
        // 0x307188: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307184) {
            ctx->pc = 0x307190u;
            goto label_307190;
        }
    }
    ctx->pc = 0x30718Cu;
label_30718c:
    // 0x30718c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30718cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307190:
    // 0x307190: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_307194:
    if (ctx->pc == 0x307194u) {
        ctx->pc = 0x307194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307190u;
        // 0x307194: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307198u;
        goto label_307198;
    }
    ctx->pc = 0x307190u;
    {
        const bool branch_taken_0x307190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x307194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307190u;
        // 0x307194: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307190) {
            ctx->pc = 0x3071CCu;
            goto label_3071cc;
        }
    }
    ctx->pc = 0x307198u;
label_307198:
    // 0x307198: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x307198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_30719c:
    // 0x30719c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30719cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_3071a0:
    // 0x3071a0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3071a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3071a4:
    // 0x3071a4: 0x40f809  jalr        $v0
label_3071a8:
    if (ctx->pc == 0x3071A8u) {
        ctx->pc = 0x3071A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071A4u;
        // 0x3071a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071ACu;
        goto label_3071ac;
    }
    ctx->pc = 0x3071A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3071ACu);
        ctx->pc = 0x3071A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071A4u;
        // 0x3071a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3071A4u, 0x3071ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3071ACu;
label_3071ac:
    // 0x3071ac: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x3071acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_3071b0:
    // 0x3071b0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_3071b4:
    if (ctx->pc == 0x3071B4u) {
        ctx->pc = 0x3071B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071B0u;
        // 0x3071b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071B8u;
        goto label_3071b8;
    }
    ctx->pc = 0x3071B0u;
    {
        const bool branch_taken_0x3071b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3071B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071B0u;
        // 0x3071b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071b0) {
            ctx->pc = 0x3071CCu;
            goto label_3071cc;
        }
    }
    ctx->pc = 0x3071B8u;
label_3071b8:
    // 0x3071b8: 0xc087502  jal         func_21D408
label_3071bc:
    if (ctx->pc == 0x3071BCu) {
        ctx->pc = 0x3071BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071B8u;
        // 0x3071bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071C0u;
        goto label_3071c0;
    }
    ctx->pc = 0x3071B8u;
    SET_GPR_U32(ctx, 31, 0x3071C0u);
    ctx->pc = 0x3071BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3071B8u;
    // 0x3071bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3071B8u, 0x3071C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071C0u;
label_3071c0:
    // 0x3071c0: 0xc0a35f6  jal         func_28D7D8
label_3071c4:
    if (ctx->pc == 0x3071C4u) {
        ctx->pc = 0x3071C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071C0u;
        // 0x3071c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071C8u;
        goto label_3071c8;
    }
    ctx->pc = 0x3071C0u;
    SET_GPR_U32(ctx, 31, 0x3071C8u);
    ctx->pc = 0x3071C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3071C0u;
    // 0x3071c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x3071C0u, 0x3071C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071C8u;
label_3071c8:
    // 0x3071c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3071c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3071cc:
    // 0x3071cc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3071ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3071d0:
    // 0x3071d0: 0xa0600411  sb          $zero, 0x411($v1)
    ctx->pc = 0x3071d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1041), (uint8_t)GPR_U32(ctx, 0));
label_3071d4:
    // 0x3071d4: 0xc0d4ede  jal         func_353B78
label_3071d8:
    if (ctx->pc == 0x3071D8u) {
        ctx->pc = 0x3071D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071D4u;
        // 0x3071d8: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071DCu;
        goto label_3071dc;
    }
    ctx->pc = 0x3071D4u;
    SET_GPR_U32(ctx, 31, 0x3071DCu);
    ctx->pc = 0x3071D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3071D4u;
    // 0x3071d8: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B78u, 0x3071D4u, 0x3071DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071DCu;
label_3071dc:
    // 0x3071dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3071dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3071e0:
    // 0x3071e0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_3071e4:
    if (ctx->pc == 0x3071E4u) {
        ctx->pc = 0x3071E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071E0u;
        // 0x3071e4: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071E8u;
        goto label_3071e8;
    }
    ctx->pc = 0x3071E0u;
    {
        const bool branch_taken_0x3071e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3071E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071E0u;
        // 0x3071e4: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071e0) {
            ctx->pc = 0x30722Cu;
            goto label_30722c;
        }
    }
    ctx->pc = 0x3071E8u;
label_3071e8:
    // 0x3071e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3071ec:
    if (ctx->pc == 0x3071ECu) {
        ctx->pc = 0x3071ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071E8u;
        // 0x3071ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071F0u;
        goto label_3071f0;
    }
    ctx->pc = 0x3071E8u;
    {
        const bool branch_taken_0x3071e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3071ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071E8u;
        // 0x3071ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071e8) {
            ctx->pc = 0x307214u;
            goto label_307214;
        }
    }
    ctx->pc = 0x3071F0u;
label_3071f0:
    // 0x3071f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3071f4:
    if (ctx->pc == 0x3071F4u) {
        ctx->pc = 0x3071F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071F0u;
        // 0x3071f4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071F8u;
        goto label_3071f8;
    }
    ctx->pc = 0x3071F0u;
    {
        const bool branch_taken_0x3071f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3071F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071F0u;
        // 0x3071f4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071f0) {
            ctx->pc = 0x307204u;
            goto label_307204;
        }
    }
    ctx->pc = 0x3071F8u;
label_3071f8:
    // 0x3071f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3071f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3071fc:
    // 0x3071fc: 0xc0552b8  jal         func_154AE0
label_307200:
    if (ctx->pc == 0x307200u) {
        ctx->pc = 0x307200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071FCu;
        // 0x307200: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307204u;
        goto label_307204;
    }
    ctx->pc = 0x3071FCu;
    SET_GPR_U32(ctx, 31, 0x307204u);
    ctx->pc = 0x307200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3071FCu;
    // 0x307200: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x3071FCu, 0x307204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307204u;
label_307204:
    // 0x307204: 0xc0d4efc  jal         func_353BF0
label_307208:
    if (ctx->pc == 0x307208u) {
        ctx->pc = 0x307208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307204u;
        // 0x307208: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30720Cu;
        goto label_30720c;
    }
    ctx->pc = 0x307204u;
    SET_GPR_U32(ctx, 31, 0x30720Cu);
    ctx->pc = 0x307208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307204u;
    // 0x307208: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BF0u, 0x307204u, 0x30720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30720Cu;
label_30720c:
    // 0x30720c: 0x10000008  b           . + 4 + (0x8 << 2)
label_307210:
    if (ctx->pc == 0x307210u) {
        ctx->pc = 0x307210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30720Cu;
        // 0x307210: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307214u;
        goto label_307214;
    }
    ctx->pc = 0x30720Cu;
    {
        const bool branch_taken_0x30720c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30720Cu;
        // 0x307210: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30720c) {
            ctx->pc = 0x307230u;
            goto label_307230;
        }
    }
    ctx->pc = 0x307214u;
label_307214:
    // 0x307214: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x307214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_307218:
    // 0x307218: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_30721c:
    if (ctx->pc == 0x30721Cu) {
        ctx->pc = 0x30721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307218u;
        // 0x30721c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307220u;
        goto label_307220;
    }
    ctx->pc = 0x307218u;
    {
        const bool branch_taken_0x307218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307218u;
        // 0x30721c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307218) {
            ctx->pc = 0x307230u;
            goto label_307230;
        }
    }
    ctx->pc = 0x307220u;
label_307220:
    // 0x307220: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x307220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_307224:
    // 0x307224: 0xc0d4e84  jal         func_353A10
label_307228:
    if (ctx->pc == 0x307228u) {
        ctx->pc = 0x307228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307224u;
        // 0x307228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30722Cu;
        goto label_30722c;
    }
    ctx->pc = 0x307224u;
    SET_GPR_U32(ctx, 31, 0x30722Cu);
    ctx->pc = 0x307228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307224u;
    // 0x307228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353A10u, 0x307224u, 0x30722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30722Cu;
label_30722c:
    // 0x30722c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30722cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_307230:
    // 0x307230: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x307230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_307234:
    // 0x307234: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x307234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_307238:
    // 0x307238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30723c:
    // 0x30723c: 0x3e00008  jr          $ra
label_307240:
    if (ctx->pc == 0x307240u) {
        ctx->pc = 0x307240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30723Cu;
        // 0x307240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307244u;
        goto label_307244;
    }
    ctx->pc = 0x30723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30723Cu;
        // 0x307240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30723Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307244u;
label_307244:
    // 0x307244: 0x0  nop
    ctx->pc = 0x307244u;
    // NOP
    ctx->pc = 0x307248u;
}
