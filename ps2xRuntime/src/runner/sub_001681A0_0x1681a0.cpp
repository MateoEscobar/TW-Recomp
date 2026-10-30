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

// Function: sub_001681A0
// Address: 0x1681a0 - 0x168aa0
void sub_001681A0_0x1681a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001681A0_0x1681a0");
#endif

    switch (ctx->pc) {
        case 0x1681e8u: goto label_1681e8;
        case 0x168208u: goto label_168208;
        case 0x168298u: goto label_168298;
        case 0x1682c4u: goto label_1682c4;
        case 0x168324u: goto label_168324;
        case 0x168398u: goto label_168398;
        case 0x1683acu: goto label_1683ac;
        case 0x16842cu: goto label_16842c;
        case 0x168448u: goto label_168448;
        case 0x168468u: goto label_168468;
        case 0x168484u: goto label_168484;
        case 0x168490u: goto label_168490;
        case 0x16849cu: goto label_16849c;
        case 0x1684acu: goto label_1684ac;
        case 0x1684e4u: goto label_1684e4;
        case 0x168510u: goto label_168510;
        case 0x1685c4u: goto label_1685c4;
        case 0x16862cu: goto label_16862c;
        case 0x1686d4u: goto label_1686d4;
        case 0x1686fcu: goto label_1686fc;
        case 0x16872cu: goto label_16872c;
        case 0x168740u: goto label_168740;
        case 0x1687a8u: goto label_1687a8;
        case 0x1687d4u: goto label_1687d4;
        case 0x168888u: goto label_168888;
        case 0x16891cu: goto label_16891c;
        case 0x168930u: goto label_168930;
        case 0x1689a0u: goto label_1689a0;
        case 0x1689bcu: goto label_1689bc;
        case 0x1689d4u: goto label_1689d4;
        case 0x168a04u: goto label_168a04;
        default: break;
    }

    ctx->pc = 0x1681a0u;

    // 0x1681a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1681a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1681a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1681a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1681a8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1681a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1681ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1681acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681b0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1681b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1681b4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1681b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1681b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1681b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681bc: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1681bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1681c0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1681c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1681c4: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1681c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x1681c8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1681c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x1681cc: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1681ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x1681d0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1681d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x1681d4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1681d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1681d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1681d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1681dc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1681dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1681e0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1681E0u;
    SET_GPR_U32(ctx, 31, 0x1681E8u);
    ctx->pc = 0x1681E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1681E0u;
    // 0x1681e4: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1681E0u, 0x1681E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681E8u;
label_1681e8:
    // 0x1681e8: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x1681e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x1681ec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x1681ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x1681f0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x1681f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x1681f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1681f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1681f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1681f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1681fc: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1681fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x168200: 0x24100130  addiu       $s0, $zero, 0x130
    ctx->pc = 0x168200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168204: 0x0  nop
    ctx->pc = 0x168204u;
    // NOP
label_168208:
    // 0x168208: 0x2701818  mult        $v1, $s3, $s0
    ctx->pc = 0x168208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16820c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x16820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x168210: 0x90430690  lbu         $v1, 0x690($v0)
    ctx->pc = 0x168210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1680)));
    // 0x168214: 0x1060020e  beqz        $v1, . + 4 + (0x20E << 2)
    ctx->pc = 0x168214u;
    {
        const bool branch_taken_0x168214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168214u;
        // 0x168218: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168214) {
            ctx->pc = 0x168A50u;
            goto label_168a50;
        }
    }
    ctx->pc = 0x16821Cu;
    // 0x16821c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x16821cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x168220: 0x8c64bd30  lw          $a0, -0x42D0($v1)
    ctx->pc = 0x168220u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x168224: 0x8ca206b0  lw          $v0, 0x6B0($a1)
    ctx->pc = 0x168224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1712)));
    // 0x168228: 0x1044002b  beq         $v0, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x168228u;
    {
        const bool branch_taken_0x168228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x16822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168228u;
        // 0x16822c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168228) {
            ctx->pc = 0x1682D8u;
            goto label_1682d8;
        }
    }
    ctx->pc = 0x168230u;
    // 0x168230: 0x8c4306b8  lw          $v1, 0x6B8($v0)
    ctx->pc = 0x168230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1720)));
    // 0x168234: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x168234u;
    {
        const bool branch_taken_0x168234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168234) {
            ctx->pc = 0x168238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168234u;
            // 0x168238: 0x24020130  addiu       $v0, $zero, 0x130 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1682DCu;
            goto label_1682dc;
        }
    }
    ctx->pc = 0x16823Cu;
    // 0x16823c: 0x8c430650  lw          $v1, 0x650($v0)
    ctx->pc = 0x16823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
    // 0x168240: 0x8c6400d8  lw          $a0, 0xD8($v1)
    ctx->pc = 0x168240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x168244: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x168244u;
    {
        const bool branch_taken_0x168244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x168248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168244u;
        // 0x168248: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168244) {
            ctx->pc = 0x16825Cu;
            goto label_16825c;
        }
    }
    ctx->pc = 0x16824Cu;
    // 0x16824c: 0x8ec2b734  lw          $v0, -0x48CC($s6)
    ctx->pc = 0x16824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
    // 0x168250: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x168250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168254: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x168254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x168258: 0xac8306b8  sw          $v1, 0x6B8($a0)
    ctx->pc = 0x168258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1720), GPR_U32(ctx, 3));
label_16825c:
    // 0x16825c: 0x2701018  mult        $v0, $s3, $s0
    ctx->pc = 0x16825cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x168260: 0x8ec3b734  lw          $v1, -0x48CC($s6)
    ctx->pc = 0x168260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
    // 0x168264: 0x8c660048  lw          $a2, 0x48($v1)
    ctx->pc = 0x168264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x168268: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x168268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16826c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16826cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168270: 0x8c8206b8  lw          $v0, 0x6B8($a0)
    ctx->pc = 0x168270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1720)));
    // 0x168274: 0x8ca306b4  lw          $v1, 0x6B4($a1)
    ctx->pc = 0x168274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1716)));
    // 0x168278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16827c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x16827cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x168280: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x168280u;
    {
        const bool branch_taken_0x168280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168280u;
        // 0x168284: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168280) {
            ctx->pc = 0x1682A0u;
            goto label_1682a0;
        }
    }
    ctx->pc = 0x168288u;
    // 0x168288: 0xac4006b8  sw          $zero, 0x6B8($v0)
    ctx->pc = 0x168288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1720), GPR_U32(ctx, 0));
    // 0x16828c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16828cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168290: 0xc0e5c04  jal         func_397010
    ctx->pc = 0x168290u;
    SET_GPR_U32(ctx, 31, 0x168298u);
    ctx->pc = 0x168294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168290u;
    // 0x168294: 0x8c6406b0  lw          $a0, 0x6B0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397010u, 0x168290u, 0x168298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168298u;
