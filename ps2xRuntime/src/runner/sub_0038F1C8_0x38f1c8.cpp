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

// Function: sub_0038F1C8
// Address: 0x38f1c8 - 0x38f378
void sub_0038F1C8_0x38f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F1C8_0x38f1c8");
#endif

    switch (ctx->pc) {
        case 0x38f1c8u: goto label_38f1c8;
        case 0x38f1ccu: goto label_38f1cc;
        case 0x38f1d0u: goto label_38f1d0;
        case 0x38f1d4u: goto label_38f1d4;
        case 0x38f1d8u: goto label_38f1d8;
        case 0x38f1dcu: goto label_38f1dc;
        case 0x38f1e0u: goto label_38f1e0;
        case 0x38f1e4u: goto label_38f1e4;
        case 0x38f1e8u: goto label_38f1e8;
        case 0x38f1ecu: goto label_38f1ec;
        case 0x38f1f0u: goto label_38f1f0;
        case 0x38f1f4u: goto label_38f1f4;
        case 0x38f1f8u: goto label_38f1f8;
        case 0x38f1fcu: goto label_38f1fc;
        case 0x38f200u: goto label_38f200;
        case 0x38f204u: goto label_38f204;
        case 0x38f208u: goto label_38f208;
        case 0x38f20cu: goto label_38f20c;
        case 0x38f210u: goto label_38f210;
        case 0x38f214u: goto label_38f214;
        case 0x38f218u: goto label_38f218;
        case 0x38f21cu: goto label_38f21c;
        case 0x38f220u: goto label_38f220;
        case 0x38f224u: goto label_38f224;
        case 0x38f228u: goto label_38f228;
        case 0x38f22cu: goto label_38f22c;
        case 0x38f230u: goto label_38f230;
        case 0x38f234u: goto label_38f234;
        case 0x38f238u: goto label_38f238;
        case 0x38f23cu: goto label_38f23c;
        case 0x38f240u: goto label_38f240;
        case 0x38f244u: goto label_38f244;
        case 0x38f248u: goto label_38f248;
        case 0x38f24cu: goto label_38f24c;
        case 0x38f250u: goto label_38f250;
        case 0x38f254u: goto label_38f254;
        case 0x38f258u: goto label_38f258;
        case 0x38f25cu: goto label_38f25c;
        case 0x38f260u: goto label_38f260;
        case 0x38f264u: goto label_38f264;
        case 0x38f268u: goto label_38f268;
        case 0x38f26cu: goto label_38f26c;
        case 0x38f270u: goto label_38f270;
        case 0x38f274u: goto label_38f274;
        case 0x38f278u: goto label_38f278;
        case 0x38f27cu: goto label_38f27c;
        case 0x38f280u: goto label_38f280;
        case 0x38f284u: goto label_38f284;
        case 0x38f288u: goto label_38f288;
        case 0x38f28cu: goto label_38f28c;
        case 0x38f290u: goto label_38f290;
        case 0x38f294u: goto label_38f294;
        case 0x38f298u: goto label_38f298;
        case 0x38f29cu: goto label_38f29c;
        case 0x38f2a0u: goto label_38f2a0;
        case 0x38f2a4u: goto label_38f2a4;
        case 0x38f2a8u: goto label_38f2a8;
        case 0x38f2acu: goto label_38f2ac;
        case 0x38f2b0u: goto label_38f2b0;
        case 0x38f2b4u: goto label_38f2b4;
        case 0x38f2b8u: goto label_38f2b8;
        case 0x38f2bcu: goto label_38f2bc;
        case 0x38f2c0u: goto label_38f2c0;
        case 0x38f2c4u: goto label_38f2c4;
        case 0x38f2c8u: goto label_38f2c8;
        case 0x38f2ccu: goto label_38f2cc;
        case 0x38f2d0u: goto label_38f2d0;
        case 0x38f2d4u: goto label_38f2d4;
        case 0x38f2d8u: goto label_38f2d8;
        case 0x38f2dcu: goto label_38f2dc;
        case 0x38f2e0u: goto label_38f2e0;
        case 0x38f2e4u: goto label_38f2e4;
        case 0x38f2e8u: goto label_38f2e8;
        case 0x38f2ecu: goto label_38f2ec;
        case 0x38f2f0u: goto label_38f2f0;
        case 0x38f2f4u: goto label_38f2f4;
        case 0x38f2f8u: goto label_38f2f8;
        case 0x38f2fcu: goto label_38f2fc;
        case 0x38f300u: goto label_38f300;
        case 0x38f304u: goto label_38f304;
        case 0x38f308u: goto label_38f308;
        case 0x38f30cu: goto label_38f30c;
        case 0x38f310u: goto label_38f310;
        case 0x38f314u: goto label_38f314;
        case 0x38f318u: goto label_38f318;
        case 0x38f31cu: goto label_38f31c;
        case 0x38f320u: goto label_38f320;
        case 0x38f324u: goto label_38f324;
        case 0x38f328u: goto label_38f328;
        case 0x38f32cu: goto label_38f32c;
        case 0x38f330u: goto label_38f330;
        case 0x38f334u: goto label_38f334;
        case 0x38f338u: goto label_38f338;
        case 0x38f33cu: goto label_38f33c;
        case 0x38f340u: goto label_38f340;
        case 0x38f344u: goto label_38f344;
        case 0x38f348u: goto label_38f348;
        case 0x38f34cu: goto label_38f34c;
        case 0x38f350u: goto label_38f350;
        case 0x38f354u: goto label_38f354;
        case 0x38f358u: goto label_38f358;
        case 0x38f35cu: goto label_38f35c;
        case 0x38f360u: goto label_38f360;
        case 0x38f364u: goto label_38f364;
        case 0x38f368u: goto label_38f368;
        case 0x38f36cu: goto label_38f36c;
        case 0x38f370u: goto label_38f370;
        case 0x38f374u: goto label_38f374;
        default: break;
    }

    ctx->pc = 0x38f1c8u;

