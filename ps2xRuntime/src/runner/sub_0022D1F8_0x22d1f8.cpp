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

// Function: sub_0022D1F8
// Address: 0x22d1f8 - 0x22d2d8
void sub_0022D1F8_0x22d1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D1F8_0x22d1f8");
#endif

    switch (ctx->pc) {
        case 0x22d1f8u: goto label_22d1f8;
        case 0x22d1fcu: goto label_22d1fc;
        case 0x22d200u: goto label_22d200;
        case 0x22d204u: goto label_22d204;
        case 0x22d208u: goto label_22d208;
        case 0x22d20cu: goto label_22d20c;
        case 0x22d210u: goto label_22d210;
        case 0x22d214u: goto label_22d214;
        case 0x22d218u: goto label_22d218;
        case 0x22d21cu: goto label_22d21c;
        case 0x22d220u: goto label_22d220;
        case 0x22d224u: goto label_22d224;
        case 0x22d228u: goto label_22d228;
        case 0x22d22cu: goto label_22d22c;
        case 0x22d230u: goto label_22d230;
        case 0x22d234u: goto label_22d234;
        case 0x22d238u: goto label_22d238;
        case 0x22d23cu: goto label_22d23c;
        case 0x22d240u: goto label_22d240;
        case 0x22d244u: goto label_22d244;
        case 0x22d248u: goto label_22d248;
        case 0x22d24cu: goto label_22d24c;
        case 0x22d250u: goto label_22d250;
        case 0x22d254u: goto label_22d254;
        case 0x22d258u: goto label_22d258;
        case 0x22d25cu: goto label_22d25c;
        case 0x22d260u: goto label_22d260;
        case 0x22d264u: goto label_22d264;
        case 0x22d268u: goto label_22d268;
        case 0x22d26cu: goto label_22d26c;
        case 0x22d270u: goto label_22d270;
        case 0x22d274u: goto label_22d274;
        case 0x22d278u: goto label_22d278;
        case 0x22d27cu: goto label_22d27c;
        case 0x22d280u: goto label_22d280;
        case 0x22d284u: goto label_22d284;
        case 0x22d288u: goto label_22d288;
        case 0x22d28cu: goto label_22d28c;
        case 0x22d290u: goto label_22d290;
        case 0x22d294u: goto label_22d294;
        case 0x22d298u: goto label_22d298;
        case 0x22d29cu: goto label_22d29c;
        case 0x22d2a0u: goto label_22d2a0;
        case 0x22d2a4u: goto label_22d2a4;
        case 0x22d2a8u: goto label_22d2a8;
        case 0x22d2acu: goto label_22d2ac;
        case 0x22d2b0u: goto label_22d2b0;
        case 0x22d2b4u: goto label_22d2b4;
        case 0x22d2b8u: goto label_22d2b8;
        case 0x22d2bcu: goto label_22d2bc;
        case 0x22d2c0u: goto label_22d2c0;
        case 0x22d2c4u: goto label_22d2c4;
        case 0x22d2c8u: goto label_22d2c8;
        case 0x22d2ccu: goto label_22d2cc;
        case 0x22d2d0u: goto label_22d2d0;
        case 0x22d2d4u: goto label_22d2d4;
        default: break;
    }

    ctx->pc = 0x22d1f8u;

label_22d1f8:
    // 0x22d1f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22d1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22d1fc:
    // 0x22d1fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22d200:
    // 0x22d200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22d204:
    // 0x22d204: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22d204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22d208:
    // 0x22d208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22d20c:
    // 0x22d20c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22d20cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_22d210:
    // 0x22d210: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x22d210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
label_22d214:
    // 0x22d214: 0xc089988  jal         func_226620
label_22d218:
    if (ctx->pc == 0x22D218u) {
        ctx->pc = 0x22D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D214u;
        // 0x22d218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D21Cu;
        goto label_22d21c;
    }
    ctx->pc = 0x22D214u;
    SET_GPR_U32(ctx, 31, 0x22D21Cu);
    ctx->pc = 0x22D218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D214u;
    // 0x22d218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D214u, 0x22D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D21Cu;
