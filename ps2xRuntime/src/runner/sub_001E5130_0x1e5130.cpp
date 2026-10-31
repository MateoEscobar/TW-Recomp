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

// Function: sub_001E5130
// Address: 0x1e5130 - 0x1e52f8
void sub_001E5130_0x1e5130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5130_0x1e5130");
#endif

    switch (ctx->pc) {
        case 0x1e5130u: goto label_1e5130;
        case 0x1e5134u: goto label_1e5134;
        case 0x1e5138u: goto label_1e5138;
        case 0x1e513cu: goto label_1e513c;
        case 0x1e5140u: goto label_1e5140;
        case 0x1e5144u: goto label_1e5144;
        case 0x1e5148u: goto label_1e5148;
        case 0x1e514cu: goto label_1e514c;
        case 0x1e5150u: goto label_1e5150;
        case 0x1e5154u: goto label_1e5154;
        case 0x1e5158u: goto label_1e5158;
        case 0x1e515cu: goto label_1e515c;
        case 0x1e5160u: goto label_1e5160;
        case 0x1e5164u: goto label_1e5164;
        case 0x1e5168u: goto label_1e5168;
        case 0x1e516cu: goto label_1e516c;
        case 0x1e5170u: goto label_1e5170;
        case 0x1e5174u: goto label_1e5174;
        case 0x1e5178u: goto label_1e5178;
        case 0x1e517cu: goto label_1e517c;
        case 0x1e5180u: goto label_1e5180;
        case 0x1e5184u: goto label_1e5184;
        case 0x1e5188u: goto label_1e5188;
        case 0x1e518cu: goto label_1e518c;
        case 0x1e5190u: goto label_1e5190;
        case 0x1e5194u: goto label_1e5194;
        case 0x1e5198u: goto label_1e5198;
        case 0x1e519cu: goto label_1e519c;
        case 0x1e51a0u: goto label_1e51a0;
        case 0x1e51a4u: goto label_1e51a4;
        case 0x1e51a8u: goto label_1e51a8;
        case 0x1e51acu: goto label_1e51ac;
        case 0x1e51b0u: goto label_1e51b0;
        case 0x1e51b4u: goto label_1e51b4;
        case 0x1e51b8u: goto label_1e51b8;
        case 0x1e51bcu: goto label_1e51bc;
        case 0x1e51c0u: goto label_1e51c0;
        case 0x1e51c4u: goto label_1e51c4;
        case 0x1e51c8u: goto label_1e51c8;
        case 0x1e51ccu: goto label_1e51cc;
        case 0x1e51d0u: goto label_1e51d0;
        case 0x1e51d4u: goto label_1e51d4;
        case 0x1e51d8u: goto label_1e51d8;
        case 0x1e51dcu: goto label_1e51dc;
        case 0x1e51e0u: goto label_1e51e0;
        case 0x1e51e4u: goto label_1e51e4;
        case 0x1e51e8u: goto label_1e51e8;
        case 0x1e51ecu: goto label_1e51ec;
        case 0x1e51f0u: goto label_1e51f0;
        case 0x1e51f4u: goto label_1e51f4;
        case 0x1e51f8u: goto label_1e51f8;
        case 0x1e51fcu: goto label_1e51fc;
        case 0x1e5200u: goto label_1e5200;
        case 0x1e5204u: goto label_1e5204;
        case 0x1e5208u: goto label_1e5208;
        case 0x1e520cu: goto label_1e520c;
        case 0x1e5210u: goto label_1e5210;
        case 0x1e5214u: goto label_1e5214;
        case 0x1e5218u: goto label_1e5218;
        case 0x1e521cu: goto label_1e521c;
        case 0x1e5220u: goto label_1e5220;
        case 0x1e5224u: goto label_1e5224;
        case 0x1e5228u: goto label_1e5228;
        case 0x1e522cu: goto label_1e522c;
        case 0x1e5230u: goto label_1e5230;
        case 0x1e5234u: goto label_1e5234;
        case 0x1e5238u: goto label_1e5238;
        case 0x1e523cu: goto label_1e523c;
        case 0x1e5240u: goto label_1e5240;
        case 0x1e5244u: goto label_1e5244;
        case 0x1e5248u: goto label_1e5248;
        case 0x1e524cu: goto label_1e524c;
        case 0x1e5250u: goto label_1e5250;
        case 0x1e5254u: goto label_1e5254;
        case 0x1e5258u: goto label_1e5258;
        case 0x1e525cu: goto label_1e525c;
        case 0x1e5260u: goto label_1e5260;
        case 0x1e5264u: goto label_1e5264;
        case 0x1e5268u: goto label_1e5268;
        case 0x1e526cu: goto label_1e526c;
        case 0x1e5270u: goto label_1e5270;
        case 0x1e5274u: goto label_1e5274;
        case 0x1e5278u: goto label_1e5278;
        case 0x1e527cu: goto label_1e527c;
        case 0x1e5280u: goto label_1e5280;
        case 0x1e5284u: goto label_1e5284;
        case 0x1e5288u: goto label_1e5288;
        case 0x1e528cu: goto label_1e528c;
        case 0x1e5290u: goto label_1e5290;
        case 0x1e5294u: goto label_1e5294;
        case 0x1e5298u: goto label_1e5298;
        case 0x1e529cu: goto label_1e529c;
        case 0x1e52a0u: goto label_1e52a0;
        case 0x1e52a4u: goto label_1e52a4;
        case 0x1e52a8u: goto label_1e52a8;
        case 0x1e52acu: goto label_1e52ac;
        case 0x1e52b0u: goto label_1e52b0;
        case 0x1e52b4u: goto label_1e52b4;
        case 0x1e52b8u: goto label_1e52b8;
        case 0x1e52bcu: goto label_1e52bc;
        case 0x1e52c0u: goto label_1e52c0;
        case 0x1e52c4u: goto label_1e52c4;
        case 0x1e52c8u: goto label_1e52c8;
        case 0x1e52ccu: goto label_1e52cc;
        case 0x1e52d0u: goto label_1e52d0;
        case 0x1e52d4u: goto label_1e52d4;
        case 0x1e52d8u: goto label_1e52d8;
        case 0x1e52dcu: goto label_1e52dc;
        case 0x1e52e0u: goto label_1e52e0;
        case 0x1e52e4u: goto label_1e52e4;
        case 0x1e52e8u: goto label_1e52e8;
        case 0x1e52ecu: goto label_1e52ec;
        case 0x1e52f0u: goto label_1e52f0;
        case 0x1e52f4u: goto label_1e52f4;
        default: break;
    }

    ctx->pc = 0x1e5130u;