label_168298:
    // 0x168298: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x168298u;
    {
        const bool branch_taken_0x168298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168298u;
        // 0x16829c: 0x24020130  addiu       $v0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168298) {
            ctx->pc = 0x1682DCu;
            goto label_1682dc;
        }
    }
    ctx->pc = 0x1682A0u;
label_1682a0:
    // 0x1682a0: 0x2701018  mult        $v0, $s3, $s0
    ctx->pc = 0x1682a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1682a4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1682a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1682a8: 0x8c6206c0  lw          $v0, 0x6C0($v1)
    ctx->pc = 0x1682a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1728)));
    // 0x1682ac: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x1682acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x1682b0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1682b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1682b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1682B4u;
    {
        const bool branch_taken_0x1682b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1682B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682B4u;
        // 0x1682b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682b4) {
            ctx->pc = 0x1682D8u;
            goto label_1682d8;
        }
    }
    ctx->pc = 0x1682BCu;
    // 0x1682bc: 0xc0e5ba8  jal         func_396EA0
    ctx->pc = 0x1682BCu;
    SET_GPR_U32(ctx, 31, 0x1682C4u);
    ctx->pc = 0x1682C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1682BCu;
    // 0x1682c0: 0x8c4406b0  lw          $a0, 0x6B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396EA0u, 0x1682BCu, 0x1682C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1682C4u;
label_1682c4:
    // 0x1682c4: 0x2701018  mult        $v0, $s3, $s0
    ctx->pc = 0x1682c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1682c8: 0x8ec3b734  lw          $v1, -0x48CC($s6)
    ctx->pc = 0x1682c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
    // 0x1682cc: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1682ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1682d0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1682d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1682d4: 0xac8206c0  sw          $v0, 0x6C0($a0)
    ctx->pc = 0x1682d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1728), GPR_U32(ctx, 2));
label_1682d8:
    // 0x1682d8: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x1682d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_1682dc:
    // 0x1682dc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1682dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682e0: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x1682e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1682e4: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1682e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1682e8: 0x84740692  lh          $s4, 0x692($v1)
    ctx->pc = 0x1682e8u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1682)));
    // 0x1682ec: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1682ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682f0: 0x2e82000c  sltiu       $v0, $s4, 0xC
    ctx->pc = 0x1682f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1682f4: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x1682F4u;
    {
        const bool branch_taken_0x1682f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1682F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682F4u;
        // 0x1682f8: 0x26d60640  addiu       $s6, $s6, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682f4) {
            ctx->pc = 0x168538u;
            goto label_168538;
        }
    }
    ctx->pc = 0x1682FCu;
    // 0x1682fc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1682fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x168300: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x168300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x168304: 0x24421150  addiu       $v0, $v0, 0x1150
    ctx->pc = 0x168304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
    // 0x168308: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16830c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168310: 0x800008  jr          $a0
    ctx->pc = 0x168310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168318u: goto label_168318;
            case 0x16835Cu: goto label_16835c;
            case 0x1684B4u: goto label_1684b4;
            case 0x1684D8u: goto label_1684d8;
            case 0x168504u: goto label_168504;
            case 0x168534u: goto label_168534;
            case 0x168538u: goto label_168538;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168310u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x168318u;
label_168318:
    // 0x168318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16831c: 0xc059856  jal         func_166158
    ctx->pc = 0x16831Cu;
    SET_GPR_U32(ctx, 31, 0x168324u);
    ctx->pc = 0x168320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16831Cu;
    // 0x168320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x16831Cu, 0x168324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168324u;
label_168324:
    // 0x168324: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168328: 0x86230b00  lh          $v1, 0xB00($s1)
    ctx->pc = 0x168328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2816)));
    // 0x16832c: 0x86220b02  lh          $v0, 0xB02($s1)
    ctx->pc = 0x16832cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2818)));
    // 0x168330: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x168330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168334: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168334u;
    {
        const bool branch_taken_0x168334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168334u;
        // 0x168338: 0x86240b04  lh          $a0, 0xB04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168334) {
            ctx->pc = 0x168350u;
            goto label_168350;
        }
    }
    ctx->pc = 0x16833Cu;
    // 0x16833c: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x16833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168340: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x168340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x168344: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x168344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x168348: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x168348u;
    {
        const bool branch_taken_0x168348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168348u;
        // 0x16834c: 0xa4400692  sh          $zero, 0x692($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1682), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168348) {
            ctx->pc = 0x168A50u;
            goto label_168a50;
        }
    }
    ctx->pc = 0x168350u;
label_168350:
    // 0x168350: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x168350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x168354: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x168354u;
    {
        const bool branch_taken_0x168354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168354u;
        // 0x168358: 0x2b840  sll         $s7, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168354) {
            ctx->pc = 0x168538u;
            goto label_168538;
        }
    }
    ctx->pc = 0x16835Cu;
label_16835c:
    // 0x16835c: 0x241e0009  addiu       $fp, $zero, 0x9
    ctx->pc = 0x16835cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x168360: 0x129e0007  beq         $s4, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x168360u;
    {
        const bool branch_taken_0x168360 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 30));
        ctx->pc = 0x168364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168360u;
        // 0x168364: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168360) {
            ctx->pc = 0x168380u;
            goto label_168380;
        }
    }
    ctx->pc = 0x168368u;
    // 0x168368: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x168368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
    // 0x16836c: 0x84440326  lh          $a0, 0x326($v0)
    ctx->pc = 0x16836cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 806)));
    // 0x168370: 0x84430324  lh          $v1, 0x324($v0)
    ctx->pc = 0x168370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x168374: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x168374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x168378: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x168378u;
    {
        const bool branch_taken_0x168378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168378u;
        // 0x16837c: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168378) {
            ctx->pc = 0x16853Cu;
            goto label_16853c;
        }
    }
    ctx->pc = 0x168380u;
label_168380:
    // 0x168380: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168384: 0x2628018  mult        $s0, $s3, $v0
    ctx->pc = 0x168384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x168388: 0x26030640  addiu       $v1, $s0, 0x640
    ctx->pc = 0x168388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x16838c: 0x2239021  addu        $s2, $s1, $v1
    ctx->pc = 0x16838cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x168390: 0xc05b76a  jal         func_16DDA8
    ctx->pc = 0x168390u;
    SET_GPR_U32(ctx, 31, 0x168398u);
    ctx->pc = 0x168394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168390u;
    // 0x168394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DDA8u, 0x168390u, 0x168398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168398u;
