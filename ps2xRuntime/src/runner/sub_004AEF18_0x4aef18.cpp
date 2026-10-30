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

// Function: sub_004AEF18
// Address: 0x4aef18 - 0x4aefb8
void sub_004AEF18_0x4aef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEF18_0x4aef18");
#endif

    switch (ctx->pc) {
        case 0x4aef90u: goto label_4aef90;
        case 0x4aefa4u: goto label_4aefa4;
        default: break;
    }

    ctx->pc = 0x4aef18u;

    // 0x4aef18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4aef18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4aef1c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4aef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4aef20: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4aef20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4aef24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4aef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4aef28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aef28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aef2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4aef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4aef30: 0x244404a0  addiu       $a0, $v0, 0x4A0
    ctx->pc = 0x4aef30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1184));
    // 0x4aef34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4aef34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aef38: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4aef38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aef3c: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x4AEF3Cu;
    {
        const bool branch_taken_0x4aef3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEF3Cu;
        // 0x4aef40: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aef3c) {
            ctx->pc = 0x4AEF6Cu;
            goto label_4aef6c;
        }
    }
    ctx->pc = 0x4AEF44u;
    // 0x4aef44: 0xdc4504a0  ld          $a1, 0x4A0($v0)
    ctx->pc = 0x4aef44u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 1184)));
    // 0x4aef48: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4aef48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4aef4c: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x4aef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4aef50: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4aef50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4aef54: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x4aef54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4aef58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4aef58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4aef5c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x4aef5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x4aef60: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x4aef60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x4aef64: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x4aef64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4aef68: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x4aef68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_4aef6c:
    // 0x4aef6c: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x4aef6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x4aef70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AEF70u;
    {
        const bool branch_taken_0x4aef70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEF70u;
        // 0x4aef74: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aef70) {
            ctx->pc = 0x4AEF90u;
            goto label_4aef90;
        }
    }
    ctx->pc = 0x4AEF78u;
    // 0x4aef78: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x4aef78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x4aef7c: 0x24420668  addiu       $v0, $v0, 0x668
    ctx->pc = 0x4aef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1640));
    // 0x4aef80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AEF80u;
    {
        const bool branch_taken_0x4aef80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEF80u;
        // 0x4aef84: 0xacc20028  sw          $v0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aef80) {
            ctx->pc = 0x4AEF90u;
            goto label_4aef90;
        }
    }
    ctx->pc = 0x4AEF88u;
    // 0x4aef88: 0xc136792  jal         func_4D9E48
    ctx->pc = 0x4AEF88u;
    SET_GPR_U32(ctx, 31, 0x4AEF90u);
    ctx->pc = 0x4D9E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9E48u, 0x4AEF88u, 0x4AEF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEF90u;
label_4aef90:
    // 0x4aef90: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x4aef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4aef94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AEF94u;
    {
        const bool branch_taken_0x4aef94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEF94u;
        // 0x4aef98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aef94) {
            ctx->pc = 0x4AEFA8u;
            goto label_4aefa8;
        }
    }
    ctx->pc = 0x4AEF9Cu;
    // 0x4aef9c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4AEF9Cu;
    SET_GPR_U32(ctx, 31, 0x4AEFA4u);
    ctx->pc = 0x4AEFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEF9Cu;
    // 0x4aefa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4AEF9Cu, 0x4AEFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEFA4u;
label_4aefa4:
    // 0x4aefa4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4aefa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4aefa8:
    // 0x4aefa8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4aefa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aefac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4aefacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aefb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEFB0u;
        // 0x4aefb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEFB8u;
}
