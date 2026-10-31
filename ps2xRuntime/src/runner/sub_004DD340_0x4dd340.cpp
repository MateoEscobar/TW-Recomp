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

// Function: sub_004DD340
// Address: 0x4dd340 - 0x4dd3e0
void sub_004DD340_0x4dd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD340_0x4dd340");
#endif

    switch (ctx->pc) {
        case 0x4dd340u: goto label_4dd340;
        case 0x4dd344u: goto label_4dd344;
        case 0x4dd348u: goto label_4dd348;
        case 0x4dd34cu: goto label_4dd34c;
        case 0x4dd350u: goto label_4dd350;
        case 0x4dd354u: goto label_4dd354;
        case 0x4dd358u: goto label_4dd358;
        case 0x4dd35cu: goto label_4dd35c;
        case 0x4dd360u: goto label_4dd360;
        case 0x4dd364u: goto label_4dd364;
        case 0x4dd368u: goto label_4dd368;
        case 0x4dd36cu: goto label_4dd36c;
        case 0x4dd370u: goto label_4dd370;
        case 0x4dd374u: goto label_4dd374;
        case 0x4dd378u: goto label_4dd378;
        case 0x4dd37cu: goto label_4dd37c;
        case 0x4dd380u: goto label_4dd380;
        case 0x4dd384u: goto label_4dd384;
        case 0x4dd388u: goto label_4dd388;
        case 0x4dd38cu: goto label_4dd38c;
        case 0x4dd390u: goto label_4dd390;
        case 0x4dd394u: goto label_4dd394;
        case 0x4dd398u: goto label_4dd398;
        case 0x4dd39cu: goto label_4dd39c;
        case 0x4dd3a0u: goto label_4dd3a0;
        case 0x4dd3a4u: goto label_4dd3a4;
        case 0x4dd3a8u: goto label_4dd3a8;
        case 0x4dd3acu: goto label_4dd3ac;
        case 0x4dd3b0u: goto label_4dd3b0;
        case 0x4dd3b4u: goto label_4dd3b4;
        case 0x4dd3b8u: goto label_4dd3b8;
        case 0x4dd3bcu: goto label_4dd3bc;
        case 0x4dd3c0u: goto label_4dd3c0;
        case 0x4dd3c4u: goto label_4dd3c4;
        case 0x4dd3c8u: goto label_4dd3c8;
        case 0x4dd3ccu: goto label_4dd3cc;
        case 0x4dd3d0u: goto label_4dd3d0;
        case 0x4dd3d4u: goto label_4dd3d4;
        case 0x4dd3d8u: goto label_4dd3d8;
        case 0x4dd3dcu: goto label_4dd3dc;
        default: break;
    }

    ctx->pc = 0x4dd340u;

label_4dd340:
    // 0x4dd340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4dd340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4dd344:
    // 0x4dd344: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4dd344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4dd348:
    // 0x4dd348: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4dd348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4dd34c:
    // 0x4dd34c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4dd34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dd350:
    // 0x4dd350: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4dd350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dd354:
    // 0x4dd354: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4dd354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4dd358:
    // 0x4dd358: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4dd358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4dd35c:
    // 0x4dd35c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x4dd35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4dd360:
    // 0x4dd360: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4dd360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4dd364:
    // 0x4dd364: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4dd368:
    if (ctx->pc == 0x4DD368u) {
        ctx->pc = 0x4DD368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD364u;
        // 0x4dd368: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD36Cu;
        goto label_4dd36c;
    }
    ctx->pc = 0x4DD364u;
    {
        const bool branch_taken_0x4dd364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD364u;
        // 0x4dd368: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd364) {
            ctx->pc = 0x4DD3BCu;
            goto label_4dd3bc;
        }
    }
    ctx->pc = 0x4DD36Cu;
