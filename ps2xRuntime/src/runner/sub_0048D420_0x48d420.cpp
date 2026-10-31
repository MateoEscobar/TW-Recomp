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

// Function: sub_0048D420
// Address: 0x48d420 - 0x48d580
void sub_0048D420_0x48d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D420_0x48d420");
#endif

    switch (ctx->pc) {
        case 0x48d468u: goto label_48d468;
        case 0x48d558u: goto label_48d558;
        default: break;
    }

    ctx->pc = 0x48d420u;

    // 0x48d420: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x48d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48d424: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48D424u;
    {
        const bool branch_taken_0x48d424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D424u;
        // 0x48d428: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d424) {
            ctx->pc = 0x48D438u;
            goto label_48d438;
        }
    }
    ctx->pc = 0x48D42Cu;
    // 0x48d42c: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x48d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d430: 0x624823  subu        $t1, $v1, $v0
    ctx->pc = 0x48d430u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48d434: 0x0  nop
    ctx->pc = 0x48d434u;
    // NOP
label_48d438:
    // 0x48d438: 0x1120003c  beqz        $t1, . + 4 + (0x3C << 2)
    ctx->pc = 0x48D438u;
    {
        const bool branch_taken_0x48d438 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D438u;
        // 0x48d43c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d438) {
            ctx->pc = 0x48D52Cu;
            goto label_48d52c;
        }
    }
    ctx->pc = 0x48D440u;
    // 0x48d440: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48d440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48d444: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48d444u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x48d448: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48d448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48d44c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x48D44Cu;
    {
        const bool branch_taken_0x48d44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D44Cu;
        // 0x48d450: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d44c) {
            ctx->pc = 0x48D488u;
            goto label_48d488;
        }
    }
    ctx->pc = 0x48D454u;
    // 0x48d454: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d458: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48d458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48d45c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48d45cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48d460: 0xf  sync
    ctx->pc = 0x48d460u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d464: 0x40f  sync.p
    ctx->pc = 0x48d464u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48d468:
    // 0x48d468: 0x0  nop
    ctx->pc = 0x48d468u;
    // NOP
    // 0x48d46c: 0x0  nop
    ctx->pc = 0x48d46cu;
    // NOP
    // 0x48d470: 0x0  nop
    ctx->pc = 0x48d470u;
    // NOP
    // 0x48d474: 0x0  nop
    ctx->pc = 0x48d474u;
    // NOP
    // 0x48d478: 0x0  nop
    ctx->pc = 0x48d478u;
    // NOP
    // 0x48d47c: 0x0  nop
    ctx->pc = 0x48d47cu;
    // NOP
    // 0x48d480: 0x4100fff9  bc0f        . + 4 + (-0x7 << 2)
    ctx->pc = 0x48D480u;
    {
        const bool branch_taken_0x48d480 = (false);
        if (branch_taken_0x48d480) {
            ctx->pc = 0x48D468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d468;
        }
    }
    ctx->pc = 0x48D488u;
label_48d488:
    // 0x48d488: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48d48c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x48d48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d490: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x48d490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x48d494: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x48d494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x48d498: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x48d498u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x48d49c: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x48d49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x48d4a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48d4a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x48d4a8: 0x8f8889a8  lw          $t0, -0x7658($gp)
    ctx->pc = 0x48d4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d4ac: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x48d4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x48d4b0: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x48d4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x48d4b4: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x48d4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x48d4b8: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x48d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x48d4bc: 0x8f8789ac  lw          $a3, -0x7654($gp)
    ctx->pc = 0x48d4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48d4c0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x48d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x48d4c4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x48d4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x48d4c8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x48d4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x48d4cc: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x48d4ccu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x48d4d0: 0xf  sync
    ctx->pc = 0x48d4d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d4d4: 0x40f  sync.p
    ctx->pc = 0x48d4d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d4d8: 0x8f848994  lw          $a0, -0x766C($gp)
    ctx->pc = 0x48d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936980)));
    // 0x48d4dc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x48D4DCu;
    {
        const bool branch_taken_0x48d4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D4DCu;
        // 0x48d4e0: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d4dc) {
            ctx->pc = 0x48D510u;
            goto label_48d510;
        }
    }
    ctx->pc = 0x48D4E4u;
    // 0x48d4e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48d4e8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x48d4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x48d4ec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x48d4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48d4f0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48D4F0u;
    {
        const bool branch_taken_0x48d4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x48D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D4F0u;
        // 0x48d4f4: 0x8f8289ac  lw          $v0, -0x7654($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d4f0) {
            ctx->pc = 0x48D514u;
            goto label_48d514;
        }
    }
    ctx->pc = 0x48D4F8u;
    // 0x48d4f8: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x48d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x48d4fc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x48d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x48d500: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x48d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x48d504: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48d504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48d508: 0xaf828994  sw          $v0, -0x766C($gp)
    ctx->pc = 0x48d508u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 2));
    // 0x48d50c: 0x0  nop
    ctx->pc = 0x48d50cu;
    // NOP
label_48d510:
    // 0x48d510: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x48d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
label_48d514:
    // 0x48d514: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x48d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48d518: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x48d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x48d51c: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x48d51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x48d520: 0xaf8289ac  sw          $v0, -0x7654($gp)
    ctx->pc = 0x48d520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 2));
    // 0x48d524: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48d524u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48d528: 0xaf8389a8  sw          $v1, -0x7658($gp)
    ctx->pc = 0x48d528u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 3));
label_48d52c:
    // 0x48d52c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48d530: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48d530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48d534: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48d534u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x48d538: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48d538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48d53c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x48D53Cu;
    {
        const bool branch_taken_0x48d53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D53Cu;
        // 0x48d540: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d53c) {
            ctx->pc = 0x48D578u;
            goto label_48d578;
        }
    }
    ctx->pc = 0x48D544u;
    // 0x48d544: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d548: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48d548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48d54c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48d54cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48d550: 0xf  sync
    ctx->pc = 0x48d550u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d554: 0x40f  sync.p
    ctx->pc = 0x48d554u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48d558:
    // 0x48d558: 0x0  nop
    ctx->pc = 0x48d558u;
    // NOP
    // 0x48d55c: 0x0  nop
    ctx->pc = 0x48d55cu;
    // NOP
    // 0x48d560: 0x0  nop
    ctx->pc = 0x48d560u;
    // NOP
    // 0x48d564: 0x0  nop
    ctx->pc = 0x48d564u;
    // NOP
    // 0x48d568: 0x0  nop
    ctx->pc = 0x48d568u;
    // NOP
    // 0x48d56c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x48D56Cu;
    {
        const bool branch_taken_0x48d56c = (false);
        if (branch_taken_0x48d56c) {
            ctx->pc = 0x48D558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d558;
        }
    }
    ctx->pc = 0x48D574u;
    // 0x48d574: 0x0  nop
    ctx->pc = 0x48d574u;
    // NOP
label_48d578:
    // 0x48d578: 0x3e00008  jr          $ra
    ctx->pc = 0x48D578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D580u;
}