label_168398:
    // 0x168398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16839c: 0x14430067  bne         $v0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x16839Cu;
    {
        const bool branch_taken_0x16839c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1683A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16839Cu;
        // 0x1683a0: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16839c) {
            ctx->pc = 0x16853Cu;
            goto label_16853c;
        }
    }
    ctx->pc = 0x1683A4u;
    // 0x1683a4: 0xc05b516  jal         func_16D458
    ctx->pc = 0x1683A4u;
    SET_GPR_U32(ctx, 31, 0x1683ACu);
    ctx->pc = 0x16D458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D458u, 0x1683A4u, 0x1683ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683ACu;
label_1683ac:
    // 0x1683ac: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1683ACu;
    {
        const bool branch_taken_0x1683ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683ACu;
        // 0x1683b0: 0x2111821  addu        $v1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683ac) {
            ctx->pc = 0x1684A4u;
            goto label_1684a4;
        }
    }
    ctx->pc = 0x1683B4u;
    // 0x1683b4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1683b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1683b8: 0x24630640  addiu       $v1, $v1, 0x640
    ctx->pc = 0x1683b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
    // 0x1683bc: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x1683bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1683c0: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1683c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x1683c4: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x1683c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1683c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1683c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1683cc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1683ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1683d0: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1683d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1683d4: 0x16950002  bne         $s4, $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1683D4u;
    {
        const bool branch_taken_0x1683d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        ctx->pc = 0x1683D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683D4u;
        // 0x1683d8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683d4) {
            ctx->pc = 0x1683E0u;
            goto label_1683e0;
        }
    }
    ctx->pc = 0x1683DCu;
    // 0x1683dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1683dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1683e0:
    // 0x1683e0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1683e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1683e4: 0x24c60640  addiu       $a2, $a2, 0x640
    ctx->pc = 0x1683e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1600));
    // 0x1683e8: 0x8ce8489c  lw          $t0, 0x489C($a3)
    ctx->pc = 0x1683e8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1683ec: 0xa4c50052  sh          $a1, 0x52($a2)
    ctx->pc = 0x1683ecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 82), (uint16_t)GPR_U32(ctx, 5));
    // 0x1683f0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1683f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1683f4: 0xacc00064  sw          $zero, 0x64($a2)
    ctx->pc = 0x1683f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 0));
    // 0x1683f8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1683f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1683fc: 0x84c3005c  lh          $v1, 0x5C($a2)
    ctx->pc = 0x1683fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x168400: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x168400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168404: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x168404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x168408: 0x24a51138  addiu       $a1, $a1, 0x1138
    ctx->pc = 0x168408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4408));
    // 0x16840c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x16840cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168410: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168414: 0xa4c3005a  sh          $v1, 0x5A($a2)
    ctx->pc = 0x168414u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x168418: 0x8d02031c  lw          $v0, 0x31C($t0)
    ctx->pc = 0x168418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 796)));
    // 0x16841c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16841cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x168420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x168424: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x168424u;
    SET_GPR_U32(ctx, 31, 0x16842Cu);
    ctx->pc = 0x168428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168424u;
    // 0x168428: 0xad02031c  sw          $v0, 0x31C($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x168424u, 0x16842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16842Cu;
label_16842c:
    // 0x16842c: 0x12950002  beq         $s4, $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x16842Cu;
    {
        const bool branch_taken_0x16842c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        ctx->pc = 0x168430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16842Cu;
        // 0x168430: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16842c) {
            ctx->pc = 0x168438u;
            goto label_168438;
        }
    }
    ctx->pc = 0x168434u;
    // 0x168434: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x168434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_168438:
    // 0x168438: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x168438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16843c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16843cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168440: 0xc05a872  jal         func_16A1C8
    ctx->pc = 0x168440u;
    SET_GPR_U32(ctx, 31, 0x168448u);
    ctx->pc = 0x168444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168440u;
    // 0x168444: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1C8u, 0x168440u, 0x168448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168448u;
label_168448:
    // 0x168448: 0x169e003b  bne         $s4, $fp, . + 4 + (0x3B << 2)
    ctx->pc = 0x168448u;
    {
        const bool branch_taken_0x168448 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        ctx->pc = 0x16844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168448u;
        // 0x16844c: 0xa2020018  sb          $v0, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168448) {
            ctx->pc = 0x168538u;
            goto label_168538;
        }
    }
    ctx->pc = 0x168450u;
    // 0x168450: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x168450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x168454: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x168454u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x168458: 0x4800038  bltz        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x168458u;
    {
        const bool branch_taken_0x168458 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168458u;
        // 0x16845c: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168458) {
            ctx->pc = 0x16853Cu;
            goto label_16853c;
        }
    }
    ctx->pc = 0x168460u;
    // 0x168460: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x168460u;
    SET_GPR_U32(ctx, 31, 0x168468u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x168460u, 0x168468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168468u;
label_168468:
    // 0x168468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x168468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16846c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x16846cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x168470: 0x24c6cb58  addiu       $a2, $a2, -0x34A8
    ctx->pc = 0x168470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953816));
    // 0x168474: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x168474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x168478: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x168478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x16847c: 0xc05905e  jal         func_164178
    ctx->pc = 0x16847Cu;
    SET_GPR_U32(ctx, 31, 0x168484u);
    ctx->pc = 0x168480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16847Cu;
    // 0x168480: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x16847Cu, 0x168484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168484u;
label_168484:
    // 0x168484: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x168484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x168488: 0xc05a3cc  jal         func_168F30
    ctx->pc = 0x168488u;
    SET_GPR_U32(ctx, 31, 0x168490u);
    ctx->pc = 0x16848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168488u;
    // 0x16848c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F30u, 0x168488u, 0x168490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168490u;
label_168490:
    // 0x168490: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x168490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x168494: 0xc05a3c2  jal         func_168F08
    ctx->pc = 0x168494u;
    SET_GPR_U32(ctx, 31, 0x16849Cu);
    ctx->pc = 0x168498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168494u;
    // 0x168498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F08u, 0x168494u, 0x16849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16849Cu;
label_16849c:
    // 0x16849c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x16849Cu;
    {
        const bool branch_taken_0x16849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16849Cu;
        // 0x1684a0: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16849c) {
            ctx->pc = 0x16853Cu;
            goto label_16853c;
        }
    }
    ctx->pc = 0x1684A4u;
label_1684a4:
    // 0x1684a4: 0xc05b78c  jal         func_16DE30
    ctx->pc = 0x1684A4u;
    SET_GPR_U32(ctx, 31, 0x1684ACu);
    ctx->pc = 0x1684A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684A4u;
    // 0x1684a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DE30u, 0x1684A4u, 0x1684ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684ACu;
label_1684ac:
    // 0x1684ac: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1684ACu;
    {
        const bool branch_taken_0x1684ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684ACu;
        // 0x1684b0: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684ac) {
            ctx->pc = 0x16853Cu;
            goto label_16853c;
        }
    }
    ctx->pc = 0x1684B4u;
