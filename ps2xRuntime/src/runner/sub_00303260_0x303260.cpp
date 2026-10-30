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

// Function: sub_00303260
// Address: 0x303260 - 0x303468
void sub_00303260_0x303260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303260_0x303260");
#endif

    switch (ctx->pc) {
        case 0x303260u: goto label_303260;
        case 0x303264u: goto label_303264;
        case 0x303268u: goto label_303268;
        case 0x30326cu: goto label_30326c;
        case 0x303270u: goto label_303270;
        case 0x303274u: goto label_303274;
        case 0x303278u: goto label_303278;
        case 0x30327cu: goto label_30327c;
        case 0x303280u: goto label_303280;
        case 0x303284u: goto label_303284;
        case 0x303288u: goto label_303288;
        case 0x30328cu: goto label_30328c;
        case 0x303290u: goto label_303290;
        case 0x303294u: goto label_303294;
        case 0x303298u: goto label_303298;
        case 0x30329cu: goto label_30329c;
        case 0x3032a0u: goto label_3032a0;
        case 0x3032a4u: goto label_3032a4;
        case 0x3032a8u: goto label_3032a8;
        case 0x3032acu: goto label_3032ac;
        case 0x3032b0u: goto label_3032b0;
        case 0x3032b4u: goto label_3032b4;
        case 0x3032b8u: goto label_3032b8;
        case 0x3032bcu: goto label_3032bc;
        case 0x3032c0u: goto label_3032c0;
        case 0x3032c4u: goto label_3032c4;
        case 0x3032c8u: goto label_3032c8;
        case 0x3032ccu: goto label_3032cc;
        case 0x3032d0u: goto label_3032d0;
        case 0x3032d4u: goto label_3032d4;
        case 0x3032d8u: goto label_3032d8;
        case 0x3032dcu: goto label_3032dc;
        case 0x3032e0u: goto label_3032e0;
        case 0x3032e4u: goto label_3032e4;
        case 0x3032e8u: goto label_3032e8;
        case 0x3032ecu: goto label_3032ec;
        case 0x3032f0u: goto label_3032f0;
        case 0x3032f4u: goto label_3032f4;
        case 0x3032f8u: goto label_3032f8;
        case 0x3032fcu: goto label_3032fc;
        case 0x303300u: goto label_303300;
        case 0x303304u: goto label_303304;
        case 0x303308u: goto label_303308;
        case 0x30330cu: goto label_30330c;
        case 0x303310u: goto label_303310;
        case 0x303314u: goto label_303314;
        case 0x303318u: goto label_303318;
        case 0x30331cu: goto label_30331c;
        case 0x303320u: goto label_303320;
        case 0x303324u: goto label_303324;
        case 0x303328u: goto label_303328;
        case 0x30332cu: goto label_30332c;
        case 0x303330u: goto label_303330;
        case 0x303334u: goto label_303334;
        case 0x303338u: goto label_303338;
        case 0x30333cu: goto label_30333c;
        case 0x303340u: goto label_303340;
        case 0x303344u: goto label_303344;
        case 0x303348u: goto label_303348;
        case 0x30334cu: goto label_30334c;
        case 0x303350u: goto label_303350;
        case 0x303354u: goto label_303354;
        case 0x303358u: goto label_303358;
        case 0x30335cu: goto label_30335c;
        case 0x303360u: goto label_303360;
        case 0x303364u: goto label_303364;
        case 0x303368u: goto label_303368;
        case 0x30336cu: goto label_30336c;
        case 0x303370u: goto label_303370;
        case 0x303374u: goto label_303374;
        case 0x303378u: goto label_303378;
        case 0x30337cu: goto label_30337c;
        case 0x303380u: goto label_303380;
        case 0x303384u: goto label_303384;
        case 0x303388u: goto label_303388;
        case 0x30338cu: goto label_30338c;
        case 0x303390u: goto label_303390;
        case 0x303394u: goto label_303394;
        case 0x303398u: goto label_303398;
        case 0x30339cu: goto label_30339c;
        case 0x3033a0u: goto label_3033a0;
        case 0x3033a4u: goto label_3033a4;
        case 0x3033a8u: goto label_3033a8;
        case 0x3033acu: goto label_3033ac;
        case 0x3033b0u: goto label_3033b0;
        case 0x3033b4u: goto label_3033b4;
        case 0x3033b8u: goto label_3033b8;
        case 0x3033bcu: goto label_3033bc;
        case 0x3033c0u: goto label_3033c0;
        case 0x3033c4u: goto label_3033c4;
        case 0x3033c8u: goto label_3033c8;
        case 0x3033ccu: goto label_3033cc;
        case 0x3033d0u: goto label_3033d0;
        case 0x3033d4u: goto label_3033d4;
        case 0x3033d8u: goto label_3033d8;
        case 0x3033dcu: goto label_3033dc;
        case 0x3033e0u: goto label_3033e0;
        case 0x3033e4u: goto label_3033e4;
        case 0x3033e8u: goto label_3033e8;
        case 0x3033ecu: goto label_3033ec;
        case 0x3033f0u: goto label_3033f0;
        case 0x3033f4u: goto label_3033f4;
        case 0x3033f8u: goto label_3033f8;
        case 0x3033fcu: goto label_3033fc;
        case 0x303400u: goto label_303400;
        case 0x303404u: goto label_303404;
        case 0x303408u: goto label_303408;
        case 0x30340cu: goto label_30340c;
        case 0x303410u: goto label_303410;
        case 0x303414u: goto label_303414;
        case 0x303418u: goto label_303418;
        case 0x30341cu: goto label_30341c;
        case 0x303420u: goto label_303420;
        case 0x303424u: goto label_303424;
        case 0x303428u: goto label_303428;
        case 0x30342cu: goto label_30342c;
        case 0x303430u: goto label_303430;
        case 0x303434u: goto label_303434;
        case 0x303438u: goto label_303438;
        case 0x30343cu: goto label_30343c;
        case 0x303440u: goto label_303440;
        case 0x303444u: goto label_303444;
        case 0x303448u: goto label_303448;
        case 0x30344cu: goto label_30344c;
        case 0x303450u: goto label_303450;
        case 0x303454u: goto label_303454;
        case 0x303458u: goto label_303458;
        case 0x30345cu: goto label_30345c;
        case 0x303460u: goto label_303460;
        case 0x303464u: goto label_303464;
        default: break;
    }

    ctx->pc = 0x303260u;

