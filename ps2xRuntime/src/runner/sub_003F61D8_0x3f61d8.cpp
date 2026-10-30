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

// Function: sub_003F61D8
// Address: 0x3f61d8 - 0x3f6460
void sub_003F61D8_0x3f61d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F61D8_0x3f61d8");
#endif

    switch (ctx->pc) {
        case 0x3f61d8u: goto label_3f61d8;
        case 0x3f61dcu: goto label_3f61dc;
        case 0x3f61e0u: goto label_3f61e0;
        case 0x3f61e4u: goto label_3f61e4;
        case 0x3f61e8u: goto label_3f61e8;
        case 0x3f61ecu: goto label_3f61ec;
        case 0x3f61f0u: goto label_3f61f0;
        case 0x3f61f4u: goto label_3f61f4;
        case 0x3f61f8u: goto label_3f61f8;
        case 0x3f61fcu: goto label_3f61fc;
        case 0x3f6200u: goto label_3f6200;
        case 0x3f6204u: goto label_3f6204;
        case 0x3f6208u: goto label_3f6208;
        case 0x3f620cu: goto label_3f620c;
        case 0x3f6210u: goto label_3f6210;
        case 0x3f6214u: goto label_3f6214;
        case 0x3f6218u: goto label_3f6218;
        case 0x3f621cu: goto label_3f621c;
        case 0x3f6220u: goto label_3f6220;
        case 0x3f6224u: goto label_3f6224;
        case 0x3f6228u: goto label_3f6228;
        case 0x3f622cu: goto label_3f622c;
        case 0x3f6230u: goto label_3f6230;
        case 0x3f6234u: goto label_3f6234;
        case 0x3f6238u: goto label_3f6238;
        case 0x3f623cu: goto label_3f623c;
        case 0x3f6240u: goto label_3f6240;
        case 0x3f6244u: goto label_3f6244;
        case 0x3f6248u: goto label_3f6248;
        case 0x3f624cu: goto label_3f624c;
        case 0x3f6250u: goto label_3f6250;
        case 0x3f6254u: goto label_3f6254;
        case 0x3f6258u: goto label_3f6258;
        case 0x3f625cu: goto label_3f625c;
        case 0x3f6260u: goto label_3f6260;
        case 0x3f6264u: goto label_3f6264;
        case 0x3f6268u: goto label_3f6268;
        case 0x3f626cu: goto label_3f626c;
        case 0x3f6270u: goto label_3f6270;
        case 0x3f6274u: goto label_3f6274;
        case 0x3f6278u: goto label_3f6278;
        case 0x3f627cu: goto label_3f627c;
        case 0x3f6280u: goto label_3f6280;
        case 0x3f6284u: goto label_3f6284;
        case 0x3f6288u: goto label_3f6288;
        case 0x3f628cu: goto label_3f628c;
        case 0x3f6290u: goto label_3f6290;
        case 0x3f6294u: goto label_3f6294;
        case 0x3f6298u: goto label_3f6298;
        case 0x3f629cu: goto label_3f629c;
        case 0x3f62a0u: goto label_3f62a0;
        case 0x3f62a4u: goto label_3f62a4;
        case 0x3f62a8u: goto label_3f62a8;
        case 0x3f62acu: goto label_3f62ac;
        case 0x3f62b0u: goto label_3f62b0;
        case 0x3f62b4u: goto label_3f62b4;
        case 0x3f62b8u: goto label_3f62b8;
        case 0x3f62bcu: goto label_3f62bc;
        case 0x3f62c0u: goto label_3f62c0;
        case 0x3f62c4u: goto label_3f62c4;
        case 0x3f62c8u: goto label_3f62c8;
        case 0x3f62ccu: goto label_3f62cc;
        case 0x3f62d0u: goto label_3f62d0;
        case 0x3f62d4u: goto label_3f62d4;
        case 0x3f62d8u: goto label_3f62d8;
        case 0x3f62dcu: goto label_3f62dc;
        case 0x3f62e0u: goto label_3f62e0;
        case 0x3f62e4u: goto label_3f62e4;
        case 0x3f62e8u: goto label_3f62e8;
        case 0x3f62ecu: goto label_3f62ec;
        case 0x3f62f0u: goto label_3f62f0;
        case 0x3f62f4u: goto label_3f62f4;
        case 0x3f62f8u: goto label_3f62f8;
        case 0x3f62fcu: goto label_3f62fc;
        case 0x3f6300u: goto label_3f6300;
        case 0x3f6304u: goto label_3f6304;
        case 0x3f6308u: goto label_3f6308;
        case 0x3f630cu: goto label_3f630c;
        case 0x3f6310u: goto label_3f6310;
        case 0x3f6314u: goto label_3f6314;
        case 0x3f6318u: goto label_3f6318;
        case 0x3f631cu: goto label_3f631c;
        case 0x3f6320u: goto label_3f6320;
        case 0x3f6324u: goto label_3f6324;
        case 0x3f6328u: goto label_3f6328;
        case 0x3f632cu: goto label_3f632c;
        case 0x3f6330u: goto label_3f6330;
        case 0x3f6334u: goto label_3f6334;
        case 0x3f6338u: goto label_3f6338;
        case 0x3f633cu: goto label_3f633c;
        case 0x3f6340u: goto label_3f6340;
        case 0x3f6344u: goto label_3f6344;
        case 0x3f6348u: goto label_3f6348;
        case 0x3f634cu: goto label_3f634c;
        case 0x3f6350u: goto label_3f6350;
        case 0x3f6354u: goto label_3f6354;
        case 0x3f6358u: goto label_3f6358;
        case 0x3f635cu: goto label_3f635c;
        case 0x3f6360u: goto label_3f6360;
        case 0x3f6364u: goto label_3f6364;
        case 0x3f6368u: goto label_3f6368;
        case 0x3f636cu: goto label_3f636c;
        case 0x3f6370u: goto label_3f6370;
        case 0x3f6374u: goto label_3f6374;
        case 0x3f6378u: goto label_3f6378;
        case 0x3f637cu: goto label_3f637c;
        case 0x3f6380u: goto label_3f6380;
        case 0x3f6384u: goto label_3f6384;
        case 0x3f6388u: goto label_3f6388;
        case 0x3f638cu: goto label_3f638c;
        case 0x3f6390u: goto label_3f6390;
        case 0x3f6394u: goto label_3f6394;
        case 0x3f6398u: goto label_3f6398;
        case 0x3f639cu: goto label_3f639c;
        case 0x3f63a0u: goto label_3f63a0;
        case 0x3f63a4u: goto label_3f63a4;
        case 0x3f63a8u: goto label_3f63a8;
        case 0x3f63acu: goto label_3f63ac;
        case 0x3f63b0u: goto label_3f63b0;
        case 0x3f63b4u: goto label_3f63b4;
        case 0x3f63b8u: goto label_3f63b8;
        case 0x3f63bcu: goto label_3f63bc;
        case 0x3f63c0u: goto label_3f63c0;
        case 0x3f63c4u: goto label_3f63c4;
        case 0x3f63c8u: goto label_3f63c8;
        case 0x3f63ccu: goto label_3f63cc;
        case 0x3f63d0u: goto label_3f63d0;
        case 0x3f63d4u: goto label_3f63d4;
        case 0x3f63d8u: goto label_3f63d8;
        case 0x3f63dcu: goto label_3f63dc;
        case 0x3f63e0u: goto label_3f63e0;
        case 0x3f63e4u: goto label_3f63e4;
        case 0x3f63e8u: goto label_3f63e8;
        case 0x3f63ecu: goto label_3f63ec;
        case 0x3f63f0u: goto label_3f63f0;
        case 0x3f63f4u: goto label_3f63f4;
        case 0x3f63f8u: goto label_3f63f8;
        case 0x3f63fcu: goto label_3f63fc;
        case 0x3f6400u: goto label_3f6400;
        case 0x3f6404u: goto label_3f6404;
        case 0x3f6408u: goto label_3f6408;
        case 0x3f640cu: goto label_3f640c;
        case 0x3f6410u: goto label_3f6410;
        case 0x3f6414u: goto label_3f6414;
        case 0x3f6418u: goto label_3f6418;
        case 0x3f641cu: goto label_3f641c;
        case 0x3f6420u: goto label_3f6420;
        case 0x3f6424u: goto label_3f6424;
        case 0x3f6428u: goto label_3f6428;
        case 0x3f642cu: goto label_3f642c;
        case 0x3f6430u: goto label_3f6430;
        case 0x3f6434u: goto label_3f6434;
        case 0x3f6438u: goto label_3f6438;
        case 0x3f643cu: goto label_3f643c;
        case 0x3f6440u: goto label_3f6440;
        case 0x3f6444u: goto label_3f6444;
        case 0x3f6448u: goto label_3f6448;
        case 0x3f644cu: goto label_3f644c;
        case 0x3f6450u: goto label_3f6450;
        case 0x3f6454u: goto label_3f6454;
        case 0x3f6458u: goto label_3f6458;
        case 0x3f645cu: goto label_3f645c;
        default: break;
    }

    ctx->pc = 0x3f61d8u;