label_1684b4:
    // 0x1684b4: 0x24040130  addiu       $a0, $zero, 0x130
    ctx->pc = 0x1684b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x1684b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1684b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1684bc: 0x2641018  mult        $v0, $s3, $a0
    ctx->pc = 0x1684bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1684c0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1684c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1684c4: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x1684c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x1684c8: 0x8c8306bc  lw          $v1, 0x6BC($a0)
    ctx->pc = 0x1684c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
    // 0x1684cc: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x1684ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1684d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1684D0u;
    {
        const bool branch_taken_0x1684d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684D0u;
        // 0x1684d4: 0x65b82b  sltu        $s7, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684d0) {
            ctx->pc = 0x168538u;
            goto label_168538;
        }
    }
    ctx->pc = 0x1684D8u;
label_1684d8:
    // 0x1684d8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1684d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1684dc: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x1684DCu;
    SET_GPR_U32(ctx, 31, 0x1684E4u);
    ctx->pc = 0x1684E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684DCu;
    // 0x1684e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x1684DCu, 0x1684E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684E4u;
label_1684e4:
    // 0x1684e4: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x1684e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x1684e8: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x1684e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1684ec: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1684ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1684f0: 0xc44106a8  lwc1        $f1, 0x6A8($v0)
    ctx->pc = 0x1684f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1684f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1684f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1684f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1684f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1684fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1684FCu;
    {
        const bool branch_taken_0x1684fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1684fc) {
            ctx->pc = 0x168528u;
            goto label_168528;
        }
    }
    ctx->pc = 0x168504u;
label_168504:
    // 0x168504: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x168504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168508: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x168508u;
    SET_GPR_U32(ctx, 31, 0x168510u);
    ctx->pc = 0x16850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168508u;
    // 0x16850c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x168508u, 0x168510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168510u;
label_168510:
    // 0x168510: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168514: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x168514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x168518: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x168518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16851c: 0xc44106a8  lwc1        $f1, 0x6A8($v0)
    ctx->pc = 0x16851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168520: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x168520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x168524: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x168524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168528:
    // 0x168528: 0x0  nop
    ctx->pc = 0x168528u;
    // NOP
    // 0x16852c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16852Cu;
    {
        const bool branch_taken_0x16852c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x168530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16852Cu;
        // 0x168530: 0x24050130  addiu       $a1, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16852c) {
            ctx->pc = 0x16853Cu;
            goto label_16853c;
        }
    }
    ctx->pc = 0x168534u;
label_168534:
    // 0x168534: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x168534u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168538:
    // 0x168538: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x168538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_16853c:
    // 0x16853c: 0x2651818  mult        $v1, $s3, $a1
    ctx->pc = 0x16853cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x168540: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x168540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x168544: 0x90430691  lbu         $v1, 0x691($v0)
    ctx->pc = 0x168544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1681)));
    // 0x168548: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168548u;
    {
        const bool branch_taken_0x168548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168548u;
        // 0x16854c: 0x2651818  mult        $v1, $s3, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168548) {
            ctx->pc = 0x168558u;
            goto label_168558;
        }
    }
    ctx->pc = 0x168550u;
    // 0x168550: 0x12e00140  beqz        $s7, . + 4 + (0x140 << 2)
    ctx->pc = 0x168550u;
    {
        const bool branch_taken_0x168550 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x168554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168550u;
        // 0x168554: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168550) {
            ctx->pc = 0x168A54u;
            goto label_168a54;
        }
    }
    ctx->pc = 0x168558u;
label_168558:
    // 0x168558: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x168558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16855c: 0x8455069a  lh          $s5, 0x69A($v0)
    ctx->pc = 0x16855cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1690)));
    // 0x168560: 0x6a1000d  bgez        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x168560u;
    {
        const bool branch_taken_0x168560 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x168564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168560u;
        // 0x168564: 0x24100130  addiu       $s0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168560) {
            ctx->pc = 0x168598u;
            goto label_168598;
        }
    }
    ctx->pc = 0x168568u;
    // 0x168568: 0x151823  negu        $v1, $s5
    ctx->pc = 0x168568u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x16856c: 0x90440691  lbu         $a0, 0x691($v0)
    ctx->pc = 0x16856cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1681)));
    // 0x168570: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x168570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x168574: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168574u;
    {
        const bool branch_taken_0x168574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x168578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168574u;
        // 0x168578: 0x3ac03  sra         $s5, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168574) {
            ctx->pc = 0x168598u;
            goto label_168598;
        }
    }
    ctx->pc = 0x16857Cu;
    // 0x16857c: 0x8443069c  lh          $v1, 0x69C($v0)
    ctx->pc = 0x16857cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1692)));
    // 0x168580: 0x54600134  bnel        $v1, $zero, . + 4 + (0x134 << 2)
    ctx->pc = 0x168580u;
    {
        const bool branch_taken_0x168580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168580) {
            ctx->pc = 0x168584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168580u;
            // 0x168584: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168A54u;
            goto label_168a54;
        }
    }
    ctx->pc = 0x168588u;
    // 0x168588: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x168588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16858c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16858cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168590: 0xa0620691  sb          $v0, 0x691($v1)
    ctx->pc = 0x168590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1681), (uint8_t)GPR_U32(ctx, 2));
    // 0x168594: 0x24100130  addiu       $s0, $zero, 0x130
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_168598:
    // 0x168598: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x168598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16859c: 0x2701818  mult        $v1, $s3, $s0
    ctx->pc = 0x16859cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1685a0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1685a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1685a4: 0xc44006c8  lwc1        $f0, 0x6C8($v0)
    ctx->pc = 0x1685a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1685a8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1685a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1685ac: 0x0  nop
    ctx->pc = 0x1685acu;
    // NOP
    // 0x1685b0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1685B0u;
    {
        const bool branch_taken_0x1685b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1685B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685B0u;
        // 0x1685b4: 0x2701818  mult        $v1, $s3, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685b0) {
            ctx->pc = 0x1685E4u;
            goto label_1685e4;
        }
    }
    ctx->pc = 0x1685B8u;
    // 0x1685b8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1685b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1685bc: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x1685BCu;
    SET_GPR_U32(ctx, 31, 0x1685C4u);
    ctx->pc = 0x1685C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1685BCu;
    // 0x1685c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x1685BCu, 0x1685C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685C4u;
