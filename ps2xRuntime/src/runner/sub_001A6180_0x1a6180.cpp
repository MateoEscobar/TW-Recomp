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

// Function: sub_001A6180
// Address: 0x1a6180 - 0x1a62c0
void sub_001A6180_0x1a6180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6180_0x1a6180");
#endif

    switch (ctx->pc) {
        case 0x1a6180u: goto label_1a6180;
        case 0x1a6184u: goto label_1a6184;
        case 0x1a6188u: goto label_1a6188;
        case 0x1a618cu: goto label_1a618c;
        case 0x1a6190u: goto label_1a6190;
        case 0x1a6194u: goto label_1a6194;
        case 0x1a6198u: goto label_1a6198;
        case 0x1a619cu: goto label_1a619c;
        case 0x1a61a0u: goto label_1a61a0;
        case 0x1a61a4u: goto label_1a61a4;
        case 0x1a61a8u: goto label_1a61a8;
        case 0x1a61acu: goto label_1a61ac;
        case 0x1a61b0u: goto label_1a61b0;
        case 0x1a61b4u: goto label_1a61b4;
        case 0x1a61b8u: goto label_1a61b8;
        case 0x1a61bcu: goto label_1a61bc;
        case 0x1a61c0u: goto label_1a61c0;
        case 0x1a61c4u: goto label_1a61c4;
        case 0x1a61c8u: goto label_1a61c8;
        case 0x1a61ccu: goto label_1a61cc;
        case 0x1a61d0u: goto label_1a61d0;
        case 0x1a61d4u: goto label_1a61d4;
        case 0x1a61d8u: goto label_1a61d8;
        case 0x1a61dcu: goto label_1a61dc;
        case 0x1a61e0u: goto label_1a61e0;
        case 0x1a61e4u: goto label_1a61e4;
        case 0x1a61e8u: goto label_1a61e8;
        case 0x1a61ecu: goto label_1a61ec;
        case 0x1a61f0u: goto label_1a61f0;
        case 0x1a61f4u: goto label_1a61f4;
        case 0x1a61f8u: goto label_1a61f8;
        case 0x1a61fcu: goto label_1a61fc;
        case 0x1a6200u: goto label_1a6200;
        case 0x1a6204u: goto label_1a6204;
        case 0x1a6208u: goto label_1a6208;
        case 0x1a620cu: goto label_1a620c;
        case 0x1a6210u: goto label_1a6210;
        case 0x1a6214u: goto label_1a6214;
        case 0x1a6218u: goto label_1a6218;
        case 0x1a621cu: goto label_1a621c;
        case 0x1a6220u: goto label_1a6220;
        case 0x1a6224u: goto label_1a6224;
        case 0x1a6228u: goto label_1a6228;
        case 0x1a622cu: goto label_1a622c;
        case 0x1a6230u: goto label_1a6230;
        case 0x1a6234u: goto label_1a6234;
        case 0x1a6238u: goto label_1a6238;
        case 0x1a623cu: goto label_1a623c;
        case 0x1a6240u: goto label_1a6240;
        case 0x1a6244u: goto label_1a6244;
        case 0x1a6248u: goto label_1a6248;
        case 0x1a624cu: goto label_1a624c;
        case 0x1a6250u: goto label_1a6250;
        case 0x1a6254u: goto label_1a6254;
        case 0x1a6258u: goto label_1a6258;
        case 0x1a625cu: goto label_1a625c;
        case 0x1a6260u: goto label_1a6260;
        case 0x1a6264u: goto label_1a6264;
        case 0x1a6268u: goto label_1a6268;
        case 0x1a626cu: goto label_1a626c;
        case 0x1a6270u: goto label_1a6270;
        case 0x1a6274u: goto label_1a6274;
        case 0x1a6278u: goto label_1a6278;
        case 0x1a627cu: goto label_1a627c;
        case 0x1a6280u: goto label_1a6280;
        case 0x1a6284u: goto label_1a6284;
        case 0x1a6288u: goto label_1a6288;
        case 0x1a628cu: goto label_1a628c;
        case 0x1a6290u: goto label_1a6290;
        case 0x1a6294u: goto label_1a6294;
        case 0x1a6298u: goto label_1a6298;
        case 0x1a629cu: goto label_1a629c;
        case 0x1a62a0u: goto label_1a62a0;
        case 0x1a62a4u: goto label_1a62a4;
        case 0x1a62a8u: goto label_1a62a8;
        case 0x1a62acu: goto label_1a62ac;
        case 0x1a62b0u: goto label_1a62b0;
        case 0x1a62b4u: goto label_1a62b4;
        case 0x1a62b8u: goto label_1a62b8;
        case 0x1a62bcu: goto label_1a62bc;
        default: break;
    }

    ctx->pc = 0x1a6180u;