label_22d21c:
    // 0x22d21c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22d21cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_22d220:
    // 0x22d220: 0x52e78  dsll        $a1, $a1, 25
    ctx->pc = 0x22d220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 25);
label_22d224:
    // 0x22d224: 0xc089988  jal         func_226620
label_22d228:
    if (ctx->pc == 0x22D228u) {
        ctx->pc = 0x22D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D224u;
        // 0x22d228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D22Cu;
        goto label_22d22c;
    }
    ctx->pc = 0x22D224u;
    SET_GPR_U32(ctx, 31, 0x22D22Cu);
    ctx->pc = 0x22D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D224u;
    // 0x22d228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D224u, 0x22D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D22Cu;
label_22d22c:
    // 0x22d22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d230:
    // 0x22d230: 0xc089974  jal         func_2265D0
label_22d234:
    if (ctx->pc == 0x22D234u) {
        ctx->pc = 0x22D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D230u;
        // 0x22d234: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D238u;
        goto label_22d238;
    }
    ctx->pc = 0x22D230u;
    SET_GPR_U32(ctx, 31, 0x22D238u);
    ctx->pc = 0x22D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D230u;
    // 0x22d234: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22D230u, 0x22D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D238u;
label_22d238:
    // 0x22d238: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x22d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_22d23c:
    // 0x22d23c: 0xc089974  jal         func_2265D0
label_22d240:
    if (ctx->pc == 0x22D240u) {
        ctx->pc = 0x22D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D23Cu;
        // 0x22d240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D244u;
        goto label_22d244;
    }
    ctx->pc = 0x22D23Cu;
    SET_GPR_U32(ctx, 31, 0x22D244u);
    ctx->pc = 0x22D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D23Cu;
    // 0x22d240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22D23Cu, 0x22D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D244u;
label_22d244:
    // 0x22d244: 0xc0874fa  jal         func_21D3E8
label_22d248:
    if (ctx->pc == 0x22D248u) {
        ctx->pc = 0x22D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D244u;
        // 0x22d248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D24Cu;
        goto label_22d24c;
    }
    ctx->pc = 0x22D244u;
    SET_GPR_U32(ctx, 31, 0x22D24Cu);
    ctx->pc = 0x22D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D244u;
    // 0x22d248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22D244u, 0x22D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D24Cu;
label_22d24c:
    // 0x22d24c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d250:
    // 0x22d250: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x22d250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
label_22d254:
    // 0x22d254: 0xc0874fa  jal         func_21D3E8
label_22d258:
    if (ctx->pc == 0x22D258u) {
        ctx->pc = 0x22D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D254u;
        // 0x22d258: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D25Cu;
        goto label_22d25c;
    }
    ctx->pc = 0x22D254u;
    SET_GPR_U32(ctx, 31, 0x22D25Cu);
    ctx->pc = 0x22D258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D254u;
    // 0x22d258: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22D254u, 0x22D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D25Cu;
label_22d25c:
    // 0x22d25c: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x22d25cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
label_22d260:
    // 0x22d260: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x22d260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
label_22d264:
    // 0x22d264: 0x822401b0  lb          $a0, 0x1B0($s1)
    ctx->pc = 0x22d264u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_22d268:
    // 0x22d268: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x22d268u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_22d26c:
    // 0x22d26c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_22d270:
    if (ctx->pc == 0x22D270u) {
        ctx->pc = 0x22D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D26Cu;
        // 0x22d270: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D274u;
        goto label_22d274;
    }
    ctx->pc = 0x22D26Cu;
    {
        const bool branch_taken_0x22d26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d26c) {
            ctx->pc = 0x22D270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D26Cu;
            // 0x22d270: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D2C4u;
            goto label_22d2c4;
        }
    }
    ctx->pc = 0x22D274u;
label_22d274:
    // 0x22d274: 0xc047e72  jal         func_11F9C8
