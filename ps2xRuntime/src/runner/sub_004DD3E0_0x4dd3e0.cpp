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

// Function: sub_004DD3E0
// Address: 0x4dd3e0 - 0x4dd468
void sub_004DD3E0_0x4dd3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD3E0_0x4dd3e0");
#endif

    switch (ctx->pc) {
        case 0x4dd3e0u: goto label_4dd3e0;
        case 0x4dd3e4u: goto label_4dd3e4;
        case 0x4dd3e8u: goto label_4dd3e8;
        case 0x4dd3ecu: goto label_4dd3ec;
        case 0x4dd3f0u: goto label_4dd3f0;
        case 0x4dd3f4u: goto label_4dd3f4;
        case 0x4dd3f8u: goto label_4dd3f8;
        case 0x4dd3fcu: goto label_4dd3fc;
        case 0x4dd400u: goto label_4dd400;
        case 0x4dd404u: goto label_4dd404;
        case 0x4dd408u: goto label_4dd408;
        case 0x4dd40cu: goto label_4dd40c;
        case 0x4dd410u: goto label_4dd410;
        case 0x4dd414u: goto label_4dd414;
        case 0x4dd418u: goto label_4dd418;
        case 0x4dd41cu: goto label_4dd41c;
        case 0x4dd420u: goto label_4dd420;
        case 0x4dd424u: goto label_4dd424;
        case 0x4dd428u: goto label_4dd428;
        case 0x4dd42cu: goto label_4dd42c;
        case 0x4dd430u: goto label_4dd430;
        case 0x4dd434u: goto label_4dd434;
        case 0x4dd438u: goto label_4dd438;
        case 0x4dd43cu: goto label_4dd43c;
        case 0x4dd440u: goto label_4dd440;
        case 0x4dd444u: goto label_4dd444;
        case 0x4dd448u: goto label_4dd448;
        case 0x4dd44cu: goto label_4dd44c;
        case 0x4dd450u: goto label_4dd450;
        case 0x4dd454u: goto label_4dd454;
        case 0x4dd458u: goto label_4dd458;
        case 0x4dd45cu: goto label_4dd45c;
        case 0x4dd460u: goto label_4dd460;
        case 0x4dd464u: goto label_4dd464;
        default: break;
    }

    ctx->pc = 0x4dd3e0u;

label_4dd3e0:
    // 0x4dd3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dd3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dd3e4:
    // 0x4dd3e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4dd3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4dd3e8:
    // 0x4dd3e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dd3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dd3ec:
    // 0x4dd3ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dd3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dd3f0:
    // 0x4dd3f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dd3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dd3f4:
    // 0x4dd3f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4dd3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4dd3f8:
    // 0x4dd3f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_4dd3fc:
    if (ctx->pc == 0x4DD3FCu) {
        ctx->pc = 0x4DD3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD3F8u;
        // 0x4dd3fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD400u;
        goto label_4dd400;
    }
    ctx->pc = 0x4DD3F8u;
    {
        const bool branch_taken_0x4dd3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD3F8u;
        // 0x4dd3fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd3f8) {
            ctx->pc = 0x4DD440u;
            goto label_4dd440;
        }
    }
    ctx->pc = 0x4DD400u;
label_4dd400:
    // 0x4dd400: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x4dd400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4dd404:
    // 0x4dd404: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x4dd404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4dd408:
    // 0x4dd408: 0xc1374d0  jal         func_4DD340
label_4dd40c:
    if (ctx->pc == 0x4DD40Cu) {
        ctx->pc = 0x4DD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD408u;
        // 0x4dd40c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD410u;
        goto label_4dd410;
    }
    ctx->pc = 0x4DD408u;
    SET_GPR_U32(ctx, 31, 0x4DD410u);
    ctx->pc = 0x4DD40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD408u;
    // 0x4dd40c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD340u, 0x4DD408u, 0x4DD410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD410u;
label_4dd410:
    // 0x4dd410: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4dd410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4dd414:
    // 0x4dd414: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4dd418:
    if (ctx->pc == 0x4DD418u) {
        ctx->pc = 0x4DD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD414u;
        // 0x4dd418: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD41Cu;
        goto label_4dd41c;
    }
    ctx->pc = 0x4DD414u;
    {
        const bool branch_taken_0x4dd414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD414u;
        // 0x4dd418: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd414) {
            ctx->pc = 0x4DD440u;
            goto label_4dd440;
        }
    }
    ctx->pc = 0x4DD41Cu;
label_4dd41c:
    // 0x4dd41c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4dd41cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4dd420:
    // 0x4dd420: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4dd420u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4dd424:
    // 0x4dd424: 0x24c6e600  addiu       $a2, $a2, -0x1A00
    ctx->pc = 0x4dd424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960640));
label_4dd428:
    // 0x4dd428: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4dd428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd42c:
    // 0x4dd42c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dd42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dd430:
    // 0x4dd430: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4dd430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4dd434:
    // 0x4dd434: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4dd434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4dd438:
    // 0x4dd438: 0x60f809  jalr        $v1
label_4dd43c:
    if (ctx->pc == 0x4DD43Cu) {
        ctx->pc = 0x4DD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD438u;
        // 0x4dd43c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD440u;
        goto label_4dd440;
    }
    ctx->pc = 0x4DD438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DD440u);
        ctx->pc = 0x4DD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD438u;
        // 0x4dd43c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD438u, 0x4DD440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DD440u;
label_4dd440:
    // 0x4dd440: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4dd440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_4dd444:
    // 0x4dd444: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4dd448:
    if (ctx->pc == 0x4DD448u) {
        ctx->pc = 0x4DD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD444u;
        // 0x4dd448: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD44Cu;
        goto label_4dd44c;
    }
    ctx->pc = 0x4DD444u;
    {
        const bool branch_taken_0x4dd444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd444) {
            ctx->pc = 0x4DD448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD444u;
            // 0x4dd448: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD458u;
            goto label_4dd458;
        }
    }
    ctx->pc = 0x4DD44Cu;
label_4dd44c:
    // 0x4dd44c: 0xc10b208  jal         func_42C820
label_4dd450:
    if (ctx->pc == 0x4DD450u) {
        ctx->pc = 0x4DD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD44Cu;
        // 0x4dd450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD454u;
        goto label_4dd454;
    }
    ctx->pc = 0x4DD44Cu;
    SET_GPR_U32(ctx, 31, 0x4DD454u);
    ctx->pc = 0x4DD450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD44Cu;
    // 0x4dd450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4DD44Cu, 0x4DD454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD454u;
label_4dd454:
    // 0x4dd454: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4dd454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd458:
    // 0x4dd458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dd458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd45c:
    // 0x4dd45c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dd45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd460:
    // 0x4dd460: 0x3e00008  jr          $ra
label_4dd464:
    if (ctx->pc == 0x4DD464u) {
        ctx->pc = 0x4DD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD460u;
        // 0x4dd464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD468u;
        goto label_fallthrough_0x4dd460;
    }
    ctx->pc = 0x4DD460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD460u;
        // 0x4dd464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dd460:
    ctx->pc = 0x4DD468u;
}
