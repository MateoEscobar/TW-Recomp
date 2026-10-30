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

// Function: sub_002F3220
// Address: 0x2f3220 - 0x2f3390
void sub_002F3220_0x2f3220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3220_0x2f3220");
#endif

    switch (ctx->pc) {
        case 0x2f3220u: goto label_2f3220;
        case 0x2f3224u: goto label_2f3224;
        case 0x2f3228u: goto label_2f3228;
        case 0x2f322cu: goto label_2f322c;
        case 0x2f3230u: goto label_2f3230;
        case 0x2f3234u: goto label_2f3234;
        case 0x2f3238u: goto label_2f3238;
        case 0x2f323cu: goto label_2f323c;
        case 0x2f3240u: goto label_2f3240;
        case 0x2f3244u: goto label_2f3244;
        case 0x2f3248u: goto label_2f3248;
        case 0x2f324cu: goto label_2f324c;
        case 0x2f3250u: goto label_2f3250;
        case 0x2f3254u: goto label_2f3254;
        case 0x2f3258u: goto label_2f3258;
        case 0x2f325cu: goto label_2f325c;
        case 0x2f3260u: goto label_2f3260;
        case 0x2f3264u: goto label_2f3264;
        case 0x2f3268u: goto label_2f3268;
        case 0x2f326cu: goto label_2f326c;
        case 0x2f3270u: goto label_2f3270;
        case 0x2f3274u: goto label_2f3274;
        case 0x2f3278u: goto label_2f3278;
        case 0x2f327cu: goto label_2f327c;
        case 0x2f3280u: goto label_2f3280;
        case 0x2f3284u: goto label_2f3284;
        case 0x2f3288u: goto label_2f3288;
        case 0x2f328cu: goto label_2f328c;
        case 0x2f3290u: goto label_2f3290;
        case 0x2f3294u: goto label_2f3294;
        case 0x2f3298u: goto label_2f3298;
        case 0x2f329cu: goto label_2f329c;
        case 0x2f32a0u: goto label_2f32a0;
        case 0x2f32a4u: goto label_2f32a4;
        case 0x2f32a8u: goto label_2f32a8;
        case 0x2f32acu: goto label_2f32ac;
        case 0x2f32b0u: goto label_2f32b0;
        case 0x2f32b4u: goto label_2f32b4;
        case 0x2f32b8u: goto label_2f32b8;
        case 0x2f32bcu: goto label_2f32bc;
        case 0x2f32c0u: goto label_2f32c0;
        case 0x2f32c4u: goto label_2f32c4;
        case 0x2f32c8u: goto label_2f32c8;
        case 0x2f32ccu: goto label_2f32cc;
        case 0x2f32d0u: goto label_2f32d0;
        case 0x2f32d4u: goto label_2f32d4;
        case 0x2f32d8u: goto label_2f32d8;
        case 0x2f32dcu: goto label_2f32dc;
        case 0x2f32e0u: goto label_2f32e0;
        case 0x2f32e4u: goto label_2f32e4;
        case 0x2f32e8u: goto label_2f32e8;
        case 0x2f32ecu: goto label_2f32ec;
        case 0x2f32f0u: goto label_2f32f0;
        case 0x2f32f4u: goto label_2f32f4;
        case 0x2f32f8u: goto label_2f32f8;
        case 0x2f32fcu: goto label_2f32fc;
        case 0x2f3300u: goto label_2f3300;
        case 0x2f3304u: goto label_2f3304;
        case 0x2f3308u: goto label_2f3308;
        case 0x2f330cu: goto label_2f330c;
        case 0x2f3310u: goto label_2f3310;
        case 0x2f3314u: goto label_2f3314;
        case 0x2f3318u: goto label_2f3318;
        case 0x2f331cu: goto label_2f331c;
        case 0x2f3320u: goto label_2f3320;
        case 0x2f3324u: goto label_2f3324;
        case 0x2f3328u: goto label_2f3328;
        case 0x2f332cu: goto label_2f332c;
        case 0x2f3330u: goto label_2f3330;
        case 0x2f3334u: goto label_2f3334;
        case 0x2f3338u: goto label_2f3338;
        case 0x2f333cu: goto label_2f333c;
        case 0x2f3340u: goto label_2f3340;
        case 0x2f3344u: goto label_2f3344;
        case 0x2f3348u: goto label_2f3348;
        case 0x2f334cu: goto label_2f334c;
        case 0x2f3350u: goto label_2f3350;
        case 0x2f3354u: goto label_2f3354;
        case 0x2f3358u: goto label_2f3358;
        case 0x2f335cu: goto label_2f335c;
        case 0x2f3360u: goto label_2f3360;
        case 0x2f3364u: goto label_2f3364;
        case 0x2f3368u: goto label_2f3368;
        case 0x2f336cu: goto label_2f336c;
        case 0x2f3370u: goto label_2f3370;
        case 0x2f3374u: goto label_2f3374;
        case 0x2f3378u: goto label_2f3378;
        case 0x2f337cu: goto label_2f337c;
        case 0x2f3380u: goto label_2f3380;
        case 0x2f3384u: goto label_2f3384;
        case 0x2f3388u: goto label_2f3388;
        case 0x2f338cu: goto label_2f338c;
        default: break;
    }

    ctx->pc = 0x2f3220u;

