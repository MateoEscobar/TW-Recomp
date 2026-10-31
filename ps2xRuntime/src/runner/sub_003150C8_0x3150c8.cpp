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

// Function: sub_003150C8
// Address: 0x3150c8 - 0x315228
void sub_003150C8_0x3150c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003150C8_0x3150c8");
#endif

    switch (ctx->pc) {
        case 0x3150c8u: goto label_3150c8;
        case 0x3150ccu: goto label_3150cc;
        case 0x3150d0u: goto label_3150d0;
        case 0x3150d4u: goto label_3150d4;
        case 0x3150d8u: goto label_3150d8;
        case 0x3150dcu: goto label_3150dc;
        case 0x3150e0u: goto label_3150e0;
        case 0x3150e4u: goto label_3150e4;
        case 0x3150e8u: goto label_3150e8;
        case 0x3150ecu: goto label_3150ec;
        case 0x3150f0u: goto label_3150f0;
        case 0x3150f4u: goto label_3150f4;
        case 0x3150f8u: goto label_3150f8;
        case 0x3150fcu: goto label_3150fc;
        case 0x315100u: goto label_315100;
        case 0x315104u: goto label_315104;
        case 0x315108u: goto label_315108;
        case 0x31510cu: goto label_31510c;
        case 0x315110u: goto label_315110;
        case 0x315114u: goto label_315114;
        case 0x315118u: goto label_315118;
        case 0x31511cu: goto label_31511c;
        case 0x315120u: goto label_315120;
        case 0x315124u: goto label_315124;
        case 0x315128u: goto label_315128;
        case 0x31512cu: goto label_31512c;
        case 0x315130u: goto label_315130;
        case 0x315134u: goto label_315134;
        case 0x315138u: goto label_315138;
        case 0x31513cu: goto label_31513c;
        case 0x315140u: goto label_315140;
        case 0x315144u: goto label_315144;
        case 0x315148u: goto label_315148;
        case 0x31514cu: goto label_31514c;
        case 0x315150u: goto label_315150;
        case 0x315154u: goto label_315154;
        case 0x315158u: goto label_315158;
        case 0x31515cu: goto label_31515c;
        case 0x315160u: goto label_315160;
        case 0x315164u: goto label_315164;
        case 0x315168u: goto label_315168;
        case 0x31516cu: goto label_31516c;
        case 0x315170u: goto label_315170;
        case 0x315174u: goto label_315174;
        case 0x315178u: goto label_315178;
        case 0x31517cu: goto label_31517c;
        case 0x315180u: goto label_315180;
        case 0x315184u: goto label_315184;
        case 0x315188u: goto label_315188;
        case 0x31518cu: goto label_31518c;
        case 0x315190u: goto label_315190;
        case 0x315194u: goto label_315194;
        case 0x315198u: goto label_315198;
        case 0x31519cu: goto label_31519c;
        case 0x3151a0u: goto label_3151a0;
        case 0x3151a4u: goto label_3151a4;
        case 0x3151a8u: goto label_3151a8;
        case 0x3151acu: goto label_3151ac;
        case 0x3151b0u: goto label_3151b0;
        case 0x3151b4u: goto label_3151b4;
        case 0x3151b8u: goto label_3151b8;
        case 0x3151bcu: goto label_3151bc;
        case 0x3151c0u: goto label_3151c0;
        case 0x3151c4u: goto label_3151c4;
        case 0x3151c8u: goto label_3151c8;
        case 0x3151ccu: goto label_3151cc;
        case 0x3151d0u: goto label_3151d0;
        case 0x3151d4u: goto label_3151d4;
        case 0x3151d8u: goto label_3151d8;
        case 0x3151dcu: goto label_3151dc;
        case 0x3151e0u: goto label_3151e0;
        case 0x3151e4u: goto label_3151e4;
        case 0x3151e8u: goto label_3151e8;
        case 0x3151ecu: goto label_3151ec;
        case 0x3151f0u: goto label_3151f0;
        case 0x3151f4u: goto label_3151f4;
        case 0x3151f8u: goto label_3151f8;
        case 0x3151fcu: goto label_3151fc;
        case 0x315200u: goto label_315200;
        case 0x315204u: goto label_315204;
        case 0x315208u: goto label_315208;
        case 0x31520cu: goto label_31520c;
        case 0x315210u: goto label_315210;
        case 0x315214u: goto label_315214;
        case 0x315218u: goto label_315218;
        case 0x31521cu: goto label_31521c;
        case 0x315220u: goto label_315220;
        case 0x315224u: goto label_315224;
        default: break;
    }

    ctx->pc = 0x3150c8u;

