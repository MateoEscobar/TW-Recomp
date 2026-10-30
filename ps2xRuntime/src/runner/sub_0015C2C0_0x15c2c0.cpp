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

// Function: sub_0015C2C0
// Address: 0x15c2c0 - 0x15c400
void sub_0015C2C0_0x15c2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C2C0_0x15c2c0");
#endif

    switch (ctx->pc) {
        case 0x15c2c0u: goto label_15c2c0;
        case 0x15c2c4u: goto label_15c2c4;
        case 0x15c2c8u: goto label_15c2c8;
        case 0x15c2ccu: goto label_15c2cc;
        case 0x15c2d0u: goto label_15c2d0;
        case 0x15c2d4u: goto label_15c2d4;
        case 0x15c2d8u: goto label_15c2d8;
        case 0x15c2dcu: goto label_15c2dc;
        case 0x15c2e0u: goto label_15c2e0;
        case 0x15c2e4u: goto label_15c2e4;
        case 0x15c2e8u: goto label_15c2e8;
        case 0x15c2ecu: goto label_15c2ec;
        case 0x15c2f0u: goto label_15c2f0;
        case 0x15c2f4u: goto label_15c2f4;
        case 0x15c2f8u: goto label_15c2f8;
        case 0x15c2fcu: goto label_15c2fc;
        case 0x15c300u: goto label_15c300;
        case 0x15c304u: goto label_15c304;
        case 0x15c308u: goto label_15c308;
        case 0x15c30cu: goto label_15c30c;
        case 0x15c310u: goto label_15c310;
        case 0x15c314u: goto label_15c314;
        case 0x15c318u: goto label_15c318;
        case 0x15c31cu: goto label_15c31c;
        case 0x15c320u: goto label_15c320;
        case 0x15c324u: goto label_15c324;
        case 0x15c328u: goto label_15c328;
        case 0x15c32cu: goto label_15c32c;
        case 0x15c330u: goto label_15c330;
        case 0x15c334u: goto label_15c334;
        case 0x15c338u: goto label_15c338;
        case 0x15c33cu: goto label_15c33c;
        case 0x15c340u: goto label_15c340;
        case 0x15c344u: goto label_15c344;
        case 0x15c348u: goto label_15c348;
        case 0x15c34cu: goto label_15c34c;
        case 0x15c350u: goto label_15c350;
        case 0x15c354u: goto label_15c354;
        case 0x15c358u: goto label_15c358;
        case 0x15c35cu: goto label_15c35c;
        case 0x15c360u: goto label_15c360;
        case 0x15c364u: goto label_15c364;
        case 0x15c368u: goto label_15c368;
        case 0x15c36cu: goto label_15c36c;
        case 0x15c370u: goto label_15c370;
        case 0x15c374u: goto label_15c374;
        case 0x15c378u: goto label_15c378;
        case 0x15c37cu: goto label_15c37c;
        case 0x15c380u: goto label_15c380;
        case 0x15c384u: goto label_15c384;
        case 0x15c388u: goto label_15c388;
        case 0x15c38cu: goto label_15c38c;
        case 0x15c390u: goto label_15c390;
        case 0x15c394u: goto label_15c394;
        case 0x15c398u: goto label_15c398;
        case 0x15c39cu: goto label_15c39c;
        case 0x15c3a0u: goto label_15c3a0;
        case 0x15c3a4u: goto label_15c3a4;
        case 0x15c3a8u: goto label_15c3a8;
        case 0x15c3acu: goto label_15c3ac;
        case 0x15c3b0u: goto label_15c3b0;
        case 0x15c3b4u: goto label_15c3b4;
        case 0x15c3b8u: goto label_15c3b8;
        case 0x15c3bcu: goto label_15c3bc;
        case 0x15c3c0u: goto label_15c3c0;
        case 0x15c3c4u: goto label_15c3c4;
        case 0x15c3c8u: goto label_15c3c8;
        case 0x15c3ccu: goto label_15c3cc;
        case 0x15c3d0u: goto label_15c3d0;
        case 0x15c3d4u: goto label_15c3d4;
        case 0x15c3d8u: goto label_15c3d8;
        case 0x15c3dcu: goto label_15c3dc;
        case 0x15c3e0u: goto label_15c3e0;
        case 0x15c3e4u: goto label_15c3e4;
        case 0x15c3e8u: goto label_15c3e8;
        case 0x15c3ecu: goto label_15c3ec;
        case 0x15c3f0u: goto label_15c3f0;
        case 0x15c3f4u: goto label_15c3f4;
        case 0x15c3f8u: goto label_15c3f8;
        case 0x15c3fcu: goto label_15c3fc;
        default: break;
    }

    ctx->pc = 0x15c2c0u;

