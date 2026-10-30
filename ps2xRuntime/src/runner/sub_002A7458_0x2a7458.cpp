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

// Function: sub_002A7458
// Address: 0x2a7458 - 0x2a7538
void sub_002A7458_0x2a7458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7458_0x2a7458");
#endif

    switch (ctx->pc) {
        case 0x2a74a0u: goto label_2a74a0;
        case 0x2a74fcu: goto label_2a74fc;
        default: break;
    }

    ctx->pc = 0x2a7458u;

    // 0x2a7458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a745c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a745cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a7460: 0x24429440  addiu       $v0, $v0, -0x6BC0
    ctx->pc = 0x2a7460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x2a7464: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a7464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2a7468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a7468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a746c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a746cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a7470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a7474: 0x24580008  addiu       $t8, $v0, 0x8
    ctx->pc = 0x2a7474u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a7478: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x2a7478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2a747c: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x2a747cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2a7480: 0x24639e40  addiu       $v1, $v1, -0x61C0
    ctx->pc = 0x2a7480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942272));
    // 0x2a7484: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2a7484u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7488: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2a7488u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a748c: 0x3c0d006f  lui         $t5, 0x6F
    ctx->pc = 0x2a748cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)111 << 16));
    // 0x2a7490: 0x3c19006f  lui         $t9, 0x6F
    ctx->pc = 0x2a7490u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)111 << 16));
    // 0x2a7494: 0x3c0c0001  lui         $t4, 0x1
    ctx->pc = 0x2a7494u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1 << 16));
    // 0x2a7498: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a7498u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a749c: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x2a749cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
label_2a74a0:
    // 0x2a74a0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2a74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a74a4: 0x8da9bd30  lw          $t1, -0x42D0($t5)
    ctx->pc = 0x2a74a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294950192)));
    // 0x2a74a8: 0x14490016  bne         $v0, $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A74A8u;
    {
        const bool branch_taken_0x2a74a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x2A74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74A8u;
        // 0x2a74ac: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a74a8) {
            ctx->pc = 0x2A7504u;
            goto label_2a7504;
        }
    }
    ctx->pc = 0x2A74B0u;
    // 0x2a74b0: 0x10a90002  beq         $a1, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A74B0u;
    {
        const bool branch_taken_0x2a74b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        ctx->pc = 0x2A74B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74B0u;
        // 0x2a74b4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a74b0) {
            ctx->pc = 0x2A74BCu;
            goto label_2a74bc;
        }
    }
    ctx->pc = 0x2A74B8u;
    // 0x2a74b8: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x2a74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
label_2a74bc:
    // 0x2a74bc: 0x8da2bd30  lw          $v0, -0x42D0($t5)
    ctx->pc = 0x2a74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294950192)));
    // 0x2a74c0: 0x10c20002  beq         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A74C0u;
    {
        const bool branch_taken_0x2a74c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74C0u;
        // 0x2a74c4: 0x1781021  addu        $v0, $t3, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a74c0) {
            ctx->pc = 0x2A74CCu;
            goto label_2a74cc;
        }
    }
    ctx->pc = 0x2A74C8u;
    // 0x2a74c8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2a74c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_2a74cc:
    // 0x2a74cc: 0x8da2bd30  lw          $v0, -0x42D0($t5)
    ctx->pc = 0x2a74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294950192)));
    // 0x2a74d0: 0x10e20002  beq         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A74D0u;
    {
        const bool branch_taken_0x2a74d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74D0u;
        // 0x2a74d4: 0x1701021  addu        $v0, $t3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a74d0) {
            ctx->pc = 0x2A74DCu;
            goto label_2a74dc;
        }
    }
    ctx->pc = 0x2A74D8u;
    // 0x2a74d8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2a74d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_2a74dc:
    // 0x2a74dc: 0x8da2bd30  lw          $v0, -0x42D0($t5)
    ctx->pc = 0x2a74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294950192)));
    // 0x2a74e0: 0x11020002  beq         $t0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A74E0u;
    {
        const bool branch_taken_0x2a74e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74E0u;
        // 0x2a74e4: 0x1711021  addu        $v0, $t3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a74e0) {
            ctx->pc = 0x2A74ECu;
            goto label_2a74ec;
        }
    }
    ctx->pc = 0x2A74E8u;
    // 0x2a74e8: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2a74e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_2a74ec:
    // 0x2a74ec: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2a74ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a74f0: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x2a74f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74f4: 0xc0a9cfc  jal         func_2A73F0
    ctx->pc = 0x2A74F4u;
    SET_GPR_U32(ctx, 31, 0x2A74FCu);
    ctx->pc = 0x2A74F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A74F4u;
    // 0x2a74f8: 0xa72e9f40  sh          $t6, -0x60C0($t9) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 25), 4294942528), (uint16_t)GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A73F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A73F0u, 0x2A74F4u, 0x2A74FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A74FCu;
label_2a74fc:
    // 0x2a74fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A74FCu;
    {
        const bool branch_taken_0x2a74fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74FCu;
        // 0x2a7500: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a74fc) {
            ctx->pc = 0x2A7524u;
            goto label_2a7524;
        }
    }
    ctx->pc = 0x2A7504u;
label_2a7504:
    // 0x2a7504: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a7504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a7508: 0x27403  sra         $t6, $v0, 16
    ctx->pc = 0x2a7508u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2a750c: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x2a750cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x2a7510: 0x256b0014  addiu       $t3, $t3, 0x14
    ctx->pc = 0x2a7510u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x2a7514: 0x29c20080  slti        $v0, $t6, 0x80
    ctx->pc = 0x2a7514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2a7518: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2A7518u;
    {
        const bool branch_taken_0x2a7518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7518u;
        // 0x2a751c: 0x254a0014  addiu       $t2, $t2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7518) {
            ctx->pc = 0x2A74A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a74a0;
        }
    }
    ctx->pc = 0x2A7520u;
    // 0x2a7520: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a7520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a7524:
    // 0x2a7524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a7524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a752c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A752Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A752Cu;
        // 0x2a7530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A752Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7534u;
    // 0x2a7534: 0x0  nop
    ctx->pc = 0x2a7534u;
    // NOP
    ctx->pc = 0x2a7538u;
}