label_1a6180:
    // 0x1a6180: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a6180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a6184:
    // 0x1a6184: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a6184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1a6188:
    // 0x1a6188: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a6188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1a618c:
    // 0x1a618c: 0x244298e0  addiu       $v0, $v0, -0x6720
    ctx->pc = 0x1a618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940896));
label_1a6190:
    // 0x1a6190: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1a6190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1a6194:
    // 0x1a6194: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a6194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6198:
    // 0x1a6198: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a6198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1a619c:
    // 0x1a619c: 0x26430f40  addiu       $v1, $s2, 0xF40
    ctx->pc = 0x1a619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
label_1a61a0:
    // 0x1a61a0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a61a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1a61a4:
    // 0x1a61a4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a61a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a61a8:
    // 0x1a61a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a61a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1a61ac:
    // 0x1a61ac: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1a61acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1a61b0:
    // 0x1a61b0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1a61b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1a61b4:
    // 0x1a61b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a61b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a61b8:
    // 0x1a61b8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1a61bc:
    if (ctx->pc == 0x1A61BCu) {
        ctx->pc = 0x1A61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61B8u;
        // 0x1a61bc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61C0u;
        goto label_1a61c0;
    }
    ctx->pc = 0x1A61B8u;
    {
        const bool branch_taken_0x1a61b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61B8u;
        // 0x1a61bc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61b8) {
            ctx->pc = 0x1A61F0u;
            goto label_1a61f0;
        }
    }
    ctx->pc = 0x1A61C0u;
label_1a61c0:
    // 0x1a61c0: 0x26501540  addiu       $s0, $s2, 0x1540
    ctx->pc = 0x1a61c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5440));
label_1a61c4:
    // 0x1a61c4: 0x1070000a  beq         $v1, $s0, . + 4 + (0xA << 2)
label_1a61c8:
    if (ctx->pc == 0x1A61C8u) {
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61CCu;
        goto label_1a61cc;
    }
    ctx->pc = 0x1A61C4u;
    {
        const bool branch_taken_0x1a61c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c4) {
            ctx->pc = 0x1A61F0u;
            goto label_1a61f0;
        }
    }
    ctx->pc = 0x1A61CCu;
label_1a61cc:
    // 0x1a61cc: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x1a61ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_1a61d0:
    // 0x1a61d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a61d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a61d4:
    // 0x1a61d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a61d8:
    // 0x1a61d8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1a61d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1a61dc:
    // 0x1a61dc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1a61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1a61e0:
    // 0x1a61e0: 0x60f809  jalr        $v1
label_1a61e4:
    if (ctx->pc == 0x1A61E4u) {
        ctx->pc = 0x1A61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E0u;
        // 0x1a61e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61E8u;
        goto label_1a61e8;
    }
    ctx->pc = 0x1A61E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A61E8u);
        ctx->pc = 0x1A61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E0u;
        // 0x1a61e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A61E0u, 0x1A61E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A61E8u;
label_1a61e8:
    // 0x1a61e8: 0x5630fff9  bnel        $s1, $s0, . + 4 + (-0x7 << 2)
label_1a61ec:
    if (ctx->pc == 0x1A61ECu) {
        ctx->pc = 0x1A61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E8u;
        // 0x1a61ec: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61F0u;
        goto label_1a61f0;
    }
    ctx->pc = 0x1A61E8u;
    {
        const bool branch_taken_0x1a61e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x1a61e8) {
            ctx->pc = 0x1A61ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A61E8u;
            // 0x1a61ec: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A61D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a61d0;
        }
    }
    ctx->pc = 0x1A61F0u;
