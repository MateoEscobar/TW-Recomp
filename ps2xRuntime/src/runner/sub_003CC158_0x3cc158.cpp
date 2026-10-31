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

// Function: sub_003CC158
// Address: 0x3cc158 - 0x3cc3d0
void sub_003CC158_0x3cc158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC158_0x3cc158");
#endif

    switch (ctx->pc) {
        case 0x3cc158u: goto label_3cc158;
        case 0x3cc15cu: goto label_3cc15c;
        case 0x3cc160u: goto label_3cc160;
        case 0x3cc164u: goto label_3cc164;
        case 0x3cc168u: goto label_3cc168;
        case 0x3cc16cu: goto label_3cc16c;
        case 0x3cc170u: goto label_3cc170;
        case 0x3cc174u: goto label_3cc174;
        case 0x3cc178u: goto label_3cc178;
        case 0x3cc17cu: goto label_3cc17c;
        case 0x3cc180u: goto label_3cc180;
        case 0x3cc184u: goto label_3cc184;
        case 0x3cc188u: goto label_3cc188;
        case 0x3cc18cu: goto label_3cc18c;
        case 0x3cc190u: goto label_3cc190;
        case 0x3cc194u: goto label_3cc194;
        case 0x3cc198u: goto label_3cc198;
        case 0x3cc19cu: goto label_3cc19c;
        case 0x3cc1a0u: goto label_3cc1a0;
        case 0x3cc1a4u: goto label_3cc1a4;
        case 0x3cc1a8u: goto label_3cc1a8;
        case 0x3cc1acu: goto label_3cc1ac;
        case 0x3cc1b0u: goto label_3cc1b0;
        case 0x3cc1b4u: goto label_3cc1b4;
        case 0x3cc1b8u: goto label_3cc1b8;
        case 0x3cc1bcu: goto label_3cc1bc;
        case 0x3cc1c0u: goto label_3cc1c0;
        case 0x3cc1c4u: goto label_3cc1c4;
        case 0x3cc1c8u: goto label_3cc1c8;
        case 0x3cc1ccu: goto label_3cc1cc;
        case 0x3cc1d0u: goto label_3cc1d0;
        case 0x3cc1d4u: goto label_3cc1d4;
        case 0x3cc1d8u: goto label_3cc1d8;
        case 0x3cc1dcu: goto label_3cc1dc;
        case 0x3cc1e0u: goto label_3cc1e0;
        case 0x3cc1e4u: goto label_3cc1e4;
        case 0x3cc1e8u: goto label_3cc1e8;
        case 0x3cc1ecu: goto label_3cc1ec;
        case 0x3cc1f0u: goto label_3cc1f0;
        case 0x3cc1f4u: goto label_3cc1f4;
        case 0x3cc1f8u: goto label_3cc1f8;
        case 0x3cc1fcu: goto label_3cc1fc;
        case 0x3cc200u: goto label_3cc200;
        case 0x3cc204u: goto label_3cc204;
        case 0x3cc208u: goto label_3cc208;
        case 0x3cc20cu: goto label_3cc20c;
        case 0x3cc210u: goto label_3cc210;
        case 0x3cc214u: goto label_3cc214;
        case 0x3cc218u: goto label_3cc218;
        case 0x3cc21cu: goto label_3cc21c;
        case 0x3cc220u: goto label_3cc220;
        case 0x3cc224u: goto label_3cc224;
        case 0x3cc228u: goto label_3cc228;
        case 0x3cc22cu: goto label_3cc22c;
        case 0x3cc230u: goto label_3cc230;
        case 0x3cc234u: goto label_3cc234;
        case 0x3cc238u: goto label_3cc238;
        case 0x3cc23cu: goto label_3cc23c;
        case 0x3cc240u: goto label_3cc240;
        case 0x3cc244u: goto label_3cc244;
        case 0x3cc248u: goto label_3cc248;
        case 0x3cc24cu: goto label_3cc24c;
        case 0x3cc250u: goto label_3cc250;
        case 0x3cc254u: goto label_3cc254;
        case 0x3cc258u: goto label_3cc258;
        case 0x3cc25cu: goto label_3cc25c;
        case 0x3cc260u: goto label_3cc260;
        case 0x3cc264u: goto label_3cc264;
        case 0x3cc268u: goto label_3cc268;
        case 0x3cc26cu: goto label_3cc26c;
        case 0x3cc270u: goto label_3cc270;
        case 0x3cc274u: goto label_3cc274;
        case 0x3cc278u: goto label_3cc278;
        case 0x3cc27cu: goto label_3cc27c;
        case 0x3cc280u: goto label_3cc280;
        case 0x3cc284u: goto label_3cc284;
        case 0x3cc288u: goto label_3cc288;
        case 0x3cc28cu: goto label_3cc28c;
        case 0x3cc290u: goto label_3cc290;
        case 0x3cc294u: goto label_3cc294;
        case 0x3cc298u: goto label_3cc298;
        case 0x3cc29cu: goto label_3cc29c;
        case 0x3cc2a0u: goto label_3cc2a0;
        case 0x3cc2a4u: goto label_3cc2a4;
        case 0x3cc2a8u: goto label_3cc2a8;
        case 0x3cc2acu: goto label_3cc2ac;
        case 0x3cc2b0u: goto label_3cc2b0;
        case 0x3cc2b4u: goto label_3cc2b4;
        case 0x3cc2b8u: goto label_3cc2b8;
        case 0x3cc2bcu: goto label_3cc2bc;
        case 0x3cc2c0u: goto label_3cc2c0;
        case 0x3cc2c4u: goto label_3cc2c4;
        case 0x3cc2c8u: goto label_3cc2c8;
        case 0x3cc2ccu: goto label_3cc2cc;
        case 0x3cc2d0u: goto label_3cc2d0;
        case 0x3cc2d4u: goto label_3cc2d4;
        case 0x3cc2d8u: goto label_3cc2d8;
        case 0x3cc2dcu: goto label_3cc2dc;
        case 0x3cc2e0u: goto label_3cc2e0;
        case 0x3cc2e4u: goto label_3cc2e4;
        case 0x3cc2e8u: goto label_3cc2e8;
        case 0x3cc2ecu: goto label_3cc2ec;
        case 0x3cc2f0u: goto label_3cc2f0;
        case 0x3cc2f4u: goto label_3cc2f4;
        case 0x3cc2f8u: goto label_3cc2f8;
        case 0x3cc2fcu: goto label_3cc2fc;
        case 0x3cc300u: goto label_3cc300;
        case 0x3cc304u: goto label_3cc304;
        case 0x3cc308u: goto label_3cc308;
        case 0x3cc30cu: goto label_3cc30c;
        case 0x3cc310u: goto label_3cc310;
        case 0x3cc314u: goto label_3cc314;
        case 0x3cc318u: goto label_3cc318;
        case 0x3cc31cu: goto label_3cc31c;
        case 0x3cc320u: goto label_3cc320;
        case 0x3cc324u: goto label_3cc324;
        case 0x3cc328u: goto label_3cc328;
        case 0x3cc32cu: goto label_3cc32c;
        case 0x3cc330u: goto label_3cc330;
        case 0x3cc334u: goto label_3cc334;
        case 0x3cc338u: goto label_3cc338;
        case 0x3cc33cu: goto label_3cc33c;
        case 0x3cc340u: goto label_3cc340;
        case 0x3cc344u: goto label_3cc344;
        case 0x3cc348u: goto label_3cc348;
        case 0x3cc34cu: goto label_3cc34c;
        case 0x3cc350u: goto label_3cc350;
        case 0x3cc354u: goto label_3cc354;
        case 0x3cc358u: goto label_3cc358;
        case 0x3cc35cu: goto label_3cc35c;
        case 0x3cc360u: goto label_3cc360;
        case 0x3cc364u: goto label_3cc364;
        case 0x3cc368u: goto label_3cc368;
        case 0x3cc36cu: goto label_3cc36c;
        case 0x3cc370u: goto label_3cc370;
        case 0x3cc374u: goto label_3cc374;
        case 0x3cc378u: goto label_3cc378;
        case 0x3cc37cu: goto label_3cc37c;
        case 0x3cc380u: goto label_3cc380;
        case 0x3cc384u: goto label_3cc384;
        case 0x3cc388u: goto label_3cc388;
        case 0x3cc38cu: goto label_3cc38c;
        case 0x3cc390u: goto label_3cc390;
        case 0x3cc394u: goto label_3cc394;
        case 0x3cc398u: goto label_3cc398;
        case 0x3cc39cu: goto label_3cc39c;
        case 0x3cc3a0u: goto label_3cc3a0;
        case 0x3cc3a4u: goto label_3cc3a4;
        case 0x3cc3a8u: goto label_3cc3a8;
        case 0x3cc3acu: goto label_3cc3ac;
        case 0x3cc3b0u: goto label_3cc3b0;
        case 0x3cc3b4u: goto label_3cc3b4;
        case 0x3cc3b8u: goto label_3cc3b8;
        case 0x3cc3bcu: goto label_3cc3bc;
        case 0x3cc3c0u: goto label_3cc3c0;
        case 0x3cc3c4u: goto label_3cc3c4;
        case 0x3cc3c8u: goto label_3cc3c8;
        case 0x3cc3ccu: goto label_3cc3cc;
        default: break;
    }

    ctx->pc = 0x3cc158u;