label_2f3220:
    // 0x2f3220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f3220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2f3224:
    // 0x2f3224: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2f3224u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_2f3228:
    // 0x2f3228: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2f3228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2f322c:
    // 0x2f322c: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x2f322cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
label_2f3230:
    // 0x2f3230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f3230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f3234:
    // 0x2f3234: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2f3234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2f3238:
    // 0x2f3238: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f3238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f323c:
    // 0x2f323c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2f323cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2f3240:
    // 0x2f3240: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2f3240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2f3244:
    // 0x2f3244: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2f3244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2f3248:
    // 0x2f3248: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2f3248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2f324c:
    // 0x2f324c: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2f324cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2f3250:
    // 0x2f3250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f3250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f3254:
    // 0x2f3254: 0x8fb40060  lw          $s4, 0x60($sp)
    ctx->pc = 0x2f3254u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2f3258:
    // 0x2f3258: 0xc0bc4ea  jal         func_2F13A8
label_2f325c:
    if (ctx->pc == 0x2F325Cu) {
        ctx->pc = 0x2F325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3258u;
        // 0x2f325c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3260u;
        goto label_2f3260;
    }
    ctx->pc = 0x2F3258u;
    SET_GPR_U32(ctx, 31, 0x2F3260u);
    ctx->pc = 0x2F325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3258u;
    // 0x2f325c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F13A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F13A8u, 0x2F3258u, 0x2F3260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3260u;
label_2f3260:
    // 0x2f3260: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f3260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2f3264:
    // 0x2f3264: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2f3264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2f3268:
    // 0x2f3268: 0x24632670  addiu       $v1, $v1, 0x2670
    ctx->pc = 0x2f3268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9840));
label_2f326c:
    // 0x2f326c: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x2f326cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
label_2f3270:
    // 0x2f3270: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2f3270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2f3274:
    // 0x2f3274: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2f3278:
    if (ctx->pc == 0x2F3278u) {
        ctx->pc = 0x2F3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3274u;
        // 0x2f3278: 0xa2000055  sb          $zero, 0x55($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F327Cu;
        goto label_2f327c;
    }
    ctx->pc = 0x2F3274u;
    {
        const bool branch_taken_0x2f3274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3274u;
        // 0x2f3278: 0xa2000055  sb          $zero, 0x55($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3274) {
            ctx->pc = 0x2F32A8u;
            goto label_2f32a8;
        }
    }
    ctx->pc = 0x2F327Cu;
label_2f327c:
    // 0x2f327c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2f327cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2f3280:
    // 0x2f3280: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f3284:
    if (ctx->pc == 0x2F3284u) {
        ctx->pc = 0x2F3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3280u;
        // 0x2f3284: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3288u;
        goto label_2f3288;
    }
    ctx->pc = 0x2F3280u;
    {
        const bool branch_taken_0x2f3280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3280u;
        // 0x2f3284: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3280) {
            ctx->pc = 0x2F32A8u;
            goto label_2f32a8;
        }
    }
    ctx->pc = 0x2F3288u;
label_2f3288:
    // 0x2f3288: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f3288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f328c:
    // 0x2f328c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x2f328cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2f3290:
    // 0x2f3290: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f3290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f3294:
    // 0x2f3294: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2f3294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2f3298:
    // 0x2f3298: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2f3298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2f329c:
    // 0x2f329c: 0x40f809  jalr        $v0
