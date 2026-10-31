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

// Function: sub_004DF228
// Address: 0x4df228 - 0x4df2a8
void sub_004DF228_0x4df228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF228_0x4df228");
#endif

    switch (ctx->pc) {
        case 0x4df228u: goto label_4df228;
        case 0x4df22cu: goto label_4df22c;
        case 0x4df230u: goto label_4df230;
        case 0x4df234u: goto label_4df234;
        case 0x4df238u: goto label_4df238;
        case 0x4df23cu: goto label_4df23c;
        case 0x4df240u: goto label_4df240;
        case 0x4df244u: goto label_4df244;
        case 0x4df248u: goto label_4df248;
        case 0x4df24cu: goto label_4df24c;
        case 0x4df250u: goto label_4df250;
        case 0x4df254u: goto label_4df254;
        case 0x4df258u: goto label_4df258;
        case 0x4df25cu: goto label_4df25c;
        case 0x4df260u: goto label_4df260;
        case 0x4df264u: goto label_4df264;
        case 0x4df268u: goto label_4df268;
        case 0x4df26cu: goto label_4df26c;
        case 0x4df270u: goto label_4df270;
        case 0x4df274u: goto label_4df274;
        case 0x4df278u: goto label_4df278;
        case 0x4df27cu: goto label_4df27c;
        case 0x4df280u: goto label_4df280;
        case 0x4df284u: goto label_4df284;
        case 0x4df288u: goto label_4df288;
        case 0x4df28cu: goto label_4df28c;
        case 0x4df290u: goto label_4df290;
        case 0x4df294u: goto label_4df294;
        case 0x4df298u: goto label_4df298;
        case 0x4df29cu: goto label_4df29c;
        case 0x4df2a0u: goto label_4df2a0;
        case 0x4df2a4u: goto label_4df2a4;
        default: break;
    }

    ctx->pc = 0x4df228u;

label_4df228:
    // 0x4df228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4df228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4df22c:
    // 0x4df22c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4df22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4df230:
    // 0x4df230: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4df230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4df234:
    // 0x4df234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4df234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4df238:
    // 0x4df238: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4df238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4df23c:
    // 0x4df23c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4df23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4df240:
    // 0x4df240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4df240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4df244:
    // 0x4df244: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4df248:
    if (ctx->pc == 0x4DF248u) {
        ctx->pc = 0x4DF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF244u;
        // 0x4df248: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF24Cu;
        goto label_4df24c;
    }
    ctx->pc = 0x4DF244u;
    {
        const bool branch_taken_0x4df244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF244u;
        // 0x4df248: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df244) {
            ctx->pc = 0x4DF28Cu;
            goto label_4df28c;
        }
    }
    ctx->pc = 0x4DF24Cu;
label_4df24c:
    // 0x4df24c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4df24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4df250:
    // 0x4df250: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4df250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4df254:
    // 0x4df254: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4df254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4df258:
    // 0x4df258: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4df258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4df25c:
    // 0x4df25c: 0x60f809  jalr        $v1
label_4df260:
    if (ctx->pc == 0x4DF260u) {
        ctx->pc = 0x4DF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF25Cu;
        // 0x4df260: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF264u;
        goto label_4df264;
    }
    ctx->pc = 0x4DF25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DF264u);
        ctx->pc = 0x4DF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF25Cu;
        // 0x4df260: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF25Cu, 0x4DF264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DF264u;
label_4df264:
    // 0x4df264: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4df264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4df268:
    // 0x4df268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4df268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4df26c:
    // 0x4df26c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4df26cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4df270:
    // 0x4df270: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4df270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4df274:
    // 0x4df274: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4df274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4df278:
    // 0x4df278: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4df278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4df27c:
    // 0x4df27c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4df27cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4df280:
    // 0x4df280: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4df280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4df284:
    // 0x4df284: 0x60f809  jalr        $v1
label_4df288:
    if (ctx->pc == 0x4DF288u) {
        ctx->pc = 0x4DF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF284u;
        // 0x4df288: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF28Cu;
        goto label_4df28c;
    }
    ctx->pc = 0x4DF284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DF28Cu);
        ctx->pc = 0x4DF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF284u;
        // 0x4df288: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF284u, 0x4DF28Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DF28Cu;
label_4df28c:
    // 0x4df28c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4df28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4df290:
    // 0x4df290: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4df290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4df294:
    // 0x4df294: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4df294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4df298:
    // 0x4df298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4df298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4df29c:
    // 0x4df29c: 0x3e00008  jr          $ra
label_4df2a0:
    if (ctx->pc == 0x4DF2A0u) {
        ctx->pc = 0x4DF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF29Cu;
        // 0x4df2a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF2A4u;
        goto label_4df2a4;
    }
    ctx->pc = 0x4DF29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF29Cu;
        // 0x4df2a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DF2A4u;
label_4df2a4:
    // 0x4df2a4: 0x0  nop
    ctx->pc = 0x4df2a4u;
    // NOP
    ctx->pc = 0x4df2a8u;
}
