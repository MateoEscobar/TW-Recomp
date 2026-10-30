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

// Function: sub_0013A170
// Address: 0x13a170 - 0x13a3b0
void sub_0013A170_0x13a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A170_0x13a170");
#endif

    switch (ctx->pc) {
        case 0x13a170u: goto label_13a170;
        case 0x13a174u: goto label_13a174;
        case 0x13a178u: goto label_13a178;
        case 0x13a17cu: goto label_13a17c;
        case 0x13a180u: goto label_13a180;
        case 0x13a184u: goto label_13a184;
        case 0x13a188u: goto label_13a188;
        case 0x13a18cu: goto label_13a18c;
        case 0x13a190u: goto label_13a190;
        case 0x13a194u: goto label_13a194;
        case 0x13a198u: goto label_13a198;
        case 0x13a19cu: goto label_13a19c;
        case 0x13a1a0u: goto label_13a1a0;
        case 0x13a1a4u: goto label_13a1a4;
        case 0x13a1a8u: goto label_13a1a8;
        case 0x13a1acu: goto label_13a1ac;
        case 0x13a1b0u: goto label_13a1b0;
        case 0x13a1b4u: goto label_13a1b4;
        case 0x13a1b8u: goto label_13a1b8;
        case 0x13a1bcu: goto label_13a1bc;
        case 0x13a1c0u: goto label_13a1c0;
        case 0x13a1c4u: goto label_13a1c4;
        case 0x13a1c8u: goto label_13a1c8;
        case 0x13a1ccu: goto label_13a1cc;
        case 0x13a1d0u: goto label_13a1d0;
        case 0x13a1d4u: goto label_13a1d4;
        case 0x13a1d8u: goto label_13a1d8;
        case 0x13a1dcu: goto label_13a1dc;
        case 0x13a1e0u: goto label_13a1e0;
        case 0x13a1e4u: goto label_13a1e4;
        case 0x13a1e8u: goto label_13a1e8;
        case 0x13a1ecu: goto label_13a1ec;
        case 0x13a1f0u: goto label_13a1f0;
        case 0x13a1f4u: goto label_13a1f4;
        case 0x13a1f8u: goto label_13a1f8;
        case 0x13a1fcu: goto label_13a1fc;
        case 0x13a200u: goto label_13a200;
        case 0x13a204u: goto label_13a204;
        case 0x13a208u: goto label_13a208;
        case 0x13a20cu: goto label_13a20c;
        case 0x13a210u: goto label_13a210;
        case 0x13a214u: goto label_13a214;
        case 0x13a218u: goto label_13a218;
        case 0x13a21cu: goto label_13a21c;
        case 0x13a220u: goto label_13a220;
        case 0x13a224u: goto label_13a224;
        case 0x13a228u: goto label_13a228;
        case 0x13a22cu: goto label_13a22c;
        case 0x13a230u: goto label_13a230;
        case 0x13a234u: goto label_13a234;
        case 0x13a238u: goto label_13a238;
        case 0x13a23cu: goto label_13a23c;
        case 0x13a240u: goto label_13a240;
        case 0x13a244u: goto label_13a244;
        case 0x13a248u: goto label_13a248;
        case 0x13a24cu: goto label_13a24c;
        case 0x13a250u: goto label_13a250;
        case 0x13a254u: goto label_13a254;
        case 0x13a258u: goto label_13a258;
        case 0x13a25cu: goto label_13a25c;
        case 0x13a260u: goto label_13a260;
        case 0x13a264u: goto label_13a264;
        case 0x13a268u: goto label_13a268;
        case 0x13a26cu: goto label_13a26c;
        case 0x13a270u: goto label_13a270;
        case 0x13a274u: goto label_13a274;
        case 0x13a278u: goto label_13a278;
        case 0x13a27cu: goto label_13a27c;
        case 0x13a280u: goto label_13a280;
        case 0x13a284u: goto label_13a284;
        case 0x13a288u: goto label_13a288;
        case 0x13a28cu: goto label_13a28c;
        case 0x13a290u: goto label_13a290;
        case 0x13a294u: goto label_13a294;
        case 0x13a298u: goto label_13a298;
        case 0x13a29cu: goto label_13a29c;
        case 0x13a2a0u: goto label_13a2a0;
        case 0x13a2a4u: goto label_13a2a4;
        case 0x13a2a8u: goto label_13a2a8;
        case 0x13a2acu: goto label_13a2ac;
        case 0x13a2b0u: goto label_13a2b0;
        case 0x13a2b4u: goto label_13a2b4;
        case 0x13a2b8u: goto label_13a2b8;
        case 0x13a2bcu: goto label_13a2bc;
        case 0x13a2c0u: goto label_13a2c0;
        case 0x13a2c4u: goto label_13a2c4;
        case 0x13a2c8u: goto label_13a2c8;
        case 0x13a2ccu: goto label_13a2cc;
        case 0x13a2d0u: goto label_13a2d0;
        case 0x13a2d4u: goto label_13a2d4;
        case 0x13a2d8u: goto label_13a2d8;
        case 0x13a2dcu: goto label_13a2dc;
        case 0x13a2e0u: goto label_13a2e0;
        case 0x13a2e4u: goto label_13a2e4;
        case 0x13a2e8u: goto label_13a2e8;
        case 0x13a2ecu: goto label_13a2ec;
        case 0x13a2f0u: goto label_13a2f0;
        case 0x13a2f4u: goto label_13a2f4;
        case 0x13a2f8u: goto label_13a2f8;
        case 0x13a2fcu: goto label_13a2fc;
        case 0x13a300u: goto label_13a300;
        case 0x13a304u: goto label_13a304;
        case 0x13a308u: goto label_13a308;
        case 0x13a30cu: goto label_13a30c;
        case 0x13a310u: goto label_13a310;
        case 0x13a314u: goto label_13a314;
        case 0x13a318u: goto label_13a318;
        case 0x13a31cu: goto label_13a31c;
        case 0x13a320u: goto label_13a320;
        case 0x13a324u: goto label_13a324;
        case 0x13a328u: goto label_13a328;
        case 0x13a32cu: goto label_13a32c;
        case 0x13a330u: goto label_13a330;
        case 0x13a334u: goto label_13a334;
        case 0x13a338u: goto label_13a338;
        case 0x13a33cu: goto label_13a33c;
        case 0x13a340u: goto label_13a340;
        case 0x13a344u: goto label_13a344;
        case 0x13a348u: goto label_13a348;
        case 0x13a34cu: goto label_13a34c;
        case 0x13a350u: goto label_13a350;
        case 0x13a354u: goto label_13a354;
        case 0x13a358u: goto label_13a358;
        case 0x13a35cu: goto label_13a35c;
        case 0x13a360u: goto label_13a360;
        case 0x13a364u: goto label_13a364;
        case 0x13a368u: goto label_13a368;
        case 0x13a36cu: goto label_13a36c;
        case 0x13a370u: goto label_13a370;
        case 0x13a374u: goto label_13a374;
        case 0x13a378u: goto label_13a378;
        case 0x13a37cu: goto label_13a37c;
        case 0x13a380u: goto label_13a380;
        case 0x13a384u: goto label_13a384;
        case 0x13a388u: goto label_13a388;
        case 0x13a38cu: goto label_13a38c;
        case 0x13a390u: goto label_13a390;
        case 0x13a394u: goto label_13a394;
        case 0x13a398u: goto label_13a398;
        case 0x13a39cu: goto label_13a39c;
        case 0x13a3a0u: goto label_13a3a0;
        case 0x13a3a4u: goto label_13a3a4;
        case 0x13a3a8u: goto label_13a3a8;
        case 0x13a3acu: goto label_13a3ac;
        default: break;
    }

    ctx->pc = 0x13a170u;

