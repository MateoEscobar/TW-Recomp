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

// Function: sub_00465538
// Address: 0x465538 - 0x4655e0
void sub_00465538_0x465538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465538_0x465538");
#endif

    switch (ctx->pc) {
        case 0x465570u: goto label_465570;
        case 0x4655bcu: goto label_4655bc;
        default: break;
    }

    ctx->pc = 0x465538u;

    // 0x465538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x465538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46553c: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x46553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x465540: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x465540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x465544: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x465544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x465548: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x465548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x46554c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x46554cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465550: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x465550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x465554: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x465554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x465558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46555c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x46555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x465560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x465560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465564: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x465564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x465568: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x465568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x46556c: 0x0  nop
    ctx->pc = 0x46556cu;
    // NOP
label_465570:
    // 0x465570: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x465570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x465574: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x465574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x465578: 0x54660003  bnel        $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x465578u;
    {
        const bool branch_taken_0x465578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x465578) {
            ctx->pc = 0x46557Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465578u;
            // 0x46557c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x465588u;
            goto label_465588;
        }
    }
    ctx->pc = 0x465580u;
    // 0x465580: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x465580u;
    {
        const bool branch_taken_0x465580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465580u;
        // 0x465584: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465580) {
            ctx->pc = 0x46559Cu;
            goto label_46559c;
        }
    }
    ctx->pc = 0x465588u;
label_465588:
    // 0x465588: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x465588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x46558c: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x46558cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x465590: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x465590u;
    {
        const bool branch_taken_0x465590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x465594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465590u;
        // 0x465594: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465590) {
            ctx->pc = 0x465570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465570;
        }
    }
    ctx->pc = 0x465598u;
    // 0x465598: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x465598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46559c:
    // 0x46559c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x46559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x4655a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4655a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4655a4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4655a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x4655a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4655a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4655ac: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4655ACu;
    {
        const bool branch_taken_0x4655ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4655ac) {
            ctx->pc = 0x4655B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4655ACu;
            // 0x4655b0: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4655C4u;
            goto label_4655c4;
        }
    }
    ctx->pc = 0x4655B4u;
    // 0x4655b4: 0xc122364  jal         func_488D90
    ctx->pc = 0x4655B4u;
    SET_GPR_U32(ctx, 31, 0x4655BCu);
    ctx->pc = 0x488D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D90u, 0x4655B4u, 0x4655BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4655BCu;
label_4655bc:
    // 0x4655bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4655bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4655c0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x4655c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_4655c4:
    // 0x4655c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4655c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4655c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4655c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4655cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4655ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4655d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4655d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4655d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4655d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4655d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4655D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4655DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4655D8u;
        // 0x4655dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4655D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4655E0u;
}