label_2f32a0:
    if (ctx->pc == 0x2F32A0u) {
        ctx->pc = 0x2F32A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F329Cu;
        // 0x2f32a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F32A4u;
        goto label_2f32a4;
    }
    ctx->pc = 0x2F329Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F32A4u);
        ctx->pc = 0x2F32A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F329Cu;
        // 0x2f32a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F329Cu, 0x2F32A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F32A4u;
label_2f32a4:
    // 0x2f32a4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2f32a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_2f32a8:
    // 0x2f32a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f32ac:
    // 0x2f32ac: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_2f32b0:
    if (ctx->pc == 0x2F32B0u) {
        ctx->pc = 0x2F32B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32ACu;
        // 0x2f32b0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F32B4u;
        goto label_2f32b4;
    }
    ctx->pc = 0x2F32ACu;
    {
        const bool branch_taken_0x2f32ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32ACu;
        // 0x2f32b0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32ac) {
            ctx->pc = 0x2F32E8u;
            goto label_2f32e8;
        }
    }
    ctx->pc = 0x2F32B4u;
label_2f32b4:
    // 0x2f32b4: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2f32b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2f32b8:
    // 0x2f32b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f32bc:
    if (ctx->pc == 0x2F32BCu) {
        ctx->pc = 0x2F32BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32B8u;
        // 0x2f32bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F32C0u;
        goto label_2f32c0;
    }
    ctx->pc = 0x2F32B8u;
    {
        const bool branch_taken_0x2f32b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32B8u;
        // 0x2f32bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32b8) {
            ctx->pc = 0x2F32E8u;
            goto label_2f32e8;
        }
    }
    ctx->pc = 0x2F32C0u;
label_2f32c0:
    // 0x2f32c0: 0x92060054  lbu         $a2, 0x54($s0)
    ctx->pc = 0x2f32c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_2f32c4:
    // 0x2f32c4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2f32c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2f32c8:
    // 0x2f32c8: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x2f32c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2f32cc:
    // 0x2f32cc: 0x24c60256  addiu       $a2, $a2, 0x256
    ctx->pc = 0x2f32ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 598));
label_2f32d0:
    // 0x2f32d0: 0x248403c8  addiu       $a0, $a0, 0x3C8
    ctx->pc = 0x2f32d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 968));
label_2f32d4:
    // 0x2f32d4: 0xc042f0e  jal         func_10BC38
label_2f32d8:
    if (ctx->pc == 0x2F32D8u) {
        ctx->pc = 0x2F32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32D4u;
        // 0x2f32d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F32DCu;
        goto label_2f32dc;
    }
    ctx->pc = 0x2F32D4u;
    SET_GPR_U32(ctx, 31, 0x2F32DCu);
    ctx->pc = 0x2F32D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F32D4u;
    // 0x2f32d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2F32D4u, 0x2F32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F32DCu;
label_2f32dc:
    // 0x2f32dc: 0x92030054  lbu         $v1, 0x54($s0)
    ctx->pc = 0x2f32dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_2f32e0:
    // 0x2f32e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f32e4:
    // 0x2f32e4: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x2f32e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
label_2f32e8:
    // 0x2f32e8: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_2f32ec:
    if (ctx->pc == 0x2F32ECu) {
        ctx->pc = 0x2F32F0u;
        goto label_2f32f0;
    }
    ctx->pc = 0x2F32E8u;
    {
        const bool branch_taken_0x2f32e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f32e8) {
            ctx->pc = 0x2F3324u;
            goto label_2f3324;
        }
    }
    ctx->pc = 0x2F32F0u;
label_2f32f0:
    // 0x2f32f0: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x2f32f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2f32f4:
    // 0x2f32f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f32f8:
    if (ctx->pc == 0x2F32F8u) {
        ctx->pc = 0x2F32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32F4u;
        // 0x2f32f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F32FCu;
        goto label_2f32fc;
    }
    ctx->pc = 0x2F32F4u;
    {
        const bool branch_taken_0x2f32f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32F4u;
        // 0x2f32f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32f4) {
            ctx->pc = 0x2F3324u;
            goto label_2f3324;
        }
    }
    ctx->pc = 0x2F32FCu;
label_2f32fc:
    // 0x2f32fc: 0x92060054  lbu         $a2, 0x54($s0)
    ctx->pc = 0x2f32fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_2f3300:
    // 0x2f3300: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2f3300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2f3304:
    // 0x2f3304: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x2f3304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2f3308:
    // 0x2f3308: 0x24c60256  addiu       $a2, $a2, 0x256
    ctx->pc = 0x2f3308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 598));