label_13a170:
    // 0x13a170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13a170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_13a174:
    // 0x13a174: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x13a174u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_13a178:
    // 0x13a178: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_13a17c:
    // 0x13a17c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x13a17cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_13a180:
    // 0x13a180: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_13a184:
    // 0x13a184: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13a184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13a188:
    // 0x13a188: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x13a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_13a18c:
    // 0x13a18c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13a18cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13a190:
    // 0x13a190: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_13a194:
    // 0x13a194: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13a194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13a198:
    // 0x13a198: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_13a19c:
    // 0x13a19c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13a1a0:
    // 0x13a1a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a1a4:
    // 0x13a1a4: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x13a1a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_13a1a8:
    // 0x13a1a8: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x13a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_13a1ac:
    // 0x13a1ac: 0xad00b27c  sw          $zero, -0x4D84($t0)
    ctx->pc = 0x13a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294947452), GPR_U32(ctx, 0));
label_13a1b0:
    // 0x13a1b0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_13a1b4:
    // 0x13a1b4: 0x40f809  jalr        $v0
label_13a1b8:
    if (ctx->pc == 0x13A1B8u) {
        ctx->pc = 0x13A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1B4u;
        // 0x13a1b8: 0xace0b280  sw          $zero, -0x4D80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294947456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A1BCu;
        goto label_13a1bc;
    }
    ctx->pc = 0x13A1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A1BCu);
        ctx->pc = 0x13A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1B4u;
        // 0x13a1b8: 0xace0b280  sw          $zero, -0x4D80($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294947456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A1B4u, 0x13A1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A1BCu;
