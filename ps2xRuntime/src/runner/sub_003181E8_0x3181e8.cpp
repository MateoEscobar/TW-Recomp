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

// Function: sub_003181E8
// Address: 0x3181e8 - 0x3183b8
void sub_003181E8_0x3181e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003181E8_0x3181e8");
#endif

    switch (ctx->pc) {
        case 0x3181e8u: goto label_3181e8;
        case 0x3181ecu: goto label_3181ec;
        case 0x3181f0u: goto label_3181f0;
        case 0x3181f4u: goto label_3181f4;
        case 0x3181f8u: goto label_3181f8;
        case 0x3181fcu: goto label_3181fc;
        case 0x318200u: goto label_318200;
        case 0x318204u: goto label_318204;
        case 0x318208u: goto label_318208;
        case 0x31820cu: goto label_31820c;
        case 0x318210u: goto label_318210;
        case 0x318214u: goto label_318214;
        case 0x318218u: goto label_318218;
        case 0x31821cu: goto label_31821c;
        case 0x318220u: goto label_318220;
        case 0x318224u: goto label_318224;
        case 0x318228u: goto label_318228;
        case 0x31822cu: goto label_31822c;
        case 0x318230u: goto label_318230;
        case 0x318234u: goto label_318234;
        case 0x318238u: goto label_318238;
        case 0x31823cu: goto label_31823c;
        case 0x318240u: goto label_318240;
        case 0x318244u: goto label_318244;
        case 0x318248u: goto label_318248;
        case 0x31824cu: goto label_31824c;
        case 0x318250u: goto label_318250;
        case 0x318254u: goto label_318254;
        case 0x318258u: goto label_318258;
        case 0x31825cu: goto label_31825c;
        case 0x318260u: goto label_318260;
        case 0x318264u: goto label_318264;
        case 0x318268u: goto label_318268;
        case 0x31826cu: goto label_31826c;
        case 0x318270u: goto label_318270;
        case 0x318274u: goto label_318274;
        case 0x318278u: goto label_318278;
        case 0x31827cu: goto label_31827c;
        case 0x318280u: goto label_318280;
        case 0x318284u: goto label_318284;
        case 0x318288u: goto label_318288;
        case 0x31828cu: goto label_31828c;
        case 0x318290u: goto label_318290;
        case 0x318294u: goto label_318294;
        case 0x318298u: goto label_318298;
        case 0x31829cu: goto label_31829c;
        case 0x3182a0u: goto label_3182a0;
        case 0x3182a4u: goto label_3182a4;
        case 0x3182a8u: goto label_3182a8;
        case 0x3182acu: goto label_3182ac;
        case 0x3182b0u: goto label_3182b0;
        case 0x3182b4u: goto label_3182b4;
        case 0x3182b8u: goto label_3182b8;
        case 0x3182bcu: goto label_3182bc;
        case 0x3182c0u: goto label_3182c0;
        case 0x3182c4u: goto label_3182c4;
        case 0x3182c8u: goto label_3182c8;
        case 0x3182ccu: goto label_3182cc;
        case 0x3182d0u: goto label_3182d0;
        case 0x3182d4u: goto label_3182d4;
        case 0x3182d8u: goto label_3182d8;
        case 0x3182dcu: goto label_3182dc;
        case 0x3182e0u: goto label_3182e0;
        case 0x3182e4u: goto label_3182e4;
        case 0x3182e8u: goto label_3182e8;
        case 0x3182ecu: goto label_3182ec;
        case 0x3182f0u: goto label_3182f0;
        case 0x3182f4u: goto label_3182f4;
        case 0x3182f8u: goto label_3182f8;
        case 0x3182fcu: goto label_3182fc;
        case 0x318300u: goto label_318300;
        case 0x318304u: goto label_318304;
        case 0x318308u: goto label_318308;
        case 0x31830cu: goto label_31830c;
        case 0x318310u: goto label_318310;
        case 0x318314u: goto label_318314;
        case 0x318318u: goto label_318318;
        case 0x31831cu: goto label_31831c;
        case 0x318320u: goto label_318320;
        case 0x318324u: goto label_318324;
        case 0x318328u: goto label_318328;
        case 0x31832cu: goto label_31832c;
        case 0x318330u: goto label_318330;
        case 0x318334u: goto label_318334;
        case 0x318338u: goto label_318338;
        case 0x31833cu: goto label_31833c;
        case 0x318340u: goto label_318340;
        case 0x318344u: goto label_318344;
        case 0x318348u: goto label_318348;
        case 0x31834cu: goto label_31834c;
        case 0x318350u: goto label_318350;
        case 0x318354u: goto label_318354;
        case 0x318358u: goto label_318358;
        case 0x31835cu: goto label_31835c;
        case 0x318360u: goto label_318360;
        case 0x318364u: goto label_318364;
        case 0x318368u: goto label_318368;
        case 0x31836cu: goto label_31836c;
        case 0x318370u: goto label_318370;
        case 0x318374u: goto label_318374;
        case 0x318378u: goto label_318378;
        case 0x31837cu: goto label_31837c;
        case 0x318380u: goto label_318380;
        case 0x318384u: goto label_318384;
        case 0x318388u: goto label_318388;
        case 0x31838cu: goto label_31838c;
        case 0x318390u: goto label_318390;
        case 0x318394u: goto label_318394;
        case 0x318398u: goto label_318398;
        case 0x31839cu: goto label_31839c;
        case 0x3183a0u: goto label_3183a0;
        case 0x3183a4u: goto label_3183a4;
        case 0x3183a8u: goto label_3183a8;
        case 0x3183acu: goto label_3183ac;
        case 0x3183b0u: goto label_3183b0;
        case 0x3183b4u: goto label_3183b4;
        default: break;
    }

    ctx->pc = 0x3181e8u;