label_2f330c:
    // 0x2f330c: 0x248403c8  addiu       $a0, $a0, 0x3C8
    ctx->pc = 0x2f330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 968));
label_2f3310:
    // 0x2f3310: 0xc042f0e  jal         func_10BC38
label_2f3314:
    if (ctx->pc == 0x2F3314u) {
        ctx->pc = 0x2F3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3310u;
        // 0x2f3314: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3318u;
        goto label_2f3318;
    }
    ctx->pc = 0x2F3310u;
    SET_GPR_U32(ctx, 31, 0x2F3318u);
    ctx->pc = 0x2F3314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3310u;
    // 0x2f3314: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2F3310u, 0x2F3318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3318u;
label_2f3318:
    // 0x2f3318: 0x92030054  lbu         $v1, 0x54($s0)
    ctx->pc = 0x2f3318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_2f331c:
    // 0x2f331c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f331cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f3320:
    // 0x2f3320: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x2f3320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
label_2f3324:
    // 0x2f3324: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_2f3328:
    if (ctx->pc == 0x2F3328u) {
        ctx->pc = 0x2F3328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3324u;
        // 0x2f3328: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F332Cu;
        goto label_2f332c;
    }
    ctx->pc = 0x2F3324u;
    {
        const bool branch_taken_0x2f3324 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3324u;
        // 0x2f3328: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3324) {
            ctx->pc = 0x2F3364u;
            goto label_2f3364;
        }
    }
    ctx->pc = 0x2F332Cu;
label_2f332c:
    // 0x2f332c: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x2f332cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_2f3330:
    // 0x2f3330: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2f3334:
    if (ctx->pc == 0x2F3334u) {
        ctx->pc = 0x2F3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3330u;
        // 0x2f3334: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3338u;
        goto label_2f3338;
    }
    ctx->pc = 0x2F3330u;
    {
        const bool branch_taken_0x2f3330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3330u;
        // 0x2f3334: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3330) {
            ctx->pc = 0x2F3364u;
            goto label_2f3364;
        }
    }
    ctx->pc = 0x2F3338u;
label_2f3338:
    // 0x2f3338: 0x92060054  lbu         $a2, 0x54($s0)
    ctx->pc = 0x2f3338u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_2f333c:
    // 0x2f333c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2f333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2f3340:
    // 0x2f3340: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x2f3340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2f3344:
    // 0x2f3344: 0x24c60256  addiu       $a2, $a2, 0x256
    ctx->pc = 0x2f3344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 598));
label_2f3348:
    // 0x2f3348: 0x248403c8  addiu       $a0, $a0, 0x3C8
    ctx->pc = 0x2f3348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 968));
label_2f334c:
    // 0x2f334c: 0xc042f0e  jal         func_10BC38
label_2f3350:
    if (ctx->pc == 0x2F3350u) {
        ctx->pc = 0x2F3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F334Cu;
        // 0x2f3350: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3354u;
        goto label_2f3354;
    }
    ctx->pc = 0x2F334Cu;
    SET_GPR_U32(ctx, 31, 0x2F3354u);
    ctx->pc = 0x2F3350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F334Cu;
    // 0x2f3350: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2F334Cu, 0x2F3354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3354u;
label_2f3354:
    // 0x2f3354: 0x92030054  lbu         $v1, 0x54($s0)
    ctx->pc = 0x2f3354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_2f3358:
    // 0x2f3358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f3358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f335c:
    // 0x2f335c: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x2f335cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
label_2f3360:
    // 0x2f3360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f3360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3364:
    // 0x2f3364: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f3364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3368:
    // 0x2f3368: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2f3368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_2f336c:
    // 0x2f336c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2f336cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3370:
    // 0x2f3370: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2f3370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f3374:
    // 0x2f3374: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f3374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3378:
    // 0x2f3378: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2f3378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f337c:
    // 0x2f337c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2f337cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3380:
    // 0x2f3380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f3380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3384:
    // 0x2f3384: 0x3e00008  jr          $ra
label_2f3388:
    if (ctx->pc == 0x2F3388u) {
        ctx->pc = 0x2F3388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3384u;
        // 0x2f3388: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F338Cu;
        goto label_2f338c;
    }
    ctx->pc = 0x2F3384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3384u;
        // 0x2f3388: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F338Cu;
label_2f338c:
    // 0x2f338c: 0x0  nop
    ctx->pc = 0x2f338cu;
    // NOP
    ctx->pc = 0x2f3390u;
}
