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

// Function: sub_00431818
// Address: 0x431818 - 0x4318f8
void sub_00431818_0x431818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431818_0x431818");
#endif

    switch (ctx->pc) {
        case 0x431840u: goto label_431840;
        case 0x431850u: goto label_431850;
        case 0x431880u: goto label_431880;
        default: break;
    }

    ctx->pc = 0x431818u;

    // 0x431818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x431818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43181c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x431820: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x431820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x431824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x431824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x431828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43182c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x43182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x431830: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x431830u;
    {
        const bool branch_taken_0x431830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431830u;
        // 0x431834: 0x263001d8  addiu       $s0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431830) {
            ctx->pc = 0x431840u;
            goto label_431840;
        }
    }
    ctx->pc = 0x431838u;
    // 0x431838: 0xc10c63e  jal         func_4318F8
    ctx->pc = 0x431838u;
    SET_GPR_U32(ctx, 31, 0x431840u);
    ctx->pc = 0x4318F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4318F8u, 0x431838u, 0x431840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431840u;
label_431840:
    // 0x431840: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x431840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x431844: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x431844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x431848: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x431848u;
    {
        const bool branch_taken_0x431848 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x43184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431848u;
        // 0x43184c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431848) {
            ctx->pc = 0x431868u;
            goto label_431868;
        }
    }
    ctx->pc = 0x431850u;
label_431850:
    // 0x431850: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x431850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x431854: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x431854u;
    {
        const bool branch_taken_0x431854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431854u;
        // 0x431858: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431854) {
            ctx->pc = 0x4318A0u;
            goto label_4318a0;
        }
    }
    ctx->pc = 0x43185Cu;
    // 0x43185c: 0x0  nop
    ctx->pc = 0x43185cu;
    // NOP
    // 0x431860: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x431860u;
    {
        const bool branch_taken_0x431860 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x431864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431860u;
        // 0x431864: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431860) {
            ctx->pc = 0x431850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431850;
        }
    }
    ctx->pc = 0x431868u;
label_431868:
    // 0x431868: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x431868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x43186c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x43186Cu;
    {
        const bool branch_taken_0x43186c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43186c) {
            ctx->pc = 0x431870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43186Cu;
            // 0x431870: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431840;
        }
    }
    ctx->pc = 0x431874u;
    // 0x431874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431878: 0xc10c5e8  jal         func_4317A0
    ctx->pc = 0x431878u;
    SET_GPR_U32(ctx, 31, 0x431880u);
    ctx->pc = 0x43187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431878u;
    // 0x43187c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4317A0u, 0x431878u, 0x431880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431880u;
label_431880:
    // 0x431880: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x431880u;
    {
        const bool branch_taken_0x431880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431880u;
        // 0x431884: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431880) {
            ctx->pc = 0x431890u;
            goto label_431890;
        }
    }
    ctx->pc = 0x431888u;
    // 0x431888: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x431888u;
    {
        const bool branch_taken_0x431888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431888u;
        // 0x43188c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431888) {
            ctx->pc = 0x431840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431840;
        }
    }
    ctx->pc = 0x431890u;
label_431890:
    // 0x431890: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x431890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x431894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x431894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431898: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x431898u;
    {
        const bool branch_taken_0x431898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431898u;
        // 0x43189c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431898) {
            ctx->pc = 0x4318E0u;
            goto label_4318e0;
        }
    }
    ctx->pc = 0x4318A0u;
label_4318a0:
    // 0x4318a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4318a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4318a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4318a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4318a8: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x4318a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4318ac: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x4318acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4318b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4318b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4318b4: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x4318b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x4318b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4318b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4318bc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4318bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x4318c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4318c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4318c4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x4318c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x4318c8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4318c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x4318cc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x4318ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x4318d0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x4318d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x4318d4: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x4318d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x4318d8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x4318d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x4318dc: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4318dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_4318e0:
    // 0x4318e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4318e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4318e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4318e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4318e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4318e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4318ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4318ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4318F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4318ECu;
        // 0x4318f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4318ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4318F4u;
    // 0x4318f4: 0x0  nop
    ctx->pc = 0x4318f4u;
    // NOP
    ctx->pc = 0x4318f8u;
}
