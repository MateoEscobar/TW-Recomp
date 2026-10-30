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

// Function: sub_001E6698
// Address: 0x1e6698 - 0x1e6760
void sub_001E6698_0x1e6698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6698_0x1e6698");
#endif

    switch (ctx->pc) {
        case 0x1e66d8u: goto label_1e66d8;
        case 0x1e66f0u: goto label_1e66f0;
        case 0x1e6710u: goto label_1e6710;
        case 0x1e6728u: goto label_1e6728;
        case 0x1e6740u: goto label_1e6740;
        case 0x1e6758u: goto label_1e6758;
        default: break;
    }

    ctx->pc = 0x1e6698u;

    // 0x1e6698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e669c: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x1e669cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1e66a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e66a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e66a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e66a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e66a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e66a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e66ac: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E66ACu;
    {
        const bool branch_taken_0x1e66ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66ACu;
        // 0x1e66b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66ac) {
            ctx->pc = 0x1E6760u;
            return;
        }
    }
    ctx->pc = 0x1E66B4u;
    // 0x1e66b4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1e66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1e66b8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e66b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e66bc: 0x244268e0  addiu       $v0, $v0, 0x68E0
    ctx->pc = 0x1e66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26848));
    // 0x1e66c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e66c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e66c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e66c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e66c8: 0x800008  jr          $a0
    ctx->pc = 0x1E66C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E66D0u: goto label_1e66d0;
            case 0x1E66E8u: goto label_1e66e8;
            case 0x1E6700u: goto label_1e6700;
            case 0x1E6730u: goto label_1e6730;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E66C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E66D0u;
label_1e66d0:
    // 0x1e66d0: 0xc06ebf4  jal         func_1BAFD0
    ctx->pc = 0x1E66D0u;
    SET_GPR_U32(ctx, 31, 0x1E66D8u);
    ctx->pc = 0x1E66D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E66D0u;
    // 0x1e66d4: 0x26241b70  addiu       $a0, $s1, 0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAFD0u, 0x1E66D0u, 0x1E66D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E66D8u;
label_1e66d8:
    // 0x1e66d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E66D8u;
    {
        const bool branch_taken_0x1e66d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66D8u;
        // 0x1e66dc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66d8) {
            ctx->pc = 0x1E6700u;
            goto label_1e6700;
        }
    }
    ctx->pc = 0x1E66E0u;
    // 0x1e66e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E66E0u;
    {
        const bool branch_taken_0x1e66e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66E0u;
        // 0x1e66e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66e0) {
            ctx->pc = 0x1E6708u;
            goto label_1e6708;
        }
    }
    ctx->pc = 0x1E66E8u;
label_1e66e8:
    // 0x1e66e8: 0xc06ec00  jal         func_1BB000
    ctx->pc = 0x1E66E8u;
    SET_GPR_U32(ctx, 31, 0x1E66F0u);
    ctx->pc = 0x1E66ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E66E8u;
    // 0x1e66ec: 0x26241b70  addiu       $a0, $s1, 0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB000u, 0x1E66E8u, 0x1E66F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E66F0u;
label_1e66f0:
    // 0x1e66f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E66F0u;
    {
        const bool branch_taken_0x1e66f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66F0u;
        // 0x1e66f4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66f0) {
            ctx->pc = 0x1E6700u;
            goto label_1e6700;
        }
    }
    ctx->pc = 0x1E66F8u;
    // 0x1e66f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E66F8u;
    {
        const bool branch_taken_0x1e66f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66F8u;
        // 0x1e66fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66f8) {
            ctx->pc = 0x1E6708u;
            goto label_1e6708;
        }
    }
    ctx->pc = 0x1E6700u;
label_1e6700:
    // 0x1e6700: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e6700u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1e6704: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1e6704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e6708:
    // 0x1e6708: 0xc04444c  jal         func_111130
    ctx->pc = 0x1E6708u;
    SET_GPR_U32(ctx, 31, 0x1E6710u);
    ctx->pc = 0x1E670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6708u;
    // 0x1e670c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E6708u, 0x1E6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6710u;
label_1e6710:
    // 0x1e6710: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e6710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1e6714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e6718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e671c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e671cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6720: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1E6720u;
    SET_GPR_U32(ctx, 31, 0x1E6728u);
    ctx->pc = 0x1E6724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6720u;
    // 0x1e6724: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E6720u, 0x1E6728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6728u;
label_1e6728:
    // 0x1e6728: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E6728u;
    {
        const bool branch_taken_0x1e6728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6728u;
        // 0x1e672c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6728) {
            ctx->pc = 0x1E6764u;
            return;
        }
    }
    ctx->pc = 0x1E6730u;
label_1e6730:
    // 0x1e6730: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e6730u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1e6734: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e6734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e6738: 0xc04444c  jal         func_111130
    ctx->pc = 0x1E6738u;
    SET_GPR_U32(ctx, 31, 0x1E6740u);
    ctx->pc = 0x1E673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6738u;
    // 0x1e673c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E6738u, 0x1E6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6740u;
label_1e6740:
    // 0x1e6740: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e6740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1e6744: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6748: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e6748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e674c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e674cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6750: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1E6750u;
    SET_GPR_U32(ctx, 31, 0x1E6758u);
    ctx->pc = 0x1E6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6750u;
    // 0x1e6754: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E6750u, 0x1E6758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6758u;
label_1e6758:
    // 0x1e6758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e675c: 0xae2307a0  sw          $v1, 0x7A0($s1)
    ctx->pc = 0x1e675cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1952), GPR_U32(ctx, 3));
    ctx->pc = 0x1e6760u;
}
