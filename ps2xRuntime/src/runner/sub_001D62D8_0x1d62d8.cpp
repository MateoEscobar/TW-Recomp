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

// Function: sub_001D62D8
// Address: 0x1d62d8 - 0x1d63f0
void sub_001D62D8_0x1d62d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D62D8_0x1d62d8");
#endif

    switch (ctx->pc) {
        case 0x1d62d8u: goto label_1d62d8;
        case 0x1d62dcu: goto label_1d62dc;
        case 0x1d62e0u: goto label_1d62e0;
        case 0x1d62e4u: goto label_1d62e4;
        case 0x1d62e8u: goto label_1d62e8;
        case 0x1d62ecu: goto label_1d62ec;
        case 0x1d62f0u: goto label_1d62f0;
        case 0x1d62f4u: goto label_1d62f4;
        case 0x1d62f8u: goto label_1d62f8;
        case 0x1d62fcu: goto label_1d62fc;
        case 0x1d6300u: goto label_1d6300;
        case 0x1d6304u: goto label_1d6304;
        case 0x1d6308u: goto label_1d6308;
        case 0x1d630cu: goto label_1d630c;
        case 0x1d6310u: goto label_1d6310;
        case 0x1d6314u: goto label_1d6314;
        case 0x1d6318u: goto label_1d6318;
        case 0x1d631cu: goto label_1d631c;
        case 0x1d6320u: goto label_1d6320;
        case 0x1d6324u: goto label_1d6324;
        case 0x1d6328u: goto label_1d6328;
        case 0x1d632cu: goto label_1d632c;
        case 0x1d6330u: goto label_1d6330;
        case 0x1d6334u: goto label_1d6334;
        case 0x1d6338u: goto label_1d6338;
        case 0x1d633cu: goto label_1d633c;
        case 0x1d6340u: goto label_1d6340;
        case 0x1d6344u: goto label_1d6344;
        case 0x1d6348u: goto label_1d6348;
        case 0x1d634cu: goto label_1d634c;
        case 0x1d6350u: goto label_1d6350;
        case 0x1d6354u: goto label_1d6354;
        case 0x1d6358u: goto label_1d6358;
        case 0x1d635cu: goto label_1d635c;
        case 0x1d6360u: goto label_1d6360;
        case 0x1d6364u: goto label_1d6364;
        case 0x1d6368u: goto label_1d6368;
        case 0x1d636cu: goto label_1d636c;
        case 0x1d6370u: goto label_1d6370;
        case 0x1d6374u: goto label_1d6374;
        case 0x1d6378u: goto label_1d6378;
        case 0x1d637cu: goto label_1d637c;
        case 0x1d6380u: goto label_1d6380;
        case 0x1d6384u: goto label_1d6384;
        case 0x1d6388u: goto label_1d6388;
        case 0x1d638cu: goto label_1d638c;
        case 0x1d6390u: goto label_1d6390;
        case 0x1d6394u: goto label_1d6394;
        case 0x1d6398u: goto label_1d6398;
        case 0x1d639cu: goto label_1d639c;
        case 0x1d63a0u: goto label_1d63a0;
        case 0x1d63a4u: goto label_1d63a4;
        case 0x1d63a8u: goto label_1d63a8;
        case 0x1d63acu: goto label_1d63ac;
        case 0x1d63b0u: goto label_1d63b0;
        case 0x1d63b4u: goto label_1d63b4;
        case 0x1d63b8u: goto label_1d63b8;
        case 0x1d63bcu: goto label_1d63bc;
        case 0x1d63c0u: goto label_1d63c0;
        case 0x1d63c4u: goto label_1d63c4;
        case 0x1d63c8u: goto label_1d63c8;
        case 0x1d63ccu: goto label_1d63cc;
        case 0x1d63d0u: goto label_1d63d0;
        case 0x1d63d4u: goto label_1d63d4;
        case 0x1d63d8u: goto label_1d63d8;
        case 0x1d63dcu: goto label_1d63dc;
        case 0x1d63e0u: goto label_1d63e0;
        case 0x1d63e4u: goto label_1d63e4;
        case 0x1d63e8u: goto label_1d63e8;
        case 0x1d63ecu: goto label_1d63ec;
        default: break;
    }

    ctx->pc = 0x1d62d8u;