label_1685c4:
    // 0x1685c4: 0x2701818  mult        $v1, $s3, $s0
    ctx->pc = 0x1685c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1685c8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1685c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1685cc: 0xc44106c8  lwc1        $f1, 0x6C8($v0)
    ctx->pc = 0x1685ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1685d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1685d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1685d4: 0x0  nop
    ctx->pc = 0x1685d4u;
    // NOP
    // 0x1685d8: 0x4501011e  bc1t        . + 4 + (0x11E << 2)
    ctx->pc = 0x1685D8u;
    {
        const bool branch_taken_0x1685d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1685DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D8u;
        // 0x1685dc: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685d8) {
            ctx->pc = 0x168A54u;
            goto label_168a54;
        }
    }
    ctx->pc = 0x1685E0u;
    // 0x1685e0: 0x2701818  mult        $v1, $s3, $s0
    ctx->pc = 0x1685e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1685e4:
    // 0x1685e4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1685e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1685e8: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x1685e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
    // 0x1685ec: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1685ECu;
    {
        const bool branch_taken_0x1685ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685ECu;
        // 0x1685f0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685ec) {
            ctx->pc = 0x168638u;
            goto label_168638;
        }
    }
    ctx->pc = 0x1685F4u;
    // 0x1685f4: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1685f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1685f8: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1685f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1685fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1685fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168600: 0x78620640  lq          $v0, 0x640($v1)
    ctx->pc = 0x168600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 1600)));
    // 0x168604: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x168604u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x168608: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x168608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x16860c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x16860cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x168610: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x168610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x168614: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x168614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168618: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x168618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x16861c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x16861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168620: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x168620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x168624: 0xc0480ba  jal         func_1202E8
    ctx->pc = 0x168624u;
    SET_GPR_U32(ctx, 31, 0x16862Cu);
    ctx->pc = 0x168628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168624u;
    // 0x168628: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202E8u, 0x168624u, 0x16862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16862Cu;
label_16862c:
    // 0x16862c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168630: 0x10430108  beq         $v0, $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x168630u;
    {
        const bool branch_taken_0x168630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x168634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168630u;
        // 0x168634: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168630) {
            ctx->pc = 0x168A54u;
            goto label_168a54;
        }
    }
    ctx->pc = 0x168638u;
label_168638:
    // 0x168638: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x168638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16863c: 0x12e20006  beq         $s7, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16863Cu;
    {
        const bool branch_taken_0x16863c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x168640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16863Cu;
        // 0x168640: 0x2701018  mult        $v0, $s3, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16863c) {
            ctx->pc = 0x168658u;
            goto label_168658;
        }
    }
    ctx->pc = 0x168644u;
    // 0x168644: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x168644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x168648: 0x8462069c  lh          $v0, 0x69C($v1)
    ctx->pc = 0x168648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1692)));
    // 0x16864c: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x16864cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x168650: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x168650u;
    {
        const bool branch_taken_0x168650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168650u;
        // 0x168654: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168650) {
            ctx->pc = 0x168A54u;
            goto label_168a54;
        }
    }
    ctx->pc = 0x168658u;
label_168658:
    // 0x168658: 0x2701018  mult        $v0, $s3, $s0
    ctx->pc = 0x168658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16865c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x16865cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x168660: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x168660u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x168664: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x168664u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168668: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x168668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16866c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x16866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x168670: 0x8ca306a4  lw          $v1, 0x6A4($a1)
    ctx->pc = 0x168670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1700)));
    // 0x168674: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x168674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x168678: 0x144000f6  bnez        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x168678u;
    {
        const bool branch_taken_0x168678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168678u;
        // 0x16867c: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168678) {
            ctx->pc = 0x168A54u;
            goto label_168a54;
        }
    }
    ctx->pc = 0x168680u;
    // 0x168680: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x168680u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168684: 0x78620640  lq          $v0, 0x640($v1)
    ctx->pc = 0x168684u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 1600)));
    // 0x168688: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x168688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16868c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x16868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x168690: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x168690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x168694: 0x84940692  lh          $s4, 0x692($a0)
    ctx->pc = 0x168694u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1682)));
    // 0x168698: 0x12850005  beq         $s4, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168698u;
    {
        const bool branch_taken_0x168698 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 5));
        ctx->pc = 0x16869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168698u;
        // 0x16869c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168698) {
            ctx->pc = 0x1686B0u;
            goto label_1686b0;
        }
    }
    ctx->pc = 0x1686A0u;
    // 0x1686a0: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1686A0u;
    {
        const bool branch_taken_0x1686a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1686A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686A0u;
        // 0x1686a4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686a0) {
            ctx->pc = 0x1686B0u;
            goto label_1686b0;
        }
    }
    ctx->pc = 0x1686A8u;
    // 0x1686a8: 0x1682000c  bne         $s4, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1686A8u;
    {
        const bool branch_taken_0x1686a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1686ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686A8u;
        // 0x1686ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686a8) {
            ctx->pc = 0x1686DCu;
            goto label_1686dc;
        }
    }
    ctx->pc = 0x1686B0u;
label_1686b0:
    // 0x1686b0: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x1686b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x1686b4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1686b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1686b8: 0x2652818  mult        $a1, $s3, $a1
    ctx->pc = 0x1686b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1686bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1686bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1686c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1686c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686c8: 0x24a50640  addiu       $a1, $a1, 0x640
    ctx->pc = 0x1686c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
    // 0x1686cc: 0xc059cee  jal         func_1673B8
    ctx->pc = 0x1686CCu;
    SET_GPR_U32(ctx, 31, 0x1686D4u);
    ctx->pc = 0x1686D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1686CCu;
    // 0x1686d0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1673B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1673B8u, 0x1686CCu, 0x1686D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1686D4u;
label_1686d4:
    // 0x1686d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1686D4u;
    {
        const bool branch_taken_0x1686d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1686d4) {
            ctx->pc = 0x1686FCu;
            goto label_1686fc;
        }
    }
    ctx->pc = 0x1686DCu;
label_1686dc:
    // 0x1686dc: 0x16820009  bne         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1686DCu;
    {
        const bool branch_taken_0x1686dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1686E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686DCu;
        // 0x1686e0: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686dc) {
            ctx->pc = 0x168704u;
            goto label_168704;
        }
    }
    ctx->pc = 0x1686E4u;
    // 0x1686e4: 0x2702818  mult        $a1, $s3, $s0
    ctx->pc = 0x1686e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1686e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1686e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1686ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686f0: 0x24a50640  addiu       $a1, $a1, 0x640
    ctx->pc = 0x1686f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
    // 0x1686f4: 0xc059e7a  jal         func_1679E8
    ctx->pc = 0x1686F4u;
    SET_GPR_U32(ctx, 31, 0x1686FCu);
    ctx->pc = 0x1686F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1686F4u;
    // 0x1686f8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1679E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1679E8u, 0x1686F4u, 0x1686FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1686FCu;
label_1686fc:
    // 0x1686fc: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1686FCu;
    {
        const bool branch_taken_0x1686fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686FCu;
        // 0x168700: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686fc) {
            ctx->pc = 0x168A54u;
            goto label_168a54;
        }
    }
    ctx->pc = 0x168704u;