label_1a61f0:
    // 0x1a61f0: 0x26510940  addiu       $s1, $s2, 0x940
    ctx->pc = 0x1a61f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
label_1a61f4:
    // 0x1a61f4: 0x26530340  addiu       $s3, $s2, 0x340
    ctx->pc = 0x1a61f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
label_1a61f8:
    // 0x1a61f8: 0x26540240  addiu       $s4, $s2, 0x240
    ctx->pc = 0x1a61f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
label_1a61fc:
    // 0x1a61fc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_1a6200:
    if (ctx->pc == 0x1A6200u) {
        ctx->pc = 0x1A6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61FCu;
        // 0x1a6200: 0x26550050  addiu       $s5, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6204u;
        goto label_1a6204;
    }
    ctx->pc = 0x1A61FCu;
    {
        const bool branch_taken_0x1a61fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61FCu;
        // 0x1a6200: 0x26550050  addiu       $s5, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61fc) {
            ctx->pc = 0x1A6238u;
            goto label_1a6238;
        }
    }
    ctx->pc = 0x1A6204u;
label_1a6204:
    // 0x1a6204: 0x26500f40  addiu       $s0, $s2, 0xF40
    ctx->pc = 0x1a6204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
label_1a6208:
    // 0x1a6208: 0x1230000b  beq         $s1, $s0, . + 4 + (0xB << 2)
label_1a620c:
    if (ctx->pc == 0x1A620Cu) {
        ctx->pc = 0x1A6210u;
        goto label_1a6210;
    }
    ctx->pc = 0x1A6208u;
    {
        const bool branch_taken_0x1a6208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x1a6208) {
            ctx->pc = 0x1A6238u;
            goto label_1a6238;
        }
    }
    ctx->pc = 0x1A6210u;
label_1a6210:
    // 0x1a6210: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x1a6210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_1a6214:
    // 0x1a6214: 0x0  nop
    ctx->pc = 0x1a6214u;
    // NOP
label_1a6218:
    // 0x1a6218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a621c:
    // 0x1a621c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6220:
    // 0x1a6220: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1a6220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1a6224:
    // 0x1a6224: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1a6224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1a6228:
    // 0x1a6228: 0x60f809  jalr        $v1
label_1a622c:
    if (ctx->pc == 0x1A622Cu) {
        ctx->pc = 0x1A622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6228u;
        // 0x1a622c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6230u;
        goto label_1a6230;
    }
    ctx->pc = 0x1A6228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6230u);
        ctx->pc = 0x1A622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6228u;
        // 0x1a622c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6228u, 0x1A6230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6230u;
label_1a6230:
    // 0x1a6230: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_1a6234:
    if (ctx->pc == 0x1A6234u) {
        ctx->pc = 0x1A6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6230u;
        // 0x1a6234: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6238u;
        goto label_1a6238;
    }
    ctx->pc = 0x1A6230u;
    {
        const bool branch_taken_0x1a6230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6230u;
        // 0x1a6234: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6230) {
            ctx->pc = 0x1A6218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6218;
        }
    }
    ctx->pc = 0x1A6238u;
label_1a6238:
    // 0x1a6238: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_1a623c:
    if (ctx->pc == 0x1A623Cu) {
        ctx->pc = 0x1A623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6238u;
        // 0x1a623c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6240u;
        goto label_1a6240;
    }
    ctx->pc = 0x1A6238u;
    {
        const bool branch_taken_0x1a6238 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6238u;
        // 0x1a623c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6238) {
            ctx->pc = 0x1A6270u;
            goto label_1a6270;
        }
    }
    ctx->pc = 0x1A6240u;
label_1a6240:
    // 0x1a6240: 0x5270000c  beql        $s3, $s0, . + 4 + (0xC << 2)
label_1a6244:
    if (ctx->pc == 0x1A6244u) {
        ctx->pc = 0x1A6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6240u;
        // 0x1a6244: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6248u;
        goto label_1a6248;
    }
    ctx->pc = 0x1A6240u;
    {
        const bool branch_taken_0x1a6240 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x1a6240) {
            ctx->pc = 0x1A6244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6240u;
            // 0x1a6244: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6274u;
            goto label_1a6274;
        }
    }
    ctx->pc = 0x1A6248u;
