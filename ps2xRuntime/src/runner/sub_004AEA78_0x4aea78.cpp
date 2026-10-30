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

// Function: sub_004AEA78
// Address: 0x4aea78 - 0x4aeb18
void sub_004AEA78_0x4aea78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEA78_0x4aea78");
#endif

    switch (ctx->pc) {
        case 0x4aeaf0u: goto label_4aeaf0;
        case 0x4aeb04u: goto label_4aeb04;
        default: break;
    }

    ctx->pc = 0x4aea78u;

    // 0x4aea78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4aea78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4aea7c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4aea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4aea80: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4aea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4aea84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4aea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4aea88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aea88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aea8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4aea8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4aea90: 0x24440490  addiu       $a0, $v0, 0x490
    ctx->pc = 0x4aea90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1168));
    // 0x4aea94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4aea94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aea98: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4aea98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aea9c: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x4AEA9Cu;
    {
        const bool branch_taken_0x4aea9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA9Cu;
        // 0x4aeaa0: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aea9c) {
            ctx->pc = 0x4AEACCu;
            goto label_4aeacc;
        }
    }
    ctx->pc = 0x4AEAA4u;
    // 0x4aeaa4: 0xdc450490  ld          $a1, 0x490($v0)
    ctx->pc = 0x4aeaa4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 1168)));
    // 0x4aeaa8: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4aeaa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4aeaac: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x4aeaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4aeab0: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4aeab0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4aeab4: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x4aeab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4aeab8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4aeab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4aeabc: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x4aeabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x4aeac0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x4aeac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x4aeac4: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x4aeac4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4aeac8: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x4aeac8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_4aeacc:
    // 0x4aeacc: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x4aeaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x4aead0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AEAD0u;
    {
        const bool branch_taken_0x4aead0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEAD0u;
        // 0x4aead4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aead0) {
            ctx->pc = 0x4AEAF0u;
            goto label_4aeaf0;
        }
    }
    ctx->pc = 0x4AEAD8u;
    // 0x4aead8: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x4aead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x4aeadc: 0x24420668  addiu       $v0, $v0, 0x668
    ctx->pc = 0x4aeadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1640));
    // 0x4aeae0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AEAE0u;
    {
        const bool branch_taken_0x4aeae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEAE0u;
        // 0x4aeae4: 0xacc20028  sw          $v0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeae0) {
            ctx->pc = 0x4AEAF0u;
            goto label_4aeaf0;
        }
    }
    ctx->pc = 0x4AEAE8u;
    // 0x4aeae8: 0xc136792  jal         func_4D9E48
    ctx->pc = 0x4AEAE8u;
    SET_GPR_U32(ctx, 31, 0x4AEAF0u);
    ctx->pc = 0x4D9E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9E48u, 0x4AEAE8u, 0x4AEAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEAF0u;
label_4aeaf0:
    // 0x4aeaf0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x4aeaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4aeaf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AEAF4u;
    {
        const bool branch_taken_0x4aeaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEAF4u;
        // 0x4aeaf8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeaf4) {
            ctx->pc = 0x4AEB08u;
            goto label_4aeb08;
        }
    }
    ctx->pc = 0x4AEAFCu;
    // 0x4aeafc: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4AEAFCu;
    SET_GPR_U32(ctx, 31, 0x4AEB04u);
    ctx->pc = 0x4AEB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEAFCu;
    // 0x4aeb00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4AEAFCu, 0x4AEB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEB04u;
label_4aeb04:
    // 0x4aeb04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4aeb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4aeb08:
    // 0x4aeb08: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4aeb08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aeb0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4aeb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aeb10: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEB10u;
        // 0x4aeb14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEB18u;
}