label_3cc158:
    // 0x3cc158: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3cc158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3cc15c:
    // 0x3cc15c: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3cc15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3cc160:
    // 0x3cc160: 0x7fb30440  sq          $s3, 0x440($sp)
    ctx->pc = 0x3cc160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 19));
label_3cc164:
    // 0x3cc164: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cc164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cc168:
    // 0x3cc168: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3cc168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3cc16c:
    // 0x3cc16c: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3cc16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3cc170:
    // 0x3cc170: 0x7fb40430  sq          $s4, 0x430($sp)
    ctx->pc = 0x3cc170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 20));
label_3cc174:
    // 0x3cc174: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3cc174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3cc178:
    // 0x3cc178: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3cc178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cc17c:
    // 0x3cc17c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cc17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cc180:
    // 0x3cc180: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cc180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cc184:
    // 0x3cc184: 0x40f809  jalr        $v0
label_3cc188:
    if (ctx->pc == 0x3CC188u) {
        ctx->pc = 0x3CC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC184u;
        // 0x3cc188: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC18Cu;
        goto label_3cc18c;
    }
    ctx->pc = 0x3CC184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC18Cu);
        ctx->pc = 0x3CC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC184u;
        // 0x3cc188: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC184u, 0x3CC18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC18Cu;
label_3cc18c:
    // 0x3cc18c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3cc18cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc190:
    // 0x3cc190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cc190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cc194:
    // 0x3cc194: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3cc194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3cc198:
    // 0x3cc198: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_3cc19c:
    if (ctx->pc == 0x3CC19Cu) {
        ctx->pc = 0x3CC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC198u;
        // 0x3cc19c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC1A0u;
        goto label_3cc1a0;
    }
    ctx->pc = 0x3CC198u;
    {
        const bool branch_taken_0x3cc198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cc198) {
            ctx->pc = 0x3CC19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CC198u;
            // 0x3cc19c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC1A8u;
            goto label_3cc1a8;
        }
    }
    ctx->pc = 0x3CC1A0u;