label_3181e8:
    // 0x3181e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3181e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3181ec:
    // 0x3181ec: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3181ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3181f0:
    // 0x3181f0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3181f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3181f4:
    // 0x3181f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3181f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3181f8:
    // 0x3181f8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3181f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3181fc:
    // 0x3181fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3181fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_318200:
    // 0x318200: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x318200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_318204:
    // 0x318204: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x318204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_318208:
    // 0x318208: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x318208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_31820c:
    // 0x31820c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_318210:
    // 0x318210: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x318210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_318214:
    // 0x318214: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x318214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_318218:
    // 0x318218: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x318218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_31821c:
    // 0x31821c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x31821cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_318220:
    // 0x318220: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x318220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_318224:
    // 0x318224: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x318224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_318228:
    // 0x318228: 0x10c20056  beq         $a2, $v0, . + 4 + (0x56 << 2)
label_31822c:
    if (ctx->pc == 0x31822Cu) {
        ctx->pc = 0x31822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318228u;
        // 0x31822c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318230u;
        goto label_318230;
    }
    ctx->pc = 0x318228u;
    {
        const bool branch_taken_0x318228 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x31822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318228u;
        // 0x31822c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318228) {
            ctx->pc = 0x318384u;
            goto label_318384;
        }
    }
    ctx->pc = 0x318230u;
label_318230:
    // 0x318230: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x318230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_318234:
    // 0x318234: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x318234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_318238:
    // 0x318238: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x318238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_31823c:
    // 0x31823c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31823cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318240:
    // 0x318240: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x318240u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_318244:
    // 0x318244: 0x241e005e  addiu       $fp, $zero, 0x5E
    ctx->pc = 0x318244u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_318248:
    // 0x318248: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x318248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_31824c:
    // 0x31824c: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x31824cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_318250:
    // 0x318250: 0x60f809  jalr        $v1
label_318254:
    if (ctx->pc == 0x318254u) {
        ctx->pc = 0x318254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318250u;
        // 0x318254: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318258u;
        goto label_318258;
    }
    ctx->pc = 0x318250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x318258u);
        ctx->pc = 0x318254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318250u;
        // 0x318254: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318250u, 0x318258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x318258u;
label_318258:
    // 0x318258: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x318258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31825c:
    // 0x31825c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x31825cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_318260:
    // 0x318260: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x318260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_318264:
    // 0x318264: 0x24764b00  addiu       $s6, $v1, 0x4B00
    ctx->pc = 0x318264u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_318268:
    // 0x318268: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x318268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_31826c:
    // 0x31826c: 0x24950048  addiu       $s5, $a0, 0x48
    ctx->pc = 0x31826cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_318270:
    // 0x318270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x318270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_318274:
    // 0x318274: 0x0  nop
    ctx->pc = 0x318274u;
    // NOP