label_303260:
    // 0x303260: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x303260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_303264:
    // 0x303264: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x303264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_303268:
    // 0x303268: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x303268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_30326c:
    // 0x30326c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x30326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_303270:
    // 0x303270: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x303270u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_303274:
    // 0x303274: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x303274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_303278:
    // 0x303278: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x303278u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30327c:
    // 0x30327c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_303280:
    // 0x303280: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x303280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_303284:
    // 0x303284: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x303284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_303288:
    // 0x303288: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x303288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_30328c:
    // 0x30328c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_303290:
    // 0x303290: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x303290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_303294:
    // 0x303294: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x303294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_303298:
    // 0x303298: 0x8ed20000  lw          $s2, 0x0($s6)
    ctx->pc = 0x303298u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_30329c:
    // 0x30329c: 0x8c620158  lw          $v0, 0x158($v1)
    ctx->pc = 0x30329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
label_3032a0:
    // 0x3032a0: 0x84730224  lh          $s3, 0x224($v1)
    ctx->pc = 0x3032a0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_3032a4:
    // 0x3032a4: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
label_3032a8:
    if (ctx->pc == 0x3032A8u) {
        ctx->pc = 0x3032A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032A4u;
        // 0x3032a8: 0x2c430001  sltiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3032ACu;
        goto label_3032ac;
    }
    ctx->pc = 0x3032A4u;
    {
        const bool branch_taken_0x3032a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3032A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032A4u;
        // 0x3032a8: 0x2c430001  sltiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032a4) {
            ctx->pc = 0x303438u;
            goto label_303438;
        }
    }
    ctx->pc = 0x3032ACu;
