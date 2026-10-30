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

// Function: sub_002071D8
// Address: 0x2071d8 - 0x2073e8
void sub_002071D8_0x2071d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002071D8_0x2071d8");
#endif

    switch (ctx->pc) {
        case 0x2071d8u: goto label_2071d8;
        case 0x2071dcu: goto label_2071dc;
        case 0x2071e0u: goto label_2071e0;
        case 0x2071e4u: goto label_2071e4;
        case 0x2071e8u: goto label_2071e8;
        case 0x2071ecu: goto label_2071ec;
        case 0x2071f0u: goto label_2071f0;
        case 0x2071f4u: goto label_2071f4;
        case 0x2071f8u: goto label_2071f8;
        case 0x2071fcu: goto label_2071fc;
        case 0x207200u: goto label_207200;
        case 0x207204u: goto label_207204;
        case 0x207208u: goto label_207208;
        case 0x20720cu: goto label_20720c;
        case 0x207210u: goto label_207210;
        case 0x207214u: goto label_207214;
        case 0x207218u: goto label_207218;
        case 0x20721cu: goto label_20721c;
        case 0x207220u: goto label_207220;
        case 0x207224u: goto label_207224;
        case 0x207228u: goto label_207228;
        case 0x20722cu: goto label_20722c;
        case 0x207230u: goto label_207230;
        case 0x207234u: goto label_207234;
        case 0x207238u: goto label_207238;
        case 0x20723cu: goto label_20723c;
        case 0x207240u: goto label_207240;
        case 0x207244u: goto label_207244;
        case 0x207248u: goto label_207248;
        case 0x20724cu: goto label_20724c;
        case 0x207250u: goto label_207250;
        case 0x207254u: goto label_207254;
        case 0x207258u: goto label_207258;
        case 0x20725cu: goto label_20725c;
        case 0x207260u: goto label_207260;
        case 0x207264u: goto label_207264;
        case 0x207268u: goto label_207268;
        case 0x20726cu: goto label_20726c;
        case 0x207270u: goto label_207270;
        case 0x207274u: goto label_207274;
        case 0x207278u: goto label_207278;
        case 0x20727cu: goto label_20727c;
        case 0x207280u: goto label_207280;
        case 0x207284u: goto label_207284;
        case 0x207288u: goto label_207288;
        case 0x20728cu: goto label_20728c;
        case 0x207290u: goto label_207290;
        case 0x207294u: goto label_207294;
        case 0x207298u: goto label_207298;
        case 0x20729cu: goto label_20729c;
        case 0x2072a0u: goto label_2072a0;
        case 0x2072a4u: goto label_2072a4;
        case 0x2072a8u: goto label_2072a8;
        case 0x2072acu: goto label_2072ac;
        case 0x2072b0u: goto label_2072b0;
        case 0x2072b4u: goto label_2072b4;
        case 0x2072b8u: goto label_2072b8;
        case 0x2072bcu: goto label_2072bc;
        case 0x2072c0u: goto label_2072c0;
        case 0x2072c4u: goto label_2072c4;
        case 0x2072c8u: goto label_2072c8;
        case 0x2072ccu: goto label_2072cc;
        case 0x2072d0u: goto label_2072d0;
        case 0x2072d4u: goto label_2072d4;
        case 0x2072d8u: goto label_2072d8;
        case 0x2072dcu: goto label_2072dc;
        case 0x2072e0u: goto label_2072e0;
        case 0x2072e4u: goto label_2072e4;
        case 0x2072e8u: goto label_2072e8;
        case 0x2072ecu: goto label_2072ec;
        case 0x2072f0u: goto label_2072f0;
        case 0x2072f4u: goto label_2072f4;
        case 0x2072f8u: goto label_2072f8;
        case 0x2072fcu: goto label_2072fc;
        case 0x207300u: goto label_207300;
        case 0x207304u: goto label_207304;
        case 0x207308u: goto label_207308;
        case 0x20730cu: goto label_20730c;
        case 0x207310u: goto label_207310;
        case 0x207314u: goto label_207314;
        case 0x207318u: goto label_207318;
        case 0x20731cu: goto label_20731c;
        case 0x207320u: goto label_207320;
        case 0x207324u: goto label_207324;
        case 0x207328u: goto label_207328;
        case 0x20732cu: goto label_20732c;
        case 0x207330u: goto label_207330;
        case 0x207334u: goto label_207334;
        case 0x207338u: goto label_207338;
        case 0x20733cu: goto label_20733c;
        case 0x207340u: goto label_207340;
        case 0x207344u: goto label_207344;
        case 0x207348u: goto label_207348;
        case 0x20734cu: goto label_20734c;
        case 0x207350u: goto label_207350;
        case 0x207354u: goto label_207354;
        case 0x207358u: goto label_207358;
        case 0x20735cu: goto label_20735c;
        case 0x207360u: goto label_207360;
        case 0x207364u: goto label_207364;
        case 0x207368u: goto label_207368;
        case 0x20736cu: goto label_20736c;
        case 0x207370u: goto label_207370;
        case 0x207374u: goto label_207374;
        case 0x207378u: goto label_207378;
        case 0x20737cu: goto label_20737c;
        case 0x207380u: goto label_207380;
        case 0x207384u: goto label_207384;
        case 0x207388u: goto label_207388;
        case 0x20738cu: goto label_20738c;
        case 0x207390u: goto label_207390;
        case 0x207394u: goto label_207394;
        case 0x207398u: goto label_207398;
        case 0x20739cu: goto label_20739c;
        case 0x2073a0u: goto label_2073a0;
        case 0x2073a4u: goto label_2073a4;
        case 0x2073a8u: goto label_2073a8;
        case 0x2073acu: goto label_2073ac;
        case 0x2073b0u: goto label_2073b0;
        case 0x2073b4u: goto label_2073b4;
        case 0x2073b8u: goto label_2073b8;
        case 0x2073bcu: goto label_2073bc;
        case 0x2073c0u: goto label_2073c0;
        case 0x2073c4u: goto label_2073c4;
        case 0x2073c8u: goto label_2073c8;
        case 0x2073ccu: goto label_2073cc;
        case 0x2073d0u: goto label_2073d0;
        case 0x2073d4u: goto label_2073d4;
        case 0x2073d8u: goto label_2073d8;
        case 0x2073dcu: goto label_2073dc;
        case 0x2073e0u: goto label_2073e0;
        case 0x2073e4u: goto label_2073e4;
        default: break;
    }

    ctx->pc = 0x2071d8u;

