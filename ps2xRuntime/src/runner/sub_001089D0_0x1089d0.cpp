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

// Function: sub_001089D0
// Address: 0x1089d0 - 0x108a40
void sub_001089D0_0x1089d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001089D0_0x1089d0");
#endif

    switch (ctx->pc) {
        case 0x1089fcu: goto label_1089fc;
        case 0x108a10u: goto label_108a10;
        default: break;
    }

    ctx->pc = 0x1089d0u;

    // 0x1089d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1089d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1089d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1089d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1089d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1089d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1089dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1089dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1089e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1089e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1089e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089e8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1089e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1089ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1089ECu;
    {
        const bool branch_taken_0x1089ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1089F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089ECu;
        // 0x1089f0: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089ec) {
            ctx->pc = 0x1089FCu;
            goto label_1089fc;
        }
    }
    ctx->pc = 0x1089F4u;
    // 0x1089f4: 0xc041120  jal         func_104480
    ctx->pc = 0x1089F4u;
    SET_GPR_U32(ctx, 31, 0x1089FCu);
    ctx->pc = 0x1089F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089F4u;
    // 0x1089f8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x1089F4u, 0x1089FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089FCu;
label_1089fc:
    // 0x1089fc: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x1089fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x108a00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108A00u;
    {
        const bool branch_taken_0x108a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A00u;
        // 0x108a04: 0x32020010  andi        $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a00) {
            ctx->pc = 0x108A14u;
            goto label_108a14;
        }
    }
    ctx->pc = 0x108A08u;
    // 0x108a08: 0xc041124  jal         func_104490
    ctx->pc = 0x108A08u;
    SET_GPR_U32(ctx, 31, 0x108A10u);
    ctx->pc = 0x108A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A08u;
    // 0x108a0c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x108A08u, 0x108A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A10u;
label_108a10:
    // 0x108a10: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x108a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_108a14:
    // 0x108a14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108A14u;
    {
        const bool branch_taken_0x108a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A14u;
        // 0x108a18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a14) {
            ctx->pc = 0x108A2Cu;
            goto label_108a2c;
        }
    }
    ctx->pc = 0x108A1Cu;
    // 0x108a1c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x108a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x108a20: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x108a20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x108a24: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x108a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x108a28: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x108a28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_108a2c:
    // 0x108a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108a34: 0x3e00008  jr          $ra
    ctx->pc = 0x108A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A34u;
        // 0x108a38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108A3Cu;
    // 0x108a3c: 0x0  nop
    ctx->pc = 0x108a3cu;
    // NOP
    ctx->pc = 0x108a40u;
}