label_13a1bc:
    // 0x13a1bc: 0xc047e6c  jal         func_11F9B0
label_13a1c0:
    if (ctx->pc == 0x13A1C0u) {
        ctx->pc = 0x13A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1BCu;
        // 0x13a1c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A1C4u;
        goto label_13a1c4;
    }
    ctx->pc = 0x13A1BCu;
    SET_GPR_U32(ctx, 31, 0x13A1C4u);
    ctx->pc = 0x13A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A1BCu;
    // 0x13a1c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13A1BCu, 0x13A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A1C4u;
label_13a1c4:
    // 0x13a1c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13a1c8:
    // 0x13a1c8: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x13a1c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_13a1cc:
    // 0x13a1cc: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x13a1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_13a1d0:
    // 0x13a1d0: 0xa0f809  jalr        $a1
label_13a1d4:
    if (ctx->pc == 0x13A1D4u) {
        ctx->pc = 0x13A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1D0u;
        // 0x13a1d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A1D8u;
        goto label_13a1d8;
    }
    ctx->pc = 0x13A1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x13A1D8u);
        ctx->pc = 0x13A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1D0u;
        // 0x13a1d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A1D0u, 0x13A1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A1D8u;
label_13a1d8:
    // 0x13a1d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13a1d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a1dc:
    // 0x13a1dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_13a1e0:
    // 0x13a1e0: 0x38620006  xori        $v0, $v1, 0x6
    ctx->pc = 0x13a1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_13a1e4:
    // 0x13a1e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13a1e8:
    if (ctx->pc == 0x13A1E8u) {
        ctx->pc = 0x13A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1E4u;
        // 0x13a1e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A1ECu;
        goto label_13a1ec;
    }
    ctx->pc = 0x13A1E4u;
    {
        const bool branch_taken_0x13a1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1E4u;
        // 0x13a1e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a1e4) {
            ctx->pc = 0x13A1F4u;
            goto label_13a1f4;
        }
    }
    ctx->pc = 0x13A1ECu;
label_13a1ec:
    // 0x13a1ec: 0x3862000a  xori        $v0, $v1, 0xA
    ctx->pc = 0x13a1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
label_13a1f0:
    // 0x13a1f0: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x13a1f0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13a1f4:
    // 0x13a1f4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_13a1f8:
    if (ctx->pc == 0x13A1F8u) {
        ctx->pc = 0x13A1FCu;
        goto label_13a1fc;
    }
    ctx->pc = 0x13A1F4u;
    {
        const bool branch_taken_0x13a1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a1f4) {
            ctx->pc = 0x13A220u;
            goto label_13a220;
        }
    }
    ctx->pc = 0x13A1FCu;
