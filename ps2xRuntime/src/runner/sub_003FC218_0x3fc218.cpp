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

// Function: sub_003FC218
// Address: 0x3fc218 - 0x3fc2b0
void sub_003FC218_0x3fc218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FC218_0x3fc218");
#endif

    switch (ctx->pc) {
        case 0x3fc218u: goto label_3fc218;
        case 0x3fc21cu: goto label_3fc21c;
        case 0x3fc220u: goto label_3fc220;
        case 0x3fc224u: goto label_3fc224;
        case 0x3fc228u: goto label_3fc228;
        case 0x3fc22cu: goto label_3fc22c;
        case 0x3fc230u: goto label_3fc230;
        case 0x3fc234u: goto label_3fc234;
        case 0x3fc238u: goto label_3fc238;
        case 0x3fc23cu: goto label_3fc23c;
        case 0x3fc240u: goto label_3fc240;
        case 0x3fc244u: goto label_3fc244;
        case 0x3fc248u: goto label_3fc248;
        case 0x3fc24cu: goto label_3fc24c;
        case 0x3fc250u: goto label_3fc250;
        case 0x3fc254u: goto label_3fc254;
        case 0x3fc258u: goto label_3fc258;
        case 0x3fc25cu: goto label_3fc25c;
        case 0x3fc260u: goto label_3fc260;
        case 0x3fc264u: goto label_3fc264;
        case 0x3fc268u: goto label_3fc268;
        case 0x3fc26cu: goto label_3fc26c;
        case 0x3fc270u: goto label_3fc270;
        case 0x3fc274u: goto label_3fc274;
        case 0x3fc278u: goto label_3fc278;
        case 0x3fc27cu: goto label_3fc27c;
        case 0x3fc280u: goto label_3fc280;
        case 0x3fc284u: goto label_3fc284;
        case 0x3fc288u: goto label_3fc288;
        case 0x3fc28cu: goto label_3fc28c;
        case 0x3fc290u: goto label_3fc290;
        case 0x3fc294u: goto label_3fc294;
        case 0x3fc298u: goto label_3fc298;
        case 0x3fc29cu: goto label_3fc29c;
        case 0x3fc2a0u: goto label_3fc2a0;
        case 0x3fc2a4u: goto label_3fc2a4;
        case 0x3fc2a8u: goto label_3fc2a8;
        case 0x3fc2acu: goto label_3fc2ac;
        default: break;
    }

    ctx->pc = 0x3fc218u;

label_3fc218:
    // 0x3fc218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3fc218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3fc21c:
    // 0x3fc21c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3fc21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3fc220:
    // 0x3fc220: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fc220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3fc224:
    // 0x3fc224: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fc224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fc228:
    // 0x3fc228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fc228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3fc22c:
    // 0x3fc22c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fc22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fc230:
    // 0x3fc230: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3fc230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fc234:
    // 0x3fc234: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3fc238:
    if (ctx->pc == 0x3FC238u) {
        ctx->pc = 0x3FC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC234u;
        // 0x3fc238: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC23Cu;
        goto label_3fc23c;
    }
    ctx->pc = 0x3FC234u;
    {
        const bool branch_taken_0x3fc234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc234) {
            ctx->pc = 0x3FC238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC234u;
            // 0x3fc238: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC248u;
            goto label_3fc248;
        }
    }
    ctx->pc = 0x3FC23Cu;
label_3fc23c:
    // 0x3fc23c: 0xc0e93de  jal         func_3A4F78
label_3fc240:
    if (ctx->pc == 0x3FC240u) {
        ctx->pc = 0x3FC244u;
        goto label_3fc244;
    }
    ctx->pc = 0x3FC23Cu;
    SET_GPR_U32(ctx, 31, 0x3FC244u);
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3FC23Cu, 0x3FC244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC244u;
label_3fc244:
    // 0x3fc244: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fc244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fc248:
    // 0x3fc248: 0xc0e90ca  jal         func_3A4328
label_3fc24c:
    if (ctx->pc == 0x3FC24Cu) {
        ctx->pc = 0x3FC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC248u;
        // 0x3fc24c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC250u;
        goto label_3fc250;
    }
    ctx->pc = 0x3FC248u;
    SET_GPR_U32(ctx, 31, 0x3FC250u);
    ctx->pc = 0x3FC24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC248u;
    // 0x3fc24c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FC248u, 0x3FC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC250u;
label_3fc250:
    // 0x3fc250: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fc250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fc254:
    // 0x3fc254: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3fc254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3fc258:
    // 0x3fc258: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3fc258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3fc25c:
    // 0x3fc25c: 0x40f809  jalr        $v0
label_3fc260:
    if (ctx->pc == 0x3FC260u) {
        ctx->pc = 0x3FC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC25Cu;
        // 0x3fc260: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC264u;
        goto label_3fc264;
    }
    ctx->pc = 0x3FC25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FC264u);
        ctx->pc = 0x3FC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC25Cu;
        // 0x3fc260: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC25Cu, 0x3FC264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FC264u;
label_3fc264:
    // 0x3fc264: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3fc264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3fc268:
    // 0x3fc268: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3fc268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fc26c:
    // 0x3fc26c: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3fc26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3fc270:
    // 0x3fc270: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fc270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fc274:
    // 0x3fc274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3fc274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fc278:
    // 0x3fc278: 0xc0e93a2  jal         func_3A4E88
label_3fc27c:
    if (ctx->pc == 0x3FC27Cu) {
        ctx->pc = 0x3FC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC278u;
        // 0x3fc27c: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC280u;
        goto label_3fc280;
    }
    ctx->pc = 0x3FC278u;
    SET_GPR_U32(ctx, 31, 0x3FC280u);
    ctx->pc = 0x3FC27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC278u;
    // 0x3fc27c: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3FC278u, 0x3FC280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC280u;
label_3fc280:
    // 0x3fc280: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x3fc280u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_3fc284:
    // 0x3fc284: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3fc284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3fc288:
    // 0x3fc288: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3fc288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3fc28c:
    // 0x3fc28c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fc28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3fc290:
    // 0x3fc290: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3fc290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fc294:
    // 0x3fc294: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3fc294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3fc298:
    // 0x3fc298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fc298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3fc29c:
    // 0x3fc29c: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3fc29cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3fc2a0:
    // 0x3fc2a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fc2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fc2a4:
    // 0x3fc2a4: 0x3e00008  jr          $ra
label_3fc2a8:
    if (ctx->pc == 0x3FC2A8u) {
        ctx->pc = 0x3FC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC2A4u;
        // 0x3fc2a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC2ACu;
        goto label_3fc2ac;
    }
    ctx->pc = 0x3FC2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC2A4u;
        // 0x3fc2a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FC2ACu;
label_3fc2ac:
    // 0x3fc2ac: 0x0  nop
    ctx->pc = 0x3fc2acu;
    // NOP
    ctx->pc = 0x3fc2b0u;
}