label_3150c8:
    // 0x3150c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3150c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3150cc:
    // 0x3150cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3150ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3150d0:
    // 0x3150d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3150d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3150d4:
    // 0x3150d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3150d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3150d8:
    // 0x3150d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3150d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3150dc:
    // 0x3150dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3150dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3150e0:
    // 0x3150e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3150e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3150e4:
    // 0x3150e4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3150e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3150e8:
    // 0x3150e8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3150e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3150ec:
    // 0x3150ec: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3150ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_3150f0:
    // 0x3150f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3150f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3150f4:
    // 0x3150f4: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x3150f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_3150f8:
    // 0x3150f8: 0x14510031  bne         $v0, $s1, . + 4 + (0x31 << 2)
label_3150fc:
    if (ctx->pc == 0x3150FCu) {
        ctx->pc = 0x3150FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150F8u;
        // 0x3150fc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315100u;
        goto label_315100;
    }
    ctx->pc = 0x3150F8u;
    {
        const bool branch_taken_0x3150f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3150FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150F8u;
        // 0x3150fc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150f8) {
            ctx->pc = 0x3151C0u;
            goto label_3151c0;
        }
    }
    ctx->pc = 0x315100u;
label_315100:
    // 0x315100: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x315100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_315104:
    // 0x315104: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x315104u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315108:
    // 0x315108: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x315108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31510c:
    // 0x31510c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x31510cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315110:
    // 0x315110: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x315110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_315114:
    // 0x315114: 0x24140023  addiu       $s4, $zero, 0x23
    ctx->pc = 0x315114u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_315118:
    // 0x315118: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x315118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31511c:
    // 0x31511c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31511cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315120:
    // 0x315120: 0xc137826  jal         func_4DE098
label_315124:
    if (ctx->pc == 0x315124u) {
        ctx->pc = 0x315124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315120u;
        // 0x315124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315128u;
        goto label_315128;
    }
    ctx->pc = 0x315120u;
    SET_GPR_U32(ctx, 31, 0x315128u);
    ctx->pc = 0x315124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315120u;
    // 0x315124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x315120u, 0x315128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315128u;
label_315128:
    // 0x315128: 0xc0e409a  jal         func_390268
label_31512c:
    if (ctx->pc == 0x31512Cu) {
        ctx->pc = 0x31512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315128u;
        // 0x31512c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315130u;
        goto label_315130;
    }
    ctx->pc = 0x315128u;
    SET_GPR_U32(ctx, 31, 0x315130u);
    ctx->pc = 0x31512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315128u;
    // 0x31512c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x315128u, 0x315130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315130u;
label_315130:
    // 0x315130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x315130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315134:
    // 0x315134: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
label_315138:
    if (ctx->pc == 0x315138u) {
        ctx->pc = 0x315138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315134u;
        // 0x315138: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31513Cu;
        goto label_31513c;
    }
    ctx->pc = 0x315134u;
    {
        const bool branch_taken_0x315134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x315134) {
            ctx->pc = 0x315138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315134u;
            // 0x315138: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3151A8u;
            goto label_3151a8;
        }
    }
    ctx->pc = 0x31513Cu;
label_31513c:
    // 0x31513c: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x31513cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
label_315140:
    // 0x315140: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x315140u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_315144:
    // 0x315144: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x315144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_315148:
    // 0x315148: 0x50550017  beql        $v0, $s5, . + 4 + (0x17 << 2)
label_31514c:
    if (ctx->pc == 0x31514Cu) {
        ctx->pc = 0x31514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315148u;
        // 0x31514c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315150u;
        goto label_315150;
    }
    ctx->pc = 0x315148u;
    {
        const bool branch_taken_0x315148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x315148) {
            ctx->pc = 0x31514Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315148u;
            // 0x31514c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3151A8u;
            goto label_3151a8;
        }
    }
    ctx->pc = 0x315150u;
label_315150:
    // 0x315150: 0xc087502  jal         func_21D408