label_22d278:
    if (ctx->pc == 0x22D278u) {
        ctx->pc = 0x22D27Cu;
        goto label_22d27c;
    }
    ctx->pc = 0x22D274u;
    SET_GPR_U32(ctx, 31, 0x22D27Cu);
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x22D274u, 0x22D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D27Cu;
label_22d27c:
    // 0x22d27c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_22d280:
    if (ctx->pc == 0x22D280u) {
        ctx->pc = 0x22D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D27Cu;
        // 0x22d280: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D284u;
        goto label_22d284;
    }
    ctx->pc = 0x22D27Cu;
    {
        const bool branch_taken_0x22d27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D27Cu;
        // 0x22d280: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d27c) {
            ctx->pc = 0x22D2C4u;
            goto label_22d2c4;
        }
    }
    ctx->pc = 0x22D284u;
label_22d284:
    // 0x22d284: 0xc047e72  jal         func_11F9C8
label_22d288:
    if (ctx->pc == 0x22D288u) {
        ctx->pc = 0x22D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D284u;
        // 0x22d288: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D28Cu;
        goto label_22d28c;
    }
    ctx->pc = 0x22D284u;
    SET_GPR_U32(ctx, 31, 0x22D28Cu);
    ctx->pc = 0x22D288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D284u;
    // 0x22d288: 0x822401b0  lb          $a0, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x22D284u, 0x22D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D28Cu;
label_22d28c:
    // 0x22d28c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22d290:
    // 0x22d290: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x22d290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_22d294:
    // 0x22d294: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x22d294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_22d298:
    // 0x22d298: 0xa0f809  jalr        $a1
label_22d29c:
    if (ctx->pc == 0x22D29Cu) {
        ctx->pc = 0x22D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D298u;
        // 0x22d29c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2A0u;
        goto label_22d2a0;
    }
    ctx->pc = 0x22D298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x22D2A0u);
        ctx->pc = 0x22D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D298u;
        // 0x22d29c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D298u, 0x22D2A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D2A0u;
label_22d2a0:
    // 0x22d2a0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22d2a4:
    // 0x22d2a4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_22d2a8:
    if (ctx->pc == 0x22D2A8u) {
        ctx->pc = 0x22D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2A4u;
        // 0x22d2a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2ACu;
        goto label_22d2ac;
    }
    ctx->pc = 0x22D2A4u;
    {
        const bool branch_taken_0x22d2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2A4u;
        // 0x22d2a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2a4) {
            ctx->pc = 0x22D2C4u;
            goto label_22d2c4;
        }
    }
    ctx->pc = 0x22D2ACu;
label_22d2ac:
    // 0x22d2ac: 0x822401b0  lb          $a0, 0x1B0($s1)
    ctx->pc = 0x22d2acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_22d2b0:
    // 0x22d2b0: 0xc047f9a  jal         func_11FE68
label_22d2b4:
    if (ctx->pc == 0x22D2B4u) {
        ctx->pc = 0x22D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2B0u;
        // 0x22d2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2B8u;
        goto label_22d2b8;
    }
    ctx->pc = 0x22D2B0u;
    SET_GPR_U32(ctx, 31, 0x22D2B8u);
    ctx->pc = 0x22D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2B0u;
    // 0x22d2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE68u, 0x22D2B0u, 0x22D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2B8u;
label_22d2b8:
    // 0x22d2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d2bc:
    // 0x22d2bc: 0xac430258  sw          $v1, 0x258($v0)
    ctx->pc = 0x22d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 600), GPR_U32(ctx, 3));
label_22d2c0:
    // 0x22d2c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22d2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d2c4:
    // 0x22d2c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d2c8:
    // 0x22d2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d2cc:
    // 0x22d2cc: 0x3e00008  jr          $ra
label_22d2d0:
    if (ctx->pc == 0x22D2D0u) {
        ctx->pc = 0x22D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2CCu;
        // 0x22d2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2D4u;
        goto label_22d2d4;
    }
    ctx->pc = 0x22D2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2CCu;
        // 0x22d2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D2D4u;
label_22d2d4:
    // 0x22d2d4: 0x0  nop
    ctx->pc = 0x22d2d4u;
    // NOP
    ctx->pc = 0x22d2d8u;
}