label_13a1fc:
    // 0x13a1fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a200:
    // 0x13a200: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x13a200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_13a204:
    // 0x13a204: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x13a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_13a208:
    // 0x13a208: 0x40f809  jalr        $v0
label_13a20c:
    if (ctx->pc == 0x13A20Cu) {
        ctx->pc = 0x13A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A208u;
        // 0x13a20c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A210u;
        goto label_13a210;
    }
    ctx->pc = 0x13A208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A210u);
        ctx->pc = 0x13A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A208u;
        // 0x13a20c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A208u, 0x13A210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A210u;
label_13a210:
    // 0x13a210: 0xc047e6c  jal         func_11F9B0
label_13a214:
    if (ctx->pc == 0x13A214u) {
        ctx->pc = 0x13A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A210u;
        // 0x13a214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A218u;
        goto label_13a218;
    }
    ctx->pc = 0x13A210u;
    SET_GPR_U32(ctx, 31, 0x13A218u);
    ctx->pc = 0x13A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A210u;
    // 0x13a214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13A210u, 0x13A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A218u;
label_13a218:
    // 0x13a218: 0x1000000c  b           . + 4 + (0xC << 2)
label_13a21c:
    if (ctx->pc == 0x13A21Cu) {
        ctx->pc = 0x13A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A218u;
        // 0x13a21c: 0xae420334  sw          $v0, 0x334($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A220u;
        goto label_13a220;
    }
    ctx->pc = 0x13A218u;
    {
        const bool branch_taken_0x13a218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A218u;
        // 0x13a21c: 0xae420334  sw          $v0, 0x334($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a218) {
            ctx->pc = 0x13A24Cu;
            goto label_13a24c;
        }
    }
    ctx->pc = 0x13A220u;
label_13a220:
    // 0x13a220: 0x5465000b  bnel        $v1, $a1, . + 4 + (0xB << 2)
label_13a224:
    if (ctx->pc == 0x13A224u) {
        ctx->pc = 0x13A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A220u;
        // 0x13a224: 0x8e450334  lw          $a1, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A228u;
        goto label_13a228;
    }
    ctx->pc = 0x13A220u;
    {
        const bool branch_taken_0x13a220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x13a220) {
            ctx->pc = 0x13A224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A220u;
            // 0x13a224: 0x8e450334  lw          $a1, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A250u;
            goto label_13a250;
        }
    }
    ctx->pc = 0x13A228u;
label_13a228:
    // 0x13a228: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a22c:
    // 0x13a22c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x13a22cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_13a230:
    // 0x13a230: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x13a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_13a234:
    // 0x13a234: 0x40f809  jalr        $v0
label_13a238:
    if (ctx->pc == 0x13A238u) {
        ctx->pc = 0x13A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A234u;
        // 0x13a238: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A23Cu;
        goto label_13a23c;
    }
    ctx->pc = 0x13A234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A23Cu);
        ctx->pc = 0x13A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A234u;
        // 0x13a238: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A234u, 0x13A23Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A23Cu;
label_13a23c:
    // 0x13a23c: 0xc047e6c  jal         func_11F9B0
label_13a240:
    if (ctx->pc == 0x13A240u) {
        ctx->pc = 0x13A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A23Cu;
        // 0x13a240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A244u;
        goto label_13a244;
    }
    ctx->pc = 0x13A23Cu;
    SET_GPR_U32(ctx, 31, 0x13A244u);
    ctx->pc = 0x13A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A23Cu;
    // 0x13a240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13A23Cu, 0x13A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A244u;
label_13a244:
    // 0x13a244: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x13a244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_13a248:
    // 0x13a248: 0xae430334  sw          $v1, 0x334($s2)
    ctx->pc = 0x13a248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 820), GPR_U32(ctx, 3));