label_315154:
    if (ctx->pc == 0x315154u) {
        ctx->pc = 0x315158u;
        goto label_315158;
    }
    ctx->pc = 0x315150u;
    SET_GPR_U32(ctx, 31, 0x315158u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x315150u, 0x315158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315158u;
label_315158:
    // 0x315158: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x315158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31515c:
    // 0x31515c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x31515cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_315160:
    // 0x315160: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_315164:
    if (ctx->pc == 0x315164u) {
        ctx->pc = 0x315164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315160u;
        // 0x315164: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315168u;
        goto label_315168;
    }
    ctx->pc = 0x315160u;
    {
        const bool branch_taken_0x315160 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x315164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315160u;
        // 0x315164: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315160) {
            ctx->pc = 0x315174u;
            goto label_315174;
        }
    }
    ctx->pc = 0x315168u;
label_315168:
    // 0x315168: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x315168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31516c:
    // 0x31516c: 0x10000002  b           . + 4 + (0x2 << 2)
label_315170:
    if (ctx->pc == 0x315170u) {
        ctx->pc = 0x315170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31516Cu;
        // 0x315170: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315174u;
        goto label_315174;
    }
    ctx->pc = 0x31516Cu;
    {
        const bool branch_taken_0x31516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31516Cu;
        // 0x315170: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31516c) {
            ctx->pc = 0x315178u;
            goto label_315178;
        }
    }
    ctx->pc = 0x315174u;
label_315174:
    // 0x315174: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x315174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315178:
    // 0x315178: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_31517c:
    if (ctx->pc == 0x31517Cu) {
        ctx->pc = 0x31517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315178u;
        // 0x31517c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315180u;
        goto label_315180;
    }
    ctx->pc = 0x315178u;
    {
        const bool branch_taken_0x315178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x315178) {
            ctx->pc = 0x31517Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315178u;
            // 0x31517c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3151A8u;
            goto label_3151a8;
        }
    }
    ctx->pc = 0x315180u;
label_315180:
    // 0x315180: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x315180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_315184:
    // 0x315184: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x315184u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_315188:
    // 0x315188: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x315188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31518c:
    // 0x31518c: 0x40f809  jalr        $v0
label_315190:
    if (ctx->pc == 0x315190u) {
        ctx->pc = 0x315190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31518Cu;
        // 0x315190: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315194u;
        goto label_315194;
    }
    ctx->pc = 0x31518Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315194u);
        ctx->pc = 0x315190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31518Cu;
        // 0x315190: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31518Cu, 0x315194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315194u;
label_315194:
    // 0x315194: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
label_315198:
    if (ctx->pc == 0x315198u) {
        ctx->pc = 0x315198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315194u;
        // 0x315198: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31519Cu;
        goto label_31519c;
    }
    ctx->pc = 0x315194u;
    {
        const bool branch_taken_0x315194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x315198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315194u;
        // 0x315198: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315194) {
            ctx->pc = 0x3151A8u;
            goto label_3151a8;
        }
    }
    ctx->pc = 0x31519Cu;
label_31519c:
    // 0x31519c: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x31519cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
label_3151a0:
    // 0x3151a0: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
label_3151a4:
    if (ctx->pc == 0x3151A4u) {
        ctx->pc = 0x3151A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151A0u;
        // 0x3151a4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151A8u;
        goto label_3151a8;
    }
    ctx->pc = 0x3151A0u;
    {
        const bool branch_taken_0x3151a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3151a0) {
            ctx->pc = 0x3151A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3151A0u;
            // 0x3151a4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3151B4u;
            goto label_3151b4;
        }
    }
    ctx->pc = 0x3151A8u;
label_3151a8:
    // 0x3151a8: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x3151a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3151ac:
    // 0x3151ac: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
label_3151b0:
    if (ctx->pc == 0x3151B0u) {
        ctx->pc = 0x3151B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151ACu;
        // 0x3151b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151B4u;
        goto label_3151b4;
    }
    ctx->pc = 0x3151ACu;
    {
        const bool branch_taken_0x3151ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3151ac) {
            ctx->pc = 0x3151B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3151ACu;
            // 0x3151b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315120;
        }
    }
    ctx->pc = 0x3151B4u;
label_3151b4:
    // 0x3151b4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3151b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3151b8:
    // 0x3151b8: 0x10000011  b           . + 4 + (0x11 << 2)