label_168704:
    // 0x168704: 0x24100130  addiu       $s0, $zero, 0x130
    ctx->pc = 0x168704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168708: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x168708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x16870c: 0x2701818  mult        $v1, $s3, $s0
    ctx->pc = 0x16870cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x168710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x168710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168714: 0x24a51148  addiu       $a1, $a1, 0x1148
    ctx->pc = 0x168714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4424));
    // 0x168718: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x168718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16871c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16871cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168720: 0x8c460654  lw          $a2, 0x654($v0)
    ctx->pc = 0x168720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1620)));
    // 0x168724: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x168724u;
    SET_GPR_U32(ctx, 31, 0x16872Cu);
    ctx->pc = 0x168728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168724u;
    // 0x168728: 0x8467069c  lh          $a3, 0x69C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x168724u, 0x16872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16872Cu;
label_16872c:
    // 0x16872c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x16872cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168734: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x168734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168738: 0xc059faa  jal         func_167EA8
    ctx->pc = 0x168738u;
    SET_GPR_U32(ctx, 31, 0x168740u);
    ctx->pc = 0x16873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168738u;
    // 0x16873c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167EA8u, 0x168738u, 0x168740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168740u;
label_168740:
    // 0x168740: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x168740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168744: 0x124000c2  beqz        $s2, . + 4 + (0xC2 << 2)
    ctx->pc = 0x168744u;
    {
        const bool branch_taken_0x168744 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x168748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168744u;
        // 0x168748: 0x2701018  mult        $v0, $s3, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168744) {
            ctx->pc = 0x168A50u;
            goto label_168a50;
        }
    }
    ctx->pc = 0x16874Cu;
    // 0x16874c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x16874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x168750: 0xac720650  sw          $s2, 0x650($v1)
    ctx->pc = 0x168750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1616), GPR_U32(ctx, 18));
    // 0x168754: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x168754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168758: 0x86220b02  lh          $v0, 0xB02($s1)
    ctx->pc = 0x168758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2818)));
    // 0x16875c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x168760: 0xa6220b02  sh          $v0, 0xB02($s1)
    ctx->pc = 0x168760u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2818), (uint16_t)GPR_U32(ctx, 2));
    // 0x168764: 0x8c8306b0  lw          $v1, 0x6B0($a0)
    ctx->pc = 0x168764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1712)));
    // 0x168768: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x168768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x16876c: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x16876cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x168770: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x168770u;
    {
        const bool branch_taken_0x168770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x168774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168770u;
        // 0x168774: 0x2701818  mult        $v1, $s3, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168770) {
            ctx->pc = 0x1687C8u;
            goto label_1687c8;
        }
    }
    ctx->pc = 0x168778u;
    // 0x168778: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x168778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16877c: 0x8c4306b8  lw          $v1, 0x6B8($v0)
    ctx->pc = 0x16877cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1720)));
    // 0x168780: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x168780u;
    {
        const bool branch_taken_0x168780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168780u;
        // 0x168784: 0x2701818  mult        $v1, $s3, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168780) {
            ctx->pc = 0x16879Cu;
            goto label_16879c;
        }
    }
    ctx->pc = 0x168788u;
    // 0x168788: 0x8ec2b734  lw          $v0, -0x48CC($s6)
    ctx->pc = 0x168788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
    // 0x16878c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x16878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x168790: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x168790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x168794: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x168794u;
    {
        const bool branch_taken_0x168794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168794u;
        // 0x168798: 0xac8306b8  sw          $v1, 0x6B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168794) {
            ctx->pc = 0x1687C8u;
            goto label_1687c8;
        }
    }
    ctx->pc = 0x16879Cu;
label_16879c:
    // 0x16879c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x16879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1687a0: 0xc0e5ba8  jal         func_396EA0
    ctx->pc = 0x1687A0u;
    SET_GPR_U32(ctx, 31, 0x1687A8u);
    ctx->pc = 0x1687A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1687A0u;
    // 0x1687a4: 0x8c4406b0  lw          $a0, 0x6B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396EA0u, 0x1687A0u, 0x1687A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1687A8u;
label_1687a8:
    // 0x1687a8: 0x2701018  mult        $v0, $s3, $s0
    ctx->pc = 0x1687a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1687ac: 0x8ec4b734  lw          $a0, -0x48CC($s6)
    ctx->pc = 0x1687acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
    // 0x1687b0: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x1687b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1687b4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1687b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1687b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1687b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687bc: 0xaca206b8  sw          $v0, 0x6B8($a1)
    ctx->pc = 0x1687bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1720), GPR_U32(ctx, 2));
    // 0x1687c0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1687c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1687c4: 0xacc306c0  sw          $v1, 0x6C0($a2)
    ctx->pc = 0x1687c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1728), GPR_U32(ctx, 3));
label_1687c8:
    // 0x1687c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1687c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687cc: 0xc05a056  jal         func_168158
    ctx->pc = 0x1687CCu;
    SET_GPR_U32(ctx, 31, 0x1687D4u);
    ctx->pc = 0x1687D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1687CCu;
    // 0x1687d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168158u, 0x1687CCu, 0x1687D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1687D4u;
label_1687d4:
    // 0x1687d4: 0x1240009e  beqz        $s2, . + 4 + (0x9E << 2)
    ctx->pc = 0x1687D4u;
    {
        const bool branch_taken_0x1687d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687D4u;
        // 0x1687d8: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687d4) {
            ctx->pc = 0x168A50u;
            goto label_168a50;
        }
    }
    ctx->pc = 0x1687DCu;
    // 0x1687dc: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x1687dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1687e0: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1687e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
    // 0x1687e4: 0x94620432  lhu         $v0, 0x432($v1)
    ctx->pc = 0x1687e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1074)));
    // 0x1687e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1687e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1687ec: 0x16890004  bne         $s4, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1687ECu;
    {
        const bool branch_taken_0x1687ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 9));
        ctx->pc = 0x1687F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687ECu;
        // 0x1687f0: 0xa4620432  sh          $v0, 0x432($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1074), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687ec) {
            ctx->pc = 0x168800u;
            goto label_168800;
        }
    }
    ctx->pc = 0x1687F4u;
    // 0x1687f4: 0x94620324  lhu         $v0, 0x324($v1)
    ctx->pc = 0x1687f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 804)));
    // 0x1687f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1687f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1687fc: 0xa4620324  sh          $v0, 0x324($v1)
    ctx->pc = 0x1687fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 804), (uint16_t)GPR_U32(ctx, 2));