label_1e5130:
    // 0x1e5130: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e5130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1e5134:
    // 0x1e5134: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e5134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e5138:
    // 0x1e5138: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1e5138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1e513c:
    // 0x1e513c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e513cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5140:
    // 0x1e5140: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1e5140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1e5144:
    // 0x1e5144: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1e5144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1e5148:
    // 0x1e5148: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e514c:
    // 0x1e514c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1e514cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1e5150:
    // 0x1e5150: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1e5150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1e5154:
    // 0x1e5154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e5158:
    // 0x1e5158: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1e5158u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e515c:
    // 0x1e515c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1e515cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1e5160:
    // 0x1e5160: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e5164:
    if (ctx->pc == 0x1E5164u) {
        ctx->pc = 0x1E5168u;
        goto label_1e5168;
    }
    ctx->pc = 0x1E5160u;
    {
        const bool branch_taken_0x1e5160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5160) {
            ctx->pc = 0x1E5178u;
            goto label_1e5178;
        }
    }
    ctx->pc = 0x1E5168u;
label_1e5168:
    // 0x1e5168: 0xc0793aa  jal         func_1E4EA8
label_1e516c:
    if (ctx->pc == 0x1E516Cu) {
        ctx->pc = 0x1E5170u;
        goto label_1e5170;
    }
    ctx->pc = 0x1E5168u;
    SET_GPR_U32(ctx, 31, 0x1E5170u);
    ctx->pc = 0x1E4EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4EA8u, 0x1E5168u, 0x1E5170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5170u;
label_1e5170:
    // 0x1e5170: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_1e5174:
    if (ctx->pc == 0x1E5174u) {
        ctx->pc = 0x1E5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5170u;
        // 0x1e5174: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5178u;
        goto label_1e5178;
    }
    ctx->pc = 0x1E5170u;
    {
        const bool branch_taken_0x1e5170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5170u;
        // 0x1e5174: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5170) {
            ctx->pc = 0x1E52C8u;
            goto label_1e52c8;
        }
    }
    ctx->pc = 0x1E5178u;
