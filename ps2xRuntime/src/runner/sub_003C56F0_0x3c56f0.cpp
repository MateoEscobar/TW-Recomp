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

// Function: sub_003C56F0
// Address: 0x3c56f0 - 0x3c57d8
void sub_003C56F0_0x3c56f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C56F0_0x3c56f0");
#endif

    switch (ctx->pc) {
        case 0x3c570cu: goto label_3c570c;
        case 0x3c5740u: goto label_3c5740;
        case 0x3c5768u: goto label_3c5768;
        case 0x3c5794u: goto label_3c5794;
        case 0x3c57bcu: goto label_3c57bc;
        default: break;
    }

    ctx->pc = 0x3c56f0u;

    // 0x3c56f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c56f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c56f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c56f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c56f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c56f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c56fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c56fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c5700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5704: 0xc0f15a8  jal         func_3C56A0
    ctx->pc = 0x3C5704u;
    SET_GPR_U32(ctx, 31, 0x3C570Cu);
    ctx->pc = 0x3C5708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5704u;
    // 0x3c5708: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56A0u, 0x3C5704u, 0x3C570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C570Cu;
label_3c570c:
    // 0x3c570c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C570Cu;
    {
        const bool branch_taken_0x3c570c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c570c) {
            ctx->pc = 0x3C5710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C570Cu;
            // 0x3c5710: 0x8c430010  lw          $v1, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C571Cu;
            goto label_3c571c;
        }
    }
    ctx->pc = 0x3C5714u;
    // 0x3c5714: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3C5714u;
    {
        const bool branch_taken_0x3c5714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5714u;
        // 0x3c5718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5714) {
            ctx->pc = 0x3C57C4u;
            goto label_3c57c4;
        }
    }
    ctx->pc = 0x3C571Cu;
label_3c571c:
    // 0x3c571c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x3c571cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x3c5720: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C5720u;
    {
        const bool branch_taken_0x3c5720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5720u;
        // 0x3c5724: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5720) {
            ctx->pc = 0x3C5748u;
            goto label_3c5748;
        }
    }
    ctx->pc = 0x3C5728u;
    // 0x3c5728: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c5728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3c572c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c572cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5730: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3c5730u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c5734: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c5734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5738: 0xc0e3e2a  jal         func_38F8A8
    ctx->pc = 0x3C5738u;
    SET_GPR_U32(ctx, 31, 0x3C5740u);
    ctx->pc = 0x3C573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5738u;
    // 0x3c573c: 0x8c64084c  lw          $a0, 0x84C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F8A8u, 0x3C5738u, 0x3C5740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5740u;
label_3c5740:
    // 0x3c5740: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3C5740u;
    {
        const bool branch_taken_0x3c5740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5740u;
        // 0x3c5744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5740) {
            ctx->pc = 0x3C57C0u;
            goto label_3c57c0;
        }
    }
    ctx->pc = 0x3C5748u;
label_3c5748:
    // 0x3c5748: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3c5748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3c574c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C574Cu;
    {
        const bool branch_taken_0x3c574c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C574Cu;
        // 0x3c5750: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c574c) {
            ctx->pc = 0x3C5770u;
            goto label_3c5770;
        }
    }
    ctx->pc = 0x3C5754u;
    // 0x3c5754: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c5754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5758: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3c5758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x3c575c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c575cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5760: 0xc0e71a6  jal         func_39C698
    ctx->pc = 0x3C5760u;
    SET_GPR_U32(ctx, 31, 0x3C5768u);
    ctx->pc = 0x3C5764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5760u;
    // 0x3c5764: 0x8c640834  lw          $a0, 0x834($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C698u, 0x3C5760u, 0x3C5768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5768u;
label_3c5768:
    // 0x3c5768: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3C5768u;
    {
        const bool branch_taken_0x3c5768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5768u;
        // 0x3c576c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5768) {
            ctx->pc = 0x3C57C0u;
            goto label_3c57c0;
        }
    }
    ctx->pc = 0x3C5770u;
label_3c5770:
    // 0x3c5770: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3c5770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3c5774: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C5774u;
    {
        const bool branch_taken_0x3c5774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5774u;
        // 0x3c5778: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5774) {
            ctx->pc = 0x3C579Cu;
            goto label_3c579c;
        }
    }
    ctx->pc = 0x3C577Cu;
    // 0x3c577c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c577cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5780: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3c5780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x3c5784: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c5784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c5788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c578c: 0xc0e5fee  jal         func_397FB8
    ctx->pc = 0x3C578Cu;
    SET_GPR_U32(ctx, 31, 0x3C5794u);
    ctx->pc = 0x3C5790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C578Cu;
    // 0x3c5790: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397FB8u, 0x3C578Cu, 0x3C5794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5794u;
label_3c5794:
    // 0x3c5794: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C5794u;
    {
        const bool branch_taken_0x3c5794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5794u;
        // 0x3c5798: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5794) {
            ctx->pc = 0x3C57C0u;
            goto label_3c57c0;
        }
    }
    ctx->pc = 0x3C579Cu;
label_3c579c:
    // 0x3c579c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3c579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3c57a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C57A0u;
    {
        const bool branch_taken_0x3c57a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C57A0u;
        // 0x3c57a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c57a0) {
            ctx->pc = 0x3C57C0u;
            goto label_3c57c0;
        }
    }
    ctx->pc = 0x3C57A8u;
    // 0x3c57a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c57a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c57ac: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3c57acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x3c57b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c57b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c57b4: 0xc0e432e  jal         func_390CB8
    ctx->pc = 0x3C57B4u;
    SET_GPR_U32(ctx, 31, 0x3C57BCu);
    ctx->pc = 0x3C57B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C57B4u;
    // 0x3c57b8: 0x8c640848  lw          $a0, 0x848($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390CB8u, 0x3C57B4u, 0x3C57BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C57BCu;
label_3c57bc:
    // 0x3c57bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c57bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c57c0:
    // 0x3c57c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c57c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c57c4:
    // 0x3c57c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c57c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c57c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c57c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c57cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c57ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c57d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C57D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C57D0u;
        // 0x3c57d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C57D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C57D8u;
}
