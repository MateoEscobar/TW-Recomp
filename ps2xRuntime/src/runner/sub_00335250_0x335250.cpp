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

// Function: sub_00335250
// Address: 0x335250 - 0x335320
void sub_00335250_0x335250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335250_0x335250");
#endif

    switch (ctx->pc) {
        case 0x335250u: goto label_335250;
        case 0x335254u: goto label_335254;
        case 0x335258u: goto label_335258;
        case 0x33525cu: goto label_33525c;
        case 0x335260u: goto label_335260;
        case 0x335264u: goto label_335264;
        case 0x335268u: goto label_335268;
        case 0x33526cu: goto label_33526c;
        case 0x335270u: goto label_335270;
        case 0x335274u: goto label_335274;
        case 0x335278u: goto label_335278;
        case 0x33527cu: goto label_33527c;
        case 0x335280u: goto label_335280;
        case 0x335284u: goto label_335284;
        case 0x335288u: goto label_335288;
        case 0x33528cu: goto label_33528c;
        case 0x335290u: goto label_335290;
        case 0x335294u: goto label_335294;
        case 0x335298u: goto label_335298;
        case 0x33529cu: goto label_33529c;
        case 0x3352a0u: goto label_3352a0;
        case 0x3352a4u: goto label_3352a4;
        case 0x3352a8u: goto label_3352a8;
        case 0x3352acu: goto label_3352ac;
        case 0x3352b0u: goto label_3352b0;
        case 0x3352b4u: goto label_3352b4;
        case 0x3352b8u: goto label_3352b8;
        case 0x3352bcu: goto label_3352bc;
        case 0x3352c0u: goto label_3352c0;
        case 0x3352c4u: goto label_3352c4;
        case 0x3352c8u: goto label_3352c8;
        case 0x3352ccu: goto label_3352cc;
        case 0x3352d0u: goto label_3352d0;
        case 0x3352d4u: goto label_3352d4;
        case 0x3352d8u: goto label_3352d8;
        case 0x3352dcu: goto label_3352dc;
        case 0x3352e0u: goto label_3352e0;
        case 0x3352e4u: goto label_3352e4;
        case 0x3352e8u: goto label_3352e8;
        case 0x3352ecu: goto label_3352ec;
        case 0x3352f0u: goto label_3352f0;
        case 0x3352f4u: goto label_3352f4;
        case 0x3352f8u: goto label_3352f8;
        case 0x3352fcu: goto label_3352fc;
        case 0x335300u: goto label_335300;
        case 0x335304u: goto label_335304;
        case 0x335308u: goto label_335308;
        case 0x33530cu: goto label_33530c;
        case 0x335310u: goto label_335310;
        case 0x335314u: goto label_335314;
        case 0x335318u: goto label_335318;
        case 0x33531cu: goto label_33531c;
        default: break;
    }

    ctx->pc = 0x335250u;

label_335250:
    // 0x335250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x335250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_335254:
    // 0x335254: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x335254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_335258:
    // 0x335258: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x335258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_33525c:
    // 0x33525c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33525cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_335260:
    // 0x335260: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x335260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_335264:
    // 0x335264: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x335264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_335268:
    // 0x335268: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x335268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_33526c:
    // 0x33526c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33526cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_335270:
    // 0x335270: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x335270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_335274:
    // 0x335274: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_335278:
    if (ctx->pc == 0x335278u) {
        ctx->pc = 0x335278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335274u;
        // 0x335278: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33527Cu;
        goto label_33527c;
    }
    ctx->pc = 0x335274u;
    {
        const bool branch_taken_0x335274 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x335278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335274u;
        // 0x335278: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335274) {
            ctx->pc = 0x3352FCu;
            goto label_3352fc;
        }
    }
    ctx->pc = 0x33527Cu;
label_33527c:
    // 0x33527c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x33527cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_335280:
    // 0x335280: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x335280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_335284:
    // 0x335284: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_335288:
    if (ctx->pc == 0x335288u) {
        ctx->pc = 0x335288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335284u;
        // 0x335288: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33528Cu;
        goto label_33528c;
    }
    ctx->pc = 0x335284u;
    {
        const bool branch_taken_0x335284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335284) {
            ctx->pc = 0x335288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335284u;
            // 0x335288: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3352C0u;
            goto label_3352c0;
        }
    }
    ctx->pc = 0x33528Cu;