label_38f1c8:
    // 0x38f1c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38f1cc:
    // 0x38f1cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38f1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38f1d0:
    // 0x38f1d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38f1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_38f1d4:
    // 0x38f1d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38f1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f1d8:
    // 0x38f1d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38f1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_38f1dc:
    // 0x38f1dc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x38f1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_38f1e0:
    // 0x38f1e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38f1e4:
    // 0x38f1e4: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x38f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_38f1e8:
    // 0x38f1e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_38f1ec:
    if (ctx->pc == 0x38F1ECu) {
        ctx->pc = 0x38F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1E8u;
        // 0x38f1ec: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F1F0u;
        goto label_38f1f0;
    }
    ctx->pc = 0x38F1E8u;
    {
        const bool branch_taken_0x38f1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1E8u;
        // 0x38f1ec: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f1e8) {
            ctx->pc = 0x38F230u;
            goto label_38f230;
        }
    }
    ctx->pc = 0x38F1F0u;
label_38f1f0:
    // 0x38f1f0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x38f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_38f1f4:
    // 0x38f1f4: 0x40f809  jalr        $v0
label_38f1f8:
    if (ctx->pc == 0x38F1F8u) {
        ctx->pc = 0x38F1FCu;
        goto label_38f1fc;
    }
    ctx->pc = 0x38F1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F1FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F1F4u, 0x38F1FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F1FCu;
label_38f1fc:
    // 0x38f1fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f200:
    // 0x38f200: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_38f204:
    if (ctx->pc == 0x38F204u) {
        ctx->pc = 0x38F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F200u;
        // 0x38f204: 0x8e71489c  lw          $s1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F208u;
        goto label_38f208;
    }
    ctx->pc = 0x38F200u;
    {
        const bool branch_taken_0x38f200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x38F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F200u;
        // 0x38f204: 0x8e71489c  lw          $s1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f200) {
            ctx->pc = 0x38F234u;
            goto label_38f234;
        }
    }
    ctx->pc = 0x38F208u;
