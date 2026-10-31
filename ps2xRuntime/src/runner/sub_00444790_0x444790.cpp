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

// Function: sub_00444790
// Address: 0x444790 - 0x444838
void sub_00444790_0x444790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444790_0x444790");
#endif

    switch (ctx->pc) {
        case 0x444790u: goto label_444790;
        case 0x444794u: goto label_444794;
        case 0x444798u: goto label_444798;
        case 0x44479cu: goto label_44479c;
        case 0x4447a0u: goto label_4447a0;
        case 0x4447a4u: goto label_4447a4;
        case 0x4447a8u: goto label_4447a8;
        case 0x4447acu: goto label_4447ac;
        case 0x4447b0u: goto label_4447b0;
        case 0x4447b4u: goto label_4447b4;
        case 0x4447b8u: goto label_4447b8;
        case 0x4447bcu: goto label_4447bc;
        case 0x4447c0u: goto label_4447c0;
        case 0x4447c4u: goto label_4447c4;
        case 0x4447c8u: goto label_4447c8;
        case 0x4447ccu: goto label_4447cc;
        case 0x4447d0u: goto label_4447d0;
        case 0x4447d4u: goto label_4447d4;
        case 0x4447d8u: goto label_4447d8;
        case 0x4447dcu: goto label_4447dc;
        case 0x4447e0u: goto label_4447e0;
        case 0x4447e4u: goto label_4447e4;
        case 0x4447e8u: goto label_4447e8;
        case 0x4447ecu: goto label_4447ec;
        case 0x4447f0u: goto label_4447f0;
        case 0x4447f4u: goto label_4447f4;
        case 0x4447f8u: goto label_4447f8;
        case 0x4447fcu: goto label_4447fc;
        case 0x444800u: goto label_444800;
        case 0x444804u: goto label_444804;
        case 0x444808u: goto label_444808;
        case 0x44480cu: goto label_44480c;
        case 0x444810u: goto label_444810;
        case 0x444814u: goto label_444814;
        case 0x444818u: goto label_444818;
        case 0x44481cu: goto label_44481c;
        case 0x444820u: goto label_444820;
        case 0x444824u: goto label_444824;
        case 0x444828u: goto label_444828;
        case 0x44482cu: goto label_44482c;
        case 0x444830u: goto label_444830;
        case 0x444834u: goto label_444834;
        default: break;
    }

    ctx->pc = 0x444790u;

label_444790:
    // 0x444790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x444790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_444794:
    // 0x444794: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x444794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_444798:
    // 0x444798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x444798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_44479c:
    // 0x44479c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x44479cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4447a0:
    // 0x4447a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4447a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4447a4:
    // 0x4447a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4447a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4447a8:
    // 0x4447a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4447ac:
    if (ctx->pc == 0x4447ACu) {
        ctx->pc = 0x4447ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4447A8u;
        // 0x4447ac: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4447B0u;
        goto label_4447b0;
    }
    ctx->pc = 0x4447A8u;
    {
        const bool branch_taken_0x4447a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4447ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4447A8u;
        // 0x4447ac: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4447a8) {
            ctx->pc = 0x4447C0u;
            goto label_4447c0;
        }
    }
    ctx->pc = 0x4447B0u;
label_4447b0:
    // 0x4447b0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x4447b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_4447b4:
    // 0x4447b4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4447b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4447b8:
    // 0x4447b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4447bc:
    if (ctx->pc == 0x4447BCu) {
        ctx->pc = 0x4447BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4447B8u;
        // 0x4447bc: 0x24425f88  addiu       $v0, $v0, 0x5F88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4447C0u;
        goto label_4447c0;
    }
    ctx->pc = 0x4447B8u;
    {
        const bool branch_taken_0x4447b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4447BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4447B8u;
        // 0x4447bc: 0x24425f88  addiu       $v0, $v0, 0x5F88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4447b8) {
            ctx->pc = 0x4447D0u;
            goto label_4447d0;
        }
    }
    ctx->pc = 0x4447C0u;
label_4447c0:
    // 0x4447c0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4447c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
label_4447c4:
    // 0x4447c4: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4447c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
label_4447c8:
    // 0x4447c8: 0x8c429ec0  lw          $v0, -0x6140($v0)
    ctx->pc = 0x4447c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942400)));
label_4447cc:
    // 0x4447cc: 0x8c639ec4  lw          $v1, -0x613C($v1)
    ctx->pc = 0x4447ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942404)));
label_4447d0:
    // 0x4447d0: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x4447d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_4447d4:
    // 0x4447d4: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_4447d8:
    if (ctx->pc == 0x4447D8u) {
        ctx->pc = 0x4447D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4447D4u;
        // 0x4447d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4447DCu;
        goto label_4447dc;
    }
    ctx->pc = 0x4447D4u;
    {
        const bool branch_taken_0x4447d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4447D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4447D4u;
        // 0x4447d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4447d4) {
            ctx->pc = 0x444814u;
            goto label_444814;
        }
    }
    ctx->pc = 0x4447DCu;
label_4447dc:
    // 0x4447dc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x4447dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4447e0:
    // 0x4447e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4447e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4447e4:
    // 0x4447e4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4447e8:
    if (ctx->pc == 0x4447E8u) {
        ctx->pc = 0x4447E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4447E4u;
        // 0x4447e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4447ECu;
        goto label_4447ec;
    }
    ctx->pc = 0x4447E4u;
    {
        const bool branch_taken_0x4447e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4447e4) {
            ctx->pc = 0x4447E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4447E4u;
            // 0x4447e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44480Cu;
            goto label_44480c;
        }
    }
    ctx->pc = 0x4447ECu;
label_4447ec:
    // 0x4447ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4447ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4447f0:
    // 0x4447f0: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x4447f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_4447f4:
    // 0x4447f4: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x4447f4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4447f8:
    // 0x4447f8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4447f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4447fc:
    // 0x4447fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4447fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_444800:
    // 0x444800: 0xc0f809  jalr        $a2
label_444804:
    if (ctx->pc == 0x444804u) {
        ctx->pc = 0x444804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444800u;
        // 0x444804: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444808u;
        goto label_444808;
    }
    ctx->pc = 0x444800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x444808u);
        ctx->pc = 0x444804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444800u;
        // 0x444804: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444800u, 0x444808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x444808u;
label_444808:
    // 0x444808: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x444808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_44480c:
    // 0x44480c: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_444810:
    if (ctx->pc == 0x444810u) {
        ctx->pc = 0x444810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44480Cu;
        // 0x444810: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444814u;
        goto label_444814;
    }
    ctx->pc = 0x44480Cu;
    {
        const bool branch_taken_0x44480c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x444810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44480Cu;
        // 0x444810: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44480c) {
            ctx->pc = 0x4447E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4447e0;
        }
    }
    ctx->pc = 0x444814u;
label_444814:
    // 0x444814: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x444814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_444818:
    // 0x444818: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x444818u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44481c:
    // 0x44481c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44481cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_444820:
    // 0x444820: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x444820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_444824:
    // 0x444824: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x444824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_444828:
    // 0x444828: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x444828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44482c:
    // 0x44482c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44482cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_444830:
    // 0x444830: 0x3e00008  jr          $ra
label_444834:
    if (ctx->pc == 0x444834u) {
        ctx->pc = 0x444834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444830u;
        // 0x444834: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444838u;
        goto label_fallthrough_0x444830;
    }
    ctx->pc = 0x444830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444830u;
        // 0x444834: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x444830:
    ctx->pc = 0x444838u;
}
