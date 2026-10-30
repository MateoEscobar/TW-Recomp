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

// Function: sub_004DD468
// Address: 0x4dd468 - 0x4dd4f8
void sub_004DD468_0x4dd468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD468_0x4dd468");
#endif

    switch (ctx->pc) {
        case 0x4dd468u: goto label_4dd468;
        case 0x4dd46cu: goto label_4dd46c;
        case 0x4dd470u: goto label_4dd470;
        case 0x4dd474u: goto label_4dd474;
        case 0x4dd478u: goto label_4dd478;
        case 0x4dd47cu: goto label_4dd47c;
        case 0x4dd480u: goto label_4dd480;
        case 0x4dd484u: goto label_4dd484;
        case 0x4dd488u: goto label_4dd488;
        case 0x4dd48cu: goto label_4dd48c;
        case 0x4dd490u: goto label_4dd490;
        case 0x4dd494u: goto label_4dd494;
        case 0x4dd498u: goto label_4dd498;
        case 0x4dd49cu: goto label_4dd49c;
        case 0x4dd4a0u: goto label_4dd4a0;
        case 0x4dd4a4u: goto label_4dd4a4;
        case 0x4dd4a8u: goto label_4dd4a8;
        case 0x4dd4acu: goto label_4dd4ac;
        case 0x4dd4b0u: goto label_4dd4b0;
        case 0x4dd4b4u: goto label_4dd4b4;
        case 0x4dd4b8u: goto label_4dd4b8;
        case 0x4dd4bcu: goto label_4dd4bc;
        case 0x4dd4c0u: goto label_4dd4c0;
        case 0x4dd4c4u: goto label_4dd4c4;
        case 0x4dd4c8u: goto label_4dd4c8;
        case 0x4dd4ccu: goto label_4dd4cc;
        case 0x4dd4d0u: goto label_4dd4d0;
        case 0x4dd4d4u: goto label_4dd4d4;
        case 0x4dd4d8u: goto label_4dd4d8;
        case 0x4dd4dcu: goto label_4dd4dc;
        case 0x4dd4e0u: goto label_4dd4e0;
        case 0x4dd4e4u: goto label_4dd4e4;
        case 0x4dd4e8u: goto label_4dd4e8;
        case 0x4dd4ecu: goto label_4dd4ec;
        case 0x4dd4f0u: goto label_4dd4f0;
        case 0x4dd4f4u: goto label_4dd4f4;
        default: break;
    }

    ctx->pc = 0x4dd468u;

label_4dd468:
    // 0x4dd468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dd468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dd46c:
    // 0x4dd46c: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x4dd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd470:
    // 0x4dd470: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4dd470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4dd474:
    // 0x4dd474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dd474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dd478:
    // 0x4dd478: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dd478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dd47c:
    // 0x4dd47c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4dd480:
    if (ctx->pc == 0x4DD480u) {
        ctx->pc = 0x4DD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD47Cu;
        // 0x4dd480: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD484u;
        goto label_4dd484;
    }
    ctx->pc = 0x4DD47Cu;
    {
        const bool branch_taken_0x4dd47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd47c) {
            ctx->pc = 0x4DD480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD47Cu;
            // 0x4dd480: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD484u;
            goto label_4dd484;
        }
    }
    ctx->pc = 0x4DD484u;
label_4dd484:
    // 0x4dd484: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4dd484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4dd488:
    // 0x4dd488: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4dd48c:
    if (ctx->pc == 0x4DD48Cu) {
        ctx->pc = 0x4DD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD488u;
        // 0x4dd48c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD490u;
        goto label_4dd490;
    }
    ctx->pc = 0x4DD488u;
    {
        const bool branch_taken_0x4dd488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD488u;
        // 0x4dd48c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd488) {
            ctx->pc = 0x4DD4B4u;
            goto label_4dd4b4;
        }
    }
    ctx->pc = 0x4DD490u;
label_4dd490:
    // 0x4dd490: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4dd490u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4dd494:
    // 0x4dd494: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4dd494u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4dd498:
    // 0x4dd498: 0x24c6e600  addiu       $a2, $a2, -0x1A00
    ctx->pc = 0x4dd498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960640));
label_4dd49c:
    // 0x4dd49c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4dd49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd4a0:
    // 0x4dd4a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dd4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dd4a4:
    // 0x4dd4a4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4dd4a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4dd4a8:
    // 0x4dd4a8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4dd4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4dd4ac:
    // 0x4dd4ac: 0x60f809  jalr        $v1
label_4dd4b0:
    if (ctx->pc == 0x4DD4B0u) {
        ctx->pc = 0x4DD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD4ACu;
        // 0x4dd4b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD4B4u;
        goto label_4dd4b4;
    }
    ctx->pc = 0x4DD4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DD4B4u);
        ctx->pc = 0x4DD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD4ACu;
        // 0x4dd4b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD4ACu, 0x4DD4B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DD4B4u;
label_4dd4b4:
    // 0x4dd4b4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x4dd4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4dd4b8:
    // 0x4dd4b8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4dd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4dd4bc:
    // 0x4dd4bc: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x4dd4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd4c0:
    // 0x4dd4c0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x4dd4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4dd4c4:
    // 0x4dd4c4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4dd4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_4dd4c8:
    // 0x4dd4c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4dd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4dd4cc:
    // 0x4dd4cc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4dd4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4dd4d0:
    // 0x4dd4d0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_4dd4d4:
    if (ctx->pc == 0x4DD4D4u) {
        ctx->pc = 0x4DD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD4D0u;
        // 0x4dd4d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD4D8u;
        goto label_4dd4d8;
    }
    ctx->pc = 0x4DD4D0u;
    {
        const bool branch_taken_0x4dd4d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd4d0) {
            ctx->pc = 0x4DD4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD4D0u;
            // 0x4dd4d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD4D8u;
            goto label_4dd4d8;
        }
    }
    ctx->pc = 0x4DD4D8u;
label_4dd4d8:
    // 0x4dd4d8: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4dd4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4dd4dc:
    // 0x4dd4dc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4dd4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4dd4e0:
    // 0x4dd4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dd4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd4e4:
    // 0x4dd4e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4dd4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4dd4e8:
    // 0x4dd4e8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4dd4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_4dd4ec:
    // 0x4dd4ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4dd4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd4f0:
    // 0x4dd4f0: 0x3e00008  jr          $ra
label_4dd4f4:
    if (ctx->pc == 0x4DD4F4u) {
        ctx->pc = 0x4DD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD4F0u;
        // 0x4dd4f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD4F8u;
        goto label_fallthrough_0x4dd4f0;
    }
    ctx->pc = 0x4DD4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD4F0u;
        // 0x4dd4f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dd4f0:
    ctx->pc = 0x4DD4F8u;
}