label_4dd36c:
    // 0x4dd36c: 0x24140054  addiu       $s4, $zero, 0x54
    ctx->pc = 0x4dd36cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd370:
    // 0x4dd370: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x4dd370u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_4dd374:
    // 0x4dd374: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x4dd374u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_4dd378:
    // 0x4dd378: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4dd378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dd37c:
    // 0x4dd37c: 0x0  nop
    ctx->pc = 0x4dd37cu;
    // NOP
label_4dd380:
    // 0x4dd380: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_4dd384:
    if (ctx->pc == 0x4DD384u) {
        ctx->pc = 0x4DD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD380u;
        // 0x4dd384: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD388u;
        goto label_4dd388;
    }
    ctx->pc = 0x4DD380u;
    {
        const bool branch_taken_0x4dd380 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd380) {
            ctx->pc = 0x4DD384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD380u;
            // 0x4dd384: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD388u;
            goto label_4dd388;
        }
    }
    ctx->pc = 0x4DD388u;
label_4dd388:
    // 0x4dd388: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4dd38c:
    if (ctx->pc == 0x4DD38Cu) {
        ctx->pc = 0x4DD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD388u;
        // 0x4dd38c: 0x8e68b9c0  lw          $t0, -0x4640($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD390u;
        goto label_4dd390;
    }
    ctx->pc = 0x4DD388u;
    {
        const bool branch_taken_0x4dd388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD388u;
        // 0x4dd38c: 0x8e68b9c0  lw          $t0, -0x4640($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd388) {
            ctx->pc = 0x4DD3ACu;
            goto label_4dd3ac;
        }
    }
    ctx->pc = 0x4DD390u;
label_4dd390:
    // 0x4dd390: 0x2646e600  addiu       $a2, $s2, -0x1A00
    ctx->pc = 0x4dd390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960640));
label_4dd394:
    // 0x4dd394: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4dd394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd398:
    // 0x4dd398: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dd398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dd39c:
    // 0x4dd39c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4dd39cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4dd3a0:
    // 0x4dd3a0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4dd3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4dd3a4:
    // 0x4dd3a4: 0x60f809  jalr        $v1
label_4dd3a8:
    if (ctx->pc == 0x4DD3A8u) {
        ctx->pc = 0x4DD3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD3A4u;
        // 0x4dd3a8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD3ACu;
        goto label_4dd3ac;
    }
    ctx->pc = 0x4DD3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DD3ACu);
        ctx->pc = 0x4DD3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD3A4u;
        // 0x4dd3a8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD3A4u, 0x4DD3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DD3ACu;
label_4dd3ac:
    // 0x4dd3ac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4dd3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4dd3b0:
    // 0x4dd3b0: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x4dd3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4dd3b4:
    // 0x4dd3b4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_4dd3b8:
    if (ctx->pc == 0x4DD3B8u) {
        ctx->pc = 0x4DD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD3B4u;
        // 0x4dd3b8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD3BCu;
        goto label_4dd3bc;
    }
    ctx->pc = 0x4DD3B4u;
    {
        const bool branch_taken_0x4dd3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dd3b4) {
            ctx->pc = 0x4DD3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD3B4u;
            // 0x4dd3b8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dd380;
        }
    }
    ctx->pc = 0x4DD3BCu;
label_4dd3bc:
    // 0x4dd3bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4dd3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4dd3c0:
    // 0x4dd3c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4dd3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dd3c4:
    // 0x4dd3c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4dd3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dd3c8:
    // 0x4dd3c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4dd3c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd3cc:
    // 0x4dd3cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4dd3ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd3d0:
    // 0x4dd3d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dd3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd3d4:
    // 0x4dd3d4: 0x3e00008  jr          $ra
label_4dd3d8:
    if (ctx->pc == 0x4DD3D8u) {
        ctx->pc = 0x4DD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD3D4u;
        // 0x4dd3d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD3DCu;
        goto label_4dd3dc;
    }
    ctx->pc = 0x4DD3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD3D4u;
        // 0x4dd3d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DD3DCu;
label_4dd3dc:
    // 0x4dd3dc: 0x0  nop
    ctx->pc = 0x4dd3dcu;
    // NOP
    ctx->pc = 0x4dd3e0u;
}