label_3f61d8:
    // 0x3f61d8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3f61d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3f61dc:
    // 0x3f61dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f61e0:
    // 0x3f61e0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3f61e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3f61e4:
    // 0x3f61e4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3f61e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3f61e8:
    // 0x3f61e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f61e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f61ec:
    // 0x3f61ec: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3f61ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3f61f0:
    // 0x3f61f0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3f61f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3f61f4:
    // 0x3f61f4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3f61f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3f61f8:
    // 0x3f61f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3f61f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f61fc:
    // 0x3f61fc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3f61fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_3f6200:
    // 0x3f6200: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3f6200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3f6204:
    // 0x3f6204: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3f6204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3f6208:
    // 0x3f6208: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3f6208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_3f620c:
    // 0x3f620c: 0x2457b8b8  addiu       $s7, $v0, -0x4748
    ctx->pc = 0x3f620cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3f6210:
    // 0x3f6210: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x3f6210u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3f6214:
    // 0x3f6214: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3f6214u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f6218:
    // 0x3f6218: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f6218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f621c:
    // 0x3f621c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x3f621cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_3f6220:
    // 0x3f6220: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3f6220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3f6224:
    // 0x3f6224: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f6224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f6228:
    // 0x3f6228: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f6228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f622c:
    // 0x3f622c: 0x40f809  jalr        $v0