label_38f208:
    // 0x38f208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38f208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38f20c:
    // 0x38f20c: 0xc0e858c  jal         func_3A1630
label_38f210:
    if (ctx->pc == 0x38F210u) {
        ctx->pc = 0x38F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F20Cu;
        // 0x38f210: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F214u;
        goto label_38f214;
    }
    ctx->pc = 0x38F20Cu;
    SET_GPR_U32(ctx, 31, 0x38F214u);
    ctx->pc = 0x38F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F20Cu;
    // 0x38f210: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x38F20Cu, 0x38F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F214u;
label_38f214:
    // 0x38f214: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38f218:
    // 0x38f218: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x38f218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_38f21c:
    // 0x38f21c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x38f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_38f220:
    // 0x38f220: 0x60f809  jalr        $v1
label_38f224:
    if (ctx->pc == 0x38F224u) {
        ctx->pc = 0x38F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F220u;
        // 0x38f224: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F228u;
        goto label_38f228;
    }
    ctx->pc = 0x38F220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38F228u);
        ctx->pc = 0x38F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F220u;
        // 0x38f224: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F220u, 0x38F228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F228u;
label_38f228:
    // 0x38f228: 0x1000004c  b           . + 4 + (0x4C << 2)
label_38f22c:
    if (ctx->pc == 0x38F22Cu) {
        ctx->pc = 0x38F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F228u;
        // 0x38f22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F230u;
        goto label_38f230;
    }
    ctx->pc = 0x38F228u;
    {
        const bool branch_taken_0x38f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F228u;
        // 0x38f22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f228) {
            ctx->pc = 0x38F35Cu;
            goto label_38f35c;
        }
    }
    ctx->pc = 0x38F230u;
label_38f230:
    // 0x38f230: 0x8e71489c  lw          $s1, 0x489C($s3)
    ctx->pc = 0x38f230u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_38f234:
    // 0x38f234: 0xc136ad6  jal         func_4DAB58
label_38f238:
    if (ctx->pc == 0x38F238u) {
        ctx->pc = 0x38F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F234u;
        // 0x38f238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F23Cu;
        goto label_38f23c;
    }
    ctx->pc = 0x38F234u;
    SET_GPR_U32(ctx, 31, 0x38F23Cu);
    ctx->pc = 0x38F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F234u;
    // 0x38f238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x38F234u, 0x38F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F23Cu;
label_38f23c:
    // 0x38f23c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38f23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f240:
    // 0x38f240: 0xc136ad4  jal         func_4DAB50
label_38f244:
    if (ctx->pc == 0x38F244u) {
        ctx->pc = 0x38F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F240u;
        // 0x38f244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F248u;
        goto label_38f248;
    }
    ctx->pc = 0x38F240u;
    SET_GPR_U32(ctx, 31, 0x38F248u);
    ctx->pc = 0x38F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F240u;
    // 0x38f244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x38F240u, 0x38F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F248u;
label_38f248:
    // 0x38f248: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x38f248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_38f24c:
    // 0x38f24c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38f250:
    // 0x38f250: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x38f250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_38f254:
    // 0x38f254: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x38f254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_38f258:
    // 0x38f258: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x38f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38f25c:
    // 0x38f25c: 0x54440011  bnel        $v0, $a0, . + 4 + (0x11 << 2)
label_38f260:
    if (ctx->pc == 0x38F260u) {
        ctx->pc = 0x38F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F25Cu;
        // 0x38f260: 0xc64100d0  lwc1        $f1, 0xD0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F264u;
        goto label_38f264;
    }
    ctx->pc = 0x38F25Cu;
    {
        const bool branch_taken_0x38f25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x38f25c) {
            ctx->pc = 0x38F260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F25Cu;
            // 0x38f260: 0xc64100d0  lwc1        $f1, 0xD0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F2A4u;
            goto label_38f2a4;
        }
    }
    ctx->pc = 0x38F264u;