label_318278:
    // 0x318278: 0xc137826  jal         func_4DE098
label_31827c:
    if (ctx->pc == 0x31827Cu) {
        ctx->pc = 0x31827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318278u;
        // 0x31827c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318280u;
        goto label_318280;
    }
    ctx->pc = 0x318278u;
    SET_GPR_U32(ctx, 31, 0x318280u);
    ctx->pc = 0x31827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318278u;
    // 0x31827c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x318278u, 0x318280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318280u;
label_318280:
    // 0x318280: 0xc0e409a  jal         func_390268
label_318284:
    if (ctx->pc == 0x318284u) {
        ctx->pc = 0x318284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318280u;
        // 0x318284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318288u;
        goto label_318288;
    }
    ctx->pc = 0x318280u;
    SET_GPR_U32(ctx, 31, 0x318288u);
    ctx->pc = 0x318284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318280u;
    // 0x318284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x318280u, 0x318288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318288u;
label_318288:
    // 0x318288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x318288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31828c:
    // 0x31828c: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_318290:
    if (ctx->pc == 0x318290u) {
        ctx->pc = 0x318290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31828Cu;
        // 0x318290: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318294u;
        goto label_318294;
    }
    ctx->pc = 0x31828Cu;
    {
        const bool branch_taken_0x31828c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x318290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31828Cu;
        // 0x318290: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31828c) {
            ctx->pc = 0x31836Cu;
            goto label_31836c;
        }
    }
    ctx->pc = 0x318294u;
label_318294:
    // 0x318294: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x318294u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_318298:
    // 0x318298: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x318298u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31829c:
    // 0x31829c: 0xc0cdb38  jal         func_336CE0
label_3182a0:
    if (ctx->pc == 0x3182A0u) {
        ctx->pc = 0x3182A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31829Cu;
        // 0x3182a0: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3182A4u;
        goto label_3182a4;
    }
    ctx->pc = 0x31829Cu;
    SET_GPR_U32(ctx, 31, 0x3182A4u);
    ctx->pc = 0x3182A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31829Cu;
    // 0x3182a0: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31829Cu, 0x3182A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3182A4u;
label_3182a4:
    // 0x3182a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3182a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3182a8:
    // 0x3182a8: 0x0  nop
    ctx->pc = 0x3182a8u;
    // NOP
label_3182ac:
    // 0x3182ac: 0x45030030  bc1tl       . + 4 + (0x30 << 2)
label_3182b0:
    if (ctx->pc == 0x3182B0u) {
        ctx->pc = 0x3182B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182ACu;
        // 0x3182b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3182B4u;
        goto label_3182b4;
    }
    ctx->pc = 0x3182ACu;
    {
        const bool branch_taken_0x3182ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3182ac) {
            ctx->pc = 0x3182B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3182ACu;
            // 0x3182b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318370u;
            goto label_318370;
        }
    }
    ctx->pc = 0x3182B4u;
label_3182b4:
    // 0x3182b4: 0xc087502  jal         func_21D408
label_3182b8:
    if (ctx->pc == 0x3182B8u) {
        ctx->pc = 0x3182B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182B4u;
        // 0x3182b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3182BCu;
        goto label_3182bc;
    }
    ctx->pc = 0x3182B4u;
    SET_GPR_U32(ctx, 31, 0x3182BCu);
    ctx->pc = 0x3182B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3182B4u;
    // 0x3182b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3182B4u, 0x3182BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3182BCu;
label_3182bc:
    // 0x3182bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3182bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3182c0:
    // 0x3182c0: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x3182c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_3182c4:
    // 0x3182c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3182c8:
    if (ctx->pc == 0x3182C8u) {
        ctx->pc = 0x3182C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182C4u;
        // 0x3182c8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3182CCu;
        goto label_3182cc;
    }
    ctx->pc = 0x3182C4u;
    {
        const bool branch_taken_0x3182c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3182C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182C4u;
        // 0x3182c8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182c4) {
            ctx->pc = 0x3182D8u;
            goto label_3182d8;
        }
    }
    ctx->pc = 0x3182CCu;