label_13a24c:
    // 0x13a24c: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x13a24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_13a250:
    // 0x13a250: 0x10a0004f  beqz        $a1, . + 4 + (0x4F << 2)
label_13a254:
    if (ctx->pc == 0x13A254u) {
        ctx->pc = 0x13A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A250u;
        // 0x13a254: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A258u;
        goto label_13a258;
    }
    ctx->pc = 0x13A250u;
    {
        const bool branch_taken_0x13a250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A250u;
        // 0x13a254: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a250) {
            ctx->pc = 0x13A390u;
            goto label_13a390;
        }
    }
    ctx->pc = 0x13A258u;
label_13a258:
    // 0x13a258: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13a258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13a25c:
    // 0x13a25c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x13a25cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a260:
    // 0x13a260: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x13a260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_13a264:
    // 0x13a264: 0x861101a0  lh          $s1, 0x1A0($s0)
    ctx->pc = 0x13a264u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 416)));
label_13a268:
    // 0x13a268: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x13a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_13a26c:
    // 0x13a26c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_13a270:
    // 0x13a270: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x13a270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_13a274:
    // 0x13a274: 0x60f809  jalr        $v1
label_13a278:
    if (ctx->pc == 0x13A278u) {
        ctx->pc = 0x13A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A274u;
        // 0x13a278: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A27Cu;
        goto label_13a27c;
    }
    ctx->pc = 0x13A274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13A27Cu);
        ctx->pc = 0x13A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A274u;
        // 0x13a278: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A274u, 0x13A27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A27Cu;
label_13a27c:
    // 0x13a27c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13a280:
    // 0x13a280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13a280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13a284:
    // 0x13a284: 0x40f809  jalr        $v0
label_13a288:
    if (ctx->pc == 0x13A288u) {
        ctx->pc = 0x13A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A284u;
        // 0x13a288: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A28Cu;
        goto label_13a28c;
    }
    ctx->pc = 0x13A284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A28Cu);
        ctx->pc = 0x13A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A284u;
        // 0x13a288: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A284u, 0x13A28Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A28Cu;
label_13a28c:
    // 0x13a28c: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x13a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_13a290:
    // 0x13a290: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x13a290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a294:
    // 0x13a294: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13a298:
    // 0x13a298: 0x861101a8  lh          $s1, 0x1A8($s0)
    ctx->pc = 0x13a298u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 424)));
label_13a29c:
    // 0x13a29c: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x13a29cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_13a2a0:
    // 0x13a2a0: 0x261001a8  addiu       $s0, $s0, 0x1A8
    ctx->pc = 0x13a2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 424));
label_13a2a4:
    // 0x13a2a4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x13a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_13a2a8:
    // 0x13a2a8: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x13a2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_13a2ac:
    // 0x13a2ac: 0x60f809  jalr        $v1
label_13a2b0:
    if (ctx->pc == 0x13A2B0u) {
        ctx->pc = 0x13A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2ACu;
        // 0x13a2b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A2B4u;
        goto label_13a2b4;
    }
    ctx->pc = 0x13A2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13A2B4u);
        ctx->pc = 0x13A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2ACu;
        // 0x13a2b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A2ACu, 0x13A2B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A2B4u;
label_13a2b4:
    // 0x13a2b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13a2b8:
    // 0x13a2b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13a2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13a2bc:
    // 0x13a2bc: 0x40f809  jalr        $v0
label_13a2c0:
    if (ctx->pc == 0x13A2C0u) {
        ctx->pc = 0x13A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2BCu;
        // 0x13a2c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A2C4u;
        goto label_13a2c4;
    }
    ctx->pc = 0x13A2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A2C4u);
        ctx->pc = 0x13A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2BCu;
        // 0x13a2c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A2BCu, 0x13A2C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A2C4u;
label_13a2c4:
    // 0x13a2c4: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x13a2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_13a2c8:
    // 0x13a2c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13a2cc:
    // 0x13a2cc: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x13a2ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_13a2d0:
    // 0x13a2d0: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x13a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_13a2d4:
    // 0x13a2d4: 0x60f809  jalr        $v1
