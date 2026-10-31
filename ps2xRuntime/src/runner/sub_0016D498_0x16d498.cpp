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

// Function: sub_0016D498
// Address: 0x16d498 - 0x16d548
void sub_0016D498_0x16d498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D498_0x16d498");
#endif

    switch (ctx->pc) {
        case 0x16d4d8u: goto label_16d4d8;
        case 0x16d4ecu: goto label_16d4ec;
        default: break;
    }

    ctx->pc = 0x16d498u;

    // 0x16d498: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16d498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16d49c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d4a0: 0x24426e30  addiu       $v0, $v0, 0x6E30
    ctx->pc = 0x16d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
    // 0x16d4a4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16d4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16d4a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x16d4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x16d4ac: 0x2450001c  addiu       $s0, $v0, 0x1C
    ctx->pc = 0x16d4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x16d4b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16d4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16d4b4: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x16d4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x16d4b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16d4bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16d4bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d4c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x16d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x16d4c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16d4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d4c8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x16d4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x16d4cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16d4ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d4d4: 0x3c150001  lui         $s5, 0x1
    ctx->pc = 0x16d4d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1 << 16));
label_16d4d8:
    // 0x16d4d8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x16d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16d4dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D4DCu;
    {
        const bool branch_taken_0x16d4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4DCu;
        // 0x16d4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4dc) {
            ctx->pc = 0x16D4FCu;
            goto label_16d4fc;
        }
    }
    ctx->pc = 0x16D4E4u;
    // 0x16d4e4: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x16D4E4u;
    SET_GPR_U32(ctx, 31, 0x16D4ECu);
    ctx->pc = 0x16D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4E4u;
    // 0x16d4e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x16D4E4u, 0x16D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4ECu;
label_16d4ec:
    // 0x16d4ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D4ECu;
    {
        const bool branch_taken_0x16d4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4ECu;
        // 0x16d4f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4ec) {
            ctx->pc = 0x16D500u;
            goto label_16d500;
        }
    }
    ctx->pc = 0x16D4F4u;
    // 0x16d4f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16D4F4u;
    {
        const bool branch_taken_0x16d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4F4u;
        // 0x16d4f8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4f4) {
            ctx->pc = 0x16D51Cu;
            goto label_16d51c;
        }
    }
    ctx->pc = 0x16D4FCu;
label_16d4fc:
    // 0x16d4fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16d4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d500:
    // 0x16d500: 0x26100b10  addiu       $s0, $s0, 0xB10
    ctx->pc = 0x16d500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
    // 0x16d504: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x16d504u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16d508: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x16d508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x16d50c: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x16d50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16d510: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x16D510u;
    {
        const bool branch_taken_0x16d510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D510u;
        // 0x16d514: 0x26730b10  addiu       $s3, $s3, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d510) {
            ctx->pc = 0x16D4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d4d8;
        }
    }
    ctx->pc = 0x16D518u;
    // 0x16d518: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d51c:
    // 0x16d51c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16d51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16d520: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x16d520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16d524: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16d524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d528: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16d528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d52c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x16d52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d530: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x16d530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d538: 0x3e00008  jr          $ra
    ctx->pc = 0x16D538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D538u;
        // 0x16d53c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D540u;
    // 0x16d540: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16d544: 0x0  nop
    ctx->pc = 0x16d544u;
    // NOP
    ctx->pc = 0x16d548u;
}
