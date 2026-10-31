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

// Function: sub_0027A1E8
// Address: 0x27a1e8 - 0x27a2f8
void sub_0027A1E8_0x27a1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A1E8_0x27a1e8");
#endif

    switch (ctx->pc) {
        case 0x27a1e8u: goto label_27a1e8;
        case 0x27a1ecu: goto label_27a1ec;
        case 0x27a1f0u: goto label_27a1f0;
        case 0x27a1f4u: goto label_27a1f4;
        case 0x27a1f8u: goto label_27a1f8;
        case 0x27a1fcu: goto label_27a1fc;
        case 0x27a200u: goto label_27a200;
        case 0x27a204u: goto label_27a204;
        case 0x27a208u: goto label_27a208;
        case 0x27a20cu: goto label_27a20c;
        case 0x27a210u: goto label_27a210;
        case 0x27a214u: goto label_27a214;
        case 0x27a218u: goto label_27a218;
        case 0x27a21cu: goto label_27a21c;
        case 0x27a220u: goto label_27a220;
        case 0x27a224u: goto label_27a224;
        case 0x27a228u: goto label_27a228;
        case 0x27a22cu: goto label_27a22c;
        case 0x27a230u: goto label_27a230;
        case 0x27a234u: goto label_27a234;
        case 0x27a238u: goto label_27a238;
        case 0x27a23cu: goto label_27a23c;
        case 0x27a240u: goto label_27a240;
        case 0x27a244u: goto label_27a244;
        case 0x27a248u: goto label_27a248;
        case 0x27a24cu: goto label_27a24c;
        case 0x27a250u: goto label_27a250;
        case 0x27a254u: goto label_27a254;
        case 0x27a258u: goto label_27a258;
        case 0x27a25cu: goto label_27a25c;
        case 0x27a260u: goto label_27a260;
        case 0x27a264u: goto label_27a264;
        case 0x27a268u: goto label_27a268;
        case 0x27a26cu: goto label_27a26c;
        case 0x27a270u: goto label_27a270;
        case 0x27a274u: goto label_27a274;
        case 0x27a278u: goto label_27a278;
        case 0x27a27cu: goto label_27a27c;
        case 0x27a280u: goto label_27a280;
        case 0x27a284u: goto label_27a284;
        case 0x27a288u: goto label_27a288;
        case 0x27a28cu: goto label_27a28c;
        case 0x27a290u: goto label_27a290;
        case 0x27a294u: goto label_27a294;
        case 0x27a298u: goto label_27a298;
        case 0x27a29cu: goto label_27a29c;
        case 0x27a2a0u: goto label_27a2a0;
        case 0x27a2a4u: goto label_27a2a4;
        case 0x27a2a8u: goto label_27a2a8;
        case 0x27a2acu: goto label_27a2ac;
        case 0x27a2b0u: goto label_27a2b0;
        case 0x27a2b4u: goto label_27a2b4;
        case 0x27a2b8u: goto label_27a2b8;
        case 0x27a2bcu: goto label_27a2bc;
        case 0x27a2c0u: goto label_27a2c0;
        case 0x27a2c4u: goto label_27a2c4;
        case 0x27a2c8u: goto label_27a2c8;
        case 0x27a2ccu: goto label_27a2cc;
        case 0x27a2d0u: goto label_27a2d0;
        case 0x27a2d4u: goto label_27a2d4;
        case 0x27a2d8u: goto label_27a2d8;
        case 0x27a2dcu: goto label_27a2dc;
        case 0x27a2e0u: goto label_27a2e0;
        case 0x27a2e4u: goto label_27a2e4;
        case 0x27a2e8u: goto label_27a2e8;
        case 0x27a2ecu: goto label_27a2ec;
        case 0x27a2f0u: goto label_27a2f0;
        case 0x27a2f4u: goto label_27a2f4;
        default: break;
    }

    ctx->pc = 0x27a1e8u;

label_27a1e8:
    // 0x27a1e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27a1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_27a1ec:
    // 0x27a1ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27a1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_27a1f0:
    // 0x27a1f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27a1f4:
    // 0x27a1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27a1f8:
    // 0x27a1f8: 0xc08a61a  jal         func_229868
label_27a1fc:
    if (ctx->pc == 0x27A1FCu) {
        ctx->pc = 0x27A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1F8u;
        // 0x27a1fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A200u;
        goto label_27a200;
    }
    ctx->pc = 0x27A1F8u;
    SET_GPR_U32(ctx, 31, 0x27A200u);
    ctx->pc = 0x27A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A1F8u;
    // 0x27a1fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x27A1F8u, 0x27A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A200u;
label_27a200:
    // 0x27a200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a204:
    // 0x27a204: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_27a208:
    if (ctx->pc == 0x27A208u) {
        ctx->pc = 0x27A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A204u;
        // 0x27a208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A20Cu;
        goto label_27a20c;
    }
    ctx->pc = 0x27A204u;
    {
        const bool branch_taken_0x27a204 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A204u;
        // 0x27a208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a204) {
            ctx->pc = 0x27A2E0u;
            goto label_27a2e0;
        }
    }
    ctx->pc = 0x27A20Cu;