label_3cc1a0:
    // 0x3cc1a0: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3cc1a4:
    if (ctx->pc == 0x3CC1A4u) {
        ctx->pc = 0x3CC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1A0u;
        // 0x3cc1a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC1A8u;
        goto label_3cc1a8;
    }
    ctx->pc = 0x3CC1A0u;
    {
        const bool branch_taken_0x3cc1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1A0u;
        // 0x3cc1a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc1a0) {
            ctx->pc = 0x3CC3A0u;
            goto label_3cc3a0;
        }
    }
    ctx->pc = 0x3CC1A8u;
label_3cc1a8:
    // 0x3cc1a8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3cc1a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3cc1ac:
    // 0x3cc1ac: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3cc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3cc1b0:
    // 0x3cc1b0: 0x40f809  jalr        $v0
label_3cc1b4:
    if (ctx->pc == 0x3CC1B4u) {
        ctx->pc = 0x3CC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1B0u;
        // 0x3cc1b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC1B8u;
        goto label_3cc1b8;
    }
    ctx->pc = 0x3CC1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC1B8u);
        ctx->pc = 0x3CC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1B0u;
        // 0x3cc1b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC1B0u, 0x3CC1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC1B8u;
label_3cc1b8:
    // 0x3cc1b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cc1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc1bc:
    // 0x3cc1bc: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x3cc1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
