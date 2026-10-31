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

// Function: sub_001FC200
// Address: 0x1fc200 - 0x1fc2f8
void sub_001FC200_0x1fc200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC200_0x1fc200");
#endif

    switch (ctx->pc) {
        case 0x1fc200u: goto label_1fc200;
        case 0x1fc204u: goto label_1fc204;
        case 0x1fc208u: goto label_1fc208;
        case 0x1fc20cu: goto label_1fc20c;
        case 0x1fc210u: goto label_1fc210;
        case 0x1fc214u: goto label_1fc214;
        case 0x1fc218u: goto label_1fc218;
        case 0x1fc21cu: goto label_1fc21c;
        case 0x1fc220u: goto label_1fc220;
        case 0x1fc224u: goto label_1fc224;
        case 0x1fc228u: goto label_1fc228;
        case 0x1fc22cu: goto label_1fc22c;
        case 0x1fc230u: goto label_1fc230;
        case 0x1fc234u: goto label_1fc234;
        case 0x1fc238u: goto label_1fc238;
        case 0x1fc23cu: goto label_1fc23c;
        case 0x1fc240u: goto label_1fc240;
        case 0x1fc244u: goto label_1fc244;
        case 0x1fc248u: goto label_1fc248;
        case 0x1fc24cu: goto label_1fc24c;
        case 0x1fc250u: goto label_1fc250;
        case 0x1fc254u: goto label_1fc254;
        case 0x1fc258u: goto label_1fc258;
        case 0x1fc25cu: goto label_1fc25c;
        case 0x1fc260u: goto label_1fc260;
        case 0x1fc264u: goto label_1fc264;
        case 0x1fc268u: goto label_1fc268;
        case 0x1fc26cu: goto label_1fc26c;
        case 0x1fc270u: goto label_1fc270;
        case 0x1fc274u: goto label_1fc274;
        case 0x1fc278u: goto label_1fc278;
        case 0x1fc27cu: goto label_1fc27c;
        case 0x1fc280u: goto label_1fc280;
        case 0x1fc284u: goto label_1fc284;
        case 0x1fc288u: goto label_1fc288;
        case 0x1fc28cu: goto label_1fc28c;
        case 0x1fc290u: goto label_1fc290;
        case 0x1fc294u: goto label_1fc294;
        case 0x1fc298u: goto label_1fc298;
        case 0x1fc29cu: goto label_1fc29c;
        case 0x1fc2a0u: goto label_1fc2a0;
        case 0x1fc2a4u: goto label_1fc2a4;
        case 0x1fc2a8u: goto label_1fc2a8;
        case 0x1fc2acu: goto label_1fc2ac;
        case 0x1fc2b0u: goto label_1fc2b0;
        case 0x1fc2b4u: goto label_1fc2b4;
        case 0x1fc2b8u: goto label_1fc2b8;
        case 0x1fc2bcu: goto label_1fc2bc;
        case 0x1fc2c0u: goto label_1fc2c0;
        case 0x1fc2c4u: goto label_1fc2c4;
        case 0x1fc2c8u: goto label_1fc2c8;
        case 0x1fc2ccu: goto label_1fc2cc;
        case 0x1fc2d0u: goto label_1fc2d0;
        case 0x1fc2d4u: goto label_1fc2d4;
        case 0x1fc2d8u: goto label_1fc2d8;
        case 0x1fc2dcu: goto label_1fc2dc;
        case 0x1fc2e0u: goto label_1fc2e0;
        case 0x1fc2e4u: goto label_1fc2e4;
        case 0x1fc2e8u: goto label_1fc2e8;
        case 0x1fc2ecu: goto label_1fc2ec;
        case 0x1fc2f0u: goto label_1fc2f0;
        case 0x1fc2f4u: goto label_1fc2f4;
        default: break;
    }

    ctx->pc = 0x1fc200u;

label_1fc200:
    // 0x1fc200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fc204:
    // 0x1fc204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fc208:
    // 0x1fc208: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fc208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1fc20c:
    // 0x1fc20c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc210:
    // 0x1fc210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fc214:
    // 0x1fc214: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fc214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fc218:
    // 0x1fc218: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1fc218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1fc21c:
    // 0x1fc21c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1fc21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1fc220:
    // 0x1fc220: 0x40f809  jalr        $v0
label_1fc224:
    if (ctx->pc == 0x1FC224u) {
        ctx->pc = 0x1FC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC220u;
        // 0x1fc224: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC228u;
        goto label_1fc228;
    }
    ctx->pc = 0x1FC220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC228u);
        ctx->pc = 0x1FC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC220u;
        // 0x1fc224: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC220u, 0x1FC228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC228u;