label_2071d8:
    // 0x2071d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2071d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2071dc:
    // 0x2071dc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2071dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2071e0:
    // 0x2071e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2071e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2071e4:
    // 0x2071e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2071e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2071e8:
    // 0x2071e8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2071e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2071ec:
    // 0x2071ec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2071ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2071f0:
    // 0x2071f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2071f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2071f4:
    // 0x2071f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2071f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2071f8:
    // 0x2071f8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2071f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2071fc:
    // 0x2071fc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2071fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_207200:
    // 0x207200: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x207200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_207204:
    // 0x207204: 0x5440006f  bnel        $v0, $zero, . + 4 + (0x6F << 2)
label_207208:
    if (ctx->pc == 0x207208u) {
        ctx->pc = 0x207208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207204u;
        // 0x207208: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20720Cu;
        goto label_20720c;
    }
    ctx->pc = 0x207204u;
    {
        const bool branch_taken_0x207204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207204) {
            ctx->pc = 0x207208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207204u;
            // 0x207208: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2073C4u;
            goto label_2073c4;
        }
    }
    ctx->pc = 0x20720Cu;
label_20720c:
    // 0x20720c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20720cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207210:
    // 0x207210: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x207210u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_207214:
    // 0x207214: 0xae120094  sw          $s2, 0x94($s0)
    ctx->pc = 0x207214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 18));
label_207218:
    // 0x207218: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x207218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_20721c:
    // 0x20721c: 0x8e8b27e4  lw          $t3, 0x27E4($s4)
    ctx->pc = 0x20721cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_207220:
    // 0x207220: 0x24538ab0  addiu       $s3, $v0, -0x7550
    ctx->pc = 0x207220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937264));
label_207224:
    // 0x207224: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x207224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_207228:
    // 0x207228: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x207228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_20722c:
    // 0x20722c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x20722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_207230:
    // 0x207230: 0x24a58aa0  addiu       $a1, $a1, -0x7560
    ctx->pc = 0x207230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937248));