label_168800:
    // 0x168800: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x168800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168804: 0x2681818  mult        $v1, $s3, $t0
    ctx->pc = 0x168804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x168808: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x168808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16880c: 0x84430698  lh          $v1, 0x698($v0)
    ctx->pc = 0x16880cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1688)));
    // 0x168810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x168810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168814: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x168814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168818: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x168818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16881c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x168820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168824: 0xa4830698  sh          $v1, 0x698($a0)
    ctx->pc = 0x168824u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1688), (uint16_t)GPR_U32(ctx, 3));
    // 0x168828: 0x84a2069c  lh          $v0, 0x69C($a1)
    ctx->pc = 0x168828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1692)));
    // 0x16882c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x168830: 0xa4e2069c  sh          $v0, 0x69C($a3)
    ctx->pc = 0x168830u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1692), (uint16_t)GPR_U32(ctx, 2));
    // 0x168834: 0x84c3069c  lh          $v1, 0x69C($a2)
    ctx->pc = 0x168834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1692)));
    // 0x168838: 0x75182a  slt         $v1, $v1, $s5
    ctx->pc = 0x168838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x16883c: 0x54600076  bnel        $v1, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x16883Cu;
    {
        const bool branch_taken_0x16883c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16883c) {
            ctx->pc = 0x168840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16883Cu;
            // 0x168840: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168A18u;
            goto label_168a18;
        }
    }
    ctx->pc = 0x168844u;
    // 0x168844: 0x12890003  beq         $s4, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168844u;
    {
        const bool branch_taken_0x168844 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 9));
        ctx->pc = 0x168848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168844u;
        // 0x168848: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168844) {
            ctx->pc = 0x168854u;
            goto label_168854;
        }
    }
    ctx->pc = 0x16884Cu;
    // 0x16884c: 0x1682006f  bne         $s4, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x16884Cu;
    {
        const bool branch_taken_0x16884c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x168850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16884Cu;
        // 0x168850: 0x2681818  mult        $v1, $s3, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16884c) {
            ctx->pc = 0x168A0Cu;
            goto label_168a0c;
        }
    }
    ctx->pc = 0x168854u;
label_168854:
    // 0x168854: 0x2681018  mult        $v0, $s3, $t0
    ctx->pc = 0x168854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x168858: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x168858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16885c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x16885cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x168860: 0x24630640  addiu       $v1, $v1, 0x640
    ctx->pc = 0x168860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
    // 0x168864: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x168864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x168868: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x168868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16886c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x16886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x168870: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x168870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168874: 0x82040018  lb          $a0, 0x18($s0)
    ctx->pc = 0x168874u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x168878: 0x4800057  bltz        $a0, . + 4 + (0x57 << 2)
    ctx->pc = 0x168878u;
    {
        const bool branch_taken_0x168878 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168878u;
        // 0x16887c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168878) {
            ctx->pc = 0x1689D8u;
            goto label_1689d8;
        }
    }
    ctx->pc = 0x168880u;
    // 0x168880: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x168880u;
    SET_GPR_U32(ctx, 31, 0x168888u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x168880u, 0x168888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168888u;
label_168888:
    // 0x168888: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x168888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16888c: 0x92030017  lbu         $v1, 0x17($s0)
    ctx->pc = 0x16888cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x168890: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x168890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168894: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x168894u;
    {
        const bool branch_taken_0x168894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x168898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168894u;
        // 0x168898: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168894) {
            ctx->pc = 0x168920u;
            goto label_168920;
        }
    }
    ctx->pc = 0x16889Cu;
    // 0x16889c: 0x92030016  lbu         $v1, 0x16($s0)
    ctx->pc = 0x16889cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1688a0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1688a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1688a4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1688A4u;
    {
        const bool branch_taken_0x1688a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1688A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688A4u;
        // 0x1688a8: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1688a4) {
            ctx->pc = 0x168920u;
            goto label_168920;
        }
    }
    ctx->pc = 0x1688ACu;
    // 0x1688ac: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1688acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1688b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1688b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1688b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1688b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1688b8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1688b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1688bc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1688bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1688c0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1688c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1688c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1688c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1688cc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1688ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1688d0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1688d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1688d4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1688d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1688d8: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x1688d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1688dc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1688dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1688e0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1688e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1688e4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1688e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1688e8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1688e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1688ec: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1688ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1688f0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1688f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1688f4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1688f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1688f8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1688f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1688fc: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x1688fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x168900: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x168900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x168904: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x168904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x168908: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x168908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16890c: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x16890cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x168910: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x168910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x168914: 0xc0c5a3a  jal         func_3168E8
    ctx->pc = 0x168914u;
    SET_GPR_U32(ctx, 31, 0x16891Cu);
    ctx->pc = 0x168918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168914u;
    // 0x168918: 0x82040018  lb          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3168E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3168E8u, 0x168914u, 0x16891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16891Cu;
label_16891c:
    // 0x16891c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x16891cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168920:
    // 0x168920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168924: 0xa25500d3  sb          $s5, 0xD3($s2)
    ctx->pc = 0x168924u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 211), (uint8_t)GPR_U32(ctx, 21));
    // 0x168928: 0xc059856  jal         func_166158
    ctx->pc = 0x168928u;
    SET_GPR_U32(ctx, 31, 0x168930u);
    ctx->pc = 0x16892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168928u;
    // 0x16892c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x168928u, 0x168930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168930u;
label_168930:
    // 0x168930: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x168930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x168934: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x168934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168938: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x168938u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x16893c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x16893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x168940: 0x84820432  lh          $v0, 0x432($a0)
    ctx->pc = 0x168940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1074)));
    // 0x168944: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x168944u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x168948: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x168948u;
    {
        const bool branch_taken_0x168948 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x16894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168948u;
        // 0x16894c: 0xa4820432  sh          $v0, 0x432($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1074), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168948) {
            ctx->pc = 0x16895Cu;
            goto label_16895c;
        }
    }
    ctx->pc = 0x168950u;
    // 0x168950: 0x84820324  lh          $v0, 0x324($a0)
    ctx->pc = 0x168950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x168954: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x168954u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x168958: 0xa4820324  sh          $v0, 0x324($a0)
    ctx->pc = 0x168958u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 804), (uint16_t)GPR_U32(ctx, 2));