label_3182cc:
    // 0x3182cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3182ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3182d0:
    // 0x3182d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3182d4:
    if (ctx->pc == 0x3182D4u) {
        ctx->pc = 0x3182D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182D0u;
        // 0x3182d4: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3182D8u;
        goto label_3182d8;
    }
    ctx->pc = 0x3182D0u;
    {
        const bool branch_taken_0x3182d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3182D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182D0u;
        // 0x3182d4: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182d0) {
            ctx->pc = 0x3182DCu;
            goto label_3182dc;
        }
    }
    ctx->pc = 0x3182D8u;
label_3182d8:
    // 0x3182d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3182d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3182dc:
    // 0x3182dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3182dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3182e0:
    // 0x3182e0: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_3182e4:
    if (ctx->pc == 0x3182E4u) {
        ctx->pc = 0x3182E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182E0u;
        // 0x3182e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3182E8u;
        goto label_3182e8;
    }
    ctx->pc = 0x3182E0u;
    {
        const bool branch_taken_0x3182e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3182e0) {
            ctx->pc = 0x3182E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3182E0u;
            // 0x3182e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318370u;
            goto label_318370;
        }
    }
    ctx->pc = 0x3182E8u;
label_3182e8:
    // 0x3182e8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3182e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3182ec:
    // 0x3182ec: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x3182ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_3182f0:
    // 0x3182f0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3182f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3182f4:
    // 0x3182f4: 0x40f809  jalr        $v0
label_3182f8:
    if (ctx->pc == 0x3182F8u) {
        ctx->pc = 0x3182F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182F4u;
        // 0x3182f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3182FCu;
        goto label_3182fc;
    }
    ctx->pc = 0x3182F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3182FCu);
        ctx->pc = 0x3182F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182F4u;
        // 0x3182f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3182F4u, 0x3182FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3182FCu;
label_3182fc:
    // 0x3182fc: 0x545e000c  bnel        $v0, $fp, . + 4 + (0xC << 2)
label_318300:
    if (ctx->pc == 0x318300u) {
        ctx->pc = 0x318300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182FCu;
        // 0x318300: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318304u;
        goto label_318304;
    }
    ctx->pc = 0x3182FCu;
    {
        const bool branch_taken_0x3182fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x3182fc) {
            ctx->pc = 0x318300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3182FCu;
            // 0x318300: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318330u;
            goto label_318330;
        }
    }
    ctx->pc = 0x318304u;
label_318304:
    // 0x318304: 0xc0a35f6  jal         func_28D7D8
label_318308:
    if (ctx->pc == 0x318308u) {
        ctx->pc = 0x318308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318304u;
        // 0x318308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31830Cu;
        goto label_31830c;
    }
    ctx->pc = 0x318304u;
    SET_GPR_U32(ctx, 31, 0x31830Cu);
    ctx->pc = 0x318308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318304u;
    // 0x318308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x318304u, 0x31830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31830Cu;
label_31830c:
    // 0x31830c: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x31830cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_318310:
    // 0x318310: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_318314:
    if (ctx->pc == 0x318314u) {
        ctx->pc = 0x318314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318310u;
        // 0x318314: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318318u;
        goto label_318318;
    }
    ctx->pc = 0x318310u;
    {
        const bool branch_taken_0x318310 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x318314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318310u;
        // 0x318314: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318310) {
            ctx->pc = 0x318324u;
            goto label_318324;
        }
    }
    ctx->pc = 0x318318u;
label_318318:
    // 0x318318: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x318318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_31831c:
    // 0x31831c: 0x10000002  b           . + 4 + (0x2 << 2)
label_318320:
    if (ctx->pc == 0x318320u) {
        ctx->pc = 0x318320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31831Cu;
        // 0x318320: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318324u;
        goto label_318324;
    }
    ctx->pc = 0x31831Cu;
    {
        const bool branch_taken_0x31831c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31831Cu;
        // 0x318320: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31831c) {
            ctx->pc = 0x318328u;
            goto label_318328;
        }
    }
    ctx->pc = 0x318324u;
label_318324:
    // 0x318324: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x318324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318328:
    // 0x318328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x318328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31832c:
    // 0x31832c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x31832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_318330:
    // 0x318330: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x318330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_318334:
    // 0x318334: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x318334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_318338:
    // 0x318338: 0x40f809  jalr        $v0