label_38f264:
    // 0x38f264: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x38f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_38f268:
    // 0x38f268: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x38f268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38f26c:
    // 0x38f26c: 0x8443033a  lh          $v1, 0x33A($v0)
    ctx->pc = 0x38f26cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
label_38f270:
    // 0x38f270: 0x5464000c  bnel        $v1, $a0, . + 4 + (0xC << 2)
label_38f274:
    if (ctx->pc == 0x38F274u) {
        ctx->pc = 0x38F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F270u;
        // 0x38f274: 0xc64100d0  lwc1        $f1, 0xD0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F278u;
        goto label_38f278;
    }
    ctx->pc = 0x38F270u;
    {
        const bool branch_taken_0x38f270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x38f270) {
            ctx->pc = 0x38F274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F270u;
            // 0x38f274: 0xc64100d0  lwc1        $f1, 0xD0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F2A4u;
            goto label_38f2a4;
        }
    }
    ctx->pc = 0x38F278u;
label_38f278:
    // 0x38f278: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38f278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38f27c:
    // 0x38f27c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x38f27cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_38f280:
    // 0x38f280: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x38f280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_38f284:
    // 0x38f284: 0x40f809  jalr        $v0
label_38f288:
    if (ctx->pc == 0x38F288u) {
        ctx->pc = 0x38F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F284u;
        // 0x38f288: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F28Cu;
        goto label_38f28c;
    }
    ctx->pc = 0x38F284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F28Cu);
        ctx->pc = 0x38F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F284u;
        // 0x38f288: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F284u, 0x38F28Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F28Cu;
label_38f28c:
    // 0x38f28c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x38f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_38f290:
    // 0x38f290: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38f290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38f294:
    // 0x38f294: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_38f298:
    if (ctx->pc == 0x38F298u) {
        ctx->pc = 0x38F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F294u;
        // 0x38f298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F29Cu;
        goto label_38f29c;
    }
    ctx->pc = 0x38F294u;
    {
        const bool branch_taken_0x38f294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F294u;
        // 0x38f298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f294) {
            ctx->pc = 0x38F35Cu;
            goto label_38f35c;
        }
    }
    ctx->pc = 0x38F29Cu;
label_38f29c:
    // 0x38f29c: 0x10000018  b           . + 4 + (0x18 << 2)
label_38f2a0:
    if (ctx->pc == 0x38F2A0u) {
        ctx->pc = 0x38F2A4u;
        goto label_38f2a4;
    }
    ctx->pc = 0x38F29Cu;
    {
        const bool branch_taken_0x38f29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f29c) {
            ctx->pc = 0x38F300u;
            goto label_38f300;
        }
    }
    ctx->pc = 0x38F2A4u;
label_38f2a4:
    // 0x38f2a4: 0x3c01451c  lui         $at, 0x451C
    ctx->pc = 0x38f2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17692 << 16));
label_38f2a8:
    // 0x38f2a8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x38f2a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_38f2ac:
    // 0x38f2ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38f2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38f2b0:
    // 0x38f2b0: 0x0  nop
    ctx->pc = 0x38f2b0u;
    // NOP
label_38f2b4:
    // 0x38f2b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38f2b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38f2b8:
    // 0x38f2b8: 0x0  nop
    ctx->pc = 0x38f2b8u;
    // NOP
label_38f2bc:
    // 0x38f2bc: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_38f2c0:
    if (ctx->pc == 0x38F2C0u) {
        ctx->pc = 0x38F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2BCu;
        // 0x38f2c0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F2C4u;
        goto label_38f2c4;
    }
    ctx->pc = 0x38F2BCu;
    {
        const bool branch_taken_0x38f2bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2BCu;
        // 0x38f2c0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f2bc) {
            ctx->pc = 0x38F310u;
            goto label_38f310;
        }
    }
    ctx->pc = 0x38F2C4u;
