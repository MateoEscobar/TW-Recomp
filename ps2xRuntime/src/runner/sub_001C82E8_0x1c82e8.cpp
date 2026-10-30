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

// Function: sub_001C82E8
// Address: 0x1c82e8 - 0x1c83c8
void sub_001C82E8_0x1c82e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C82E8_0x1c82e8");
#endif

    switch (ctx->pc) {
        case 0x1c82e8u: goto label_1c82e8;
        case 0x1c82ecu: goto label_1c82ec;
        case 0x1c82f0u: goto label_1c82f0;
        case 0x1c82f4u: goto label_1c82f4;
        case 0x1c82f8u: goto label_1c82f8;
        case 0x1c82fcu: goto label_1c82fc;
        case 0x1c8300u: goto label_1c8300;
        case 0x1c8304u: goto label_1c8304;
        case 0x1c8308u: goto label_1c8308;
        case 0x1c830cu: goto label_1c830c;
        case 0x1c8310u: goto label_1c8310;
        case 0x1c8314u: goto label_1c8314;
        case 0x1c8318u: goto label_1c8318;
        case 0x1c831cu: goto label_1c831c;
        case 0x1c8320u: goto label_1c8320;
        case 0x1c8324u: goto label_1c8324;
        case 0x1c8328u: goto label_1c8328;
        case 0x1c832cu: goto label_1c832c;
        case 0x1c8330u: goto label_1c8330;
        case 0x1c8334u: goto label_1c8334;
        case 0x1c8338u: goto label_1c8338;
        case 0x1c833cu: goto label_1c833c;
        case 0x1c8340u: goto label_1c8340;
        case 0x1c8344u: goto label_1c8344;
        case 0x1c8348u: goto label_1c8348;
        case 0x1c834cu: goto label_1c834c;
        case 0x1c8350u: goto label_1c8350;
        case 0x1c8354u: goto label_1c8354;
        case 0x1c8358u: goto label_1c8358;
        case 0x1c835cu: goto label_1c835c;
        case 0x1c8360u: goto label_1c8360;
        case 0x1c8364u: goto label_1c8364;
        case 0x1c8368u: goto label_1c8368;
        case 0x1c836cu: goto label_1c836c;
        case 0x1c8370u: goto label_1c8370;
        case 0x1c8374u: goto label_1c8374;
        case 0x1c8378u: goto label_1c8378;
        case 0x1c837cu: goto label_1c837c;
        case 0x1c8380u: goto label_1c8380;
        case 0x1c8384u: goto label_1c8384;
        case 0x1c8388u: goto label_1c8388;
        case 0x1c838cu: goto label_1c838c;
        case 0x1c8390u: goto label_1c8390;
        case 0x1c8394u: goto label_1c8394;
        case 0x1c8398u: goto label_1c8398;
        case 0x1c839cu: goto label_1c839c;
        case 0x1c83a0u: goto label_1c83a0;
        case 0x1c83a4u: goto label_1c83a4;
        case 0x1c83a8u: goto label_1c83a8;
        case 0x1c83acu: goto label_1c83ac;
        case 0x1c83b0u: goto label_1c83b0;
        case 0x1c83b4u: goto label_1c83b4;
        case 0x1c83b8u: goto label_1c83b8;
        case 0x1c83bcu: goto label_1c83bc;
        case 0x1c83c0u: goto label_1c83c0;
        case 0x1c83c4u: goto label_1c83c4;
        default: break;
    }

    ctx->pc = 0x1c82e8u;

label_1c82e8:
    // 0x1c82e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c82e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c82ec:
    // 0x1c82ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c82ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c82f0:
    // 0x1c82f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c82f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1c82f4:
    // 0x1c82f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c82f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c82f8:
    // 0x1c82f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c82f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c82fc:
    // 0x1c82fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c8300:
    // 0x1c8300: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c8304:
    // 0x1c8304: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c8304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c8308:
    // 0x1c8308: 0x5043001e  beql        $v0, $v1, . + 4 + (0x1E << 2)
label_1c830c:
    if (ctx->pc == 0x1C830Cu) {
        ctx->pc = 0x1C830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8308u;
        // 0x1c830c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8310u;
        goto label_1c8310;
    }
    ctx->pc = 0x1C8308u;
    {
        const bool branch_taken_0x1c8308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c8308) {
            ctx->pc = 0x1C830Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8308u;
            // 0x1c830c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8384u;
            goto label_1c8384;
        }
    }
    ctx->pc = 0x1C8310u;
label_1c8310:
    // 0x1c8310: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c8310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1c8314:
    // 0x1c8314: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c8314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c8318:
    // 0x1c8318: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1c8318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1c831c:
    // 0x1c831c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1c831cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1c8320:
    // 0x1c8320: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x1c8320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1c8324:
    // 0x1c8324: 0xa0f809  jalr        $a1
