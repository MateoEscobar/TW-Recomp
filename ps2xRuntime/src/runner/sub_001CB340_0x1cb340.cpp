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

// Function: sub_001CB340
// Address: 0x1cb340 - 0x1cb398
void sub_001CB340_0x1cb340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB340_0x1cb340");
#endif

    switch (ctx->pc) {
        case 0x1cb340u: goto label_1cb340;
        case 0x1cb344u: goto label_1cb344;
        case 0x1cb348u: goto label_1cb348;
        case 0x1cb34cu: goto label_1cb34c;
        case 0x1cb350u: goto label_1cb350;
        case 0x1cb354u: goto label_1cb354;
        case 0x1cb358u: goto label_1cb358;
        case 0x1cb35cu: goto label_1cb35c;
        case 0x1cb360u: goto label_1cb360;
        case 0x1cb364u: goto label_1cb364;
        case 0x1cb368u: goto label_1cb368;
        case 0x1cb36cu: goto label_1cb36c;
        case 0x1cb370u: goto label_1cb370;
        case 0x1cb374u: goto label_1cb374;
        case 0x1cb378u: goto label_1cb378;
        case 0x1cb37cu: goto label_1cb37c;
        case 0x1cb380u: goto label_1cb380;
        case 0x1cb384u: goto label_1cb384;
        case 0x1cb388u: goto label_1cb388;
        case 0x1cb38cu: goto label_1cb38c;
        case 0x1cb390u: goto label_1cb390;
        case 0x1cb394u: goto label_1cb394;
        default: break;
    }

    ctx->pc = 0x1cb340u;

label_1cb340:
    // 0x1cb340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cb344:
    // 0x1cb344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb348:
    // 0x1cb348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cb348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cb34c:
    // 0x1cb34c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cb350:
    // 0x1cb350: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
label_1cb354:
    if (ctx->pc == 0x1CB354u) {
        ctx->pc = 0x1CB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB350u;
        // 0x1cb354: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB358u;
        goto label_1cb358;
    }
    ctx->pc = 0x1CB350u;
    {
        const bool branch_taken_0x1cb350 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB350u;
        // 0x1cb354: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb350) {
            ctx->pc = 0x1CB388u;
            goto label_1cb388;
        }
    }
    ctx->pc = 0x1CB358u;
label_1cb358:
    // 0x1cb358: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1cb358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_1cb35c:
    // 0x1cb35c: 0xc072c64  jal         func_1CB190
label_1cb360:
    if (ctx->pc == 0x1CB360u) {
        ctx->pc = 0x1CB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB35Cu;
        // 0x1cb360: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB364u;
        goto label_1cb364;
    }
    ctx->pc = 0x1CB35Cu;
    SET_GPR_U32(ctx, 31, 0x1CB364u);
    ctx->pc = 0x1CB360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB35Cu;
    // 0x1cb360: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB190u, 0x1CB35Cu, 0x1CB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB364u;
label_1cb364:
    // 0x1cb364: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cb364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cb368:
    // 0x1cb368: 0x8c66b8b8  lw          $a2, -0x4748($v1)
    ctx->pc = 0x1cb368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_1cb36c:
    // 0x1cb36c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1cb36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cb370:
    // 0x1cb370: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x1cb370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1cb374:
    // 0x1cb374: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1cb374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1cb378:
    // 0x1cb378: 0x40f809  jalr        $v0
label_1cb37c:
    if (ctx->pc == 0x1CB37Cu) {
        ctx->pc = 0x1CB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB378u;
        // 0x1cb37c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB380u;
        goto label_1cb380;
    }
    ctx->pc = 0x1CB378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB380u);
        ctx->pc = 0x1CB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB378u;
        // 0x1cb37c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB378u, 0x1CB380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CB380u;
label_1cb380:
    // 0x1cb380: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1cb380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_1cb384:
    // 0x1cb384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb388:
    // 0x1cb388: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cb388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb38c:
    // 0x1cb38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb390:
    // 0x1cb390: 0x3e00008  jr          $ra
label_1cb394:
    if (ctx->pc == 0x1CB394u) {
        ctx->pc = 0x1CB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB390u;
        // 0x1cb394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB398u;
        goto label_fallthrough_0x1cb390;
    }
    ctx->pc = 0x1CB390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB390u;
        // 0x1cb394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cb390:
    ctx->pc = 0x1CB398u;
}