label_3032ac:
    // 0x3032ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3032acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3032b0:
    // 0x3032b0: 0x16620062  bne         $s3, $v0, . + 4 + (0x62 << 2)
label_3032b4:
    if (ctx->pc == 0x3032B4u) {
        ctx->pc = 0x3032B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032B0u;
        // 0x3032b4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3032B8u;
        goto label_3032b8;
    }
    ctx->pc = 0x3032B0u;
    {
        const bool branch_taken_0x3032b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3032B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032B0u;
        // 0x3032b4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032b0) {
            ctx->pc = 0x30343Cu;
            goto label_30343c;
        }
    }
    ctx->pc = 0x3032B8u;
label_3032b8:
    // 0x3032b8: 0x924203ac  lbu         $v0, 0x3AC($s2)
    ctx->pc = 0x3032b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 940)));
label_3032bc:
    // 0x3032bc: 0x1043005f  beq         $v0, $v1, . + 4 + (0x5F << 2)
label_3032c0:
    if (ctx->pc == 0x3032C0u) {
        ctx->pc = 0x3032C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032BCu;
        // 0x3032c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3032C4u;
        goto label_3032c4;
    }
    ctx->pc = 0x3032BCu;
    {
        const bool branch_taken_0x3032bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3032C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032BCu;
        // 0x3032c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032bc) {
            ctx->pc = 0x30343Cu;
            goto label_30343c;
        }
    }
    ctx->pc = 0x3032C4u;
label_3032c4:
    // 0x3032c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3032c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3032c8:
    // 0x3032c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3032cc:
    if (ctx->pc == 0x3032CCu) {
        ctx->pc = 0x3032CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032C8u;
        // 0x3032cc: 0x24100228  addiu       $s0, $zero, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3032D0u;
        goto label_3032d0;
    }
    ctx->pc = 0x3032C8u;
    {
        const bool branch_taken_0x3032c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3032CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032C8u;
        // 0x3032cc: 0x24100228  addiu       $s0, $zero, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032c8) {
            ctx->pc = 0x3032D4u;
            goto label_3032d4;
        }
    }
    ctx->pc = 0x3032D0u;
label_3032d0:
    // 0x3032d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3032d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3032d4:
    // 0x3032d4: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x3032d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_3032d8:
    // 0x3032d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3032dc:
    if (ctx->pc == 0x3032DCu) {
        ctx->pc = 0x3032E0u;
        goto label_3032e0;
    }
    ctx->pc = 0x3032D8u;
    {
        const bool branch_taken_0x3032d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032d8) {
            ctx->pc = 0x303300u;
            goto label_303300;
        }
    }
    ctx->pc = 0x3032E0u;
label_3032e0:
    // 0x3032e0: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x3032e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_3032e4:
    // 0x3032e4: 0xc0e409a  jal         func_390268
label_3032e8:
    if (ctx->pc == 0x3032E8u) {
        ctx->pc = 0x3032E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032E4u;
        // 0x3032e8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3032ECu;
        goto label_3032ec;
    }
    ctx->pc = 0x3032E4u;
    SET_GPR_U32(ctx, 31, 0x3032ECu);
    ctx->pc = 0x3032E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3032E4u;
    // 0x3032e8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3032E4u, 0x3032ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3032ECu;
label_3032ec:
    // 0x3032ec: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_3032f0:
    if (ctx->pc == 0x3032F0u) {
        ctx->pc = 0x3032F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032ECu;
        // 0x3032f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3032F4u;
        goto label_3032f4;
    }
    ctx->pc = 0x3032ECu;
    {
        const bool branch_taken_0x3032ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032ec) {
            ctx->pc = 0x3032F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3032ECu;
            // 0x3032f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3032D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3032d0;
        }
    }
    ctx->pc = 0x3032F4u;
