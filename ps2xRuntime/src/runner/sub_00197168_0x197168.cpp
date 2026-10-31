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

// Function: sub_00197168
// Address: 0x197168 - 0x1972b0
void sub_00197168_0x197168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197168_0x197168");
#endif

    switch (ctx->pc) {
        case 0x197168u: goto label_197168;
        case 0x19716cu: goto label_19716c;
        case 0x197170u: goto label_197170;
        case 0x197174u: goto label_197174;
        case 0x197178u: goto label_197178;
        case 0x19717cu: goto label_19717c;
        case 0x197180u: goto label_197180;
        case 0x197184u: goto label_197184;
        case 0x197188u: goto label_197188;
        case 0x19718cu: goto label_19718c;
        case 0x197190u: goto label_197190;
        case 0x197194u: goto label_197194;
        case 0x197198u: goto label_197198;
        case 0x19719cu: goto label_19719c;
        case 0x1971a0u: goto label_1971a0;
        case 0x1971a4u: goto label_1971a4;
        case 0x1971a8u: goto label_1971a8;
        case 0x1971acu: goto label_1971ac;
        case 0x1971b0u: goto label_1971b0;
        case 0x1971b4u: goto label_1971b4;
        case 0x1971b8u: goto label_1971b8;
        case 0x1971bcu: goto label_1971bc;
        case 0x1971c0u: goto label_1971c0;
        case 0x1971c4u: goto label_1971c4;
        case 0x1971c8u: goto label_1971c8;
        case 0x1971ccu: goto label_1971cc;
        case 0x1971d0u: goto label_1971d0;
        case 0x1971d4u: goto label_1971d4;
        case 0x1971d8u: goto label_1971d8;
        case 0x1971dcu: goto label_1971dc;
        case 0x1971e0u: goto label_1971e0;
        case 0x1971e4u: goto label_1971e4;
        case 0x1971e8u: goto label_1971e8;
        case 0x1971ecu: goto label_1971ec;
        case 0x1971f0u: goto label_1971f0;
        case 0x1971f4u: goto label_1971f4;
        case 0x1971f8u: goto label_1971f8;
        case 0x1971fcu: goto label_1971fc;
        case 0x197200u: goto label_197200;
        case 0x197204u: goto label_197204;
        case 0x197208u: goto label_197208;
        case 0x19720cu: goto label_19720c;
        case 0x197210u: goto label_197210;
        case 0x197214u: goto label_197214;
        case 0x197218u: goto label_197218;
        case 0x19721cu: goto label_19721c;
        case 0x197220u: goto label_197220;
        case 0x197224u: goto label_197224;
        case 0x197228u: goto label_197228;
        case 0x19722cu: goto label_19722c;
        case 0x197230u: goto label_197230;
        case 0x197234u: goto label_197234;
        case 0x197238u: goto label_197238;
        case 0x19723cu: goto label_19723c;
        case 0x197240u: goto label_197240;
        case 0x197244u: goto label_197244;
        case 0x197248u: goto label_197248;
        case 0x19724cu: goto label_19724c;
        case 0x197250u: goto label_197250;
        case 0x197254u: goto label_197254;
        case 0x197258u: goto label_197258;
        case 0x19725cu: goto label_19725c;
        case 0x197260u: goto label_197260;
        case 0x197264u: goto label_197264;
        case 0x197268u: goto label_197268;
        case 0x19726cu: goto label_19726c;
        case 0x197270u: goto label_197270;
        case 0x197274u: goto label_197274;
        case 0x197278u: goto label_197278;
        case 0x19727cu: goto label_19727c;
        case 0x197280u: goto label_197280;
        case 0x197284u: goto label_197284;
        case 0x197288u: goto label_197288;
        case 0x19728cu: goto label_19728c;
        case 0x197290u: goto label_197290;
        case 0x197294u: goto label_197294;
        case 0x197298u: goto label_197298;
        case 0x19729cu: goto label_19729c;
        case 0x1972a0u: goto label_1972a0;
        case 0x1972a4u: goto label_1972a4;
        case 0x1972a8u: goto label_1972a8;
        case 0x1972acu: goto label_1972ac;
        default: break;
    }

    ctx->pc = 0x197168u;

label_197168:
    // 0x197168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19716c:
    // 0x19716c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_197170:
    // 0x197170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x197170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_197174:
    // 0x197174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197178:
    // 0x197178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19717c:
    // 0x19717c: 0x92220042  lbu         $v0, 0x42($s1)
    ctx->pc = 0x19717cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
label_197180:
    // 0x197180: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x197180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