label_1a6248:
    // 0x1a6248: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x1a6248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_1a624c:
    // 0x1a624c: 0x0  nop
    ctx->pc = 0x1a624cu;
    // NOP
label_1a6250:
    // 0x1a6250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6254:
    // 0x1a6254: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6258:
    // 0x1a6258: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1a6258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1a625c:
    // 0x1a625c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1a625cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1a6260:
    // 0x1a6260: 0x60f809  jalr        $v1
label_1a6264:
    if (ctx->pc == 0x1A6264u) {
        ctx->pc = 0x1A6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6260u;
        // 0x1a6264: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6268u;
        goto label_1a6268;
    }
    ctx->pc = 0x1A6260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6268u);
        ctx->pc = 0x1A6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6260u;
        // 0x1a6264: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6260u, 0x1A6268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6268u;
label_1a6268:
    // 0x1a6268: 0x1670fff9  bne         $s3, $s0, . + 4 + (-0x7 << 2)
label_1a626c:
    if (ctx->pc == 0x1A626Cu) {
        ctx->pc = 0x1A626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6268u;
        // 0x1a626c: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6270u;
        goto label_1a6270;
    }
    ctx->pc = 0x1A6268u;
    {
        const bool branch_taken_0x1a6268 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6268u;
        // 0x1a626c: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6268) {
            ctx->pc = 0x1A6250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6250;
        }
    }
    ctx->pc = 0x1A6270u;
label_1a6270:
    // 0x1a6270: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a6270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a6274:
    // 0x1a6274: 0xc06870c  jal         func_1A1C30
label_1a6278:
    if (ctx->pc == 0x1A6278u) {
        ctx->pc = 0x1A6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6274u;
        // 0x1a6278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A627Cu;
        goto label_1a627c;
    }
    ctx->pc = 0x1A6274u;
    SET_GPR_U32(ctx, 31, 0x1A627Cu);
    ctx->pc = 0x1A6278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6274u;
    // 0x1a6278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1A6274u, 0x1A627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A627Cu;
label_1a627c:
    // 0x1a627c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a627cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a6280:
    // 0x1a6280: 0xc06e410  jal         func_1B9040
label_1a6284:
    if (ctx->pc == 0x1A6284u) {
        ctx->pc = 0x1A6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6280u;
        // 0x1a6284: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6288u;
        goto label_1a6288;
    }
    ctx->pc = 0x1A6280u;
    SET_GPR_U32(ctx, 31, 0x1A6288u);
    ctx->pc = 0x1A6284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6280u;
    // 0x1a6284: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1A6280u, 0x1A6288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6288u;
label_1a6288:
    // 0x1a6288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a6288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a628c:
    // 0x1a628c: 0xc06a39e  jal         func_1A8E78
label_1a6290:
    if (ctx->pc == 0x1A6290u) {
        ctx->pc = 0x1A6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A628Cu;
        // 0x1a6290: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6294u;
        goto label_1a6294;
    }
    ctx->pc = 0x1A628Cu;
    SET_GPR_U32(ctx, 31, 0x1A6294u);
    ctx->pc = 0x1A6290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A628Cu;
    // 0x1a6290: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1A628Cu, 0x1A6294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6294u;
label_1a6294:
    // 0x1a6294: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a6294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6298:
    // 0x1a6298: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a6298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a629c:
    // 0x1a629c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a629cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a62a0:
    // 0x1a62a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a62a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a62a4:
    // 0x1a62a4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1a62a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a62a8:
    // 0x1a62a8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1a62a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a62ac:
    // 0x1a62ac: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1a62acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a62b0:
    // 0x1a62b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a62b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a62b4:
    // 0x1a62b4: 0x3e00008  jr          $ra
label_1a62b8:
    if (ctx->pc == 0x1A62B8u) {
        ctx->pc = 0x1A62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62B4u;
        // 0x1a62b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62BCu;
        goto label_1a62bc;
    }
    ctx->pc = 0x1A62B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62B4u;
        // 0x1a62b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A62B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A62BCu;
label_1a62bc:
    // 0x1a62bc: 0x0  nop
    ctx->pc = 0x1a62bcu;
    // NOP
    ctx->pc = 0x1a62c0u;
}