label_13a2d8:
    if (ctx->pc == 0x13A2D8u) {
        ctx->pc = 0x13A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2D4u;
        // 0x13a2d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A2DCu;
        goto label_13a2dc;
    }
    ctx->pc = 0x13A2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13A2DCu);
        ctx->pc = 0x13A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2D4u;
        // 0x13a2d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A2D4u, 0x13A2DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A2DCu;
label_13a2dc:
    // 0x13a2dc: 0xe6400324  swc1        $f0, 0x324($s2)
    ctx->pc = 0x13a2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 804), bits); }
label_13a2e0:
    // 0x13a2e0: 0x16600011  bnez        $s3, . + 4 + (0x11 << 2)
label_13a2e4:
    if (ctx->pc == 0x13A2E4u) {
        ctx->pc = 0x13A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2E0u;
        // 0x13a2e4: 0xae530320  sw          $s3, 0x320($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A2E8u;
        goto label_13a2e8;
    }
    ctx->pc = 0x13A2E0u;
    {
        const bool branch_taken_0x13a2e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2E0u;
        // 0x13a2e4: 0xae530320  sw          $s3, 0x320($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2e0) {
            ctx->pc = 0x13A328u;
            goto label_13a328;
        }
    }
    ctx->pc = 0x13A2E8u;
label_13a2e8:
    // 0x13a2e8: 0x8e460334  lw          $a2, 0x334($s2)
    ctx->pc = 0x13a2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_13a2ec:
    // 0x13a2ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13a2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a2f0:
    // 0x13a2f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x13a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_13a2f4:
    // 0x13a2f4: 0x84640268  lh          $a0, 0x268($v1)
    ctx->pc = 0x13a2f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 616)));
label_13a2f8:
    // 0x13a2f8: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x13a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_13a2fc:
    // 0x13a2fc: 0x40f809  jalr        $v0
label_13a300:
    if (ctx->pc == 0x13A300u) {
        ctx->pc = 0x13A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2FCu;
        // 0x13a300: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A304u;
        goto label_13a304;
    }
    ctx->pc = 0x13A2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A304u);
        ctx->pc = 0x13A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2FCu;
        // 0x13a300: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A2FCu, 0x13A304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A304u;
label_13a304:
    // 0x13a304: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_13a308:
    if (ctx->pc == 0x13A308u) {
        ctx->pc = 0x13A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A304u;
        // 0x13a308: 0xae420320  sw          $v0, 0x320($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A30Cu;
        goto label_13a30c;
    }
    ctx->pc = 0x13A304u;
    {
        const bool branch_taken_0x13a304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A304u;
        // 0x13a308: 0xae420320  sw          $v0, 0x320($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a304) {
            ctx->pc = 0x13A370u;
            goto label_13a370;
        }
    }
    ctx->pc = 0x13A30Cu;
label_13a30c:
    // 0x13a30c: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x13a30cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_13a310:
    // 0x13a310: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13a310u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_13a314:
    // 0x13a314: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_13a318:
    if (ctx->pc == 0x13A318u) {
        ctx->pc = 0x13A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A314u;
        // 0x13a318: 0xae400320  sw          $zero, 0x320($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A31Cu;
        goto label_13a31c;
    }
    ctx->pc = 0x13A314u;
    {
        const bool branch_taken_0x13a314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a314) {
            ctx->pc = 0x13A318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A314u;
            // 0x13a318: 0xae400320  sw          $zero, 0x320($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A31Cu;
            goto label_13a31c;
        }
    }
    ctx->pc = 0x13A31Cu;
label_13a31c:
    // 0x13a31c: 0x8e420320  lw          $v0, 0x320($s2)
    ctx->pc = 0x13a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_13a320:
    // 0x13a320: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_13a324:
    if (ctx->pc == 0x13A324u) {
        ctx->pc = 0x13A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A320u;
        // 0x13a324: 0x141600  sll         $v0, $s4, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A328u;
        goto label_13a328;
    }
    ctx->pc = 0x13A320u;
    {
        const bool branch_taken_0x13a320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A320u;
        // 0x13a324: 0x141600  sll         $v0, $s4, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a320) {
            ctx->pc = 0x13A374u;
            goto label_13a374;
        }
    }
    ctx->pc = 0x13A328u;