label_3032f4:
    // 0x3032f4: 0x5052fff6  beql        $v0, $s2, . + 4 + (-0xA << 2)
label_3032f8:
    if (ctx->pc == 0x3032F8u) {
        ctx->pc = 0x3032F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032F4u;
        // 0x3032f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3032FCu;
        goto label_3032fc;
    }
    ctx->pc = 0x3032F4u;
    {
        const bool branch_taken_0x3032f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x3032f4) {
            ctx->pc = 0x3032F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3032F4u;
            // 0x3032f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3032D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3032d0;
        }
    }
    ctx->pc = 0x3032FCu;
label_3032fc:
    // 0x3032fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3032fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_303300:
    // 0x303300: 0x1280004d  beqz        $s4, . + 4 + (0x4D << 2)
label_303304:
    if (ctx->pc == 0x303304u) {
        ctx->pc = 0x303304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303300u;
        // 0x303304: 0x26850070  addiu       $a1, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303308u;
        goto label_303308;
    }
    ctx->pc = 0x303300u;
    {
        const bool branch_taken_0x303300 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x303304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303300u;
        // 0x303304: 0x26850070  addiu       $a1, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303300) {
            ctx->pc = 0x303438u;
            goto label_303438;
        }
    }
    ctx->pc = 0x303308u;
label_303308:
    // 0x303308: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x303308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_30330c:
    // 0x30330c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x30330cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_303310:
    // 0x303310: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x303310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_303314:
    // 0x303314: 0x40f809  jalr        $v0
label_303318:
    if (ctx->pc == 0x303318u) {
        ctx->pc = 0x303318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303314u;
        // 0x303318: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30331Cu;
        goto label_30331c;
    }
    ctx->pc = 0x303314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30331Cu);
        ctx->pc = 0x303318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303314u;
        // 0x303318: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303314u, 0x30331Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30331Cu;
label_30331c:
    // 0x30331c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_303320:
    if (ctx->pc == 0x303320u) {
        ctx->pc = 0x303320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30331Cu;
        // 0x303320: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303324u;
        goto label_303324;
    }
    ctx->pc = 0x30331Cu;
    {
        const bool branch_taken_0x30331c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30331Cu;
        // 0x303320: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30331c) {
            ctx->pc = 0x30343Cu;
            goto label_30343c;
        }
    }
    ctx->pc = 0x303324u;
label_303324:
    // 0x303324: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x303324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_303328:
    // 0x303328: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x303328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_30332c:
    // 0x30332c: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x30332cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_303330:
    // 0x303330: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x303330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_303334:
    // 0x303334: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x303334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_303338:
    // 0x303338: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x303338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30333c:
    // 0x30333c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x30333cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_303340:
    // 0x303340: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x303340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_303344:
    // 0x303344: 0xc0cdb38  jal         func_336CE0
label_303348:
    if (ctx->pc == 0x303348u) {
        ctx->pc = 0x303348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303344u;
        // 0x303348: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30334Cu;
        goto label_30334c;
    }
    ctx->pc = 0x303344u;
    SET_GPR_U32(ctx, 31, 0x30334Cu);
    ctx->pc = 0x303348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303344u;
    // 0x303348: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x303344u, 0x30334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30334Cu;
label_30334c:
    // 0x30334c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30334cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_303350:
    // 0x303350: 0xc089bfc  jal         func_226FF0
label_303354:
    if (ctx->pc == 0x303354u) {
        ctx->pc = 0x303354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303350u;
        // 0x303354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303358u;
        goto label_303358;
    }
    ctx->pc = 0x303350u;
    SET_GPR_U32(ctx, 31, 0x303358u);
    ctx->pc = 0x303354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303350u;
    // 0x303354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x303350u, 0x303358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303358u;
label_303358:
    // 0x303358: 0xc0e57ce  jal         func_395F38
