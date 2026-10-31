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

// Function: sub_001AC1D8
// Address: 0x1ac1d8 - 0x1ac2f8
void sub_001AC1D8_0x1ac1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC1D8_0x1ac1d8");
#endif

    switch (ctx->pc) {
        case 0x1ac1d8u: goto label_1ac1d8;
        case 0x1ac1dcu: goto label_1ac1dc;
        case 0x1ac1e0u: goto label_1ac1e0;
        case 0x1ac1e4u: goto label_1ac1e4;
        case 0x1ac1e8u: goto label_1ac1e8;
        case 0x1ac1ecu: goto label_1ac1ec;
        case 0x1ac1f0u: goto label_1ac1f0;
        case 0x1ac1f4u: goto label_1ac1f4;
        case 0x1ac1f8u: goto label_1ac1f8;
        case 0x1ac1fcu: goto label_1ac1fc;
        case 0x1ac200u: goto label_1ac200;
        case 0x1ac204u: goto label_1ac204;
        case 0x1ac208u: goto label_1ac208;
        case 0x1ac20cu: goto label_1ac20c;
        case 0x1ac210u: goto label_1ac210;
        case 0x1ac214u: goto label_1ac214;
        case 0x1ac218u: goto label_1ac218;
        case 0x1ac21cu: goto label_1ac21c;
        case 0x1ac220u: goto label_1ac220;
        case 0x1ac224u: goto label_1ac224;
        case 0x1ac228u: goto label_1ac228;
        case 0x1ac22cu: goto label_1ac22c;
        case 0x1ac230u: goto label_1ac230;
        case 0x1ac234u: goto label_1ac234;
        case 0x1ac238u: goto label_1ac238;
        case 0x1ac23cu: goto label_1ac23c;
        case 0x1ac240u: goto label_1ac240;
        case 0x1ac244u: goto label_1ac244;
        case 0x1ac248u: goto label_1ac248;
        case 0x1ac24cu: goto label_1ac24c;
        case 0x1ac250u: goto label_1ac250;
        case 0x1ac254u: goto label_1ac254;
        case 0x1ac258u: goto label_1ac258;
        case 0x1ac25cu: goto label_1ac25c;
        case 0x1ac260u: goto label_1ac260;
        case 0x1ac264u: goto label_1ac264;
        case 0x1ac268u: goto label_1ac268;
        case 0x1ac26cu: goto label_1ac26c;
        case 0x1ac270u: goto label_1ac270;
        case 0x1ac274u: goto label_1ac274;
        case 0x1ac278u: goto label_1ac278;
        case 0x1ac27cu: goto label_1ac27c;
        case 0x1ac280u: goto label_1ac280;
        case 0x1ac284u: goto label_1ac284;
        case 0x1ac288u: goto label_1ac288;
        case 0x1ac28cu: goto label_1ac28c;
        case 0x1ac290u: goto label_1ac290;
        case 0x1ac294u: goto label_1ac294;
        case 0x1ac298u: goto label_1ac298;
        case 0x1ac29cu: goto label_1ac29c;
        case 0x1ac2a0u: goto label_1ac2a0;
        case 0x1ac2a4u: goto label_1ac2a4;
        case 0x1ac2a8u: goto label_1ac2a8;
        case 0x1ac2acu: goto label_1ac2ac;
        case 0x1ac2b0u: goto label_1ac2b0;
        case 0x1ac2b4u: goto label_1ac2b4;
        case 0x1ac2b8u: goto label_1ac2b8;
        case 0x1ac2bcu: goto label_1ac2bc;
        case 0x1ac2c0u: goto label_1ac2c0;
        case 0x1ac2c4u: goto label_1ac2c4;
        case 0x1ac2c8u: goto label_1ac2c8;
        case 0x1ac2ccu: goto label_1ac2cc;
        case 0x1ac2d0u: goto label_1ac2d0;
        case 0x1ac2d4u: goto label_1ac2d4;
        case 0x1ac2d8u: goto label_1ac2d8;
        case 0x1ac2dcu: goto label_1ac2dc;
        case 0x1ac2e0u: goto label_1ac2e0;
        case 0x1ac2e4u: goto label_1ac2e4;
        case 0x1ac2e8u: goto label_1ac2e8;
        case 0x1ac2ecu: goto label_1ac2ec;
        case 0x1ac2f0u: goto label_1ac2f0;
        case 0x1ac2f4u: goto label_1ac2f4;
        default: break;
    }

    ctx->pc = 0x1ac1d8u;