label_1e5178:
    // 0x1e5178: 0xc05181e  jal         func_146078
label_1e517c:
    if (ctx->pc == 0x1E517Cu) {
        ctx->pc = 0x1E517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5178u;
        // 0x1e517c: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5180u;
        goto label_1e5180;
    }
    ctx->pc = 0x1E5178u;
    SET_GPR_U32(ctx, 31, 0x1E5180u);
    ctx->pc = 0x1E517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5178u;
    // 0x1e517c: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x1E5178u, 0x1E5180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5180u;
label_1e5180:
    // 0x1e5180: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1e5180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1e5184:
    // 0x1e5184: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x1e5184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1e5188:
    // 0x1e5188: 0xc07a546  jal         func_1E9518
label_1e518c:
    if (ctx->pc == 0x1E518Cu) {
        ctx->pc = 0x1E518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5188u;
        // 0x1e518c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5190u;
        goto label_1e5190;
    }
    ctx->pc = 0x1E5188u;
    SET_GPR_U32(ctx, 31, 0x1E5190u);
    ctx->pc = 0x1E518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5188u;
    // 0x1e518c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9518u, 0x1E5188u, 0x1E5190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5190u;
label_1e5190:
    // 0x1e5190: 0x8e620950  lw          $v0, 0x950($s3)
    ctx->pc = 0x1e5190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2384)));
label_1e5194:
    // 0x1e5194: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1e5198:
    if (ctx->pc == 0x1E5198u) {
        ctx->pc = 0x1E5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5194u;
        // 0x1e5198: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E519Cu;
        goto label_1e519c;
    }
    ctx->pc = 0x1E5194u;
    {
        const bool branch_taken_0x1e5194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5194u;
        // 0x1e5198: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5194) {
            ctx->pc = 0x1E51E4u;
            goto label_1e51e4;
        }
    }
    ctx->pc = 0x1E519Cu;
label_1e519c:
    // 0x1e519c: 0x26700940  addiu       $s0, $s3, 0x940
    ctx->pc = 0x1e519cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
label_1e51a0:
    // 0x1e51a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1e51a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e51a4:
    // 0x1e51a4: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_1e51a8:
    if (ctx->pc == 0x1E51A8u) {
        ctx->pc = 0x1E51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51A4u;
        // 0x1e51a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51ACu;
        goto label_1e51ac;
    }
    ctx->pc = 0x1E51A4u;
    {
        const bool branch_taken_0x1e51a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51a4) {
            ctx->pc = 0x1E51A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E51A4u;
            // 0x1e51a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E51D0u;
            goto label_1e51d0;
        }
    }
    ctx->pc = 0x1E51ACu;
label_1e51ac:
    // 0x1e51ac: 0x8e620948  lw          $v0, 0x948($s3)
    ctx->pc = 0x1e51acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2376)));
label_1e51b0:
    // 0x1e51b0: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
label_1e51b4:
    if (ctx->pc == 0x1E51B4u) {
        ctx->pc = 0x1E51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B0u;
        // 0x1e51b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51B8u;
        goto label_1e51b8;
    }
    ctx->pc = 0x1E51B0u;
    {
        const bool branch_taken_0x1e51b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e51b0) {
            ctx->pc = 0x1E51B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E51B0u;
            // 0x1e51b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E51D0u;
            goto label_1e51d0;
        }
    }
    ctx->pc = 0x1E51B8u;
label_1e51b8:
    // 0x1e51b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e51bc:
    // 0x1e51bc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e51bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e51c0:
    // 0x1e51c0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e51c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e51c4:
    // 0x1e51c4: 0x60f809  jalr        $v1
label_1e51c8:
    if (ctx->pc == 0x1E51C8u) {
        ctx->pc = 0x1E51C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51C4u;
        // 0x1e51c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51CCu;
        goto label_1e51cc;
    }
    ctx->pc = 0x1E51C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E51CCu);
        ctx->pc = 0x1E51C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51C4u;
        // 0x1e51c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E51C4u, 0x1E51CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E51CCu;