label_207234:
    // 0x207234: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x207234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207238:
    // 0x207238: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x207238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20723c:
    // 0x20723c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20723cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_207240:
    // 0x207240: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x207240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_207244:
    // 0x207244: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x207244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_207248:
    // 0x207248: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x207248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20724c:
    // 0x20724c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x20724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_207250:
    // 0x207250: 0x40f809  jalr        $v0
label_207254:
    if (ctx->pc == 0x207254u) {
        ctx->pc = 0x207254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207250u;
        // 0x207254: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207258u;
        goto label_207258;
    }
    ctx->pc = 0x207250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207258u);
        ctx->pc = 0x207254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207250u;
        // 0x207254: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207250u, 0x207258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207258u;
label_207258:
    // 0x207258: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20725c:
    if (ctx->pc == 0x20725Cu) {
        ctx->pc = 0x207260u;
        goto label_207260;
    }
    ctx->pc = 0x207258u;
    {
        const bool branch_taken_0x207258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207258) {
            ctx->pc = 0x207268u;
            goto label_207268;
        }
    }
    ctx->pc = 0x207260u;
label_207260:
    // 0x207260: 0xc074fbc  jal         func_1D3EF0
label_207264:
    if (ctx->pc == 0x207264u) {
        ctx->pc = 0x207264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207260u;
        // 0x207264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207268u;
        goto label_207268;
    }
    ctx->pc = 0x207260u;
    SET_GPR_U32(ctx, 31, 0x207268u);
    ctx->pc = 0x207264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207260u;
    // 0x207264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x207260u, 0x207268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207268u;
label_207268:
    // 0x207268: 0xc080ec6  jal         func_203B18
label_20726c:
    if (ctx->pc == 0x20726Cu) {
        ctx->pc = 0x20726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207268u;
        // 0x20726c: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207270u;
        goto label_207270;
    }
    ctx->pc = 0x207268u;
    SET_GPR_U32(ctx, 31, 0x207270u);
    ctx->pc = 0x20726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207268u;
    // 0x20726c: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B18u, 0x207268u, 0x207270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207270u;
label_207270:
    // 0x207270: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x207270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_207274:
    // 0x207274: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x207274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_207278:
    // 0x207278: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x207278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_20727c:
    // 0x20727c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20727cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207280:
    // 0x207280: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x207280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_207284:
    // 0x207284: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x207284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_207288:
    // 0x207288: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x207288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20728c:
    // 0x20728c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x20728cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_207290:
    // 0x207290: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x207290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207294:
    // 0x207294: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x207294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_207298:
    // 0x207298: 0x26070050  addiu       $a3, $s0, 0x50
    ctx->pc = 0x207298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_20729c:
    // 0x20729c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x20729cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2072a0:
    // 0x2072a0: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x2072a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2072a4:
    // 0x2072a4: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x2072a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
label_2072a8:
    // 0x2072a8: 0xc075044  jal         func_1D4110
label_2072ac:
    if (ctx->pc == 0x2072ACu) {
        ctx->pc = 0x2072ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072A8u;
        // 0x2072ac: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072B0u;
        goto label_2072b0;
    }
    ctx->pc = 0x2072A8u;
    SET_GPR_U32(ctx, 31, 0x2072B0u);
    ctx->pc = 0x2072ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072A8u;
    // 0x2072ac: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x2072A8u, 0x2072B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072B0u;
label_2072b0:
    // 0x2072b0: 0xc067b9c  jal         func_19EE70
label_2072b4:
    if (ctx->pc == 0x2072B4u) {
        ctx->pc = 0x2072B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072B0u;
        // 0x2072b4: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072B8u;
        goto label_2072b8;
    }
    ctx->pc = 0x2072B0u;
    SET_GPR_U32(ctx, 31, 0x2072B8u);
    ctx->pc = 0x2072B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072B0u;
    // 0x2072b4: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2072B0u, 0x2072B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072B8u;