label_16895c:
    // 0x16895c: 0x24040130  addiu       $a0, $zero, 0x130
    ctx->pc = 0x16895cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168960: 0x2641018  mult        $v0, $s3, $a0
    ctx->pc = 0x168960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x168964: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x168964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x168968: 0x8462069c  lh          $v0, 0x69C($v1)
    ctx->pc = 0x168968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1692)));
    // 0x16896c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16896cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168970: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x168970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168974: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x168974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168978: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x168978u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x16897c: 0xa4a2069c  sh          $v0, 0x69C($a1)
    ctx->pc = 0x16897cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1692), (uint16_t)GPR_U32(ctx, 2));
    // 0x168980: 0x84c3069a  lh          $v1, 0x69A($a2)
    ctx->pc = 0x168980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1690)));
    // 0x168984: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x168984u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x168988: 0xa483069a  sh          $v1, 0x69A($a0)
    ctx->pc = 0x168988u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1690), (uint16_t)GPR_U32(ctx, 3));
    // 0x16898c: 0x82040019  lb          $a0, 0x19($s0)
    ctx->pc = 0x16898cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x168990: 0x4800011  bltz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x168990u;
    {
        const bool branch_taken_0x168990 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x168994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168990u;
        // 0x168994: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168990) {
            ctx->pc = 0x1689D8u;
            goto label_1689d8;
        }
    }
    ctx->pc = 0x168998u;
    // 0x168998: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x168998u;
    SET_GPR_U32(ctx, 31, 0x1689A0u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x168998u, 0x1689A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689A0u;
label_1689a0:
    // 0x1689a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1689a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689a4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1689a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1689a8: 0x1455000b  bne         $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x1689A8u;
    {
        const bool branch_taken_0x1689a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x1689ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689A8u;
        // 0x1689ac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689a8) {
            ctx->pc = 0x1689D8u;
            goto label_1689d8;
        }
    }
    ctx->pc = 0x1689B0u;
    // 0x1689b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1689b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1689b4: 0xc05a432  jal         func_1690C8
    ctx->pc = 0x1689B4u;
    SET_GPR_U32(ctx, 31, 0x1689BCu);
    ctx->pc = 0x1689B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689B4u;
    // 0x1689b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1690C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1690C8u, 0x1689B4u, 0x1689BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689BCu;
label_1689bc:
    // 0x1689bc: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1689bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1689c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1689c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1689c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1689C4u;
    {
        const bool branch_taken_0x1689c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689C4u;
        // 0x1689c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689c4) {
            ctx->pc = 0x1689D4u;
            goto label_1689d4;
        }
    }
    ctx->pc = 0x1689CCu;
    // 0x1689cc: 0xc05a432  jal         func_1690C8
    ctx->pc = 0x1689CCu;
    SET_GPR_U32(ctx, 31, 0x1689D4u);
    ctx->pc = 0x1689D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689CCu;
    // 0x1689d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1690C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1690C8u, 0x1689CCu, 0x1689D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689D4u;
label_1689d4:
    // 0x1689d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1689d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1689d8:
    // 0x1689d8: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1689D8u;
    {
        const bool branch_taken_0x1689d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1689DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689D8u;
        // 0x1689dc: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689d8) {
            ctx->pc = 0x1689E4u;
            goto label_1689e4;
        }
    }
    ctx->pc = 0x1689E0u;
    // 0x1689e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1689e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1689e4:
    // 0x1689e4: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x1689e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x1689e8: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x1689e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1689ec: 0x2622818  mult        $a1, $s3, $v0
    ctx->pc = 0x1689ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1689f0: 0x24840640  addiu       $a0, $a0, 0x640
    ctx->pc = 0x1689f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
    // 0x1689f4: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x1689f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1689f8: 0xa4430692  sh          $v1, 0x692($v0)
    ctx->pc = 0x1689f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1682), (uint16_t)GPR_U32(ctx, 3));
    // 0x1689fc: 0xc05b78c  jal         func_16DE30
    ctx->pc = 0x1689FCu;
    SET_GPR_U32(ctx, 31, 0x168A04u);
    ctx->pc = 0x168A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689FCu;
    // 0x168a00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DE30u, 0x1689FCu, 0x168A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A04u;
label_168a04:
    // 0x168a04: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x168A04u;
    {
        const bool branch_taken_0x168a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A04u;
        // 0x168a08: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a04) {
            ctx->pc = 0x168A54u;
            goto label_168a54;
        }
    }
    ctx->pc = 0x168A0Cu;
label_168a0c:
    // 0x168a0c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x168a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x168a10: 0xa0400691  sb          $zero, 0x691($v0)
    ctx->pc = 0x168a10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1681), (uint8_t)GPR_U32(ctx, 0));
    // 0x168a14: 0x24060130  addiu       $a2, $zero, 0x130
    ctx->pc = 0x168a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_168a18:
    // 0x168a18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168a1c: 0x2662018  mult        $a0, $s3, $a2
    ctx->pc = 0x168a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x168a20: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x168a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x168a24: 0x84640696  lh          $a0, 0x696($v1)
    ctx->pc = 0x168a24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1686)));
    // 0x168a28: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168A28u;
    {
        const bool branch_taken_0x168a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x168A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A28u;
        // 0x168a2c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a28) {
            ctx->pc = 0x168A50u;
            goto label_168a50;
        }
    }
    ctx->pc = 0x168A30u;
    // 0x168a30: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x168a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a34: 0x84820698  lh          $v0, 0x698($a0)
    ctx->pc = 0x168a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1688)));
    // 0x168a38: 0x84a30696  lh          $v1, 0x696($a1)
    ctx->pc = 0x168a38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1686)));
    // 0x168a3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x168a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168a40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168A40u;
    {
        const bool branch_taken_0x168a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A40u;
        // 0x168a44: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a40) {
            ctx->pc = 0x168A54u;
            goto label_168a54;
        }
    }
    ctx->pc = 0x168A48u;
    // 0x168a48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x168a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a4c: 0xa0400690  sb          $zero, 0x690($v0)
    ctx->pc = 0x168a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1680), (uint8_t)GPR_U32(ctx, 0));
label_168a50:
    // 0x168a50: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x168a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_168a54:
    // 0x168a54: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x168a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x168a58: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x168a58u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x168a5c: 0x2a630004  slti        $v1, $s3, 0x4
    ctx->pc = 0x168a5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x168a60: 0x1460fde9  bnez        $v1, . + 4 + (-0x217 << 2)
    ctx->pc = 0x168A60u;
    {
        const bool branch_taken_0x168a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A60u;
        // 0x168a64: 0x24100130  addiu       $s0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a60) {
            ctx->pc = 0x168208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168208;
        }
    }
    ctx->pc = 0x168A68u;
    // 0x168a68: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x168a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x168a6c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x168a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x168a70: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x168a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x168a74: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x168a74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x168a78: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x168a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x168a7c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x168a7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168a80: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x168a80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x168a84: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x168a84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x168a88: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x168a88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x168a8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x168a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x168a90: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x168a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x168a94: 0x3e00008  jr          $ra
    ctx->pc = 0x168A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A94u;
        // 0x168a98: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168A9Cu;
    // 0x168a9c: 0x0  nop
    ctx->pc = 0x168a9cu;
    // NOP
    ctx->pc = 0x168aa0u;
}