label_1e51cc:
    // 0x1e51cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e51ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e51d0:
    // 0x1e51d0: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1e51d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e51d4:
    // 0x1e51d4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1e51d8:
    if (ctx->pc == 0x1E51D8u) {
        ctx->pc = 0x1E51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51D4u;
        // 0x1e51d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51DCu;
        goto label_1e51dc;
    }
    ctx->pc = 0x1E51D4u;
    {
        const bool branch_taken_0x1e51d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51D4u;
        // 0x1e51d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51d4) {
            ctx->pc = 0x1E51A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e51a0;
        }
    }
    ctx->pc = 0x1E51DCu;
label_1e51dc:
    // 0x1e51dc: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1e51e0:
    if (ctx->pc == 0x1E51E0u) {
        ctx->pc = 0x1E51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51DCu;
        // 0x1e51e0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51E4u;
        goto label_1e51e4;
    }
    ctx->pc = 0x1E51DCu;
    {
        const bool branch_taken_0x1e51dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51DCu;
        // 0x1e51e0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51dc) {
            ctx->pc = 0x1E52CCu;
            goto label_1e52cc;
        }
    }
    ctx->pc = 0x1E51E4u;
label_1e51e4:
    // 0x1e51e4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1e51e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1e51e8:
    // 0x1e51e8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1e51e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1e51ec:
    // 0x1e51ec: 0xc640f0ec  lwc1        $f0, -0xF14($s2)
    ctx->pc = 0x1e51ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e51f0:
    // 0x1e51f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e51f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e51f4:
    // 0x1e51f4: 0xc621f0f4  lwc1        $f1, -0xF0C($s1)
    ctx->pc = 0x1e51f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294963444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e51f8:
    // 0x1e51f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e51f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e51fc:
    // 0x1e51fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e51fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e5200:
    // 0x1e5200: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e5200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e5204:
    // 0x1e5204: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5208:
    // 0x1e5208: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e5208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e520c:
    // 0x1e520c: 0x267007a0  addiu       $s0, $s3, 0x7A0
    ctx->pc = 0x1e520cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1952));
label_1e5210:
    // 0x1e5210: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e5210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e5214:
    // 0x1e5214: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1e5214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5218:
    // 0x1e5218: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e5218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e521c:
    // 0x1e521c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1e521cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5220:
    // 0x1e5220: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1e5220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e5224:
    // 0x1e5224: 0xc048b52  jal         func_122D48
label_1e5228:
    if (ctx->pc == 0x1E5228u) {
        ctx->pc = 0x1E5228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5224u;
        // 0x1e5228: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E522Cu;
        goto label_1e522c;
    }
    ctx->pc = 0x1E5224u;
    SET_GPR_U32(ctx, 31, 0x1E522Cu);
    ctx->pc = 0x1E5228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5224u;
    // 0x1e5228: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E5224u, 0x1E522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E522Cu;
label_1e522c:
    // 0x1e522c: 0x8e6307a0  lw          $v1, 0x7A0($s3)
    ctx->pc = 0x1e522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1952)));
label_1e5230:
    // 0x1e5230: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e5230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e5234:
    // 0x1e5234: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5238:
    // 0x1e5238: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1e5238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1e523c:
    // 0x1e523c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e5240:
    // 0x1e5240: 0x40f809  jalr        $v0
label_1e5244:
    if (ctx->pc == 0x1E5244u) {
        ctx->pc = 0x1E5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5240u;
        // 0x1e5244: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5248u;
        goto label_1e5248;
    }
    ctx->pc = 0x1E5240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E5248u);
        ctx->pc = 0x1E5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5240u;
        // 0x1e5244: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5240u, 0x1E5248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5248u;
label_1e5248:
    // 0x1e5248: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e5248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e524c:
    // 0x1e524c: 0xc620f0f4  lwc1        $f0, -0xF0C($s1)
    ctx->pc = 0x1e524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294963444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5250:
    // 0x1e5250: 0xc461f0f8  lwc1        $f1, -0xF08($v1)
    ctx->pc = 0x1e5250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5254:
    // 0x1e5254: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e5254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e5258:
    // 0x1e5258: 0xc642f0ec  lwc1        $f2, -0xF14($s2)
    ctx->pc = 0x1e5258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e525c:
    // 0x1e525c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e525cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5260:
    // 0x1e5260: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e5260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e5264:
    // 0x1e5264: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5268:
    // 0x1e5268: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1e5268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e526c:
    // 0x1e526c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1e526cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e5270:
    // 0x1e5270: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e5270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e5274:
    // 0x1e5274: 0xc048b52  jal         func_122D48