label_3f6230:
    if (ctx->pc == 0x3F6230u) {
        ctx->pc = 0x3F6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F622Cu;
        // 0x3f6230: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6234u;
        goto label_3f6234;
    }
    ctx->pc = 0x3F622Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F6234u);
        ctx->pc = 0x3F6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F622Cu;
        // 0x3f6230: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F622Cu, 0x3F6234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F6234u;
label_3f6234:
    // 0x3f6234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f6234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f6238:
    // 0x3f6238: 0xc0ea146  jal         func_3A8518
label_3f623c:
    if (ctx->pc == 0x3F623Cu) {
        ctx->pc = 0x3F623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6238u;
        // 0x3f623c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6240u;
        goto label_3f6240;
    }
    ctx->pc = 0x3F6238u;
    SET_GPR_U32(ctx, 31, 0x3F6240u);
    ctx->pc = 0x3F623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6238u;
    // 0x3f623c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F6238u, 0x3F6240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6240u;
label_3f6240:
    // 0x3f6240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f6240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f6244:
    // 0x3f6244: 0xc0ea146  jal         func_3A8518
label_3f6248:
    if (ctx->pc == 0x3F6248u) {
        ctx->pc = 0x3F6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6244u;
        // 0x3f6248: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F624Cu;
        goto label_3f624c;
    }
    ctx->pc = 0x3F6244u;
    SET_GPR_U32(ctx, 31, 0x3F624Cu);
    ctx->pc = 0x3F6248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6244u;
    // 0x3f6248: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F6244u, 0x3F624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F624Cu;
label_3f624c:
    // 0x3f624c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f624cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f6250:
    // 0x3f6250: 0xc0ea146  jal         func_3A8518
