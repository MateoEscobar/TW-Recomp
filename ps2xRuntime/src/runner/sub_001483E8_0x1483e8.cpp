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

// Function: sub_001483E8
// Address: 0x1483e8 - 0x148460
void sub_001483E8_0x1483e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001483E8_0x1483e8");
#endif

    switch (ctx->pc) {
        case 0x1483e8u: goto label_1483e8;
        case 0x1483ecu: goto label_1483ec;
        case 0x1483f0u: goto label_1483f0;
        case 0x1483f4u: goto label_1483f4;
        case 0x1483f8u: goto label_1483f8;
        case 0x1483fcu: goto label_1483fc;
        case 0x148400u: goto label_148400;
        case 0x148404u: goto label_148404;
        case 0x148408u: goto label_148408;
        case 0x14840cu: goto label_14840c;
        case 0x148410u: goto label_148410;
        case 0x148414u: goto label_148414;
        case 0x148418u: goto label_148418;
        case 0x14841cu: goto label_14841c;
        case 0x148420u: goto label_148420;
        case 0x148424u: goto label_148424;
        case 0x148428u: goto label_148428;
        case 0x14842cu: goto label_14842c;
        case 0x148430u: goto label_148430;
        case 0x148434u: goto label_148434;
        case 0x148438u: goto label_148438;
        case 0x14843cu: goto label_14843c;
        case 0x148440u: goto label_148440;
        case 0x148444u: goto label_148444;
        case 0x148448u: goto label_148448;
        case 0x14844cu: goto label_14844c;
        case 0x148450u: goto label_148450;
        case 0x148454u: goto label_148454;
        case 0x148458u: goto label_148458;
        case 0x14845cu: goto label_14845c;
        default: break;
    }

    ctx->pc = 0x1483e8u;

label_1483e8:
    // 0x1483e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1483e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1483ec:
    // 0x1483ec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1483ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1483f0:
    // 0x1483f0: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x1483f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1483f4:
    // 0x1483f4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1483f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1483f8:
    // 0x1483f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1483f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1483fc:
    // 0x1483fc: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1483fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_148400:
    // 0x148400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_148404:
    // 0x148404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148408:
    // 0x148408: 0x24a5a0a0  addiu       $a1, $a1, -0x5F60
    ctx->pc = 0x148408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942880));
label_14840c:
    // 0x14840c: 0x2508a0b8  addiu       $t0, $t0, -0x5F48
    ctx->pc = 0x14840cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942904));
label_148410:
    // 0x148410: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x148410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_148414:
    // 0x148414: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x148414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_148418:
    // 0x148418: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x148418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_14841c:
    // 0x14841c: 0x2409002b  addiu       $t1, $zero, 0x2B
    ctx->pc = 0x14841cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_148420:
    // 0x148420: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x148420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_148424:
    // 0x148424: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x148424u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148428:
    // 0x148428: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x148428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_14842c:
    // 0x14842c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x14842cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_148430:
    // 0x148430: 0x40f809  jalr        $v0
label_148434:
    if (ctx->pc == 0x148434u) {
        ctx->pc = 0x148434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148430u;
        // 0x148434: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148438u;
        goto label_148438;
    }
    ctx->pc = 0x148430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148438u);
        ctx->pc = 0x148434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148430u;
        // 0x148434: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148430u, 0x148438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148438u;
label_148438:
    // 0x148438: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_14843c:
    if (ctx->pc == 0x14843Cu) {
        ctx->pc = 0x14843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148438u;
        // 0x14843c: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148440u;
        goto label_148440;
    }
    ctx->pc = 0x148438u;
    {
        const bool branch_taken_0x148438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148438) {
            ctx->pc = 0x14843Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148438u;
            // 0x14843c: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14844Cu;
            goto label_14844c;
        }
    }
    ctx->pc = 0x148440u;
label_148440:
    // 0x148440: 0xc052248  jal         func_148920
label_148444:
    if (ctx->pc == 0x148444u) {
        ctx->pc = 0x148444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148440u;
        // 0x148444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148448u;
        goto label_148448;
    }
    ctx->pc = 0x148440u;
    SET_GPR_U32(ctx, 31, 0x148448u);
    ctx->pc = 0x148444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148440u;
    // 0x148444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148920u, 0x148440u, 0x148448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148448u;
label_148448:
    // 0x148448: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x148448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_14844c:
    // 0x14844c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14844cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_148450:
    // 0x148450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148454:
    // 0x148454: 0x3e00008  jr          $ra
label_148458:
    if (ctx->pc == 0x148458u) {
        ctx->pc = 0x148458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148454u;
        // 0x148458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14845Cu;
        goto label_14845c;
    }
    ctx->pc = 0x148454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148454u;
        // 0x148458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14845Cu;
label_14845c:
    // 0x14845c: 0x0  nop
    ctx->pc = 0x14845cu;
    // NOP
    ctx->pc = 0x148460u;
}