label_3cc1c0:
    // 0x3cc1c0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_3cc1c4:
    if (ctx->pc == 0x3CC1C4u) {
        ctx->pc = 0x3CC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1C0u;
        // 0x3cc1c4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC1C8u;
        goto label_3cc1c8;
    }
    ctx->pc = 0x3CC1C0u;
    {
        const bool branch_taken_0x3cc1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1C0u;
        // 0x3cc1c4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc1c0) {
            ctx->pc = 0x3CC290u;
            goto label_3cc290;
        }
    }
    ctx->pc = 0x3CC1C8u;
label_3cc1c8:
    // 0x3cc1c8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3cc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3cc1cc:
    // 0x3cc1cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3cc1d0:
    // 0x3cc1d0: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
label_3cc1d4:
    if (ctx->pc == 0x3CC1D4u) {
        ctx->pc = 0x3CC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1D0u;
        // 0x3cc1d4: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC1D8u;
        goto label_3cc1d8;
    }
    ctx->pc = 0x3CC1D0u;
    {
        const bool branch_taken_0x3cc1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1D0u;
        // 0x3cc1d4: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc1d0) {
            ctx->pc = 0x3CC290u;
            goto label_3cc290;
        }
    }
    ctx->pc = 0x3CC1D8u;
label_3cc1d8:
    // 0x3cc1d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc1dc:
    // 0x3cc1dc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3cc1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3cc1e0:
    // 0x3cc1e0: 0x27b00410  addiu       $s0, $sp, 0x410
    ctx->pc = 0x3cc1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3cc1e4:
    // 0x3cc1e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3cc1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3cc1e8:
    // 0x3cc1e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3cc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3cc1ec:
    // 0x3cc1ec: 0x0  nop
    ctx->pc = 0x3cc1ecu;
    // NOP
label_3cc1f0:
    // 0x3cc1f0: 0x0  nop
    ctx->pc = 0x3cc1f0u;
    // NOP
label_3cc1f4:
    // 0x3cc1f4: 0x0  nop
    ctx->pc = 0x3cc1f4u;
    // NOP
label_3cc1f8:
    // 0x3cc1f8: 0x0  nop
    ctx->pc = 0x3cc1f8u;
    // NOP
label_3cc1fc:
    // 0x3cc1fc: 0x0  nop
    ctx->pc = 0x3cc1fcu;
    // NOP
label_3cc200:
    // 0x3cc200: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3cc204:
    if (ctx->pc == 0x3CC204u) {
        ctx->pc = 0x3CC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC200u;
        // 0x3cc204: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC208u;
        goto label_3cc208;
    }
    ctx->pc = 0x3CC200u;
    {
        const bool branch_taken_0x3cc200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC200u;
        // 0x3cc204: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc200) {
            ctx->pc = 0x3CC1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cc1f0;
        }
    }
    ctx->pc = 0x3CC208u;