label_1d62d8:
    // 0x1d62d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d62d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1d62dc:
    // 0x1d62dc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d62dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1d62e0:
    // 0x1d62e0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1d62e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1d62e4:
    // 0x1d62e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d62e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d62e8:
    // 0x1d62e8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1d62e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1d62ec:
    // 0x1d62ec: 0x2670000c  addiu       $s0, $s3, 0xC
    ctx->pc = 0x1d62ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1d62f0:
    // 0x1d62f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1d62f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1d62f4:
    // 0x1d62f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d62f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d62f8:
    // 0x1d62f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d62f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d62fc:
    // 0x1d62fc: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1d62fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d6300:
    // 0x1d6300: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1d6300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1d6304:
    // 0x1d6304: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x1d6304u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1d6308:
    // 0x1d6308: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1d6308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1d630c:
    // 0x1d630c: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x1d630cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
label_1d6310:
    // 0x1d6310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d6310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d6314:
    // 0x1d6314: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1d6314u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_1d6318:
    // 0x1d6318: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d6318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d631c:
    // 0x1d631c: 0x50c00018  beql        $a2, $zero, . + 4 + (0x18 << 2)
label_1d6320:
    if (ctx->pc == 0x1D6320u) {
        ctx->pc = 0x1D6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D631Cu;
        // 0x1d6320: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6324u;
        goto label_1d6324;
    }
    ctx->pc = 0x1D631Cu;
    {
        const bool branch_taken_0x1d631c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d631c) {
            ctx->pc = 0x1D6320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D631Cu;
            // 0x1d6320: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6380u;
            goto label_1d6380;
        }
    }
    ctx->pc = 0x1D6324u;
label_1d6324:
    // 0x1d6324: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1d6324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d6328:
    // 0x1d6328: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
label_1d632c:
    if (ctx->pc == 0x1D632Cu) {
        ctx->pc = 0x1D632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6328u;
        // 0x1d632c: 0x8ea2d320  lw          $v0, -0x2CE0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6330u;
        goto label_1d6330;
    }
    ctx->pc = 0x1D6328u;
    {
        const bool branch_taken_0x1d6328 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6328u;
        // 0x1d632c: 0x8ea2d320  lw          $v0, -0x2CE0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6328) {
            ctx->pc = 0x1D635Cu;
            goto label_1d635c;
        }
    }
    ctx->pc = 0x1D6330u;
label_1d6330:
    // 0x1d6330: 0x8ec2d310  lw          $v0, -0x2CF0($s6)
    ctx->pc = 0x1d6330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294955792)));
label_1d6334:
    // 0x1d6334: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d6334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d6338:
    // 0x1d6338: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d6338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1d633c:
    // 0x1d633c: 0xa2540003  sb          $s4, 0x3($s2)
    ctx->pc = 0x1d633cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 20));
label_1d6340:
    // 0x1d6340: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d6340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d6344:
    // 0x1d6344: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d6344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1d6348:
    // 0x1d6348: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1d6348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1d634c:
    // 0x1d634c: 0x60f809  jalr        $v1
label_1d6350:
    if (ctx->pc == 0x1D6350u) {
        ctx->pc = 0x1D6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D634Cu;
        // 0x1d6350: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6354u;
        goto label_1d6354;
    }
    ctx->pc = 0x1D634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6354u);
        ctx->pc = 0x1D6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D634Cu;
        // 0x1d6350: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D634Cu, 0x1D6354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6354u;
label_1d6354:
    // 0x1d6354: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d6358:
    if (ctx->pc == 0x1D6358u) {
        ctx->pc = 0x1D6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6354u;
        // 0x1d6358: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D635Cu;
        goto label_1d635c;
    }
    ctx->pc = 0x1D6354u;
    {
        const bool branch_taken_0x1d6354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6354u;
        // 0x1d6358: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6354) {
            ctx->pc = 0x1D6380u;
            goto label_1d6380;
        }
    }
    ctx->pc = 0x1D635Cu;
label_1d635c:
    // 0x1d635c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d635cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d6360:
    // 0x1d6360: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d6360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1d6364:
    // 0x1d6364: 0xa2540003  sb          $s4, 0x3($s2)
    ctx->pc = 0x1d6364u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 20));
label_1d6368:
    // 0x1d6368: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d6368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d636c:
    // 0x1d636c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d636cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1d6370:
    // 0x1d6370: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1d6370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1d6374:
    // 0x1d6374: 0x60f809  jalr        $v1
label_1d6378:
    if (ctx->pc == 0x1D6378u) {
        ctx->pc = 0x1D6378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6374u;
        // 0x1d6378: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D637Cu;
        goto label_1d637c;
    }
    ctx->pc = 0x1D6374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D637Cu);
        ctx->pc = 0x1D6378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6374u;
        // 0x1d6378: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6374u, 0x1D637Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D637Cu;
