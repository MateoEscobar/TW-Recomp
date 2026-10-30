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

// Function: sub_002E3218
// Address: 0x2e3218 - 0x2e32f0
void sub_002E3218_0x2e3218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3218_0x2e3218");
#endif

    switch (ctx->pc) {
        case 0x2e3218u: goto label_2e3218;
        case 0x2e321cu: goto label_2e321c;
        case 0x2e3220u: goto label_2e3220;
        case 0x2e3224u: goto label_2e3224;
        case 0x2e3228u: goto label_2e3228;
        case 0x2e322cu: goto label_2e322c;
        case 0x2e3230u: goto label_2e3230;
        case 0x2e3234u: goto label_2e3234;
        case 0x2e3238u: goto label_2e3238;
        case 0x2e323cu: goto label_2e323c;
        case 0x2e3240u: goto label_2e3240;
        case 0x2e3244u: goto label_2e3244;
        case 0x2e3248u: goto label_2e3248;
        case 0x2e324cu: goto label_2e324c;
        case 0x2e3250u: goto label_2e3250;
        case 0x2e3254u: goto label_2e3254;
        case 0x2e3258u: goto label_2e3258;
        case 0x2e325cu: goto label_2e325c;
        case 0x2e3260u: goto label_2e3260;
        case 0x2e3264u: goto label_2e3264;
        case 0x2e3268u: goto label_2e3268;
        case 0x2e326cu: goto label_2e326c;
        case 0x2e3270u: goto label_2e3270;
        case 0x2e3274u: goto label_2e3274;
        case 0x2e3278u: goto label_2e3278;
        case 0x2e327cu: goto label_2e327c;
        case 0x2e3280u: goto label_2e3280;
        case 0x2e3284u: goto label_2e3284;
        case 0x2e3288u: goto label_2e3288;
        case 0x2e328cu: goto label_2e328c;
        case 0x2e3290u: goto label_2e3290;
        case 0x2e3294u: goto label_2e3294;
        case 0x2e3298u: goto label_2e3298;
        case 0x2e329cu: goto label_2e329c;
        case 0x2e32a0u: goto label_2e32a0;
        case 0x2e32a4u: goto label_2e32a4;
        case 0x2e32a8u: goto label_2e32a8;
        case 0x2e32acu: goto label_2e32ac;
        case 0x2e32b0u: goto label_2e32b0;
        case 0x2e32b4u: goto label_2e32b4;
        case 0x2e32b8u: goto label_2e32b8;
        case 0x2e32bcu: goto label_2e32bc;
        case 0x2e32c0u: goto label_2e32c0;
        case 0x2e32c4u: goto label_2e32c4;
        case 0x2e32c8u: goto label_2e32c8;
        case 0x2e32ccu: goto label_2e32cc;
        case 0x2e32d0u: goto label_2e32d0;
        case 0x2e32d4u: goto label_2e32d4;
        case 0x2e32d8u: goto label_2e32d8;
        case 0x2e32dcu: goto label_2e32dc;
        case 0x2e32e0u: goto label_2e32e0;
        case 0x2e32e4u: goto label_2e32e4;
        case 0x2e32e8u: goto label_2e32e8;
        case 0x2e32ecu: goto label_2e32ec;
        default: break;
    }

    ctx->pc = 0x2e3218u;

label_2e3218:
    // 0x2e3218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e321c:
    // 0x2e321c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e321cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2e3220:
    // 0x2e3220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e3224:
    // 0x2e3224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e3228:
    // 0x2e3228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e322c:
    // 0x2e322c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2e3230:
    // 0x2e3230: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2e3230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2e3234:
    // 0x2e3234: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2e3234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2e3238:
    // 0x2e3238: 0x60f809  jalr        $v1
label_2e323c:
    if (ctx->pc == 0x2E323Cu) {
        ctx->pc = 0x2E323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3238u;
        // 0x2e323c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3240u;
        goto label_2e3240;
    }
    ctx->pc = 0x2E3238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E3240u);
        ctx->pc = 0x2E323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3238u;
        // 0x2e323c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3238u, 0x2E3240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3240u;
label_2e3240:
    // 0x2e3240: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e3240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e3244:
    // 0x2e3244: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2e3244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2e3248:
    // 0x2e3248: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e3248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2e324c:
    // 0x2e324c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e324cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e3250:
    // 0x2e3250: 0x8c83021c  lw          $v1, 0x21C($a0)
    ctx->pc = 0x2e3250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 540)));
label_2e3254:
    // 0x2e3254: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2e3254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_2e3258:
    // 0x2e3258: 0x90820265  lbu         $v0, 0x265($a0)
    ctx->pc = 0x2e3258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 613)));
label_2e325c:
    // 0x2e325c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e325cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e3260:
    // 0x2e3260: 0xa2020040  sb          $v0, 0x40($s0)
    ctx->pc = 0x2e3260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 2));
label_2e3264:
    // 0x2e3264: 0xe480012c  swc1        $f0, 0x12C($a0)
    ctx->pc = 0x2e3264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 300), bits); }