label_1c8328:
    if (ctx->pc == 0x1C8328u) {
        ctx->pc = 0x1C8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8324u;
        // 0x1c8328: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C832Cu;
        goto label_1c832c;
    }
    ctx->pc = 0x1C8324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1C832Cu);
        ctx->pc = 0x1C8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8324u;
        // 0x1c8328: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8324u, 0x1C832Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C832Cu;
label_1c832c:
    // 0x1c832c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c8330:
    // 0x1c8330: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1c8330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c8334:
    // 0x1c8334: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c8334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c8338:
    // 0x1c8338: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c8338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1c833c:
    // 0x1c833c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c833cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c8340:
    // 0x1c8340: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c8344:
    // 0x1c8344: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1c8344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1c8348:
    // 0x1c8348: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1c8348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1c834c:
    // 0x1c834c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c834cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8350:
    // 0x1c8350: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1c8354:
    if (ctx->pc == 0x1C8354u) {
        ctx->pc = 0x1C8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8350u;
        // 0x1c8354: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8358u;
        goto label_1c8358;
    }
    ctx->pc = 0x1C8350u;
    {
        const bool branch_taken_0x1c8350 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8350u;
        // 0x1c8354: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8350) {
            ctx->pc = 0x1C837Cu;
            goto label_1c837c;
        }
    }
    ctx->pc = 0x1C8358u;
label_1c8358:
    // 0x1c8358: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1c8358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1c835c:
    // 0x1c835c: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1c835cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1c8360:
    // 0x1c8360: 0x24c653e8  addiu       $a2, $a2, 0x53E8
    ctx->pc = 0x1c8360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21480));
label_1c8364:
    // 0x1c8364: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1c8364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1c8368:
    // 0x1c8368: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1c8368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1c836c:
    // 0x1c836c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1c836cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1c8370:
    // 0x1c8370: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1c8370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1c8374:
    // 0x1c8374: 0x60f809  jalr        $v1
label_1c8378:
    if (ctx->pc == 0x1C8378u) {
        ctx->pc = 0x1C8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8374u;
        // 0x1c8378: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C837Cu;
        goto label_1c837c;
    }
    ctx->pc = 0x1C8374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C837Cu);
        ctx->pc = 0x1C8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8374u;
        // 0x1c8378: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8374u, 0x1C837Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C837Cu;
label_1c837c:
    // 0x1c837c: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1c837cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1c8380:
    // 0x1c8380: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c8380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c8384:
    // 0x1c8384: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c8388:
    // 0x1c8388: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c8388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c838c:
    // 0x1c838c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_1c8390:
    if (ctx->pc == 0x1C8390u) {
        ctx->pc = 0x1C8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C838Cu;
        // 0x1c8390: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8394u;
        goto label_1c8394;
    }
    ctx->pc = 0x1C838Cu;
    {
        const bool branch_taken_0x1c838c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C838Cu;
        // 0x1c8390: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c838c) {
            ctx->pc = 0x1C83B0u;
            goto label_1c83b0;
        }
    }
    ctx->pc = 0x1C8394u;
label_1c8394:
    // 0x1c8394: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c8394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1c8398:
    // 0x1c8398: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1c8398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c839c:
    // 0x1c839c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1c839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_1c83a0:
    // 0x1c83a0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1c83a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1c83a4:
    // 0x1c83a4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1c83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1c83a8:
    // 0x1c83a8: 0x60f809  jalr        $v1
label_1c83ac:
    if (ctx->pc == 0x1C83ACu) {
        ctx->pc = 0x1C83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83A8u;
        // 0x1c83ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C83B0u;
        goto label_1c83b0;
    }
    ctx->pc = 0x1C83A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C83B0u);
        ctx->pc = 0x1C83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83A8u;
        // 0x1c83ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83A8u, 0x1C83B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C83B0u;
label_1c83b0:
    // 0x1c83b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c83b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c83b4:
    // 0x1c83b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c83b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c83b8:
    // 0x1c83b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c83b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c83bc:
    // 0x1c83bc: 0x3e00008  jr          $ra
label_1c83c0:
    if (ctx->pc == 0x1C83C0u) {
        ctx->pc = 0x1C83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83BCu;
        // 0x1c83c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C83C4u;
        goto label_1c83c4;
    }
    ctx->pc = 0x1C83BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83BCu;
        // 0x1c83c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83C4u;
label_1c83c4:
    // 0x1c83c4: 0x0  nop
    ctx->pc = 0x1c83c4u;
    // NOP
    ctx->pc = 0x1c83c8u;
}