label_3f6254:
    if (ctx->pc == 0x3F6254u) {
        ctx->pc = 0x3F6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6250u;
        // 0x3f6254: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6258u;
        goto label_3f6258;
    }
    ctx->pc = 0x3F6250u;
    SET_GPR_U32(ctx, 31, 0x3F6258u);
    ctx->pc = 0x3F6254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6250u;
    // 0x3f6254: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F6250u, 0x3F6258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6258u;
label_3f6258:
    // 0x3f6258: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f6258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f625c:
    // 0x3f625c: 0xc0ea13a  jal         func_3A84E8
label_3f6260:
    if (ctx->pc == 0x3F6260u) {
        ctx->pc = 0x3F6260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F625Cu;
        // 0x3f6260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6264u;
        goto label_3f6264;
    }
    ctx->pc = 0x3F625Cu;
    SET_GPR_U32(ctx, 31, 0x3F6264u);
    ctx->pc = 0x3F6260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F625Cu;
    // 0x3f6260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3F625Cu, 0x3F6264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6264u;
label_3f6264:
    // 0x3f6264: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f6264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f6268:
    // 0x3f6268: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f6268u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f626c:
    // 0x3f626c: 0xc0ea12a  jal         func_3A84A8
label_3f6270:
    if (ctx->pc == 0x3F6270u) {
        ctx->pc = 0x3F6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F626Cu;
        // 0x3f6270: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6274u;
        goto label_3f6274;
    }
    ctx->pc = 0x3F626Cu;
    SET_GPR_U32(ctx, 31, 0x3F6274u);
    ctx->pc = 0x3F6270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F626Cu;
    // 0x3f6270: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F626Cu, 0x3F6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6274u;
label_3f6274:
    // 0x3f6274: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3f6274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f6278:
    // 0x3f6278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f6278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f627c:
    // 0x3f627c: 0xc0ea12a  jal         func_3A84A8
label_3f6280:
    if (ctx->pc == 0x3F6280u) {
        ctx->pc = 0x3F6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F627Cu;
        // 0x3f6280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6284u;
        goto label_3f6284;
    }
    ctx->pc = 0x3F627Cu;
    SET_GPR_U32(ctx, 31, 0x3F6284u);
    ctx->pc = 0x3F6280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F627Cu;
    // 0x3f6280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F627Cu, 0x3F6284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6284u;
label_3f6284:
    // 0x3f6284: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f6284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f6288:
    // 0x3f6288: 0xc0ea12a  jal         func_3A84A8
label_3f628c:
    if (ctx->pc == 0x3F628Cu) {
        ctx->pc = 0x3F628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6288u;
        // 0x3f628c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6290u;
        goto label_3f6290;
    }
    ctx->pc = 0x3F6288u;
    SET_GPR_U32(ctx, 31, 0x3F6290u);
    ctx->pc = 0x3F628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6288u;
    // 0x3f628c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F6288u, 0x3F6290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6290u;
label_3f6290:
    // 0x3f6290: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3f6290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3f6294:
    // 0x3f6294: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f6294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f6298:
    // 0x3f6298: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f6298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f629c:
    // 0x3f629c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3f629cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3f62a0:
    // 0x3f62a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f62a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f62a4:
    // 0x3f62a4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f62a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f62a8:
    // 0x3f62a8: 0xc0cd518  jal         func_335460
label_3f62ac:
    if (ctx->pc == 0x3F62ACu) {
        ctx->pc = 0x3F62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62A8u;
        // 0x3f62ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F62B0u;
        goto label_3f62b0;
    }
    ctx->pc = 0x3F62A8u;
    SET_GPR_U32(ctx, 31, 0x3F62B0u);
    ctx->pc = 0x3F62ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F62A8u;
    // 0x3f62ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F62A8u, 0x3F62B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F62B0u;