label_3151bc:
    if (ctx->pc == 0x3151BCu) {
        ctx->pc = 0x3151BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151B8u;
        // 0x3151bc: 0x16100a  movz        $v0, $zero, $s6 (Delay Slot)
        if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151C0u;
        goto label_3151c0;
    }
    ctx->pc = 0x3151B8u;
    {
        const bool branch_taken_0x3151b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3151BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151B8u;
        // 0x3151bc: 0x16100a  movz        $v0, $zero, $s6 (Delay Slot)
        if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3151b8) {
            ctx->pc = 0x315200u;
            goto label_315200;
        }
    }
    ctx->pc = 0x3151C0u;
label_3151c0:
    // 0x3151c0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3151c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3151c4:
    // 0x3151c4: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x3151c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_3151c8:
    // 0x3151c8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_3151cc:
    if (ctx->pc == 0x3151CCu) {
        ctx->pc = 0x3151CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151C8u;
        // 0x3151cc: 0x8c430048  lw          $v1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151D0u;
        goto label_3151d0;
    }
    ctx->pc = 0x3151C8u;
    {
        const bool branch_taken_0x3151c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3151CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151C8u;
        // 0x3151cc: 0x8c430048  lw          $v1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3151c8) {
            ctx->pc = 0x3151F4u;
            goto label_3151f4;
        }
    }
    ctx->pc = 0x3151D0u;
label_3151d0:
    // 0x3151d0: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x3151d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3151d4:
    // 0x3151d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3151d8:
    if (ctx->pc == 0x3151D8u) {
        ctx->pc = 0x3151D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151D4u;
        // 0x3151d8: 0x24620bb8  addiu       $v0, $v1, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151DCu;
        goto label_3151dc;
    }
    ctx->pc = 0x3151D4u;
    {
        const bool branch_taken_0x3151d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3151D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151D4u;
        // 0x3151d8: 0x24620bb8  addiu       $v0, $v1, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3151d4) {
            ctx->pc = 0x3151F4u;
            goto label_3151f4;
        }
    }
    ctx->pc = 0x3151DCu;
label_3151dc:
    // 0x3151dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3151dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3151e0:
    // 0x3151e0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x3151e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_3151e4:
    // 0x3151e4: 0xc0c52f6  jal         func_314BD8
label_3151e8:
    if (ctx->pc == 0x3151E8u) {
        ctx->pc = 0x3151E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151E4u;
        // 0x3151e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151ECu;
        goto label_3151ec;
    }
    ctx->pc = 0x3151E4u;
    SET_GPR_U32(ctx, 31, 0x3151ECu);
    ctx->pc = 0x3151E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151E4u;
    // 0x3151e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314BD8u, 0x3151E4u, 0x3151ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3151ECu;
label_3151ec:
    // 0x3151ec: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
label_3151f0:
    if (ctx->pc == 0x3151F0u) {
        ctx->pc = 0x3151F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151ECu;
        // 0x3151f0: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151F4u;
        goto label_3151f4;
    }
    ctx->pc = 0x3151ECu;
    {
        const bool branch_taken_0x3151ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x3151ec) {
            ctx->pc = 0x3151F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3151ECu;
            // 0x3151f0: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3151F4u;
            goto label_3151f4;
        }
    }
    ctx->pc = 0x3151F4u;
label_3151f4:
    // 0x3151f4: 0xc0c538c  jal         func_314E30
label_3151f8:
    if (ctx->pc == 0x3151F8u) {
        ctx->pc = 0x3151F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151F4u;
        // 0x3151f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151FCu;
        goto label_3151fc;
    }
    ctx->pc = 0x3151F4u;
    SET_GPR_U32(ctx, 31, 0x3151FCu);
    ctx->pc = 0x3151F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151F4u;
    // 0x3151f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314E30u, 0x3151F4u, 0x3151FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3151FCu;
label_3151fc:
    // 0x3151fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3151fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315200:
    // 0x315200: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x315200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_315204:
    // 0x315204: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x315204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_315208:
    // 0x315208: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x315208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31520c:
    // 0x31520c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31520cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_315210:
    // 0x315210: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x315210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_315214:
    // 0x315214: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x315214u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_315218:
    // 0x315218: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x315218u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31521c:
    // 0x31521c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31521cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_315220:
    // 0x315220: 0x3e00008  jr          $ra
label_315224:
    if (ctx->pc == 0x315224u) {
        ctx->pc = 0x315224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315220u;
        // 0x315224: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315228u;
        goto label_fallthrough_0x315220;
    }
    ctx->pc = 0x315220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315220u;
        // 0x315224: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x315220:
    ctx->pc = 0x315228u;
}