label_2e3268:
    // 0x2e3268: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e3268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e326c:
    // 0x2e326c: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2e326cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_2e3270:
    // 0x2e3270: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e3270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e3274:
    // 0x2e3274: 0xa0800265  sb          $zero, 0x265($a0)
    ctx->pc = 0x2e3274u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 613), (uint8_t)GPR_U32(ctx, 0));
label_2e3278:
    // 0x2e3278: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e3278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e327c:
    // 0x2e327c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2e327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_2e3280:
    // 0x2e3280: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e3280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e3284:
    // 0x2e3284: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e3284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2e3288:
    // 0x2e3288: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2e3288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_2e328c:
    // 0x2e328c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2e328cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e3290:
    // 0x2e3290: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x2e3290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
label_2e3294:
    // 0x2e3294: 0xc05959e  jal         func_165678
label_2e3298:
    if (ctx->pc == 0x2E3298u) {
        ctx->pc = 0x2E3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3294u;
        // 0x2e3298: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E329Cu;
        goto label_2e329c;
    }
    ctx->pc = 0x2E3294u;
    SET_GPR_U32(ctx, 31, 0x2E329Cu);
    ctx->pc = 0x2E3298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3294u;
    // 0x2e3298: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2E3294u, 0x2E329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E329Cu;
label_2e329c:
    // 0x2e329c: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
label_2e32a0:
    if (ctx->pc == 0x2E32A0u) {
        ctx->pc = 0x2E32A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E329Cu;
        // 0x2e32a0: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E32A4u;
        goto label_2e32a4;
    }
    ctx->pc = 0x2E329Cu;
    {
        const bool branch_taken_0x2e329c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e329c) {
            ctx->pc = 0x2E32A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E329Cu;
            // 0x2e32a0: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E32A4u;
            goto label_2e32a4;
        }
    }
    ctx->pc = 0x2E32A4u;
label_2e32a4:
    // 0x2e32a4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2e32a8:
    if (ctx->pc == 0x2E32A8u) {
        ctx->pc = 0x2E32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32A4u;
        // 0x2e32a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E32ACu;
        goto label_2e32ac;
    }
    ctx->pc = 0x2E32A4u;
    {
        const bool branch_taken_0x2e32a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e32a4) {
            ctx->pc = 0x2E32A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E32A4u;
            // 0x2e32a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E32E0u;
            goto label_2e32e0;
        }
    }
    ctx->pc = 0x2E32ACu;
label_2e32ac:
    // 0x2e32ac: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2e32acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e32b0:
    // 0x2e32b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e32b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e32b4:
    // 0x2e32b4: 0x0  nop
    ctx->pc = 0x2e32b4u;
    // NOP
label_2e32b8:
    // 0x2e32b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e32b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e32bc:
    // 0x2e32bc: 0x0  nop
    ctx->pc = 0x2e32bcu;
    // NOP
label_2e32c0:
    // 0x2e32c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2e32c4:
    if (ctx->pc == 0x2E32C4u) {
        ctx->pc = 0x2E32C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32C0u;
        // 0x2e32c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E32C8u;
        goto label_2e32c8;
    }
    ctx->pc = 0x2E32C0u;
    {
        const bool branch_taken_0x2e32c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E32C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32C0u;
        // 0x2e32c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32c0) {
            ctx->pc = 0x2E32DCu;
            goto label_2e32dc;
        }
    }
    ctx->pc = 0x2E32C8u;
label_2e32c8:
    // 0x2e32c8: 0xc08750a  jal         func_21D428
label_2e32cc:
    if (ctx->pc == 0x2E32CCu) {
        ctx->pc = 0x2E32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32C8u;
        // 0x2e32cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E32D0u;
        goto label_2e32d0;
    }
    ctx->pc = 0x2E32C8u;
    SET_GPR_U32(ctx, 31, 0x2E32D0u);
    ctx->pc = 0x2E32CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E32C8u;
    // 0x2e32cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2E32C8u, 0x2E32D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E32D0u;
label_2e32d0:
    // 0x2e32d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e32d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e32d4:
    // 0x2e32d4: 0xc0a57ca  jal         func_295F28
label_2e32d8:
    if (ctx->pc == 0x2E32D8u) {
        ctx->pc = 0x2E32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32D4u;
        // 0x2e32d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E32DCu;
        goto label_2e32dc;
    }
    ctx->pc = 0x2E32D4u;
    SET_GPR_U32(ctx, 31, 0x2E32DCu);
    ctx->pc = 0x2E32D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E32D4u;
    // 0x2e32d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x2E32D4u, 0x2E32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E32DCu;
label_2e32dc:
    // 0x2e32dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e32dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e32e0:
    // 0x2e32e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e32e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e32e4:
    // 0x2e32e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e32e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e32e8:
    // 0x2e32e8: 0x3e00008  jr          $ra
label_2e32ec:
    if (ctx->pc == 0x2E32ECu) {
        ctx->pc = 0x2E32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32E8u;
        // 0x2e32ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E32F0u;
        goto label_fallthrough_0x2e32e8;
    }
    ctx->pc = 0x2E32E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32E8u;
        // 0x2e32ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E32E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e32e8:
    ctx->pc = 0x2E32F0u;
}