label_197184:
    // 0x197184: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_197188:
    if (ctx->pc == 0x197188u) {
        ctx->pc = 0x197188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197184u;
        // 0x197188: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19718Cu;
        goto label_19718c;
    }
    ctx->pc = 0x197184u;
    {
        const bool branch_taken_0x197184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197184) {
            ctx->pc = 0x197188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197184u;
            // 0x197188: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19719Cu;
            goto label_19719c;
        }
    }
    ctx->pc = 0x19718Cu;
label_19718c:
    // 0x19718c: 0x92220042  lbu         $v0, 0x42($s1)
    ctx->pc = 0x19718cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
label_197190:
    // 0x197190: 0x14450042  bne         $v0, $a1, . + 4 + (0x42 << 2)
label_197194:
    if (ctx->pc == 0x197194u) {
        ctx->pc = 0x197194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197190u;
        // 0x197194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197198u;
        goto label_197198;
    }
    ctx->pc = 0x197190u;
    {
        const bool branch_taken_0x197190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x197194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197190u;
        // 0x197194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197190) {
            ctx->pc = 0x19729Cu;
            goto label_19729c;
        }
    }
    ctx->pc = 0x197198u;
label_197198:
    // 0x197198: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x197198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_19719c:
    // 0x19719c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x19719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1971a0:
    // 0x1971a0: 0x92250011  lbu         $a1, 0x11($s1)
    ctx->pc = 0x1971a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_1971a4:
    // 0x1971a4: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x1971a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1971a8:
    // 0x1971a8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1971a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1971ac:
    // 0x1971ac: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
label_1971b0:
    if (ctx->pc == 0x1971B0u) {
        ctx->pc = 0x1971B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971ACu;
        // 0x1971b0: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971B4u;
        goto label_1971b4;
    }
    ctx->pc = 0x1971ACu;
    {
        const bool branch_taken_0x1971ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971ACu;
        // 0x1971b0: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971ac) {
            ctx->pc = 0x197298u;
            goto label_197298;
        }
    }
    ctx->pc = 0x1971B4u;
label_1971b4:
    // 0x1971b4: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1971b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_1971b8:
    // 0x1971b8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1971bc:
    if (ctx->pc == 0x1971BCu) {
        ctx->pc = 0x1971BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971B8u;
        // 0x1971bc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971C0u;
        goto label_1971c0;
    }
    ctx->pc = 0x1971B8u;
    {
        const bool branch_taken_0x1971b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971B8u;
        // 0x1971bc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971b8) {
            ctx->pc = 0x197298u;
            goto label_197298;
        }
    }
    ctx->pc = 0x1971C0u;
label_1971c0:
    // 0x1971c0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1971c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1971c4:
    // 0x1971c4: 0x8c476b08  lw          $a3, 0x6B08($v0)
    ctx->pc = 0x1971c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27400)));
label_1971c8:
    // 0x1971c8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1971c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_1971cc:
    // 0x1971cc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1971ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1971d0:
    // 0x1971d0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1971d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1971d4:
    // 0x1971d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1971d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1971d8:
    // 0x1971d8: 0xac4400ac  sw          $a0, 0xAC($v0)
    ctx->pc = 0x1971d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 4));
label_1971dc:
    // 0x1971dc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1971dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1971e0:
    // 0x1971e0: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1971e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1971e4:
    // 0x1971e4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1971e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1971e8:
    // 0x1971e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1971e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1971ec:
    // 0x1971ec: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x1971ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
label_1971f0:
    // 0x1971f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1971f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1971f4:
    // 0x1971f4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1971f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1971f8:
    // 0x1971f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1971f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1971fc:
    // 0x1971fc: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1971fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_197200:
    // 0x197200: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x197200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_197204:
    // 0x197204: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x197204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_197208:
    // 0x197208: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x197208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_19720c:
    // 0x19720c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x19720cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_197210:
    // 0x197210: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x197210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_197214:
    // 0x197214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_197218:
    // 0x197218: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x197218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19721c:
    // 0x19721c: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x19721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_197220:
    // 0x197220: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x197220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_197224:
    // 0x197224: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x197224u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
label_197228:
    // 0x197228: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x197228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_19722c:
    // 0x19722c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_197230:
    // 0x197230: 0xc060ac8  jal         func_182B20
label_197234:
    if (ctx->pc == 0x197234u) {
        ctx->pc = 0x197234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197230u;
        // 0x197234: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197238u;
        goto label_197238;
    }
    ctx->pc = 0x197230u;
    SET_GPR_U32(ctx, 31, 0x197238u);
    ctx->pc = 0x197234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197230u;
    // 0x197234: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B20u, 0x197230u, 0x197238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197238u;