label_38f2c4:
    // 0x38f2c4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x38f2c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_38f2c8:
    // 0x38f2c8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x38f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_38f2cc:
    // 0x38f2cc: 0x40f809  jalr        $v0
label_38f2d0:
    if (ctx->pc == 0x38F2D0u) {
        ctx->pc = 0x38F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2CCu;
        // 0x38f2d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F2D4u;
        goto label_38f2d4;
    }
    ctx->pc = 0x38F2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F2D4u);
        ctx->pc = 0x38F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2CCu;
        // 0x38f2d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F2CCu, 0x38F2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F2D4u;
label_38f2d4:
    // 0x38f2d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38f2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38f2d8:
    // 0x38f2d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_38f2dc:
    if (ctx->pc == 0x38F2DCu) {
        ctx->pc = 0x38F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2D8u;
        // 0x38f2dc: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F2E0u;
        goto label_38f2e0;
    }
    ctx->pc = 0x38F2D8u;
    {
        const bool branch_taken_0x38f2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2D8u;
        // 0x38f2dc: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f2d8) {
            ctx->pc = 0x38F2ECu;
            goto label_38f2ec;
        }
    }
    ctx->pc = 0x38F2E0u;
label_38f2e0:
    // 0x38f2e0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x38f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_38f2e4:
    // 0x38f2e4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_38f2e8:
    if (ctx->pc == 0x38F2E8u) {
        ctx->pc = 0x38F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2E4u;
        // 0x38f2e8: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F2ECu;
        goto label_38f2ec;
    }
    ctx->pc = 0x38F2E4u;
    {
        const bool branch_taken_0x38f2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2E4u;
        // 0x38f2e8: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f2e4) {
            ctx->pc = 0x38F354u;
            goto label_38f354;
        }
    }
    ctx->pc = 0x38F2ECu;
label_38f2ec:
    // 0x38f2ec: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x38f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_38f2f0:
    // 0x38f2f0: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x38f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_38f2f4:
    // 0x38f2f4: 0x344280e0  ori         $v0, $v0, 0x80E0
    ctx->pc = 0x38f2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32992);
label_38f2f8:
    // 0x38f2f8: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_38f2fc:
    if (ctx->pc == 0x38F2FCu) {
        ctx->pc = 0x38F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2F8u;
        // 0x38f2fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F300u;
        goto label_38f300;
    }
    ctx->pc = 0x38F2F8u;
    {
        const bool branch_taken_0x38f2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2F8u;
        // 0x38f2fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f2f8) {
            ctx->pc = 0x38F35Cu;
            goto label_38f35c;
        }
    }
    ctx->pc = 0x38F300u;
label_38f300:
    // 0x38f300: 0xc0e3b5a  jal         func_38ED68
label_38f304:
    if (ctx->pc == 0x38F304u) {
        ctx->pc = 0x38F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F300u;
        // 0x38f304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F308u;
        goto label_38f308;
    }
    ctx->pc = 0x38F300u;
    SET_GPR_U32(ctx, 31, 0x38F308u);
    ctx->pc = 0x38F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F300u;
    // 0x38f304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38ED68u, 0x38F300u, 0x38F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F308u;
label_38f308:
    // 0x38f308: 0x10000014  b           . + 4 + (0x14 << 2)
label_38f30c:
    if (ctx->pc == 0x38F30Cu) {
        ctx->pc = 0x38F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F308u;
        // 0x38f30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F310u;
        goto label_38f310;
    }
    ctx->pc = 0x38F308u;
    {
        const bool branch_taken_0x38f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F308u;
        // 0x38f30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f308) {
            ctx->pc = 0x38F35Cu;
            goto label_38f35c;
        }
    }
    ctx->pc = 0x38F310u;