label_1d637c:
    // 0x1d637c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d637cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d6380:
    // 0x1d6380: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x1d6380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1d6384:
    // 0x1d6384: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_1d6388:
    if (ctx->pc == 0x1D6388u) {
        ctx->pc = 0x1D6388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6384u;
        // 0x1d6388: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D638Cu;
        goto label_1d638c;
    }
    ctx->pc = 0x1D6384u;
    {
        const bool branch_taken_0x1d6384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6384u;
        // 0x1d6388: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6384) {
            ctx->pc = 0x1D6318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6318;
        }
    }
    ctx->pc = 0x1D638Cu;
label_1d638c:
    // 0x1d638c: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x1d638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1d6390:
    // 0x1d6390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6394:
    // 0x1d6394: 0xac4301b4  sw          $v1, 0x1B4($v0)
    ctx->pc = 0x1d6394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 436), GPR_U32(ctx, 3));
label_1d6398:
    // 0x1d6398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d639c:
    // 0x1d639c: 0xc06ec70  jal         func_1BB1C0
label_1d63a0:
    if (ctx->pc == 0x1D63A0u) {
        ctx->pc = 0x1D63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D639Cu;
        // 0x1d63a0: 0xa05401b1  sb          $s4, 0x1B1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 433), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D63A4u;
        goto label_1d63a4;
    }
    ctx->pc = 0x1D639Cu;
    SET_GPR_U32(ctx, 31, 0x1D63A4u);
    ctx->pc = 0x1D63A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D639Cu;
    // 0x1d63a0: 0xa05401b1  sb          $s4, 0x1B1($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 433), (uint8_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1D639Cu, 0x1D63A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63A4u;
label_1d63a4:
    // 0x1d63a4: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x1d63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_1d63a8:
    // 0x1d63a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d63ac:
    if (ctx->pc == 0x1D63ACu) {
        ctx->pc = 0x1D63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63A8u;
        // 0x1d63ac: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D63B0u;
        goto label_1d63b0;
    }
    ctx->pc = 0x1D63A8u;
    {
        const bool branch_taken_0x1d63a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63A8u;
        // 0x1d63ac: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63a8) {
            ctx->pc = 0x1D63C8u;
            goto label_1d63c8;
        }
    }
    ctx->pc = 0x1D63B0u;
label_1d63b0:
    // 0x1d63b0: 0x26640220  addiu       $a0, $s3, 0x220
    ctx->pc = 0x1d63b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
label_1d63b4:
    // 0x1d63b4: 0x8c43d310  lw          $v1, -0x2CF0($v0)
    ctx->pc = 0x1d63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1d63b8:
    // 0x1d63b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d63b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d63bc:
    // 0x1d63bc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1d63bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1d63c0:
    // 0x1d63c0: 0xc075ac0  jal         func_1D6B00
label_1d63c4:
    if (ctx->pc == 0x1D63C4u) {
        ctx->pc = 0x1D63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63C0u;
        // 0x1d63c4: 0xa3b40003  sb          $s4, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D63C8u;
        goto label_1d63c8;
    }
    ctx->pc = 0x1D63C0u;
    SET_GPR_U32(ctx, 31, 0x1D63C8u);
    ctx->pc = 0x1D63C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63C0u;
    // 0x1d63c4: 0xa3b40003  sb          $s4, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6B00u, 0x1D63C0u, 0x1D63C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63C8u;
label_1d63c8:
    // 0x1d63c8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1d63c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d63cc:
    // 0x1d63cc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1d63ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d63d0:
    // 0x1d63d0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1d63d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d63d4:
    // 0x1d63d4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d63d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d63d8:
    // 0x1d63d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d63d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d63dc:
    // 0x1d63dc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1d63dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d63e0:
    // 0x1d63e0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1d63e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d63e4:
    // 0x1d63e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d63e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d63e8:
    // 0x1d63e8: 0x3e00008  jr          $ra
label_1d63ec:
    if (ctx->pc == 0x1D63ECu) {
        ctx->pc = 0x1D63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63E8u;
        // 0x1d63ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D63F0u;
        goto label_fallthrough_0x1d63e8;
    }
    ctx->pc = 0x1D63E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63E8u;
        // 0x1d63ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D63E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d63e8:
    ctx->pc = 0x1D63F0u;
}