label_3f62b0:
    // 0x3f62b0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3f62b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f62b4:
    // 0x3f62b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f62b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f62b8:
    // 0x3f62b8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f62b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f62bc:
    // 0x3f62bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3f62bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f62c0:
    // 0x3f62c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3f62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3f62c4:
    // 0x3f62c4: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3f62c4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3f62c8:
    // 0x3f62c8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3f62c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3f62cc:
    // 0x3f62cc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3f62ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3f62d0:
    // 0x3f62d0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3f62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3f62d4:
    // 0x3f62d4: 0x40f809  jalr        $v0
label_3f62d8:
    if (ctx->pc == 0x3F62D8u) {
        ctx->pc = 0x3F62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62D4u;
        // 0x3f62d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F62DCu;
        goto label_3f62dc;
    }
    ctx->pc = 0x3F62D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F62DCu);
        ctx->pc = 0x3F62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62D4u;
        // 0x3f62d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F62D4u, 0x3F62DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F62DCu;
label_3f62dc:
    // 0x3f62dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f62dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f62e0:
    // 0x3f62e0: 0xc0e858c  jal         func_3A1630
label_3f62e4:
    if (ctx->pc == 0x3F62E4u) {
        ctx->pc = 0x3F62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62E0u;
        // 0x3f62e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F62E8u;
        goto label_3f62e8;
    }
    ctx->pc = 0x3F62E0u;
    SET_GPR_U32(ctx, 31, 0x3F62E8u);
    ctx->pc = 0x3F62E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F62E0u;
    // 0x3f62e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F62E0u, 0x3F62E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F62E8u;
label_3f62e8:
    // 0x3f62e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3f62e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3f62ec:
    // 0x3f62ec: 0xc0cd4ee  jal         func_3353B8
label_3f62f0:
    if (ctx->pc == 0x3F62F0u) {
        ctx->pc = 0x3F62F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62ECu;
        // 0x3f62f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F62F4u;
        goto label_3f62f4;
    }
    ctx->pc = 0x3F62ECu;
    SET_GPR_U32(ctx, 31, 0x3F62F4u);
    ctx->pc = 0x3F62F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F62ECu;
    // 0x3f62f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F62ECu, 0x3F62F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F62F4u;
label_3f62f4:
    // 0x3f62f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f62f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f62f8:
    // 0x3f62f8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3f62fc:
    // 0x3f62fc: 0x3463002a  ori         $v1, $v1, 0x2A
    ctx->pc = 0x3f62fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)42);
label_3f6300:
    // 0x3f6300: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3f6300u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6304:
    // 0x3f6304: 0x0  nop
    ctx->pc = 0x3f6304u;
    // NOP
label_3f6308:
    // 0x3f6308: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3f630c:
    if (ctx->pc == 0x3F630Cu) {
        ctx->pc = 0x3F630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6308u;
        // 0x3f630c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6310u;
        goto label_3f6310;
    }
    ctx->pc = 0x3F6308u;
    {
        const bool branch_taken_0x3f6308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6308u;
        // 0x3f630c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6308) {
            ctx->pc = 0x3F6324u;
            goto label_3f6324;
        }
    }
    ctx->pc = 0x3F6310u;
label_3f6310:
    // 0x3f6310: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3f6310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3f6314:
    // 0x3f6314: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f6314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3f6318:
    // 0x3f6318: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f6318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f631c:
    // 0x3f631c: 0x10000010  b           . + 4 + (0x10 << 2)
label_3f6320:
    if (ctx->pc == 0x3F6320u) {
        ctx->pc = 0x3F6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F631Cu;
        // 0x3f6320: 0xae6200c4  sw          $v0, 0xC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6324u;
        goto label_3f6324;
    }
    ctx->pc = 0x3F631Cu;
    {
        const bool branch_taken_0x3f631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F631Cu;
        // 0x3f6320: 0xae6200c4  sw          $v0, 0xC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f631c) {
            ctx->pc = 0x3F6360u;
            goto label_3f6360;
        }
    }
    ctx->pc = 0x3F6324u;
label_3f6324:
    // 0x3f6324: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3f6324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_3f6328:
    // 0x3f6328: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3f6328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3f632c:
    // 0x3f632c: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x3f632cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_3f6330:
    // 0x3f6330: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f6330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f6334:
    // 0x3f6334: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3f6334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3f6338:
    // 0x3f6338: 0xae6200c4  sw          $v0, 0xC4($s3)
    ctx->pc = 0x3f6338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