label_33528c:
    // 0x33528c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x33528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_335290:
    // 0x335290: 0x40f809  jalr        $v0
label_335294:
    if (ctx->pc == 0x335294u) {
        ctx->pc = 0x335294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335290u;
        // 0x335294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335298u;
        goto label_335298;
    }
    ctx->pc = 0x335290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x335298u);
        ctx->pc = 0x335294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335290u;
        // 0x335294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335290u, 0x335298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x335298u;
label_335298:
    // 0x335298: 0x54540003  bnel        $v0, $s4, . + 4 + (0x3 << 2)
label_33529c:
    if (ctx->pc == 0x33529Cu) {
        ctx->pc = 0x33529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335298u;
        // 0x33529c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3352A0u;
        goto label_3352a0;
    }
    ctx->pc = 0x335298u;
    {
        const bool branch_taken_0x335298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x335298) {
            ctx->pc = 0x33529Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335298u;
            // 0x33529c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3352A8u;
            goto label_3352a8;
        }
    }
    ctx->pc = 0x3352A0u;
label_3352a0:
    // 0x3352a0: 0x10000017  b           . + 4 + (0x17 << 2)
label_3352a4:
    if (ctx->pc == 0x3352A4u) {
        ctx->pc = 0x3352A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3352A0u;
        // 0x3352a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3352A8u;
        goto label_3352a8;
    }
    ctx->pc = 0x3352A0u;
    {
        const bool branch_taken_0x3352a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3352A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3352A0u;
        // 0x3352a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3352a0) {
            ctx->pc = 0x335300u;
            goto label_335300;
        }
    }
    ctx->pc = 0x3352A8u;
label_3352a8:
    // 0x3352a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3352a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3352ac:
    // 0x3352ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3352acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3352b0:
    // 0x3352b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3352b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3352b4:
    // 0x3352b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3352b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3352b8:
    // 0x3352b8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3352b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_3352bc:
    // 0x3352bc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3352bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3352c0:
    // 0x3352c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3352c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3352c4:
    // 0x3352c4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3352c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3352c8:
    // 0x3352c8: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x3352c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3352cc:
    // 0x3352cc: 0x242800a  movz        $s0, $s2, $v0
    ctx->pc = 0x3352ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_3352d0:
    // 0x3352d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3352d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3352d4:
    // 0x3352d4: 0xc10c190  jal         func_430640
label_3352d8:
    if (ctx->pc == 0x3352D8u) {
        ctx->pc = 0x3352D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3352D4u;
        // 0x3352d8: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3352DCu;
        goto label_3352dc;
    }
    ctx->pc = 0x3352D4u;
    SET_GPR_U32(ctx, 31, 0x3352DCu);
    ctx->pc = 0x3352D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3352D4u;
    // 0x3352d8: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x3352D4u, 0x3352DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3352DCu;
label_3352dc:
    // 0x3352dc: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x3352dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3352e0:
    // 0x3352e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3352e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3352e4:
    // 0x3352e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3352e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3352e8:
    // 0x3352e8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3352e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3352ec:
    // 0x3352ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3352ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3352f0:
    // 0x3352f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3352f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3352f4:
    // 0x3352f4: 0x1640ffe2  bnez        $s2, . + 4 + (-0x1E << 2)
label_3352f8:
    if (ctx->pc == 0x3352F8u) {
        ctx->pc = 0x3352F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3352F4u;
        // 0x3352f8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3352FCu;
        goto label_3352fc;
    }
    ctx->pc = 0x3352F4u;
    {
        const bool branch_taken_0x3352f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3352F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3352F4u;
        // 0x3352f8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3352f4) {
            ctx->pc = 0x335280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335280;
        }
    }
    ctx->pc = 0x3352FCu;
label_3352fc:
    // 0x3352fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3352fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335300:
    // 0x335300: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x335300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_335304:
    // 0x335304: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x335304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_335308:
    // 0x335308: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x335308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33530c:
    // 0x33530c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x33530cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_335310:
    // 0x335310: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x335310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_335314:
    // 0x335314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_335318:
    // 0x335318: 0x3e00008  jr          $ra
label_33531c:
    if (ctx->pc == 0x33531Cu) {
        ctx->pc = 0x33531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335318u;
        // 0x33531c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335320u;
        goto label_fallthrough_0x335318;
    }
    ctx->pc = 0x335318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335318u;
        // 0x33531c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x335318:
    ctx->pc = 0x335320u;
}