label_1e5278:
    if (ctx->pc == 0x1E5278u) {
        ctx->pc = 0x1E5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5274u;
        // 0x1e5278: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E527Cu;
        goto label_1e527c;
    }
    ctx->pc = 0x1E5274u;
    SET_GPR_U32(ctx, 31, 0x1E527Cu);
    ctx->pc = 0x1E5278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5274u;
    // 0x1e5278: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E5274u, 0x1E527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E527Cu;
label_1e527c:
    // 0x1e527c: 0x8e630870  lw          $v1, 0x870($s3)
    ctx->pc = 0x1e527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2160)));
label_1e5280:
    // 0x1e5280: 0x26670870  addiu       $a3, $s3, 0x870
    ctx->pc = 0x1e5280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2160));
label_1e5284:
    // 0x1e5284: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e5284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e5288:
    // 0x1e5288: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e528c:
    // 0x1e528c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1e528cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1e5290:
    // 0x1e5290: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e5290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e5294:
    // 0x1e5294: 0x40f809  jalr        $v0
label_1e5298:
    if (ctx->pc == 0x1E5298u) {
        ctx->pc = 0x1E5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5294u;
        // 0x1e5298: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E529Cu;
        goto label_1e529c;
    }
    ctx->pc = 0x1E5294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E529Cu);
        ctx->pc = 0x1E5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5294u;
        // 0x1e5298: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5294u, 0x1E529Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E529Cu;
label_1e529c:
    // 0x1e529c: 0x0  nop
    ctx->pc = 0x1e529cu;
    // NOP
label_1e52a0:
    // 0x1e52a0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1e52a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e52a4:
    // 0x1e52a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e52a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1e52a8:
    // 0x1e52a8: 0x269400d0  addiu       $s4, $s4, 0xD0
    ctx->pc = 0x1e52a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
label_1e52ac:
    // 0x1e52ac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e52acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e52b0:
    // 0x1e52b0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e52b4:
    // 0x1e52b4: 0x40f809  jalr        $v0
label_1e52b8:
    if (ctx->pc == 0x1E52B8u) {
        ctx->pc = 0x1E52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52B4u;
        // 0x1e52b8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E52BCu;
        goto label_1e52bc;
    }
    ctx->pc = 0x1E52B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E52BCu);
        ctx->pc = 0x1E52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52B4u;
        // 0x1e52b8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E52B4u, 0x1E52BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E52BCu;
label_1e52bc:
    // 0x1e52bc: 0x2ec20002  sltiu       $v0, $s6, 0x2
    ctx->pc = 0x1e52bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e52c0:
    // 0x1e52c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1e52c4:
    if (ctx->pc == 0x1E52C4u) {
        ctx->pc = 0x1E52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52C0u;
        // 0x1e52c4: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E52C8u;
        goto label_1e52c8;
    }
    ctx->pc = 0x1E52C0u;
    {
        const bool branch_taken_0x1e52c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52C0u;
        // 0x1e52c4: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52c0) {
            ctx->pc = 0x1E52A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e52a0;
        }
    }
    ctx->pc = 0x1E52C8u;
label_1e52c8:
    // 0x1e52c8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1e52c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e52cc:
    // 0x1e52cc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1e52ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e52d0:
    // 0x1e52d0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1e52d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e52d4:
    // 0x1e52d4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e52d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e52d8:
    // 0x1e52d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e52d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e52dc:
    // 0x1e52dc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1e52dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e52e0:
    // 0x1e52e0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1e52e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e52e4:
    // 0x1e52e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e52e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e52e8:
    // 0x1e52e8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1e52e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e52ec:
    // 0x1e52ec: 0x3e00008  jr          $ra
label_1e52f0:
    if (ctx->pc == 0x1E52F0u) {
        ctx->pc = 0x1E52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52ECu;
        // 0x1e52f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E52F4u;
        goto label_1e52f4;
    }
    ctx->pc = 0x1E52ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52ECu;
        // 0x1e52f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E52ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E52F4u;
label_1e52f4:
    // 0x1e52f4: 0x0  nop
    ctx->pc = 0x1e52f4u;
    // NOP
    ctx->pc = 0x1e52f8u;
}