label_3f633c:
    // 0x3f633c: 0xc0cd508  jal         func_335420
label_3f6340:
    if (ctx->pc == 0x3F6340u) {
        ctx->pc = 0x3F6340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F633Cu;
        // 0x3f6340: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6344u;
        goto label_3f6344;
    }
    ctx->pc = 0x3F633Cu;
    SET_GPR_U32(ctx, 31, 0x3F6344u);
    ctx->pc = 0x3F6340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F633Cu;
    // 0x3f6340: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F633Cu, 0x3F6344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6344u;
label_3f6344:
    // 0x3f6344: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3f6344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3f6348:
    // 0x3f6348: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3f6348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f634c:
    // 0x3f634c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3f634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3f6350:
    // 0x3f6350: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3f6350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3f6354:
    // 0x3f6354: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3f6354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3f6358:
    // 0x3f6358: 0x60f809  jalr        $v1
label_3f635c:
    if (ctx->pc == 0x3F635Cu) {
        ctx->pc = 0x3F635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6358u;
        // 0x3f635c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6360u;
        goto label_3f6360;
    }
    ctx->pc = 0x3F6358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F6360u);
        ctx->pc = 0x3F635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6358u;
        // 0x3f635c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6358u, 0x3F6360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F6360u;
label_3f6360:
    // 0x3f6360: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f6360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f6364:
    // 0x3f6364: 0x27d0b8b8  addiu       $s0, $fp, -0x4748
    ctx->pc = 0x3f6364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
label_3f6368:
    // 0x3f6368: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3f6368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3f636c:
    // 0x3f636c: 0xae7600b4  sw          $s6, 0xB4($s3)
    ctx->pc = 0x3f636cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 22));
label_3f6370:
    // 0x3f6370: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x3f6370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_3f6374:
    // 0x3f6374: 0xae6000bc  sw          $zero, 0xBC($s3)
    ctx->pc = 0x3f6374u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
label_3f6378:
    // 0x3f6378: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3f6378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3f637c:
    // 0x3f637c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f637cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f6380:
    // 0x3f6380: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f6380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f6384:
    // 0x3f6384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f6384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f6388:
    // 0x3f6388: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3f6388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3f638c:
    // 0x3f638c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f638cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f6390:
    // 0x3f6390: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f6390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f6394:
    // 0x3f6394: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f6394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6398:
    // 0x3f6398: 0xc0cd508  jal         func_335420
label_3f639c:
    if (ctx->pc == 0x3F639Cu) {
        ctx->pc = 0x3F639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6398u;
        // 0x3f639c: 0xae6200b0  sw          $v0, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F63A0u;
        goto label_3f63a0;
    }
    ctx->pc = 0x3F6398u;
    SET_GPR_U32(ctx, 31, 0x3F63A0u);
    ctx->pc = 0x3F639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6398u;
    // 0x3f639c: 0xae6200b0  sw          $v0, 0xB0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F6398u, 0x3F63A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F63A0u;
label_3f63a0:
    // 0x3f63a0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3f63a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f63a4:
    // 0x3f63a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3f63a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f63a8:
    // 0x3f63a8: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
label_3f63ac:
    if (ctx->pc == 0x3F63ACu) {
        ctx->pc = 0x3F63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F63A8u;
        // 0x3f63ac: 0xe66100c0  swc1        $f1, 0xC0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F63B0u;
        goto label_3f63b0;
    }
    ctx->pc = 0x3F63A8u;
    {
        const bool branch_taken_0x3f63a8 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x3F63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F63A8u;
        // 0x3f63ac: 0xe66100c0  swc1        $f1, 0xC0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f63a8) {
            ctx->pc = 0x3F63B8u;
            goto label_3f63b8;
        }
    }
    ctx->pc = 0x3F63B0u;
label_3f63b0:
    // 0x3f63b0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3f63b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f63b4:
    // 0x3f63b4: 0x15a823  negu        $s5, $s5
    ctx->pc = 0x3f63b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