label_1fc228:
    // 0x1fc228: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1fc22c:
    if (ctx->pc == 0x1FC22Cu) {
        ctx->pc = 0x1FC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC228u;
        // 0x1fc22c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC230u;
        goto label_1fc230;
    }
    ctx->pc = 0x1FC228u;
    {
        const bool branch_taken_0x1fc228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC228u;
        // 0x1fc22c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc228) {
            ctx->pc = 0x1FC2E4u;
            goto label_1fc2e4;
        }
    }
    ctx->pc = 0x1FC230u;
label_1fc230:
    // 0x1fc230: 0xc07f88a  jal         func_1FE228
label_1fc234:
    if (ctx->pc == 0x1FC234u) {
        ctx->pc = 0x1FC238u;
        goto label_1fc238;
    }
    ctx->pc = 0x1FC230u;
    SET_GPR_U32(ctx, 31, 0x1FC238u);
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1FC230u, 0x1FC238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC238u;
label_1fc238:
    // 0x1fc238: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_1fc23c:
    if (ctx->pc == 0x1FC23Cu) {
        ctx->pc = 0x1FC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC238u;
        // 0x1fc23c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC240u;
        goto label_1fc240;
    }
    ctx->pc = 0x1FC238u;
    {
        const bool branch_taken_0x1fc238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC238u;
        // 0x1fc23c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc238) {
            ctx->pc = 0x1FC2E4u;
            goto label_1fc2e4;
        }
    }
    ctx->pc = 0x1FC240u;
label_1fc240:
    // 0x1fc240: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x1fc240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1fc244:
    // 0x1fc244: 0xc05181e  jal         func_146078
label_1fc248:
    if (ctx->pc == 0x1FC248u) {
        ctx->pc = 0x1FC248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC244u;
        // 0x1fc248: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC24Cu;
        goto label_1fc24c;
    }
    ctx->pc = 0x1FC244u;
    SET_GPR_U32(ctx, 31, 0x1FC24Cu);
    ctx->pc = 0x1FC248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC244u;
    // 0x1fc248: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x1FC244u, 0x1FC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC24Cu;
label_1fc24c:
    // 0x1fc24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc250:
    // 0x1fc250: 0xc07a4f0  jal         func_1E93C0
label_1fc254:
    if (ctx->pc == 0x1FC254u) {
        ctx->pc = 0x1FC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC250u;
        // 0x1fc254: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC258u;
        goto label_1fc258;
    }
    ctx->pc = 0x1FC250u;
    SET_GPR_U32(ctx, 31, 0x1FC258u);
    ctx->pc = 0x1FC254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC250u;
    // 0x1fc254: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93C0u, 0x1FC250u, 0x1FC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC258u;
label_1fc258:
    // 0x1fc258: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1fc258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1fc25c:
    // 0x1fc25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc260:
    // 0x1fc260: 0xc07a51a  jal         func_1E9468
label_1fc264:
    if (ctx->pc == 0x1FC264u) {
        ctx->pc = 0x1FC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC260u;
        // 0x1fc264: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC268u;
        goto label_1fc268;
    }
    ctx->pc = 0x1FC260u;
    SET_GPR_U32(ctx, 31, 0x1FC268u);
    ctx->pc = 0x1FC264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC260u;
    // 0x1fc264: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9468u, 0x1FC260u, 0x1FC268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC268u;
label_1fc268:
    // 0x1fc268: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1fc268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1fc26c:
    // 0x1fc26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fc26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc270:
    // 0x1fc270: 0x24500840  addiu       $s0, $v0, 0x840
    ctx->pc = 0x1fc270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1fc274:
    // 0x1fc274: 0xc06ba26  jal         func_1AE898
label_1fc278:
    if (ctx->pc == 0x1FC278u) {
        ctx->pc = 0x1FC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC274u;
        // 0x1fc278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC27Cu;
        goto label_1fc27c;
    }
    ctx->pc = 0x1FC274u;
    SET_GPR_U32(ctx, 31, 0x1FC27Cu);
    ctx->pc = 0x1FC278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC274u;
    // 0x1fc278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1FC274u, 0x1FC27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC27Cu;
label_1fc27c:
    // 0x1fc27c: 0xc07f974  jal         func_1FE5D0
label_1fc280:
    if (ctx->pc == 0x1FC280u) {
        ctx->pc = 0x1FC280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC27Cu;
        // 0x1fc280: 0x80440019  lb          $a0, 0x19($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC284u;
        goto label_1fc284;
    }
    ctx->pc = 0x1FC27Cu;
    SET_GPR_U32(ctx, 31, 0x1FC284u);
    ctx->pc = 0x1FC280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC27Cu;
    // 0x1fc280: 0x80440019  lb          $a0, 0x19($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE5D0u, 0x1FC27Cu, 0x1FC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC284u;