label_3cc208:
    // 0x3cc208: 0xc138ddc  jal         func_4E3770
label_3cc20c:
    if (ctx->pc == 0x3CC20Cu) {
        ctx->pc = 0x3CC210u;
        goto label_3cc210;
    }
    ctx->pc = 0x3CC208u;
    SET_GPR_U32(ctx, 31, 0x3CC210u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3CC208u, 0x3CC210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC210u;
label_3cc210:
    // 0x3cc210: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc214:
    // 0x3cc214: 0xc0ea176  jal         func_3A85D8
label_3cc218:
    if (ctx->pc == 0x3CC218u) {
        ctx->pc = 0x3CC218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC214u;
        // 0x3cc218: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC21Cu;
        goto label_3cc21c;
    }
    ctx->pc = 0x3CC214u;
    SET_GPR_U32(ctx, 31, 0x3CC21Cu);
    ctx->pc = 0x3CC218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC214u;
    // 0x3cc218: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3CC214u, 0x3CC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC21Cu;
label_3cc21c:
    // 0x3cc21c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc220:
    // 0x3cc220: 0xc0ea176  jal         func_3A85D8
label_3cc224:
    if (ctx->pc == 0x3CC224u) {
        ctx->pc = 0x3CC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC220u;
        // 0x3cc224: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC228u;
        goto label_3cc228;
    }
    ctx->pc = 0x3CC220u;
    SET_GPR_U32(ctx, 31, 0x3CC228u);
    ctx->pc = 0x3CC224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC220u;
    // 0x3cc224: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3CC220u, 0x3CC228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC228u;
label_3cc228:
    // 0x3cc228: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc22c:
    // 0x3cc22c: 0xc0ea16a  jal         func_3A85A8
label_3cc230:
    if (ctx->pc == 0x3CC230u) {
        ctx->pc = 0x3CC230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC22Cu;
        // 0x3cc230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC234u;
        goto label_3cc234;
    }
    ctx->pc = 0x3CC22Cu;
    SET_GPR_U32(ctx, 31, 0x3CC234u);
    ctx->pc = 0x3CC230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC22Cu;
    // 0x3cc230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3CC22Cu, 0x3CC234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC234u;
label_3cc234:
    // 0x3cc234: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc238:
    // 0x3cc238: 0xc0ea16a  jal         func_3A85A8
label_3cc23c:
    if (ctx->pc == 0x3CC23Cu) {
        ctx->pc = 0x3CC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC238u;
        // 0x3cc23c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC240u;
        goto label_3cc240;
    }
    ctx->pc = 0x3CC238u;
    SET_GPR_U32(ctx, 31, 0x3CC240u);
    ctx->pc = 0x3CC23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC238u;
    // 0x3cc23c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3CC238u, 0x3CC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC240u;
label_3cc240:
    // 0x3cc240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cc240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc244:
    // 0x3cc244: 0xc0e90ca  jal         func_3A4328
label_3cc248:
    if (ctx->pc == 0x3CC248u) {
        ctx->pc = 0x3CC248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC244u;
        // 0x3cc248: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC24Cu;
        goto label_3cc24c;
    }
    ctx->pc = 0x3CC244u;
    SET_GPR_U32(ctx, 31, 0x3CC24Cu);
    ctx->pc = 0x3CC248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC244u;
    // 0x3cc248: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3CC244u, 0x3CC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC24Cu;
label_3cc24c:
    // 0x3cc24c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc250:
    // 0x3cc250: 0xc0ea158  jal         func_3A8560
label_3cc254:
    if (ctx->pc == 0x3CC254u) {
        ctx->pc = 0x3CC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC250u;
        // 0x3cc254: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC258u;
        goto label_3cc258;
    }
    ctx->pc = 0x3CC250u;
    SET_GPR_U32(ctx, 31, 0x3CC258u);
    ctx->pc = 0x3CC254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC250u;
    // 0x3cc254: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3CC250u, 0x3CC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC258u;
label_3cc258:
    // 0x3cc258: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3cc258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3cc25c:
    // 0x3cc25c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc260:
    // 0x3cc260: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x3cc260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_3cc264:
    // 0x3cc264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cc264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc268:
    // 0x3cc268: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3cc268u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc26c:
    // 0x3cc26c: 0xc0ea158  jal         func_3A8560
label_3cc270:
    if (ctx->pc == 0x3CC270u) {
        ctx->pc = 0x3CC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC26Cu;
        // 0x3cc270: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC274u;
        goto label_3cc274;
    }
    ctx->pc = 0x3CC26Cu;
    SET_GPR_U32(ctx, 31, 0x3CC274u);
    ctx->pc = 0x3CC270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC26Cu;
    // 0x3cc270: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3CC26Cu, 0x3CC274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC274u;
label_3cc274:
    // 0x3cc274: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3cc274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cc278:
    // 0x3cc278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3cc278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cc27c:
    // 0x3cc27c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3cc27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc280:
    // 0x3cc280: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3cc280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3cc284:
    // 0x3cc284: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3cc284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3cc288:
    // 0x3cc288: 0x40f809  jalr        $v0
label_3cc28c:
    if (ctx->pc == 0x3CC28Cu) {
        ctx->pc = 0x3CC28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC288u;
        // 0x3cc28c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC290u;
        goto label_3cc290;
    }
    ctx->pc = 0x3CC288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC290u);
        ctx->pc = 0x3CC28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC288u;
        // 0x3cc28c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC288u, 0x3CC290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC290u;