label_1ac1d8:
    // 0x1ac1d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ac1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ac1dc:
    // 0x1ac1dc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ac1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1ac1e0:
    // 0x1ac1e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ac1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ac1e4:
    // 0x1ac1e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac1e8:
    // 0x1ac1e8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ac1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1ac1ec:
    // 0x1ac1ec: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x1ac1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1ac1f0:
    // 0x1ac1f0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1ac1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1ac1f4:
    // 0x1ac1f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ac1f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac1f8:
    // 0x1ac1f8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ac1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1ac1fc:
    // 0x1ac1fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ac1fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac200:
    // 0x1ac200: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ac200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ac204:
    // 0x1ac204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac208:
    // 0x1ac208: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ac208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ac20c:
    // 0x1ac20c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ac20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ac210:
    // 0x1ac210: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ac210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ac214:
    // 0x1ac214: 0x29883  sra         $s3, $v0, 2
    ctx->pc = 0x1ac214u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 2));
label_1ac218:
    // 0x1ac218: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
label_1ac21c:
    if (ctx->pc == 0x1AC21Cu) {
        ctx->pc = 0x1AC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC218u;
        // 0x1ac21c: 0x8e3000c0  lw          $s0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC220u;
        goto label_1ac220;
    }
    ctx->pc = 0x1AC218u;
    {
        const bool branch_taken_0x1ac218 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC218u;
        // 0x1ac21c: 0x8e3000c0  lw          $s0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac218) {
            ctx->pc = 0x1AC27Cu;
            goto label_1ac27c;
        }
    }
    ctx->pc = 0x1AC220u;
label_1ac220:
    // 0x1ac220: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ac220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac224:
    // 0x1ac224: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ac224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1ac228:
    // 0x1ac228: 0x603000a  bgezl       $s0, . + 4 + (0xA << 2)
label_1ac22c:
    if (ctx->pc == 0x1AC22Cu) {
        ctx->pc = 0x1AC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC228u;
        // 0x1ac22c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC230u;
        goto label_1ac230;
    }
    ctx->pc = 0x1AC228u;
    {
        const bool branch_taken_0x1ac228 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1ac228) {
            ctx->pc = 0x1AC22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC228u;
            // 0x1ac22c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC254u;
            goto label_1ac254;
        }
    }
    ctx->pc = 0x1AC230u;
label_1ac230:
    // 0x1ac230: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x1ac230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1ac234:
    // 0x1ac234: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1ac238:
    if (ctx->pc == 0x1AC238u) {
        ctx->pc = 0x1AC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC234u;
        // 0x1ac238: 0x8e3000c0  lw          $s0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC23Cu;
        goto label_1ac23c;
    }
    ctx->pc = 0x1AC234u;
    {
        const bool branch_taken_0x1ac234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac234) {
            ctx->pc = 0x1AC238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC234u;
            // 0x1ac238: 0x8e3000c0  lw          $s0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC250u;
            goto label_1ac250;
        }
    }
    ctx->pc = 0x1AC23Cu;
label_1ac23c:
    // 0x1ac23c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ac23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ac240:
    // 0x1ac240: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1ac240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ac244:
    // 0x1ac244: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ac244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ac248:
    // 0x1ac248: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1ac248u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1ac24c:
    // 0x1ac24c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1ac24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ac250:
    // 0x1ac250: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ac250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac254:
    // 0x1ac254: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ac254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1ac258:
    // 0x1ac258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ac258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac25c:
    // 0x1ac25c: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x1ac25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_1ac260:
    // 0x1ac260: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x1ac260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_1ac264:
    // 0x1ac264: 0x40f809  jalr        $v0
label_1ac268:
    if (ctx->pc == 0x1AC268u) {
        ctx->pc = 0x1AC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC264u;
        // 0x1ac268: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC26Cu;
        goto label_1ac26c;
    }
    ctx->pc = 0x1AC264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC26Cu);
        ctx->pc = 0x1AC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC264u;
        // 0x1ac268: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC264u, 0x1AC26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC26Cu;
label_1ac26c:
    // 0x1ac26c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1ac270:
    if (ctx->pc == 0x1AC270u) {
        ctx->pc = 0x1AC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC26Cu;
        // 0x1ac270: 0x293102b  sltu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC274u;
        goto label_1ac274;
    }
    ctx->pc = 0x1AC26Cu;
    {
        const bool branch_taken_0x1ac26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC26Cu;
        // 0x1ac270: 0x293102b  sltu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac26c) {
            ctx->pc = 0x1AC2B0u;
            goto label_1ac2b0;
        }
    }
    ctx->pc = 0x1AC274u;
label_1ac274:
    // 0x1ac274: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_1ac278:
    if (ctx->pc == 0x1AC278u) {
        ctx->pc = 0x1AC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC274u;
        // 0x1ac278: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC27Cu;
        goto label_1ac27c;
    }
    ctx->pc = 0x1AC274u;
    {
        const bool branch_taken_0x1ac274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac274) {
            ctx->pc = 0x1AC278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC274u;
            // 0x1ac278: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac228;
        }
    }
    ctx->pc = 0x1AC27Cu;