label_1fc284:
    // 0x1fc284: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
label_1fc288:
    if (ctx->pc == 0x1FC288u) {
        ctx->pc = 0x1FC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC284u;
        // 0x1fc288: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC28Cu;
        goto label_1fc28c;
    }
    ctx->pc = 0x1FC284u;
    {
        const bool branch_taken_0x1fc284 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC284u;
        // 0x1fc288: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc284) {
            ctx->pc = 0x1FC2B0u;
            goto label_1fc2b0;
        }
    }
    ctx->pc = 0x1FC28Cu;
label_1fc28c:
    // 0x1fc28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc290:
    // 0x1fc290: 0xc06ba36  jal         func_1AE8D8
label_1fc294:
    if (ctx->pc == 0x1FC294u) {
        ctx->pc = 0x1FC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC290u;
        // 0x1fc294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC298u;
        goto label_1fc298;
    }
    ctx->pc = 0x1FC290u;
    SET_GPR_U32(ctx, 31, 0x1FC298u);
    ctx->pc = 0x1FC294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC290u;
    // 0x1fc294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1FC290u, 0x1FC298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC298u;
label_1fc298:
    // 0x1fc298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc29c:
    // 0x1fc29c: 0xc07f7d0  jal         func_1FDF40
label_1fc2a0:
    if (ctx->pc == 0x1FC2A0u) {
        ctx->pc = 0x1FC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC29Cu;
        // 0x1fc2a0: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC2A4u;
        goto label_1fc2a4;
    }
    ctx->pc = 0x1FC29Cu;
    SET_GPR_U32(ctx, 31, 0x1FC2A4u);
    ctx->pc = 0x1FC2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC29Cu;
    // 0x1fc2a0: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF40u, 0x1FC29Cu, 0x1FC2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC2A4u;
label_1fc2a4:
    // 0x1fc2a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1fc2a8:
    if (ctx->pc == 0x1FC2A8u) {
        ctx->pc = 0x1FC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2A4u;
        // 0x1fc2a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC2ACu;
        goto label_1fc2ac;
    }
    ctx->pc = 0x1FC2A4u;
    {
        const bool branch_taken_0x1fc2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2A4u;
        // 0x1fc2a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2a4) {
            ctx->pc = 0x1FC2B0u;
            goto label_1fc2b0;
        }
    }
    ctx->pc = 0x1FC2ACu;
label_1fc2ac:
    // 0x1fc2ac: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1fc2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_1fc2b0:
    // 0x1fc2b0: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x1fc2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_1fc2b4:
    // 0x1fc2b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fc2b8:
    // 0x1fc2b8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fc2b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fc2bc:
    // 0x1fc2bc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fc2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fc2c0:
    // 0x1fc2c0: 0x60f809  jalr        $v1
label_1fc2c4:
    if (ctx->pc == 0x1FC2C4u) {
        ctx->pc = 0x1FC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2C0u;
        // 0x1fc2c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC2C8u;
        goto label_1fc2c8;
    }
    ctx->pc = 0x1FC2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FC2C8u);
        ctx->pc = 0x1FC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2C0u;
        // 0x1fc2c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC2C0u, 0x1FC2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC2C8u;
label_1fc2c8:
    // 0x1fc2c8: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x1fc2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1fc2cc:
    // 0x1fc2cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fc2d0:
    // 0x1fc2d0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fc2d4:
    // 0x1fc2d4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fc2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fc2d8:
    // 0x1fc2d8: 0x60f809  jalr        $v1
label_1fc2dc:
    if (ctx->pc == 0x1FC2DCu) {
        ctx->pc = 0x1FC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2D8u;
        // 0x1fc2dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC2E0u;
        goto label_1fc2e0;
    }
    ctx->pc = 0x1FC2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FC2E0u);
        ctx->pc = 0x1FC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2D8u;
        // 0x1fc2dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC2D8u, 0x1FC2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC2E0u;
label_1fc2e0:
    // 0x1fc2e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fc2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc2e4:
    // 0x1fc2e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc2e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc2e8:
    // 0x1fc2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc2ec:
    // 0x1fc2ec: 0x3e00008  jr          $ra
label_1fc2f0:
    if (ctx->pc == 0x1FC2F0u) {
        ctx->pc = 0x1FC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2ECu;
        // 0x1fc2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC2F4u;
        goto label_1fc2f4;
    }
    ctx->pc = 0x1FC2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2ECu;
        // 0x1fc2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC2F4u;
label_1fc2f4:
    // 0x1fc2f4: 0x0  nop
    ctx->pc = 0x1fc2f4u;
    // NOP
    ctx->pc = 0x1fc2f8u;
}