label_30335c:
    if (ctx->pc == 0x30335Cu) {
        ctx->pc = 0x30335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303358u;
        // 0x30335c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303360u;
        goto label_303360;
    }
    ctx->pc = 0x303358u;
    SET_GPR_U32(ctx, 31, 0x303360u);
    ctx->pc = 0x30335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303358u;
    // 0x30335c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x303358u, 0x303360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303360u;
label_303360:
    // 0x303360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x303360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_303364:
    // 0x303364: 0xc089018  jal         func_224060
label_303368:
    if (ctx->pc == 0x303368u) {
        ctx->pc = 0x303368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303364u;
        // 0x303368: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30336Cu;
        goto label_30336c;
    }
    ctx->pc = 0x303364u;
    SET_GPR_U32(ctx, 31, 0x30336Cu);
    ctx->pc = 0x303368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303364u;
    // 0x303368: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x303364u, 0x30336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30336Cu;
label_30336c:
    // 0x30336c: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x30336cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_303370:
    // 0x303370: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x303370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303374:
    // 0x303374: 0x0  nop
    ctx->pc = 0x303374u;
    // NOP
label_303378:
    // 0x303378: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x303378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30337c:
    // 0x30337c: 0x0  nop
    ctx->pc = 0x30337cu;
    // NOP
label_303380:
    // 0x303380: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_303384:
    if (ctx->pc == 0x303384u) {
        ctx->pc = 0x303384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303380u;
        // 0x303384: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303388u;
        goto label_303388;
    }
    ctx->pc = 0x303380u;
    {
        const bool branch_taken_0x303380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x303384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303380u;
        // 0x303384: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303380) {
            ctx->pc = 0x3033FCu;
            goto label_3033fc;
        }
    }
    ctx->pc = 0x303388u;
label_303388:
    // 0x303388: 0xc08a0d0  jal         func_228340
label_30338c:
    if (ctx->pc == 0x30338Cu) {
        ctx->pc = 0x30338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303388u;
        // 0x30338c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303390u;
        goto label_303390;
    }
    ctx->pc = 0x303388u;
    SET_GPR_U32(ctx, 31, 0x303390u);
    ctx->pc = 0x30338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303388u;
    // 0x30338c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x303388u, 0x303390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303390u;
label_303390:
    // 0x303390: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_303394:
    if (ctx->pc == 0x303394u) {
        ctx->pc = 0x303394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303390u;
        // 0x303394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303398u;
        goto label_303398;
    }
    ctx->pc = 0x303390u;
    {
        const bool branch_taken_0x303390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303390u;
        // 0x303394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303390) {
            ctx->pc = 0x303400u;
            goto label_303400;
        }
    }
    ctx->pc = 0x303398u;
label_303398:
    // 0x303398: 0xc08a08a  jal         func_228228
label_30339c:
    if (ctx->pc == 0x30339Cu) {
        ctx->pc = 0x30339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303398u;
        // 0x30339c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3033A0u;
        goto label_3033a0;
    }
    ctx->pc = 0x303398u;
    SET_GPR_U32(ctx, 31, 0x3033A0u);
    ctx->pc = 0x30339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303398u;
    // 0x30339c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x303398u, 0x3033A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033A0u;
label_3033a0:
    // 0x3033a0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_3033a4:
    if (ctx->pc == 0x3033A4u) {
        ctx->pc = 0x3033A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033A0u;
        // 0x3033a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3033A8u;
        goto label_3033a8;
    }
    ctx->pc = 0x3033A0u;
    {
        const bool branch_taken_0x3033a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3033A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033A0u;
        // 0x3033a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033a0) {
            ctx->pc = 0x303400u;
            goto label_303400;
        }
    }
    ctx->pc = 0x3033A8u;
label_3033a8:
    // 0x3033a8: 0x8e4201a8  lw          $v0, 0x1A8($s2)
    ctx->pc = 0x3033a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_3033ac:
    // 0x3033ac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_3033b0:
    if (ctx->pc == 0x3033B0u) {
        ctx->pc = 0x3033B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033ACu;
        // 0x3033b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3033B4u;
        goto label_3033b4;
    }
    ctx->pc = 0x3033ACu;
    {
        const bool branch_taken_0x3033ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3033B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033ACu;
        // 0x3033b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033ac) {
            ctx->pc = 0x303400u;
            goto label_303400;
        }
    }
    ctx->pc = 0x3033B4u;