label_3cc290:
    // 0x3cc290: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3cc290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_3cc294:
    // 0x3cc294: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3cc294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_3cc298:
    // 0x3cc298: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_3cc29c:
    if (ctx->pc == 0x3CC29Cu) {
        ctx->pc = 0x3CC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC298u;
        // 0x3cc29c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC2A0u;
        goto label_3cc2a0;
    }
    ctx->pc = 0x3CC298u;
    {
        const bool branch_taken_0x3cc298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC298u;
        // 0x3cc29c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc298) {
            ctx->pc = 0x3CC390u;
            goto label_3cc390;
        }
    }
    ctx->pc = 0x3CC2A0u;
label_3cc2a0:
    // 0x3cc2a0: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3cc2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3cc2a4:
    // 0x3cc2a4: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3cc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3cc2a8:
    // 0x3cc2a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3cc2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3cc2ac:
    // 0x3cc2ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3cc2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3cc2b0:
    // 0x3cc2b0: 0xc0e87c0  jal         func_3A1F00
label_3cc2b4:
    if (ctx->pc == 0x3CC2B4u) {
        ctx->pc = 0x3CC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC2B0u;
        // 0x3cc2b4: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC2B8u;
        goto label_3cc2b8;
    }
    ctx->pc = 0x3CC2B0u;
    SET_GPR_U32(ctx, 31, 0x3CC2B8u);
    ctx->pc = 0x3CC2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC2B0u;
    // 0x3cc2b4: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3CC2B0u, 0x3CC2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC2B8u;
label_3cc2b8:
    // 0x3cc2b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3cc2b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc2bc:
    // 0x3cc2bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cc2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cc2c0:
    // 0x3cc2c0: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x3cc2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_3cc2c4:
    // 0x3cc2c4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3cc2c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3cc2c8:
    // 0x3cc2c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3cc2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cc2cc:
    // 0x3cc2cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3cc2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc2d0:
    // 0x3cc2d0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3cc2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3cc2d4:
    // 0x3cc2d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3cc2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3cc2d8:
    // 0x3cc2d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cc2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cc2dc:
    // 0x3cc2dc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3cc2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc2e0:
    // 0x3cc2e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3cc2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cc2e4:
    // 0x3cc2e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3cc2e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3cc2e8:
    // 0x3cc2e8: 0x24510070  addiu       $s1, $v0, 0x70
    ctx->pc = 0x3cc2e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_3cc2ec:
    // 0x3cc2ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3cc2ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3cc2f0:
    // 0x3cc2f0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3cc2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3cc2f4:
    // 0x3cc2f4: 0x84500070  lh          $s0, 0x70($v0)
    ctx->pc = 0x3cc2f4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3cc2f8:
    // 0x3cc2f8: 0xc136b24  jal         func_4DAC90