label_38f310:
    // 0x38f310: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x38f310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_38f314:
    // 0x38f314: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x38f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_38f318:
    // 0x38f318: 0x40f809  jalr        $v0
label_38f31c:
    if (ctx->pc == 0x38F31Cu) {
        ctx->pc = 0x38F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F318u;
        // 0x38f31c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F320u;
        goto label_38f320;
    }
    ctx->pc = 0x38F318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F320u);
        ctx->pc = 0x38F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F318u;
        // 0x38f31c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F318u, 0x38F320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F320u;
label_38f320:
    // 0x38f320: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38f320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38f324:
    // 0x38f324: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_38f328:
    if (ctx->pc == 0x38F328u) {
        ctx->pc = 0x38F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F324u;
        // 0x38f328: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F32Cu;
        goto label_38f32c;
    }
    ctx->pc = 0x38F324u;
    {
        const bool branch_taken_0x38f324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f324) {
            ctx->pc = 0x38F328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F324u;
            // 0x38f328: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F350u;
            goto label_38f350;
        }
    }
    ctx->pc = 0x38F32Cu;
label_38f32c:
    // 0x38f32c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x38f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_38f330:
    // 0x38f330: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x38f330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_38f334:
    // 0x38f334: 0x344280e0  ori         $v0, $v0, 0x80E0
    ctx->pc = 0x38f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32992);
label_38f338:
    // 0x38f338: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_38f33c:
    if (ctx->pc == 0x38F33Cu) {
        ctx->pc = 0x38F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F338u;
        // 0x38f33c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F340u;
        goto label_38f340;
    }
    ctx->pc = 0x38F338u;
    {
        const bool branch_taken_0x38f338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F338u;
        // 0x38f33c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f338) {
            ctx->pc = 0x38F35Cu;
            goto label_38f35c;
        }
    }
    ctx->pc = 0x38F340u;
label_38f340:
    // 0x38f340: 0xc0e3bb0  jal         func_38EEC0
label_38f344:
    if (ctx->pc == 0x38F344u) {
        ctx->pc = 0x38F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F340u;
        // 0x38f344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F348u;
        goto label_38f348;
    }
    ctx->pc = 0x38F340u;
    SET_GPR_U32(ctx, 31, 0x38F348u);
    ctx->pc = 0x38F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F340u;
    // 0x38f344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EEC0u, 0x38F340u, 0x38F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F348u;
label_38f348:
    // 0x38f348: 0x10000004  b           . + 4 + (0x4 << 2)
label_38f34c:
    if (ctx->pc == 0x38F34Cu) {
        ctx->pc = 0x38F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F348u;
        // 0x38f34c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F350u;
        goto label_38f350;
    }
    ctx->pc = 0x38F348u;
    {
        const bool branch_taken_0x38f348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F348u;
        // 0x38f34c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f348) {
            ctx->pc = 0x38F35Cu;
            goto label_38f35c;
        }
    }
    ctx->pc = 0x38F350u;
label_38f350:
    // 0x38f350: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x38f350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_38f354:
    // 0x38f354: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x38f354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_38f358:
    // 0x38f358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38f358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f35c:
    // 0x38f35c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38f35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38f360:
    // 0x38f360: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38f360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38f364:
    // 0x38f364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38f364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38f368:
    // 0x38f368: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x38f368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38f36c:
    // 0x38f36c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38f370:
    // 0x38f370: 0x3e00008  jr          $ra
label_38f374:
    if (ctx->pc == 0x38F374u) {
        ctx->pc = 0x38F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F370u;
        // 0x38f374: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F378u;
        goto label_fallthrough_0x38f370;
    }
    ctx->pc = 0x38F370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F370u;
        // 0x38f374: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38f370:
    ctx->pc = 0x38F378u;
}