label_15c2c0:
    // 0x15c2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15c2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15c2c4:
    // 0x15c2c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15c2c8:
    // 0x15c2c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15c2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_15c2cc:
    // 0x15c2cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15c2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_15c2d0:
    // 0x15c2d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15c2d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c2d4:
    // 0x15c2d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15c2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_15c2d8:
    // 0x15c2d8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15c2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15c2dc:
    // 0x15c2dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15c2e0:
    // 0x15c2e0: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x15c2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
label_15c2e4:
    // 0x15c2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15c2e8:
    // 0x15c2e8: 0xc080ffa  jal         func_203FE8
label_15c2ec:
    if (ctx->pc == 0x15C2ECu) {
        ctx->pc = 0x15C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2E8u;
        // 0x15c2ec: 0xac40c70c  sw          $zero, -0x38F4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C2F0u;
        goto label_15c2f0;
    }
    ctx->pc = 0x15C2E8u;
    SET_GPR_U32(ctx, 31, 0x15C2F0u);
    ctx->pc = 0x15C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C2E8u;
    // 0x15c2ec: 0xac40c70c  sw          $zero, -0x38F4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952716), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x15C2E8u, 0x15C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C2F0u;
label_15c2f0:
    // 0x15c2f0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_15c2f4:
    if (ctx->pc == 0x15C2F4u) {
        ctx->pc = 0x15C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2F0u;
        // 0x15c2f4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C2F8u;
        goto label_15c2f8;
    }
    ctx->pc = 0x15C2F0u;
    {
        const bool branch_taken_0x15c2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2F0u;
        // 0x15c2f4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2f0) {
            ctx->pc = 0x15C330u;
            goto label_15c330;
        }
    }
    ctx->pc = 0x15C2F8u;
label_15c2f8:
    // 0x15c2f8: 0x8e225d80  lw          $v0, 0x5D80($s1)
    ctx->pc = 0x15c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23936)));
label_15c2fc:
    // 0x15c2fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c300:
    // 0x15c300: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_15c304:
    if (ctx->pc == 0x15C304u) {
        ctx->pc = 0x15C308u;
        goto label_15c308;
    }
    ctx->pc = 0x15C300u;
    {
        const bool branch_taken_0x15c300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c300) {
            ctx->pc = 0x15C31Cu;
            goto label_15c31c;
        }
    }
    ctx->pc = 0x15C308u;
label_15c308:
    // 0x15c308: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_15c30c:
    if (ctx->pc == 0x15C30Cu) {
        ctx->pc = 0x15C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C308u;
        // 0x15c30c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C310u;
        goto label_15c310;
    }
    ctx->pc = 0x15C308u;
    {
        const bool branch_taken_0x15c308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C308u;
        // 0x15c30c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c308) {
            ctx->pc = 0x15C334u;
            goto label_15c334;
        }
    }
    ctx->pc = 0x15C310u;
label_15c310:
    // 0x15c310: 0x8e02c700  lw          $v0, -0x3900($s0)
    ctx->pc = 0x15c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952704)));