label_3cc2fc:
    if (ctx->pc == 0x3CC2FCu) {
        ctx->pc = 0x3CC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC2F8u;
        // 0x3cc2fc: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC300u;
        goto label_3cc300;
    }
    ctx->pc = 0x3CC2F8u;
    SET_GPR_U32(ctx, 31, 0x3CC300u);
    ctx->pc = 0x3CC2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC2F8u;
    // 0x3cc2fc: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3CC2F8u, 0x3CC300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC300u;
label_3cc300:
    // 0x3cc300: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cc300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc304:
    // 0x3cc304: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x3cc304u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3cc308:
    // 0x3cc308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cc308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc30c:
    // 0x3cc30c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3cc30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3cc310:
    // 0x3cc310: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3cc310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3cc314:
    // 0x3cc314: 0x60f809  jalr        $v1
label_3cc318:
    if (ctx->pc == 0x3CC318u) {
        ctx->pc = 0x3CC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC314u;
        // 0x3cc318: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC31Cu;
        goto label_3cc31c;
    }
    ctx->pc = 0x3CC314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CC31Cu);
        ctx->pc = 0x3CC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC314u;
        // 0x3cc318: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC314u, 0x3CC31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC31Cu;
label_3cc31c:
    // 0x3cc31c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3cc31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3cc320:
    // 0x3cc320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cc320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3cc324:
    // 0x3cc324: 0x2c430003  sltiu       $v1, $v0, 0x3
    ctx->pc = 0x3cc324u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3cc328:
    // 0x3cc328: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_3cc32c:
    if (ctx->pc == 0x3CC32Cu) {
        ctx->pc = 0x3CC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC328u;
        // 0x3cc32c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC330u;
        goto label_3cc330;
    }
    ctx->pc = 0x3CC328u;
    {
        const bool branch_taken_0x3cc328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC328u;
        // 0x3cc32c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc328) {
            ctx->pc = 0x3CC364u;
            goto label_3cc364;
        }
    }
    ctx->pc = 0x3CC330u;
label_3cc330:
    // 0x3cc330: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3cc330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3cc334:
    // 0x3cc334: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3cc334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cc338:
    // 0x3cc338: 0xc1073cc  jal         func_41CF30
label_3cc33c:
    if (ctx->pc == 0x3CC33Cu) {
        ctx->pc = 0x3CC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC338u;
        // 0x3cc33c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC340u;
        goto label_3cc340;
    }
    ctx->pc = 0x3CC338u;
    SET_GPR_U32(ctx, 31, 0x3CC340u);
    ctx->pc = 0x3CC33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC338u;
    // 0x3cc33c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3CC338u, 0x3CC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC340u;
label_3cc340:
    // 0x3cc340: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3cc340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3cc344:
    // 0x3cc344: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3cc348:
    if (ctx->pc == 0x3CC348u) {
        ctx->pc = 0x3CC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC344u;
        // 0x3cc348: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC34Cu;
        goto label_3cc34c;
    }
    ctx->pc = 0x3CC344u;
    {
        const bool branch_taken_0x3cc344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cc344) {
            ctx->pc = 0x3CC348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CC344u;
            // 0x3cc348: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC368u;
            goto label_3cc368;
        }
    }
    ctx->pc = 0x3CC34Cu;
label_3cc34c:
    // 0x3cc34c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3cc34cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3cc350:
    // 0x3cc350: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cc350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cc354:
    // 0x3cc354: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3cc354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3cc358:
    // 0x3cc358: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3cc358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3cc35c:
    // 0x3cc35c: 0xc045ca0  jal         func_117280