label_3033b4:
    // 0x3033b4: 0xc08a0d0  jal         func_228340
label_3033b8:
    if (ctx->pc == 0x3033B8u) {
        ctx->pc = 0x3033B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033B4u;
        // 0x3033b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3033BCu;
        goto label_3033bc;
    }
    ctx->pc = 0x3033B4u;
    SET_GPR_U32(ctx, 31, 0x3033BCu);
    ctx->pc = 0x3033B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033B4u;
    // 0x3033b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x3033B4u, 0x3033BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033BCu;
label_3033bc:
    // 0x3033bc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3033c0:
    if (ctx->pc == 0x3033C0u) {
        ctx->pc = 0x3033C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033BCu;
        // 0x3033c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3033C4u;
        goto label_3033c4;
    }
    ctx->pc = 0x3033BCu;
    {
        const bool branch_taken_0x3033bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3033C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033BCu;
        // 0x3033c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033bc) {
            ctx->pc = 0x303400u;
            goto label_303400;
        }
    }
    ctx->pc = 0x3033C4u;
label_3033c4:
    // 0x3033c4: 0xc08a08a  jal         func_228228
label_3033c8:
    if (ctx->pc == 0x3033C8u) {
        ctx->pc = 0x3033C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033C4u;
        // 0x3033c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3033CCu;
        goto label_3033cc;
    }
    ctx->pc = 0x3033C4u;
    SET_GPR_U32(ctx, 31, 0x3033CCu);
    ctx->pc = 0x3033C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033C4u;
    // 0x3033c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3033C4u, 0x3033CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033CCu;
label_3033cc:
    // 0x3033cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3033d0:
    if (ctx->pc == 0x3033D0u) {
        ctx->pc = 0x3033D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033CCu;
        // 0x3033d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3033D4u;
        goto label_3033d4;
    }
    ctx->pc = 0x3033CCu;
    {
        const bool branch_taken_0x3033cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3033D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033CCu;
        // 0x3033d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033cc) {
            ctx->pc = 0x303400u;
            goto label_303400;
        }
    }
    ctx->pc = 0x3033D4u;
label_3033d4:
    // 0x3033d4: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x3033d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_3033d8:
    // 0x3033d8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3033dc:
    if (ctx->pc == 0x3033DCu) {
        ctx->pc = 0x3033DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033D8u;
        // 0x3033dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3033E0u;
        goto label_3033e0;
    }
    ctx->pc = 0x3033D8u;
    {
        const bool branch_taken_0x3033d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3033d8) {
            ctx->pc = 0x3033DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3033D8u;
            // 0x3033dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303400u;
            goto label_303400;
        }
    }
    ctx->pc = 0x3033E0u;
label_3033e0:
    // 0x3033e0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_3033e4:
    if (ctx->pc == 0x3033E4u) {
        ctx->pc = 0x3033E8u;
        goto label_3033e8;
    }
    ctx->pc = 0x3033E0u;
    {
        const bool branch_taken_0x3033e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3033e0) {
            ctx->pc = 0x3033F0u;
            goto label_3033f0;
        }
    }
    ctx->pc = 0x3033E8u;
label_3033e8:
    // 0x3033e8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_3033ec:
    if (ctx->pc == 0x3033ECu) {
        ctx->pc = 0x3033ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033E8u;
        // 0x3033ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3033F0u;
        goto label_3033f0;
    }
    ctx->pc = 0x3033E8u;
    {
        const bool branch_taken_0x3033e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3033ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033E8u;
        // 0x3033ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033e8) {
            ctx->pc = 0x303400u;
            goto label_303400;
        }
    }
    ctx->pc = 0x3033F0u;