label_15c314:
    // 0x15c314: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_15c318:
    if (ctx->pc == 0x15C318u) {
        ctx->pc = 0x15C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C314u;
        // 0x15c318: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C31Cu;
        goto label_15c31c;
    }
    ctx->pc = 0x15C314u;
    {
        const bool branch_taken_0x15c314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C314u;
        // 0x15c318: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c314) {
            ctx->pc = 0x15C334u;
            goto label_15c334;
        }
    }
    ctx->pc = 0x15C31Cu;
label_15c31c:
    // 0x15c31c: 0xc080fea  jal         func_203FA8
label_15c320:
    if (ctx->pc == 0x15C320u) {
        ctx->pc = 0x15C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C31Cu;
        // 0x15c320: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C324u;
        goto label_15c324;
    }
    ctx->pc = 0x15C31Cu;
    SET_GPR_U32(ctx, 31, 0x15C324u);
    ctx->pc = 0x15C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C31Cu;
    // 0x15c320: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FA8u, 0x15C31Cu, 0x15C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C324u;
label_15c324:
    // 0x15c324: 0xc08100e  jal         func_204038
label_15c328:
    if (ctx->pc == 0x15C328u) {
        ctx->pc = 0x15C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C324u;
        // 0x15c328: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C32Cu;
        goto label_15c32c;
    }
    ctx->pc = 0x15C324u;
    SET_GPR_U32(ctx, 31, 0x15C32Cu);
    ctx->pc = 0x15C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C324u;
    // 0x15c328: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204038u, 0x15C324u, 0x15C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C32Cu;
label_15c32c:
    // 0x15c32c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15c32cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_15c330:
    // 0x15c330: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15c334:
    // 0x15c334: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x15c334u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_15c338:
    // 0x15c338: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x15c338u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_15c33c:
    // 0x15c33c: 0x8c45c738  lw          $a1, -0x38C8($v0)
    ctx->pc = 0x15c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952760)));
label_15c340:
    // 0x15c340: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x15c340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c344:
    // 0x15c344: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x15c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_15c348:
    // 0x15c348: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x15c348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_15c34c:
    // 0x15c34c: 0xae00c700  sw          $zero, -0x3900($s0)
    ctx->pc = 0x15c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952704), GPR_U32(ctx, 0));
label_15c350:
    // 0x15c350: 0x24c6f1d0  addiu       $a2, $a2, -0xE30
    ctx->pc = 0x15c350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963664));
label_15c354:
    // 0x15c354: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x15c354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_15c358:
    // 0x15c358: 0x24070349  addiu       $a3, $zero, 0x349
    ctx->pc = 0x15c358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 841));
label_15c35c:
    // 0x15c35c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_15c360:
    // 0x15c360: 0xad49c72c  sw          $t1, -0x38D4($t2)
    ctx->pc = 0x15c360u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294952748), GPR_U32(ctx, 9));
label_15c364:
    // 0x15c364: 0x40f809  jalr        $v0
label_15c368:
    if (ctx->pc == 0x15C368u) {
        ctx->pc = 0x15C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C364u;
        // 0x15c368: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C36Cu;
        goto label_15c36c;
    }
    ctx->pc = 0x15C364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C36Cu);
        ctx->pc = 0x15C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C364u;
        // 0x15c368: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C364u, 0x15C36Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C36Cu;
label_15c36c:
    // 0x15c36c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x15c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_15c370:
    // 0x15c370: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15c374:
    // 0x15c374: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_15c378:
    if (ctx->pc == 0x15C378u) {
        ctx->pc = 0x15C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C374u;
        // 0x15c378: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C37Cu;
        goto label_15c37c;
    }
    ctx->pc = 0x15C374u;
    {
        const bool branch_taken_0x15c374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C374u;
        // 0x15c378: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c374) {
            ctx->pc = 0x15C388u;
            goto label_15c388;
        }
    }
    ctx->pc = 0x15C37Cu;
label_15c37c:
    // 0x15c37c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15c380:
    // 0x15c380: 0xac405db8  sw          $zero, 0x5DB8($v0)
    ctx->pc = 0x15c380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23992), GPR_U32(ctx, 0));