label_2072b8:
    // 0x2072b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2072b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2072bc:
    // 0x2072bc: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x2072bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_2072c0:
    // 0x2072c0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2072c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2072c4:
    // 0x2072c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2072c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2072c8:
    // 0x2072c8: 0x8c6ad328  lw          $t2, -0x2CD8($v1)
    ctx->pc = 0x2072c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955816)));
label_2072cc:
    // 0x2072cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2072ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2072d0:
    // 0x2072d0: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2072d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2072d4:
    // 0x2072d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2072d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2072d8:
    // 0x2072d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2072d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2072dc:
    // 0x2072dc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2072dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2072e0:
    // 0x2072e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2072e4:
    // 0x2072e4: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x2072e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2072e8:
    // 0x2072e8: 0xc07508c  jal         func_1D4230
label_2072ec:
    if (ctx->pc == 0x2072ECu) {
        ctx->pc = 0x2072ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072E8u;
        // 0x2072ec: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072F0u;
        goto label_2072f0;
    }
    ctx->pc = 0x2072E8u;
    SET_GPR_U32(ctx, 31, 0x2072F0u);
    ctx->pc = 0x2072ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072E8u;
    // 0x2072ec: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x2072E8u, 0x2072F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072F0u;
label_2072f0:
    // 0x2072f0: 0xc080ebe  jal         func_203AF8
label_2072f4:
    if (ctx->pc == 0x2072F4u) {
        ctx->pc = 0x2072F8u;
        goto label_2072f8;
    }
    ctx->pc = 0x2072F0u;
    SET_GPR_U32(ctx, 31, 0x2072F8u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x2072F0u, 0x2072F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072F8u;
label_2072f8:
    // 0x2072f8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2072fc:
    // 0x2072fc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2072fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_207300:
    // 0x207300: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x207300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_207304:
    // 0x207304: 0xac720088  sw          $s2, 0x88($v1)
    ctx->pc = 0x207304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 18));
label_207308:
    // 0x207308: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x207308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_20730c:
    // 0x20730c: 0xac440094  sw          $a0, 0x94($v0)
    ctx->pc = 0x20730cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 4));
label_207310:
    // 0x207310: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x207310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_207314:
    // 0x207314: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x207314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207318:
    // 0x207318: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x207318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_20731c:
    // 0x20731c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x20731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_207320:
    // 0x207320: 0x60f809  jalr        $v1
label_207324:
    if (ctx->pc == 0x207324u) {
        ctx->pc = 0x207324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207320u;
        // 0x207324: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207328u;
        goto label_207328;
    }
    ctx->pc = 0x207320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207328u);
        ctx->pc = 0x207324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207320u;
        // 0x207324: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207320u, 0x207328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207328u;
label_207328:
    // 0x207328: 0xc080ebe  jal         func_203AF8
label_20732c:
    if (ctx->pc == 0x20732Cu) {
        ctx->pc = 0x207330u;
        goto label_207330;
    }
    ctx->pc = 0x207328u;
    SET_GPR_U32(ctx, 31, 0x207330u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x207328u, 0x207330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207330u;
label_207330:
    // 0x207330: 0xc080ec2  jal         func_203B08
label_207334:
    if (ctx->pc == 0x207334u) {
        ctx->pc = 0x207334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207330u;
        // 0x207334: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207338u;
        goto label_207338;
    }
    ctx->pc = 0x207330u;
    SET_GPR_U32(ctx, 31, 0x207338u);
    ctx->pc = 0x207334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207330u;
    // 0x207334: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x207330u, 0x207338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207338u;
label_207338:
    // 0x207338: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x207338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20733c:
    // 0x20733c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20733cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_207340:
    // 0x207340: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x207340u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_207344:
    // 0x207344: 0x24a58af0  addiu       $a1, $a1, -0x7510
    ctx->pc = 0x207344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937328));
label_207348:
    // 0x207348: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x207348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_20734c:
    // 0x20734c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x20734cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_207350:
    // 0x207350: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x207350u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_207354:
    // 0x207354: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x207354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_207358:
    // 0x207358: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x207358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_20735c:
    // 0x20735c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20735cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207360:
    // 0x207360: 0x24090035  addiu       $t1, $zero, 0x35
    ctx->pc = 0x207360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_207364:
    // 0x207364: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x207364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207368:
    // 0x207368: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x207368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20736c:
    // 0x20736c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20736cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207370:
    // 0x207370: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x207370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_207374:
    // 0x207374: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x207374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_207378:
    // 0x207378: 0x40f809  jalr        $v0