label_13a328:
    // 0x13a328: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x13a328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_13a32c:
    // 0x13a32c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x13a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_13a330:
    // 0x13a330: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x13a330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_13a334:
    // 0x13a334: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13a334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a338:
    // 0x13a338: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x13a338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_13a33c:
    // 0x13a33c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x13a33cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_13a340:
    // 0x13a340: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13a340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13a344:
    // 0x13a344: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13a344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_13a348:
    // 0x13a348: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13a348u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13a34c:
    // 0x13a34c: 0x7e430260  sq          $v1, 0x260($s2)
    ctx->pc = 0x13a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 608), GPR_VEC(ctx, 3));
label_13a350:
    // 0x13a350: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x13a350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_13a354:
    // 0x13a354: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13a354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_13a358:
    // 0x13a358: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_13a35c:
    // 0x13a35c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x13a35cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_13a360:
    // 0x13a360: 0xa246032e  sb          $a2, 0x32E($s2)
    ctx->pc = 0x13a360u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 814), (uint8_t)GPR_U32(ctx, 6));
label_13a364:
    // 0x13a364: 0x7e430300  sq          $v1, 0x300($s2)
    ctx->pc = 0x13a364u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 768), GPR_VEC(ctx, 3));
label_13a368:
    // 0x13a368: 0xa246032f  sb          $a2, 0x32F($s2)
    ctx->pc = 0x13a368u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 815), (uint8_t)GPR_U32(ctx, 6));
label_13a36c:
    // 0x13a36c: 0xa2400331  sb          $zero, 0x331($s2)
    ctx->pc = 0x13a36cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 817), (uint8_t)GPR_U32(ctx, 0));
label_13a370:
    // 0x13a370: 0x141600  sll         $v0, $s4, 24
    ctx->pc = 0x13a370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
label_13a374:
    // 0x13a374: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x13a374u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_13a378:
    // 0x13a378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13a378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a37c:
    // 0x13a37c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_13a380:
    if (ctx->pc == 0x13A380u) {
        ctx->pc = 0x13A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A37Cu;
        // 0x13a380: 0xa2540330  sb          $s4, 0x330($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 816), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A384u;
        goto label_13a384;
    }
    ctx->pc = 0x13A37Cu;
    {
        const bool branch_taken_0x13a37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A37Cu;
        // 0x13a380: 0xa2540330  sb          $s4, 0x330($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 816), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a37c) {
            ctx->pc = 0x13A38Cu;
            goto label_13a38c;
        }
    }
    ctx->pc = 0x13A384u;
label_13a384:
    // 0x13a384: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13a384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13a388:
    // 0x13a388: 0xa2420330  sb          $v0, 0x330($s2)
    ctx->pc = 0x13a388u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 816), (uint8_t)GPR_U32(ctx, 2));
label_13a38c:
    // 0x13a38c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13a38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13a390:
    // 0x13a390: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13a390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13a394:
    // 0x13a394: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13a394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13a398:
    // 0x13a398: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13a398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13a39c:
    // 0x13a39c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x13a39cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13a3a0:
    // 0x13a3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13a3a4:
    // 0x13a3a4: 0x3e00008  jr          $ra
label_13a3a8:
    if (ctx->pc == 0x13A3A8u) {
        ctx->pc = 0x13A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3A4u;
        // 0x13a3a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A3ACu;
        goto label_13a3ac;
    }
    ctx->pc = 0x13A3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3A4u;
        // 0x13a3a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A3ACu;
label_13a3ac:
    // 0x13a3ac: 0x0  nop
    ctx->pc = 0x13a3acu;
    // NOP
    ctx->pc = 0x13a3b0u;
}