label_31833c:
    if (ctx->pc == 0x31833Cu) {
        ctx->pc = 0x31833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318338u;
        // 0x31833c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318340u;
        goto label_318340;
    }
    ctx->pc = 0x318338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x318340u);
        ctx->pc = 0x31833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318338u;
        // 0x31833c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318338u, 0x318340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x318340u;
label_318340:
    // 0x318340: 0x5457000b  bnel        $v0, $s7, . + 4 + (0xB << 2)
label_318344:
    if (ctx->pc == 0x318344u) {
        ctx->pc = 0x318344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318340u;
        // 0x318344: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318348u;
        goto label_318348;
    }
    ctx->pc = 0x318340u;
    {
        const bool branch_taken_0x318340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x318340) {
            ctx->pc = 0x318344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318340u;
            // 0x318344: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318370u;
            goto label_318370;
        }
    }
    ctx->pc = 0x318348u;
label_318348:
    // 0x318348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x318348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31834c:
    // 0x31834c: 0xc0ac322  jal         func_2B0C88
label_318350:
    if (ctx->pc == 0x318350u) {
        ctx->pc = 0x318350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31834Cu;
        // 0x318350: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318354u;
        goto label_318354;
    }
    ctx->pc = 0x31834Cu;
    SET_GPR_U32(ctx, 31, 0x318354u);
    ctx->pc = 0x318350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31834Cu;
    // 0x318350: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0C88u, 0x31834Cu, 0x318354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318354u;
label_318354:
    // 0x318354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_318358:
    // 0x318358: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_31835c:
    if (ctx->pc == 0x31835Cu) {
        ctx->pc = 0x31835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318358u;
        // 0x31835c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318360u;
        goto label_318360;
    }
    ctx->pc = 0x318358u;
    {
        const bool branch_taken_0x318358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x318358) {
            ctx->pc = 0x31835Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318358u;
            // 0x31835c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318370u;
            goto label_318370;
        }
    }
    ctx->pc = 0x318360u;
label_318360:
    // 0x318360: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318364:
    // 0x318364: 0xc0c6008  jal         func_318020
label_318368:
    if (ctx->pc == 0x318368u) {
        ctx->pc = 0x318368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318364u;
        // 0x318368: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31836Cu;
        goto label_31836c;
    }
    ctx->pc = 0x318364u;
    SET_GPR_U32(ctx, 31, 0x31836Cu);
    ctx->pc = 0x318368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318364u;
    // 0x318368: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318020u, 0x318364u, 0x31836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31836Cu;
label_31836c:
    // 0x31836c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31836cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_318370:
    // 0x318370: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x318370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_318374:
    // 0x318374: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
label_318378:
    if (ctx->pc == 0x318378u) {
        ctx->pc = 0x318378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318374u;
        // 0x318378: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31837Cu;
        goto label_31837c;
    }
    ctx->pc = 0x318374u;
    {
        const bool branch_taken_0x318374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318374u;
        // 0x318378: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318374) {
            ctx->pc = 0x318278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318278;
        }
    }
    ctx->pc = 0x31837Cu;
label_31837c:
    // 0x31837c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x31837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_318380:
    // 0x318380: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x318380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
label_318384:
    // 0x318384: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x318384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_318388:
    // 0x318388: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x318388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_31838c:
    // 0x31838c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x31838cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_318390:
    // 0x318390: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x318390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_318394:
    // 0x318394: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x318394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_318398:
    // 0x318398: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x318398u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31839c:
    // 0x31839c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31839cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3183a0:
    // 0x3183a0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3183a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3183a4:
    // 0x3183a4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3183a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3183a8:
    // 0x3183a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3183a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3183ac:
    // 0x3183ac: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3183acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3183b0:
    // 0x3183b0: 0x3e00008  jr          $ra
label_3183b4:
    if (ctx->pc == 0x3183B4u) {
        ctx->pc = 0x3183B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183B0u;
        // 0x3183b4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3183B8u;
        goto label_fallthrough_0x3183b0;
    }
    ctx->pc = 0x3183B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3183B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183B0u;
        // 0x3183b4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3183B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3183b0:
    ctx->pc = 0x3183B8u;
}