label_15c384:
    // 0x15c384: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c388:
    // 0x15c388: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15c388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15c38c:
    // 0x15c38c: 0xae225d80  sw          $v0, 0x5D80($s1)
    ctx->pc = 0x15c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23936), GPR_U32(ctx, 2));
label_15c390:
    // 0x15c390: 0xc071afa  jal         func_1C6BE8
label_15c394:
    if (ctx->pc == 0x15C394u) {
        ctx->pc = 0x15C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C390u;
        // 0x15c394: 0x24845840  addiu       $a0, $a0, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C398u;
        goto label_15c398;
    }
    ctx->pc = 0x15C390u;
    SET_GPR_U32(ctx, 31, 0x15C398u);
    ctx->pc = 0x15C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C390u;
    // 0x15c394: 0x24845840  addiu       $a0, $a0, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6BE8u, 0x15C390u, 0x15C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C398u;
label_15c398:
    // 0x15c398: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x15c398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_15c39c:
    // 0x15c39c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x15c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_15c3a0:
    // 0x15c3a0: 0x8c45b9b8  lw          $a1, -0x4648($v0)
    ctx->pc = 0x15c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949304)));
label_15c3a4:
    // 0x15c3a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15c3a8:
    // 0x15c3a8: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x15c3a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_15c3ac:
    // 0x15c3ac: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x15c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_15c3b0:
    // 0x15c3b0: 0x40f809  jalr        $v0
label_15c3b4:
    if (ctx->pc == 0x15C3B4u) {
        ctx->pc = 0x15C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3B0u;
        // 0x15c3b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3B8u;
        goto label_15c3b8;
    }
    ctx->pc = 0x15C3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C3B8u);
        ctx->pc = 0x15C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3B0u;
        // 0x15c3b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C3B0u, 0x15C3B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C3B8u;
label_15c3b8:
    // 0x15c3b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15c3bc:
    // 0x15c3bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c3c0:
    // 0x15c3c0: 0xc0517d8  jal         func_145F60
label_15c3c4:
    if (ctx->pc == 0x15C3C4u) {
        ctx->pc = 0x15C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3C0u;
        // 0x15c3c4: 0x8c64b734  lw          $a0, -0x48CC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3C8u;
        goto label_15c3c8;
    }
    ctx->pc = 0x15C3C0u;
    SET_GPR_U32(ctx, 31, 0x15C3C8u);
    ctx->pc = 0x15C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C3C0u;
    // 0x15c3c4: 0x8c64b734  lw          $a0, -0x48CC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15C3C0u, 0x15C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3C8u;
label_15c3c8:
    // 0x15c3c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15c3cc:
    // 0x15c3cc: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x15c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_15c3d0:
    // 0x15c3d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15c3d4:
    // 0x15c3d4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x15c3d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_15c3d8:
    // 0x15c3d8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15c3dc:
    // 0x15c3dc: 0x40f809  jalr        $v0
label_15c3e0:
    if (ctx->pc == 0x15C3E0u) {
        ctx->pc = 0x15C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3DCu;
        // 0x15c3e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C3E4u;
        goto label_15c3e4;
    }
    ctx->pc = 0x15C3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C3E4u);
        ctx->pc = 0x15C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3DCu;
        // 0x15c3e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C3DCu, 0x15C3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C3E4u;
label_15c3e4:
    // 0x15c3e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15c3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15c3e8:
    // 0x15c3e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15c3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15c3ec:
    // 0x15c3ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c3ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15c3f0:
    // 0x15c3f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15c3f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15c3f4:
    // 0x15c3f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15c3f8:
    // 0x15c3f8: 0x3e00008  jr          $ra
label_15c3fc:
    if (ctx->pc == 0x15C3FCu) {
        ctx->pc = 0x15C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3F8u;
        // 0x15c3fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C400u;
        goto label_fallthrough_0x15c3f8;
    }
    ctx->pc = 0x15C3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3F8u;
        // 0x15c3fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15c3f8:
    ctx->pc = 0x15C400u;
}