label_3f63b8:
    // 0x3f63b8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f63b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f63bc:
    // 0x3f63bc: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3f63bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_3f63c0:
    // 0x3f63c0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3f63c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_3f63c4:
    // 0x3f63c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f63c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f63c8:
    // 0x3f63c8: 0x7e820020  sq          $v0, 0x20($s4)
    ctx->pc = 0x3f63c8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
label_3f63cc:
    // 0x3f63cc: 0xae950004  sw          $s5, 0x4($s4)
    ctx->pc = 0x3f63ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 21));
label_3f63d0:
    // 0x3f63d0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3f63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3f63d4:
    // 0x3f63d4: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x3f63d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_3f63d8:
    // 0x3f63d8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3f63d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3f63dc:
    // 0x3f63dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f63dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f63e0:
    // 0x3f63e0: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x3f63e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_3f63e4:
    // 0x3f63e4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3f63e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3f63e8:
    // 0x3f63e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f63e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f63ec:
    // 0x3f63ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f63ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f63f0:
    // 0x3f63f0: 0xc0cd518  jal         func_335460
label_3f63f4:
    if (ctx->pc == 0x3F63F4u) {
        ctx->pc = 0x3F63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F63F0u;
        // 0x3f63f4: 0xc7b50004  lwc1        $f21, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F63F8u;
        goto label_3f63f8;
    }
    ctx->pc = 0x3F63F0u;
    SET_GPR_U32(ctx, 31, 0x3F63F8u);
    ctx->pc = 0x3F63F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F63F0u;
    // 0x3f63f4: 0xc7b50004  lwc1        $f21, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F63F0u, 0x3F63F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F63F8u;
label_3f63f8:
    // 0x3f63f8: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x3f63f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f63fc:
    // 0x3f63fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f6400:
    // 0x3f6400: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3f6400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3f6404:
    // 0x3f6404: 0xe7b50044  swc1        $f21, 0x44($sp)
    ctx->pc = 0x3f6404u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3f6408:
    // 0x3f6408: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3f6408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3f640c:
    // 0x3f640c: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x3f640cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3f6410:
    // 0x3f6410: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3f6410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f6414:
    // 0x3f6414: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f6414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f6418:
    // 0x3f6418: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
label_3f641c:
    if (ctx->pc == 0x3F641Cu) {
        ctx->pc = 0x3F641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6418u;
        // 0x3f641c: 0x7e820010  sq          $v0, 0x10($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6420u;
        goto label_3f6420;
    }
    ctx->pc = 0x3F6418u;
    {
        const bool branch_taken_0x3f6418 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6418u;
        // 0x3f641c: 0x7e820010  sq          $v0, 0x10($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6418) {
            ctx->pc = 0x3F6424u;
            goto label_3f6424;
        }
    }
    ctx->pc = 0x3F6420u;
label_3f6420:
    // 0x3f6420: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x3f6420u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
label_3f6424:
    // 0x3f6424: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3f6424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3f6428:
    // 0x3f6428: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3f6428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3f642c:
    // 0x3f642c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3f642cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3f6430:
    // 0x3f6430: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3f6430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3f6434:
    // 0x3f6434: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3f6434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3f6438:
    // 0x3f6438: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3f6438u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f643c:
    // 0x3f643c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3f643cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f6440:
    // 0x3f6440: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3f6440u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f6444:
    // 0x3f6444: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3f6444u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f6448:
    // 0x3f6448: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f6448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f644c:
    // 0x3f644c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x3f644cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f6450:
    // 0x3f6450: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x3f6450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f6454:
    // 0x3f6454: 0x3e00008  jr          $ra
label_3f6458:
    if (ctx->pc == 0x3F6458u) {
        ctx->pc = 0x3F6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6454u;
        // 0x3f6458: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F645Cu;
        goto label_3f645c;
    }
    ctx->pc = 0x3F6454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6454u;
        // 0x3f6458: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F645Cu;
label_3f645c:
    // 0x3f645c: 0x0  nop
    ctx->pc = 0x3f645cu;
    // NOP
    ctx->pc = 0x3f6460u;
}