label_27a20c:
    // 0x27a20c: 0x52000035  beql        $s0, $zero, . + 4 + (0x35 << 2)
label_27a210:
    if (ctx->pc == 0x27A210u) {
        ctx->pc = 0x27A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A20Cu;
        // 0x27a210: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A214u;
        goto label_27a214;
    }
    ctx->pc = 0x27A20Cu;
    {
        const bool branch_taken_0x27a20c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a20c) {
            ctx->pc = 0x27A210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A20Cu;
            // 0x27a210: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A2E4u;
            goto label_27a2e4;
        }
    }
    ctx->pc = 0x27A214u;
label_27a214:
    // 0x27a214: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27a214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27a218:
    // 0x27a218: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27a218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_27a21c:
    // 0x27a21c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x27a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_27a220:
    // 0x27a220: 0x40f809  jalr        $v0
label_27a224:
    if (ctx->pc == 0x27A224u) {
        ctx->pc = 0x27A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A220u;
        // 0x27a224: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A228u;
        goto label_27a228;
    }
    ctx->pc = 0x27A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27A228u);
        ctx->pc = 0x27A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A220u;
        // 0x27a224: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A220u, 0x27A228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A228u;
label_27a228:
    // 0x27a228: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_27a22c:
    if (ctx->pc == 0x27A22Cu) {
        ctx->pc = 0x27A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A228u;
        // 0x27a22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A230u;
        goto label_27a230;
    }
    ctx->pc = 0x27A228u;
    {
        const bool branch_taken_0x27a228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A228u;
        // 0x27a22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a228) {
            ctx->pc = 0x27A2DCu;
            goto label_27a2dc;
        }
    }
    ctx->pc = 0x27A230u;
label_27a230:
    // 0x27a230: 0xc09e42a  jal         func_2790A8
label_27a234:
    if (ctx->pc == 0x27A234u) {
        ctx->pc = 0x27A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A230u;
        // 0x27a234: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A238u;
        goto label_27a238;
    }
    ctx->pc = 0x27A230u;
    SET_GPR_U32(ctx, 31, 0x27A238u);
    ctx->pc = 0x27A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A230u;
    // 0x27a234: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2790A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2790A8u, 0x27A230u, 0x27A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A238u;
label_27a238:
    // 0x27a238: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27a238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27a23c:
    // 0x27a23c: 0xc441096c  lwc1        $f1, 0x96C($v0)
    ctx->pc = 0x27a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a240:
    // 0x27a240: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27a240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a244:
    // 0x27a244: 0x0  nop
    ctx->pc = 0x27a244u;
    // NOP
label_27a248:
    // 0x27a248: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_27a24c:
    if (ctx->pc == 0x27A24Cu) {
        ctx->pc = 0x27A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A248u;
        // 0x27a24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A250u;
        goto label_27a250;
    }
    ctx->pc = 0x27A248u;
    {
        const bool branch_taken_0x27a248 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A248u;
        // 0x27a24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a248) {
            ctx->pc = 0x27A2E0u;
            goto label_27a2e0;
        }
    }
    ctx->pc = 0x27A250u;
label_27a250:
    // 0x27a250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a254:
    // 0x27a254: 0xc08a684  jal         func_229A10
label_27a258:
    if (ctx->pc == 0x27A258u) {
        ctx->pc = 0x27A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A254u;
        // 0x27a258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A25Cu;
        goto label_27a25c;
    }
    ctx->pc = 0x27A254u;
    SET_GPR_U32(ctx, 31, 0x27A25Cu);
    ctx->pc = 0x27A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A254u;
    // 0x27a258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x27A254u, 0x27A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A25Cu;
label_27a25c:
    // 0x27a25c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27a260:
    // 0x27a260: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x27a260u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_27a264:
    // 0x27a264: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x27a264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a268:
    // 0x27a268: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27a268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a26c:
    // 0x27a26c: 0x0  nop
    ctx->pc = 0x27a26cu;
    // NOP
label_27a270:
    // 0x27a270: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_27a274:
    if (ctx->pc == 0x27A274u) {
        ctx->pc = 0x27A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A270u;
        // 0x27a274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A278u;
        goto label_27a278;
    }
    ctx->pc = 0x27A270u;
    {
        const bool branch_taken_0x27a270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A270u;
        // 0x27a274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a270) {
            ctx->pc = 0x27A2E0u;
            goto label_27a2e0;
        }
    }
    ctx->pc = 0x27A278u;
label_27a278:
    // 0x27a278: 0xc0e57ce  jal         func_395F38
label_27a27c:
    if (ctx->pc == 0x27A27Cu) {
        ctx->pc = 0x27A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A278u;
        // 0x27a27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A280u;
        goto label_27a280;
    }
    ctx->pc = 0x27A278u;
    SET_GPR_U32(ctx, 31, 0x27A280u);
    ctx->pc = 0x27A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A278u;
    // 0x27a27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x27A278u, 0x27A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A280u;