label_1ac27c:
    // 0x1ac27c: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_1ac280:
    if (ctx->pc == 0x1AC280u) {
        ctx->pc = 0x1AC280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC27Cu;
        // 0x1ac280: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC284u;
        goto label_1ac284;
    }
    ctx->pc = 0x1AC27Cu;
    {
        const bool branch_taken_0x1ac27c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC27Cu;
        // 0x1ac280: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac27c) {
            ctx->pc = 0x1AC2BCu;
            goto label_1ac2bc;
        }
    }
    ctx->pc = 0x1AC284u;
label_1ac284:
    // 0x1ac284: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x1ac284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1ac288:
    // 0x1ac288: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_1ac28c:
    if (ctx->pc == 0x1AC28Cu) {
        ctx->pc = 0x1AC28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC288u;
        // 0x1ac28c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC290u;
        goto label_1ac290;
    }
    ctx->pc = 0x1AC288u;
    {
        const bool branch_taken_0x1ac288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC288u;
        // 0x1ac28c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac288) {
            ctx->pc = 0x1AC2B8u;
            goto label_1ac2b8;
        }
    }
    ctx->pc = 0x1AC290u;
label_1ac290:
    // 0x1ac290: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ac290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac294:
    // 0x1ac294: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac298:
    // 0x1ac298: 0x84440108  lh          $a0, 0x108($v0)
    ctx->pc = 0x1ac298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
label_1ac29c:
    // 0x1ac29c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x1ac29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1ac2a0:
    // 0x1ac2a0: 0x60f809  jalr        $v1
label_1ac2a4:
    if (ctx->pc == 0x1AC2A4u) {
        ctx->pc = 0x1AC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A0u;
        // 0x1ac2a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2A8u;
        goto label_1ac2a8;
    }
    ctx->pc = 0x1AC2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC2A8u);
        ctx->pc = 0x1AC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A0u;
        // 0x1ac2a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC2A0u, 0x1AC2A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC2A8u;
label_1ac2a8:
    // 0x1ac2a8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ac2ac:
    if (ctx->pc == 0x1AC2ACu) {
        ctx->pc = 0x1AC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A8u;
        // 0x1ac2ac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2B0u;
        goto label_1ac2b0;
    }
    ctx->pc = 0x1AC2A8u;
    {
        const bool branch_taken_0x1ac2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A8u;
        // 0x1ac2ac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2a8) {
            ctx->pc = 0x1AC2D4u;
            goto label_1ac2d4;
        }
    }
    ctx->pc = 0x1AC2B0u;
label_1ac2b0:
    // 0x1ac2b0: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_1ac2b4:
    if (ctx->pc == 0x1AC2B4u) {
        ctx->pc = 0x1AC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2B0u;
        // 0x1ac2b4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2B8u;
        goto label_1ac2b8;
    }
    ctx->pc = 0x1AC2B0u;
    {
        const bool branch_taken_0x1ac2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2B0u;
        // 0x1ac2b4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2b0) {
            ctx->pc = 0x1AC27Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac27c;
        }
    }
    ctx->pc = 0x1AC2B8u;
label_1ac2b8:
    // 0x1ac2b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ac2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ac2bc:
    // 0x1ac2bc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1ac2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ac2c0:
    // 0x1ac2c0: 0xc043f0c  jal         func_10FC30
label_1ac2c4:
    if (ctx->pc == 0x1AC2C4u) {
        ctx->pc = 0x1AC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2C0u;
        // 0x1ac2c4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2C8u;
        goto label_1ac2c8;
    }
    ctx->pc = 0x1AC2C0u;
    SET_GPR_U32(ctx, 31, 0x1AC2C8u);
    ctx->pc = 0x1AC2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2C0u;
    // 0x1ac2c4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1AC2C0u, 0x1AC2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2C8u;
label_1ac2c8:
    // 0x1ac2c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac2cc:
    // 0x1ac2cc: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x1ac2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_1ac2d0:
    // 0x1ac2d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ac2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ac2d4:
    // 0x1ac2d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ac2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac2d8:
    // 0x1ac2d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ac2d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac2dc:
    // 0x1ac2dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ac2dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac2e0:
    // 0x1ac2e0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1ac2e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac2e4:
    // 0x1ac2e4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1ac2e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac2e8:
    // 0x1ac2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac2ec:
    // 0x1ac2ec: 0x3e00008  jr          $ra
label_1ac2f0:
    if (ctx->pc == 0x1AC2F0u) {
        ctx->pc = 0x1AC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2ECu;
        // 0x1ac2f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2F4u;
        goto label_1ac2f4;
    }
    ctx->pc = 0x1AC2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2ECu;
        // 0x1ac2f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC2F4u;
label_1ac2f4:
    // 0x1ac2f4: 0x0  nop
    ctx->pc = 0x1ac2f4u;
    // NOP
    ctx->pc = 0x1ac2f8u;
}