label_197238:
    // 0x197238: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_19723c:
    // 0x19723c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x19723cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_197240:
    // 0x197240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_197244:
    if (ctx->pc == 0x197244u) {
        ctx->pc = 0x197248u;
        goto label_197248;
    }
    ctx->pc = 0x197240u;
    {
        const bool branch_taken_0x197240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197240) {
            ctx->pc = 0x197250u;
            goto label_197250;
        }
    }
    ctx->pc = 0x197248u;
label_197248:
    // 0x197248: 0x10000003  b           . + 4 + (0x3 << 2)
label_19724c:
    if (ctx->pc == 0x19724Cu) {
        ctx->pc = 0x19724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197248u;
        // 0x19724c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197250u;
        goto label_197250;
    }
    ctx->pc = 0x197248u;
    {
        const bool branch_taken_0x197248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197248u;
        // 0x19724c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197248) {
            ctx->pc = 0x197258u;
            goto label_197258;
        }
    }
    ctx->pc = 0x197250u;
label_197250:
    // 0x197250: 0xc060ac8  jal         func_182B20
label_197254:
    if (ctx->pc == 0x197254u) {
        ctx->pc = 0x197254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197250u;
        // 0x197254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197258u;
        goto label_197258;
    }
    ctx->pc = 0x197250u;
    SET_GPR_U32(ctx, 31, 0x197258u);
    ctx->pc = 0x197254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197250u;
    // 0x197254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B20u, 0x197250u, 0x197258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197258u;
label_197258:
    // 0x197258: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x197258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_19725c:
    // 0x19725c: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x19725cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_197260:
    // 0x197260: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x197260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_197264:
    // 0x197264: 0xc060ace  jal         func_182B38
label_197268:
    if (ctx->pc == 0x197268u) {
        ctx->pc = 0x197268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197264u;
        // 0x197268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19726Cu;
        goto label_19726c;
    }
    ctx->pc = 0x197264u;
    SET_GPR_U32(ctx, 31, 0x19726Cu);
    ctx->pc = 0x197268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197264u;
    // 0x197268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182B38u, 0x197264u, 0x19726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19726Cu;
label_19726c:
    // 0x19726c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19726cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197270:
    // 0x197270: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x197270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_197274:
    // 0x197274: 0x40f809  jalr        $v0
label_197278:
    if (ctx->pc == 0x197278u) {
        ctx->pc = 0x197278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197274u;
        // 0x197278: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19727Cu;
        goto label_19727c;
    }
    ctx->pc = 0x197274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19727Cu);
        ctx->pc = 0x197278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197274u;
        // 0x197278: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197274u, 0x19727Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19727Cu;
label_19727c:
    // 0x19727c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19727cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_197280:
    // 0x197280: 0x8c62f778  lw          $v0, -0x888($v1)
    ctx->pc = 0x197280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965112)));
label_197284:
    // 0x197284: 0x40f809  jalr        $v0
label_197288:
    if (ctx->pc == 0x197288u) {
        ctx->pc = 0x197288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197284u;
        // 0x197288: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19728Cu;
        goto label_19728c;
    }
    ctx->pc = 0x197284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19728Cu);
        ctx->pc = 0x197288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197284u;
        // 0x197288: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197284u, 0x19728Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19728Cu;
label_19728c:
    // 0x19728c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x19728cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_197290:
    // 0x197290: 0x10000002  b           . + 4 + (0x2 << 2)
label_197294:
    if (ctx->pc == 0x197294u) {
        ctx->pc = 0x197294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197290u;
        // 0x197294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197298u;
        goto label_197298;
    }
    ctx->pc = 0x197290u;
    {
        const bool branch_taken_0x197290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197290u;
        // 0x197294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197290) {
            ctx->pc = 0x19729Cu;
            goto label_19729c;
        }
    }
    ctx->pc = 0x197298u;
label_197298:
    // 0x197298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19729c:
    // 0x19729c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19729cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1972a0:
    // 0x1972a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1972a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1972a4:
    // 0x1972a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1972a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1972a8:
    // 0x1972a8: 0x3e00008  jr          $ra
label_1972ac:
    if (ctx->pc == 0x1972ACu) {
        ctx->pc = 0x1972ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972A8u;
        // 0x1972ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972B0u;
        goto label_fallthrough_0x1972a8;
    }
    ctx->pc = 0x1972A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1972ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972A8u;
        // 0x1972ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1972A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1972a8:
    ctx->pc = 0x1972B0u;
}