label_3cc360:
    if (ctx->pc == 0x3CC360u) {
        ctx->pc = 0x3CC360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC35Cu;
        // 0x3cc360: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC364u;
        goto label_3cc364;
    }
    ctx->pc = 0x3CC35Cu;
    SET_GPR_U32(ctx, 31, 0x3CC364u);
    ctx->pc = 0x3CC360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC35Cu;
    // 0x3cc360: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3CC35Cu, 0x3CC364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC364u;
label_3cc364:
    // 0x3cc364: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3cc364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3cc368:
    // 0x3cc368: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x3cc368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3cc36c:
    // 0x3cc36c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3cc370:
    if (ctx->pc == 0x3CC370u) {
        ctx->pc = 0x3CC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC36Cu;
        // 0x3cc370: 0x8e65000c  lw          $a1, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC374u;
        goto label_3cc374;
    }
    ctx->pc = 0x3CC36Cu;
    {
        const bool branch_taken_0x3cc36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cc36c) {
            ctx->pc = 0x3CC370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CC36Cu;
            // 0x3cc370: 0x8e65000c  lw          $a1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC394u;
            goto label_3cc394;
        }
    }
    ctx->pc = 0x3CC374u;
label_3cc374:
    // 0x3cc374: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3cc374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3cc378:
    // 0x3cc378: 0x3c03f9ff  lui         $v1, 0xF9FF
    ctx->pc = 0x3cc378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63999 << 16));
label_3cc37c:
    // 0x3cc37c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3cc37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3cc380:
    // 0x3cc380: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x3cc380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3cc384:
    // 0x3cc384: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3cc384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3cc388:
    // 0x3cc388: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3cc388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3cc38c:
    // 0x3cc38c: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x3cc38cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
label_3cc390:
    // 0x3cc390: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x3cc390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3cc394:
    // 0x3cc394: 0xc0e858c  jal         func_3A1630
label_3cc398:
    if (ctx->pc == 0x3CC398u) {
        ctx->pc = 0x3CC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC394u;
        // 0x3cc398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC39Cu;
        goto label_3cc39c;
    }
    ctx->pc = 0x3CC394u;
    SET_GPR_U32(ctx, 31, 0x3CC39Cu);
    ctx->pc = 0x3CC398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC394u;
    // 0x3cc398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CC394u, 0x3CC39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC39Cu;
label_3cc39c:
    // 0x3cc39c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cc39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc3a0:
    // 0x3cc3a0: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3cc3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3cc3a4:
    // 0x3cc3a4: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3cc3a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3cc3a8:
    // 0x3cc3a8: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3cc3a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3cc3ac:
    // 0x3cc3ac: 0x7bb30440  lq          $s3, 0x440($sp)
    ctx->pc = 0x3cc3acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3cc3b0:
    // 0x3cc3b0: 0x7bb40430  lq          $s4, 0x430($sp)
    ctx->pc = 0x3cc3b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3cc3b4:
    // 0x3cc3b4: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3cc3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3cc3b8:
    // 0x3cc3b8: 0x3e00008  jr          $ra
label_3cc3bc:
    if (ctx->pc == 0x3CC3BCu) {
        ctx->pc = 0x3CC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC3B8u;
        // 0x3cc3bc: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC3C0u;
        goto label_3cc3c0;
    }
    ctx->pc = 0x3CC3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC3B8u;
        // 0x3cc3bc: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC3C0u;
label_3cc3c0:
    // 0x3cc3c0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3cc3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3cc3c4:
    // 0x3cc3c4: 0x0  nop
    ctx->pc = 0x3cc3c4u;
    // NOP
label_3cc3c8:
    // 0x3cc3c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3cc3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3cc3cc:
    // 0x3cc3cc: 0x0  nop
    ctx->pc = 0x3cc3ccu;
    // NOP
    ctx->pc = 0x3cc3d0u;
}