label_20737c:
    if (ctx->pc == 0x20737Cu) {
        ctx->pc = 0x20737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207378u;
        // 0x20737c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207380u;
        goto label_207380;
    }
    ctx->pc = 0x207378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207380u);
        ctx->pc = 0x20737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207378u;
        // 0x20737c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207378u, 0x207380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207380u;
label_207380:
    // 0x207380: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_207384:
    if (ctx->pc == 0x207384u) {
        ctx->pc = 0x207384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207380u;
        // 0x207384: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207388u;
        goto label_207388;
    }
    ctx->pc = 0x207380u;
    {
        const bool branch_taken_0x207380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207380) {
            ctx->pc = 0x207384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207380u;
            // 0x207384: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207394u;
            goto label_207394;
        }
    }
    ctx->pc = 0x207388u;
label_207388:
    // 0x207388: 0xc073a9c  jal         func_1CEA70
label_20738c:
    if (ctx->pc == 0x20738Cu) {
        ctx->pc = 0x20738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207388u;
        // 0x20738c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207390u;
        goto label_207390;
    }
    ctx->pc = 0x207388u;
    SET_GPR_U32(ctx, 31, 0x207390u);
    ctx->pc = 0x20738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207388u;
    // 0x20738c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x207388u, 0x207390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207390u;
label_207390:
    // 0x207390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_207394:
    // 0x207394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x207394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207398:
    // 0x207398: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x207398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20739c:
    // 0x20739c: 0xc073ad0  jal         func_1CEB40
label_2073a0:
    if (ctx->pc == 0x2073A0u) {
        ctx->pc = 0x2073A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20739Cu;
        // 0x2073a0: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073A4u;
        goto label_2073a4;
    }
    ctx->pc = 0x20739Cu;
    SET_GPR_U32(ctx, 31, 0x2073A4u);
    ctx->pc = 0x2073A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20739Cu;
    // 0x2073a0: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x20739Cu, 0x2073A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073A4u;
label_2073a4:
    // 0x2073a4: 0xc067b9c  jal         func_19EE70
label_2073a8:
    if (ctx->pc == 0x2073A8u) {
        ctx->pc = 0x2073A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073A4u;
        // 0x2073a8: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073ACu;
        goto label_2073ac;
    }
    ctx->pc = 0x2073A4u;
    SET_GPR_U32(ctx, 31, 0x2073ACu);
    ctx->pc = 0x2073A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073A4u;
    // 0x2073a8: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2073A4u, 0x2073ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073ACu;
label_2073ac:
    // 0x2073ac: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x2073acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2073b0:
    // 0x2073b0: 0xc073b0a  jal         func_1CEC28
label_2073b4:
    if (ctx->pc == 0x2073B4u) {
        ctx->pc = 0x2073B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073B0u;
        // 0x2073b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073B8u;
        goto label_2073b8;
    }
    ctx->pc = 0x2073B0u;
    SET_GPR_U32(ctx, 31, 0x2073B8u);
    ctx->pc = 0x2073B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073B0u;
    // 0x2073b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x2073B0u, 0x2073B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073B8u;
label_2073b8:
    // 0x2073b8: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x2073b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_2073bc:
    // 0x2073bc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2073bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2073c0:
    // 0x2073c0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2073c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2073c4:
    // 0x2073c4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2073c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2073c8:
    // 0x2073c8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2073c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2073cc:
    // 0x2073cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2073ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2073d0:
    // 0x2073d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2073d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2073d4:
    // 0x2073d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2073d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2073d8:
    // 0x2073d8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2073d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2073dc:
    // 0x2073dc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2073dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2073e0:
    // 0x2073e0: 0x3e00008  jr          $ra
label_2073e4:
    if (ctx->pc == 0x2073E4u) {
        ctx->pc = 0x2073E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073E0u;
        // 0x2073e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073E8u;
        goto label_fallthrough_0x2073e0;
    }
    ctx->pc = 0x2073E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2073E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073E0u;
        // 0x2073e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2073E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2073e0:
    ctx->pc = 0x2073E8u;
}