label_27a280:
    // 0x27a280: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_27a284:
    if (ctx->pc == 0x27A284u) {
        ctx->pc = 0x27A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A280u;
        // 0x27a284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A288u;
        goto label_27a288;
    }
    ctx->pc = 0x27A280u;
    {
        const bool branch_taken_0x27a280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A280u;
        // 0x27a284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a280) {
            ctx->pc = 0x27A2DCu;
            goto label_27a2dc;
        }
    }
    ctx->pc = 0x27A288u;
label_27a288:
    // 0x27a288: 0xc0e59c4  jal         func_396710
label_27a28c:
    if (ctx->pc == 0x27A28Cu) {
        ctx->pc = 0x27A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A288u;
        // 0x27a28c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A290u;
        goto label_27a290;
    }
    ctx->pc = 0x27A288u;
    SET_GPR_U32(ctx, 31, 0x27A290u);
    ctx->pc = 0x27A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A288u;
    // 0x27a28c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396710u, 0x27A288u, 0x27A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A290u;
label_27a290:
    // 0x27a290: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_27a294:
    if (ctx->pc == 0x27A294u) {
        ctx->pc = 0x27A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A290u;
        // 0x27a294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A298u;
        goto label_27a298;
    }
    ctx->pc = 0x27A290u;
    {
        const bool branch_taken_0x27a290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A290u;
        // 0x27a294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a290) {
            ctx->pc = 0x27A2E0u;
            goto label_27a2e0;
        }
    }
    ctx->pc = 0x27A298u;
label_27a298:
    // 0x27a298: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27a298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27a29c:
    // 0x27a29c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27a29cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_27a2a0:
    // 0x27a2a0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x27a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_27a2a4:
    // 0x27a2a4: 0x40f809  jalr        $v0
label_27a2a8:
    if (ctx->pc == 0x27A2A8u) {
        ctx->pc = 0x27A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2A4u;
        // 0x27a2a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A2ACu;
        goto label_27a2ac;
    }
    ctx->pc = 0x27A2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27A2ACu);
        ctx->pc = 0x27A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2A4u;
        // 0x27a2a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A2A4u, 0x27A2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A2ACu;
label_27a2ac:
    // 0x27a2ac: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_27a2b0:
    if (ctx->pc == 0x27A2B0u) {
        ctx->pc = 0x27A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2ACu;
        // 0x27a2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A2B4u;
        goto label_27a2b4;
    }
    ctx->pc = 0x27A2ACu;
    {
        const bool branch_taken_0x27a2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a2ac) {
            ctx->pc = 0x27A2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A2ACu;
            // 0x27a2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A2E0u;
            goto label_27a2e0;
        }
    }
    ctx->pc = 0x27A2B4u;
label_27a2b4:
    // 0x27a2b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27a2b8:
    // 0x27a2b8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27a2b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_27a2bc:
    // 0x27a2bc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x27a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_27a2c0:
    // 0x27a2c0: 0x40f809  jalr        $v0
label_27a2c4:
    if (ctx->pc == 0x27A2C4u) {
        ctx->pc = 0x27A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2C0u;
        // 0x27a2c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A2C8u;
        goto label_27a2c8;
    }
    ctx->pc = 0x27A2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27A2C8u);
        ctx->pc = 0x27A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2C0u;
        // 0x27a2c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A2C0u, 0x27A2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A2C8u;
label_27a2c8:
    // 0x27a2c8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x27a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_27a2cc:
    // 0x27a2cc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x27a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_27a2d0:
    // 0x27a2d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x27a2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_27a2d4:
    // 0x27a2d4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_27a2d8:
    if (ctx->pc == 0x27A2D8u) {
        ctx->pc = 0x27A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2D4u;
        // 0x27a2d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A2DCu;
        goto label_27a2dc;
    }
    ctx->pc = 0x27A2D4u;
    {
        const bool branch_taken_0x27a2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2D4u;
        // 0x27a2d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2d4) {
            ctx->pc = 0x27A2E0u;
            goto label_27a2e0;
        }
    }
    ctx->pc = 0x27A2DCu;
label_27a2dc:
    // 0x27a2dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a2e0:
    // 0x27a2e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27a2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27a2e4:
    // 0x27a2e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27a2e8:
    // 0x27a2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27a2ec:
    // 0x27a2ec: 0x3e00008  jr          $ra
label_27a2f0:
    if (ctx->pc == 0x27A2F0u) {
        ctx->pc = 0x27A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2ECu;
        // 0x27a2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A2F4u;
        goto label_27a2f4;
    }
    ctx->pc = 0x27A2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2ECu;
        // 0x27a2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A2F4u;
label_27a2f4:
    // 0x27a2f4: 0x0  nop
    ctx->pc = 0x27a2f4u;
    // NOP
    ctx->pc = 0x27a2f8u;
}