label_3033f0:
    // 0x3033f0: 0xc136b80  jal         func_4DAE00
label_3033f4:
    if (ctx->pc == 0x3033F4u) {
        ctx->pc = 0x3033F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033F0u;
        // 0x3033f4: 0x26c401a4  addiu       $a0, $s6, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3033F8u;
        goto label_3033f8;
    }
    ctx->pc = 0x3033F0u;
    SET_GPR_U32(ctx, 31, 0x3033F8u);
    ctx->pc = 0x3033F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033F0u;
    // 0x3033f4: 0x26c401a4  addiu       $a0, $s6, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x3033F0u, 0x3033F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033F8u;
label_3033f8:
    // 0x3033f8: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x3033f8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3033fc:
    // 0x3033fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3033fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303400:
    // 0x303400: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
label_303404:
    if (ctx->pc == 0x303404u) {
        ctx->pc = 0x303404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303400u;
        // 0x303404: 0xa25101b2  sb          $s1, 0x1B2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303408u;
        goto label_303408;
    }
    ctx->pc = 0x303400u;
    {
        const bool branch_taken_0x303400 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x303404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303400u;
        // 0x303404: 0xa25101b2  sb          $s1, 0x1B2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303400) {
            ctx->pc = 0x303438u;
            goto label_303438;
        }
    }
    ctx->pc = 0x303408u;
label_303408:
    // 0x303408: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_30340c:
    if (ctx->pc == 0x30340Cu) {
        ctx->pc = 0x30340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303408u;
        // 0x30340c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303410u;
        goto label_303410;
    }
    ctx->pc = 0x303408u;
    {
        const bool branch_taken_0x303408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303408u;
        // 0x30340c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303408) {
            ctx->pc = 0x30341Cu;
            goto label_30341c;
        }
    }
    ctx->pc = 0x303410u;
label_303410:
    // 0x303410: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_303414:
    if (ctx->pc == 0x303414u) {
        ctx->pc = 0x303414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303410u;
        // 0x303414: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303418u;
        goto label_303418;
    }
    ctx->pc = 0x303410u;
    {
        const bool branch_taken_0x303410 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x303414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303410u;
        // 0x303414: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303410) {
            ctx->pc = 0x303424u;
            goto label_303424;
        }
    }
    ctx->pc = 0x303418u;
label_303418:
    // 0x303418: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x303418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_30341c:
    // 0x30341c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x30341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_303420:
    // 0x303420: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x303420u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_303424:
    // 0x303424: 0xc067b9c  jal         func_19EE70
label_303428:
    if (ctx->pc == 0x303428u) {
        ctx->pc = 0x30342Cu;
        goto label_30342c;
    }
    ctx->pc = 0x303424u;
    SET_GPR_U32(ctx, 31, 0x30342Cu);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x303424u, 0x30342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30342Cu;
label_30342c:
    // 0x30342c: 0x264300e8  addiu       $v1, $s2, 0xE8
    ctx->pc = 0x30342cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 232));
label_303430:
    // 0x303430: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x303430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
label_303434:
    // 0x303434: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x303434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
label_303438:
    // 0x303438: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x303438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30343c:
    // 0x30343c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30343cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_303440:
    // 0x303440: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x303440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_303444:
    // 0x303444: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x303444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_303448:
    // 0x303448: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x303448u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30344c:
    // 0x30344c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x30344cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_303450:
    // 0x303450: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x303450u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_303454:
    // 0x303454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_303458:
    // 0x303458: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x303458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30345c:
    // 0x30345c: 0x3e00008  jr          $ra
label_303460:
    if (ctx->pc == 0x303460u) {
        ctx->pc = 0x303460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30345Cu;
        // 0x303460: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303464u;
        goto label_303464;
    }
    ctx->pc = 0x30345Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30345Cu;
        // 0x303460: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30345Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303464u;
label_303464:
    // 0x303464: 0x0  nop
    ctx->pc = 0x303464u;
    // NOP
    ctx->pc = 0x303468u;
}
